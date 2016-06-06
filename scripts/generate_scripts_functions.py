import re
import lxml.etree as etree

instruction_file = "SCM.ini"
args_file = "SCM.xml"
output_functions = "functions.cpp"
output_binding = "binding.cpp"

arg_regex = "%(\d+)([-:\w]*/?%?[-_\w]*%?)"
d = etree.parse(open(args_file))

functions_file = open(output_functions, "w")
binding_file = open(output_binding, "w")

function_template = """/**
\t@brief {5}

\topcode {0:04x}{1}
*/
{2} {3} {{
\tRW_UNIMPLEMENTED_OPCODE(0x{0:04x});{4}
}}

"""

binding_template = """\tbind(0x{0:04x}, {1}, opcode_{0:04x});\n"""

type_names = {
        # Objects
        'PLAYER': 'ScriptPlayer',
        'OBJECT': 'ScriptObject',
        'CHAR': 'ScriptCharacter',
        'CAR': 'ScriptVehicle',
        'CAR_GENERATOR': 'ScriptVehicleGenerator',
        'PICKUP': 'ScriptPickup',
        'BLIP': 'ScriptBlip',
        'GARAGE': 'ScriptGarage',
        'PHONE': 'ScriptPhone',
        'SCRIPT_FIRE': 'ScriptFire',
        'SPHERE': 'ScriptSphere',
        'SOUND': 'ScriptSound',

        # Primitives
        'INT': 'ScriptInt',
        'FLOAT': 'ScriptFloat',
        'TEXT_LABEL': 'ScriptString',
        'LABEL': 'ScriptLabel',
        'ANY': '_TODO_ANY',

        # Misc
        'CARPEDMODEL': 'ScriptModelID',
        'PEDTYPE': 'ScriptInt',
        'DRIVINGMODE': 'ScriptInt',
        'MISSION': 'ScriptInt',
        'PAD': 'ScriptInt',
        'BUTTON': 'ScriptInt',
        'MODEL': 'ScriptInt',
        'WEAPONTYPE': 'ScriptInt',
        'THREAT': 'ScriptInt',
        'CARLOCK': 'ScriptInt',
        'CARCOLOUR': 'ScriptInt',
        'CAMMODE': 'ScriptInt',
        'CHANGECAMMODE': 'ScriptInt',
        'BLIPCOLOUR': 'ScriptInt',
        'BLIP_DISPLAY': 'ScriptInt',
        'FADE': 'ScriptInt',
        'SHADOW': 'ScriptInt',
        'CONTACT': 'ScriptInt',
        'WEATHER': 'ScriptInt',
        'FOLLOW_ROUTE': 'ScriptInt',
        'EXPLOSION': 'ScriptInt',
        'CARBOMB': 'ScriptInt',
        'GANG': 'ScriptInt',
        'PEDSTAT': 'ScriptInt',
        'ANIM': 'ScriptInt',
        'CORONATYPE': 'ScriptInt',
        'FLARETYPE': 'ScriptInt',
        'POBJECT': 'ScriptInt',
        'RADAR_SPRITE': 'ScriptInt',
        'PEDGRP': 'ScriptInt',
        'CAM_ZOOM': 'ScriptInt',
        'FONT': 'ScriptInt',
        'WAITSTATE': 'ScriptInt',
        'MOTION_BLUR': 'ScriptInt',
        'STATUS': 'ScriptInt',
        'TIMER': 'ScriptInt',
        'COUNTER_DISPLAY': 'ScriptInt',
        'LEVEL': 'ScriptInt',
        'HUD_FLASH': 'ScriptInt',
        'DOOR': 'ScriptInt',
        'RADIO': 'ScriptInt',
        'PARTICLE': 'ScriptInt',
        'TEMPACT': 'ScriptInt',
        }

var_names = {
        'GXT Entry': 'gxtEntry',
        'X Coord': 'xCoord',
        'Y Coord': 'yCoord',
        'Z Coord': 'zCoord',
        'Player': 'player',
        'Character/ped': 'character',
        'Car/vehicle': 'vehicle',
        'Object': 'object',
        'Model ID': 'model'
    }

def arg_type(el):
    outType = ''
    outAccess = 'const '
    outRef = ''
    outName = 'arg'
    outComment = ''
    isOut = False
    if 'Out' in el.attrib:
        outAccess = '' if el.attrib['Out'] == 'true' else 'const '
        outRef = '&'
    if 'AllowConst' in el.attrib:
        outAccess = '' if el.attrib['AllowConst'] == 'false' else 'const '
    if 'Entity' in el.attrib:
        entity = el.attrib['Entity']
        outType = type_names[entity]
        outRef = '&'
    elif 'Enum' in el.attrib:
        enum = el.attrib['Enum']
        outType = type_names[enum]
    else:
        type_ = el.attrib['Type']
        outType = type_names[type_]
    # Determine if this is always a local / global
    allowLocal = True
    allowGlobal = True
    if 'AllowLocalVar' in el.attrib:
        allowLocal = True if el.attrib['AllowLocalVar'] == 'true' else False
    if 'AllowGlobalVar' in el.attrib:
        allowGlobal = True if el.attrib['AllowGlobalVar'] == 'true' else False
    if allowLocal == False and allowGlobal == True:
        outRef = 'Global'
        outName = 'global'
    elif allowLocal == True and allowGlobal == False:
        outRef = 'Local'
        outName = 'local'
    else:
        # Can be anything, assume immediate
        pass
    if 'Desc' in el.attrib:
        outComment = el.attrib['Desc']

    return (outAccess + outType + outRef,  outName, outComment)

def impl_sig(opcode, sig):
    outType = 'void'
    if sig[0:2] == '  ':
        outType = 'bool'
        sig = sig.strip()
    return (outType, 'opcode_{:04x}'.format(opcode))

def adjust_args(args):
    names = []
    for x in range(len(args)):
        arg = args[x]
        if arg[2] in var_names:
            args[x] = (arg[0], var_names[arg[2]], arg[2])
            arg = args[x]
        orgname = arg[1]
        args[x] = (arg[0], arg[1] + str(names.count(orgname)), arg[2])
        names.append(orgname)
    return args

with open(instruction_file) as f:
    for line in f:
        m = re.match("([0-9A-Za-z]+)=(-?\d+),(.*)$", line)
        if m is not None:
            opcode = int(m.group(1), 16)
            argc = int(m.group(2))
            func = m.group(3)
            am = re.findall(arg_regex, line)
            sig = impl_sig(opcode, func)
            xpath = "//Command[@ID=\"0x{:x}\"]".format(opcode)
            res = d.xpath(xpath)
            args = []
            if len(res) != 0:
                res = res[0]
                sa_name = res.attrib['Name']
                if sig != sa_name and False:
                    print("Name mismatch: {} v {}".format(sig, sa_name))
                eargs = res.xpath("Args/Arg")
                for arg in eargs:
                    args.append(arg_type(arg))
            args = adjust_args(args)
            if argc > 0 and len(args) > 0:
                signame = sig[1] + "(" + ', '.join(["{} {}".format(x[0], x[1]) for x in args]) + ")"
            else:
                signame = sig[1] + "(const ScriptArguments& args)"
            argsdoc = ""
            if len(args) > 0:
                argsdoc = "\n" + "\n".join(["\t@arg {} {}".format(x[1], x[2]) for x in args])
            postfix = ''
            if sig[0] == 'bool':
                postfix = '\n\treturn false;'
            functions_file.write(function_template.format(opcode, argsdoc, sig[0], signame, postfix, func))
            parameters = ['args.getAs<{}>()'.format(type_) for type_, _, _ in args]
            binding_file.write(binding_template.format(opcode, argc, ", ".join(parameters)))
            if len(am) != abs(argc) and False:
                raise RuntimeError("Mismatched argument count: {} v {}".format(len(am), argc))

