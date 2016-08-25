/**
	@brief NOP

	opcode 0000
*/
void opcode_0000(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0000);
	RW_UNUSED(args);
}

/**
	@brief wait %1d% ms

	opcode 0001
	@arg time Time (ms)
*/
void opcode_0001(const ScriptArguments& args, const ScriptInt time) {
	RW_UNIMPLEMENTED_OPCODE(0x0001);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief goto %1p%

	opcode 0002
	@arg arg1 
*/
void opcode_0002(const ScriptArguments& args, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0002);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief shake_cam %1d%

	opcode 0003
	@arg time Time (ms)
*/
void opcode_0003(const ScriptArguments& args, const ScriptInt time) {
	RW_UNIMPLEMENTED_OPCODE(0x0003);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%

	opcode 0004
	@arg arg1G 
	@arg arg2 
*/
void opcode_0004(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0004);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%

	opcode 0005
	@arg arg1G 
	@arg arg2 
*/
void opcode_0005(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0005);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%

	opcode 0006
	@arg arg1L 
	@arg arg2 
*/
void opcode_0006(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0006);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%

	opcode 0007
	@arg arg1L 
	@arg arg2 
*/
void opcode_0007(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0007);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%

	opcode 0008
	@arg arg1G 
	@arg arg2 
*/
void opcode_0008(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0008);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%

	opcode 0009
	@arg arg1G 
	@arg arg2 
*/
void opcode_0009(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0009);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2h%

	opcode 000a
	@arg arg1L 
	@arg arg2 
*/
void opcode_000a(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000a);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%

	opcode 000b
	@arg arg1L 
	@arg arg2 
*/
void opcode_000b(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%

	opcode 000c
	@arg arg1G 
	@arg arg2 
*/
void opcode_000c(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%

	opcode 000d
	@arg arg1G 
	@arg arg2 
*/
void opcode_000d(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000d);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2h%

	opcode 000e
	@arg arg1L 
	@arg arg2 
*/
void opcode_000e(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000e);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%

	opcode 000f
	@arg arg1L 
	@arg arg2 
*/
void opcode_000f(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x000f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%

	opcode 0010
	@arg arg1G 
	@arg arg2 
*/
void opcode_0010(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0010);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%

	opcode 0011
	@arg arg1G 
	@arg arg2 
*/
void opcode_0011(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0011);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%

	opcode 0012
	@arg arg1L 
	@arg arg2 
*/
void opcode_0012(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0012);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%

	opcode 0013
	@arg arg1L 
	@arg arg2 
*/
void opcode_0013(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0013);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%

	opcode 0014
	@arg arg1G 
	@arg arg2 
*/
void opcode_0014(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0014);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%

	opcode 0015
	@arg arg1G 
	@arg arg2 
*/
void opcode_0015(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0015);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%

	opcode 0016
	@arg arg1L 
	@arg arg2 
*/
void opcode_0016(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0016);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%

	opcode 0017
	@arg arg1L 
	@arg arg2 
*/
void opcode_0017(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0017);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   %1d% > %2d%

	opcode 0018
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0018(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0018);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0019
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0019(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0019);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001a
	@arg arg1 
	@arg arg2G 
*/
bool opcode_001a(const ScriptArguments& args, const ScriptInt arg1, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x001a);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001b
	@arg arg1 
	@arg arg2L 
*/
bool opcode_001b(const ScriptArguments& args, const ScriptInt arg1, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x001b);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001c
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_001c(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x001c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001d
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_001d(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x001d);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001e
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_001e(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x001e);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001f
	@arg arg1L 
	@arg arg2G 
*/
bool opcode_001f(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x001f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0020
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0020(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0020);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0021
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0021(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0021);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0022
	@arg arg1 
	@arg arg2G 
*/
bool opcode_0022(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0022);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0023
	@arg arg1 
	@arg arg2L 
*/
bool opcode_0023(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0023);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0024
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_0024(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0024);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0025
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_0025(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0025);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0026
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_0026(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0026);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0027
	@arg arg1L 
	@arg arg2G 
*/
bool opcode_0027(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0027);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0028
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0028(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0028);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0029
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0029(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0029);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002a
	@arg arg1 
	@arg arg2G 
*/
bool opcode_002a(const ScriptArguments& args, const ScriptInt arg1, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x002a);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002b
	@arg arg1 
	@arg arg2L 
*/
bool opcode_002b(const ScriptArguments& args, const ScriptInt arg1, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x002b);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002c
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_002c(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x002c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002d
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_002d(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x002d);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002e
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_002e(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x002e);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002f
	@arg arg1L 
	@arg arg2G 
*/
bool opcode_002f(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x002f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0030
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0030(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0030);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0031
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0031(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0031);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0032
	@arg arg1 
	@arg arg2G 
*/
bool opcode_0032(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0032);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0033
	@arg arg1 
	@arg arg2L 
*/
bool opcode_0033(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0033);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0034
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_0034(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0034);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0035
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_0035(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0035);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0036
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_0036(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0036);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0037
	@arg arg1L 
	@arg arg2G 
*/
bool opcode_0037(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0037);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0038
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0038(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0038);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0039
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0039(const ScriptArguments& args, ScriptIntLocal arg1L, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0039);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003a
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_003a(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x003a);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003b
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_003b(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x003b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003c
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_003c(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x003c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0042
	@arg arg1G 
	@arg arg2 
*/
bool opcode_0042(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0042);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0043
	@arg arg1L 
	@arg arg2 
*/
bool opcode_0043(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0043);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0044
	@arg arg1G 
	@arg arg2G 
*/
bool opcode_0044(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0044);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0045
	@arg arg1L 
	@arg arg2L 
*/
bool opcode_0045(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0045);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0046
	@arg arg1G 
	@arg arg2L 
*/
bool opcode_0046(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0046);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
	return false;
}

/**
	@brief goto_if_true %1p%

	opcode 004c
	@arg arg1 
*/
void opcode_004c(const ScriptArguments& args, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x004c);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief goto_if_false %1p%

	opcode 004d
	@arg arg1 
*/
void opcode_004d(const ScriptArguments& args, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x004d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief end_thread

	opcode 004e
*/
void opcode_004e(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x004e);
	RW_UNUSED(args);
}

/**
	@brief create_thread %1p%

	opcode 004f
	@arg arg1 
	@arg arg2 
*/
void opcode_004f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x004f);
	RW_UNUSED(args);
}

/**
	@brief gosub %1p%

	opcode 0050
	@arg arg1 
*/
void opcode_0050(const ScriptArguments& args, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0050);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief return

	opcode 0051
*/
void opcode_0051(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0051);
	RW_UNUSED(args);
}

/**
	@brief  %5d% = create_player %1o% at %2d% %3d% %4d%

	opcode 0053
	@arg model Model ID
	@arg coord Coordinages
	@arg player Player
*/
void opcode_0053(const ScriptArguments& args, const ScriptInt model, ScriptVec3 coord, ScriptPlayer& player) {
	RW_UNIMPLEMENTED_OPCODE(0x0053);
	RW_UNUSED(model);
	RW_UNUSED(coord);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief get_player_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 0054
	@arg player Player
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_0054(const ScriptArguments& args, const ScriptPlayer player, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x0054);
	RW_UNUSED(player);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set_player_coordinates %1d% to %2d% %3d% %4d%

	opcode 0055
	@arg player Player
	@arg coord Coordinages
*/
void opcode_0055(const ScriptArguments& args, const ScriptPlayer player, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0055);
	RW_UNUSED(player);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief   is_player_in_area_2d %1d% coords %2d% %3d% to %4d% %5d% sphere %6b%

	opcode 0056
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_0056(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0056);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_player_in_area_3d %1d% coords %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8b%

	opcode 0057
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_0057(const ScriptArguments& args, const ScriptPlayer player, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0057);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %1d% += %2d%

	opcode 0058
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0058(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0058);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%

	opcode 0059
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0059(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0059);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d% 

	opcode 005a
	@arg arg1L 
	@arg arg2L 
*/
void opcode_005a(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x005a);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d% 

	opcode 005b
	@arg arg1L 
	@arg arg2L 
*/
void opcode_005b(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x005b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%

	opcode 005c
	@arg arg1L 
	@arg arg2G 
*/
void opcode_005c(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x005c);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d% 

	opcode 005d
	@arg arg1L 
	@arg arg2G 
*/
void opcode_005d(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x005d);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d%  

	opcode 005e
	@arg arg1G 
	@arg arg2L 
*/
void opcode_005e(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x005e);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% += %2d% 

	opcode 005f
	@arg arg1G 
	@arg arg2L 
*/
void opcode_005f(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x005f);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d% 

	opcode 0060
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0060(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0060);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d% 

	opcode 0061
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0061(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0061);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%

	opcode 0062
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0062(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0062);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d% 

	opcode 0063
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0063(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0063);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%  

	opcode 0064
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0064(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0064);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d% 

	opcode 0065
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0065(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0065);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d%

	opcode 0066
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0066(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0066);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= %2d% 

	opcode 0067
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0067(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0067);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%  

	opcode 0068
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0068(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0068);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%

	opcode 0069
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0069(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0069);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d% 

	opcode 006a
	@arg arg1L 
	@arg arg2L 
*/
void opcode_006a(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x006a);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d% 

	opcode 006b
	@arg arg1L 
	@arg arg2L 
*/
void opcode_006b(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x006b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%  

	opcode 006c
	@arg arg1G 
	@arg arg2L 
*/
void opcode_006c(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x006c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%  

	opcode 006d
	@arg arg1G 
	@arg arg2L 
*/
void opcode_006d(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x006d);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%  

	opcode 006e
	@arg arg1L 
	@arg arg2G 
*/
void opcode_006e(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x006e);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% *= %2d%  

	opcode 006f
	@arg arg1L 
	@arg arg2G 
*/
void opcode_006f(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x006f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%  

	opcode 0070
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0070(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0070);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d% 

	opcode 0071
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0071(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0071);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%  

	opcode 0072
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0072(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0072);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d% 

	opcode 0073
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0073(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0073);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d% 

	opcode 0074
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0074(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0074);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d% 

	opcode 0075
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0075(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0075);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d% 

	opcode 0076
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0076(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0076);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% /= %2d%

	opcode 0077
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0077(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0077);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 0078
	@arg arg1G 
	@arg arg2 
*/
void opcode_0078(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0078);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 0079
	@arg arg1L 
	@arg arg2 
*/
void opcode_0079(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0079);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007a
	@arg arg1G 
	@arg arg2G 
*/
void opcode_007a(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x007a);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007b
	@arg arg1L 
	@arg arg2L 
*/
void opcode_007b(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x007b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007c
	@arg arg1G 
	@arg arg2L 
*/
void opcode_007c(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x007c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007d
	@arg arg1L 
	@arg arg2G 
*/
void opcode_007d(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x007d);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 007e
	@arg arg1G 
	@arg arg2 
*/
void opcode_007e(const ScriptArguments& args, ScriptFloatGlobal arg1G, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x007e);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 007f
	@arg arg1L 
	@arg arg2 
*/
void opcode_007f(const ScriptArguments& args, ScriptFloatLocal arg1L, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x007f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0080
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0080(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0080);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0081
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0081(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0081);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d% 

	opcode 0082
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0082(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0082);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0083
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0083(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0083);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d% 

	opcode 0084
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0084(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0084);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d% 

	opcode 0085
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0085(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0085);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%

	opcode 0086
	@arg arg1G 
	@arg arg2G 
*/
void opcode_0086(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0086);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d% 

	opcode 0087
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0087(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0087);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d% 

	opcode 0088
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0088(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0088);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%  

	opcode 0089
	@arg arg1L 
	@arg arg2G 
*/
void opcode_0089(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0089);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d% 

	opcode 008a
	@arg arg1G 
	@arg arg2L 
*/
void opcode_008a(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x008a);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = %2d%  

	opcode 008b
	@arg arg1L 
	@arg arg2G 
*/
void opcode_008b(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x008b);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = float_to_integer %2d%

	opcode 008c
	@arg arg1G 
	@arg arg2G 
*/
void opcode_008c(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x008c);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = integer_to_float %2d%

	opcode 008d
	@arg arg1G 
	@arg arg2G 
*/
void opcode_008d(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x008d);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = float_to_integer %2d%

	opcode 008e
	@arg arg1L 
	@arg arg2G 
*/
void opcode_008e(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptFloatGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x008e);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = integer_to_float %2d%

	opcode 008f
	@arg arg1L 
	@arg arg2G 
*/
void opcode_008f(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x008f);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief %1d% = float_to_int %2d%

	opcode 0090
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0090(const ScriptArguments& args, ScriptIntGlobal arg1G, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0090);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = int_to_float %2d%

	opcode 0091
	@arg arg1G 
	@arg arg2L 
*/
void opcode_0091(const ScriptArguments& args, ScriptFloatGlobal arg1G, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0091);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = float_to_int %2d%

	opcode 0092
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0092(const ScriptArguments& args, ScriptIntLocal arg1L, ScriptFloatLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0092);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief %1d% = int_to_float %2d%

	opcode 0093
	@arg arg1L 
	@arg arg2L 
*/
void opcode_0093(const ScriptArguments& args, ScriptFloatLocal arg1L, ScriptIntLocal arg2L) {
	RW_UNIMPLEMENTED_OPCODE(0x0093);
	RW_UNUSED(arg1L);
	RW_UNUSED(arg2L);
	RW_UNUSED(args);
}

/**
	@brief abs_var_int %1d%

	opcode 0094
	@arg arg1G 
*/
void opcode_0094(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0094);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief abs_lvar_int %1d%

	opcode 0095
	@arg arg1L 
*/
void opcode_0095(const ScriptArguments& args, ScriptIntLocal arg1L) {
	RW_UNIMPLEMENTED_OPCODE(0x0095);
	RW_UNUSED(arg1L);
	RW_UNUSED(args);
}

/**
	@brief abs_var_float %1d%

	opcode 0096
	@arg arg1G 
*/
void opcode_0096(const ScriptArguments& args, ScriptFloatGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0096);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief abs_lvar_float %1d%

	opcode 0097
	@arg arg1L 
*/
void opcode_0097(const ScriptArguments& args, ScriptFloatLocal arg1L) {
	RW_UNIMPLEMENTED_OPCODE(0x0097);
	RW_UNUSED(arg1L);
	RW_UNUSED(args);
}

/**
	@brief generate_random_float %1d%

	opcode 0098
	@arg arg1G 
*/
void opcode_0098(const ScriptArguments& args, ScriptFloatGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0098);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief generate_random_int %1d%

	opcode 0099
	@arg arg1G 
*/
void opcode_0099(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0099);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief %6d% = create_char %1d% model %2o% at %3d% %4d% %5d%

	opcode 009a
	@arg pedType Ped type
	@arg model Model ID
	@arg coord Coordinages
	@arg character Character/ped
*/
void opcode_009a(const ScriptArguments& args, const ScriptPedType pedType, const ScriptModelID model, ScriptVec3 coord, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x009a);
	RW_UNUSED(pedType);
	RW_UNUSED(model);
	RW_UNUSED(coord);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief delete_char %1d%

	opcode 009b
	@arg character Character/ped
*/
void opcode_009b(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x009b);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief char_wander_dir %1d% to %2d%

	opcode 009c
	@arg character 
	@arg arg2 
*/
void opcode_009c(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x009c);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief char_wander_range

	opcode 009d
	@arg character 
*/
void opcode_009d(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x009d);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief char_follow_path %1d% path %2d% %3d% %4d%

	opcode 009e
	@arg character 
	@arg coord Coordinages
*/
void opcode_009e(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x009e);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief char_set_idle %1d%

	opcode 009f
	@arg character 
*/
void opcode_009f(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x009f);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief get_char_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 00a0
	@arg character Character/ped
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_00a0(const ScriptArguments& args, const ScriptCharacter character, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x00a0);
	RW_UNUSED(character);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set_char_coordinates %1d% to %2d% %3d% %4d%

	opcode 00a1
	@arg character Character/ped
	@arg coord Coordinages
*/
void opcode_00a1(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x00a1);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief   is_char_still_alive %1d%

	opcode 00a2
	@arg character 
*/
bool opcode_00a2(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x00a2);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_char_in_area_2d %1d% from %2d% %3d% to %4d% %5d% sphere %6d%

	opcode 00a3
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_00a3(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00a3);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_char_in_area_3d %1d% from %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8d%

	opcode 00a4
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_00a4(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00a4);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %5d% = create_car %1o% at %2d% %3d% %4d%

	opcode 00a5
	@arg model Model ID
	@arg coord Coordinages
	@arg vehicle Car/vehicle
*/
void opcode_00a5(const ScriptArguments& args, const ScriptModelID model, ScriptVec3 coord, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00a5);
	RW_UNUSED(model);
	RW_UNUSED(coord);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief delete_car %1d%

	opcode 00a6
	@arg vehicle Car/vehicle
*/
void opcode_00a6(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00a6);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief car_goto_coordinates %1d% coords %2d% %3d% %4d%

	opcode 00a7
	@arg vehicle Car/vehicle
	@arg coord Coordinages
*/
void opcode_00a7(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x00a7);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief car_wander_randomly %1d%

	opcode 00a8
	@arg vehicle Car/vehicle
*/
void opcode_00a8(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00a8);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief car_set_idle %1d%

	opcode 00a9
	@arg vehicle Car/vehicle
*/
void opcode_00a9(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00a9);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief get_car_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 00aa
	@arg vehicle Car/vehicle
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_00aa(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x00aa);
	RW_UNUSED(vehicle);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set_car_coordinates %1d% to %2d% %3d% %4d%

	opcode 00ab
	@arg vehicle Car/vehicle
	@arg coord Coordinages
*/
void opcode_00ab(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x00ab);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief   is_car_still_alive %1d%

	opcode 00ac
	@arg vehicle 
*/
bool opcode_00ac(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00ac);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_car_cruise_speed %1d% to %2d%

	opcode 00ad
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_00ad(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ad);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_car_driving_style %1d% to %2d%

	opcode 00ae
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_00ae(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptDrivingMode arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ae);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_car_mission %1d% to %2d%

	opcode 00af
	@arg vehicle Character/ped
	@arg arg2 
*/
void opcode_00af(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptMission arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00af);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   is_car_in_area_2d %1d% from %2d% %3d% to %4d% %5d% sphere %6d%

	opcode 00b0
	@arg vehicle Car/vehicle
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_00b0(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00b0);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_car_in_area_3d %1d% from %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8d%

	opcode 00b1
	@arg vehicle Car/vehicle
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_00b1(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00b1);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief print_big %1g% duration %2d% ms style %3d%

	opcode 00ba
	@arg gxtEntry GXT entry
	@arg time Time (ms)
	@arg arg3 
*/
void opcode_00ba(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt time, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00ba);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(time);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief print %1g% duration %2d% ms flag %3d%

	opcode 00bb
	@arg gxtEntry GXT entry
	@arg time Time (ms)
	@arg arg3 
*/
void opcode_00bb(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt time, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00bb);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(time);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief print_now %1g% duration %2d% ms flag %3d%

	opcode 00bc
	@arg gxtEntry GXT entry
	@arg time Time (ms)
	@arg arg3 
*/
void opcode_00bc(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt time, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00bc);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(time);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief print_soon %1g% duration %2d% ms flag %3d%

	opcode 00bd
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_00bd(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00bd);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief clear_prints

	opcode 00be
*/
void opcode_00be(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00be);
	RW_UNUSED(args);
}

/**
	@brief get_time_of_day %1d% %2d%

	opcode 00bf
	@arg arg1 
	@arg arg2 
*/
void opcode_00bf(const ScriptArguments& args, ScriptInt& arg1, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00bf);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_current_time %1d% %2d%

	opcode 00c0
	@arg arg1 
	@arg arg2 
*/
void opcode_00c0(const ScriptArguments& args, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00c0);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %3d% = get_minutes_until_time_of_day %1d% %2d%

	opcode 00c1
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_00c1(const ScriptArguments& args, const ScriptInt arg1, const ScriptInt arg2, ScriptInt& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00c1);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief   is_point_on_screen %1d% %2d% %3d% %4d%

	opcode 00c2
	@arg coord Coordinages
	@arg radius Radius
*/
bool opcode_00c2(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius) {
	RW_UNIMPLEMENTED_OPCODE(0x00c2);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(args);
	return false;
}

/**
	@brief debug_on

	opcode 00c3
*/
void opcode_00c3(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c3);
	RW_UNUSED(args);
}

/**
	@brief debug_off

	opcode 00c4
*/
void opcode_00c4(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c4);
	RW_UNUSED(args);
}

/**
	@brief return_true

	opcode 00c5
*/
void opcode_00c5(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c5);
	RW_UNUSED(args);
}

/**
	@brief return_false

	opcode 00c6
*/
void opcode_00c6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c6);
	RW_UNUSED(args);
}

/**
	@brief if %1d%

	opcode 00d6
	@arg arg1 
*/
void opcode_00d6(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00d6);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief create_thread_without_extra_params %1p%

	opcode 00d7
	@arg arg1 
*/
void opcode_00d7(const ScriptArguments& args, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00d7);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief mission_has_finished

	opcode 00d8
*/
void opcode_00d8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00d8);
	RW_UNUSED(args);
}

/**
	@brief %2d% = store_car_char_is_in %1d%

	opcode 00d9
	@arg character Character/ped
	@arg vehicle Car/vehicle
*/
void opcode_00d9(const ScriptArguments& args, const ScriptCharacter character, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00d9);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief %2d% = store_car_player_is_in %1d%

	opcode 00da
	@arg player 
	@arg vehicle 
*/
void opcode_00da(const ScriptArguments& args, const ScriptPlayer player, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00da);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   is_char_in_car %1d% car %2d%

	opcode 00db
	@arg character Character/ped
	@arg vehicle Car/vehicle
*/
bool opcode_00db(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00db);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_player_in_car %1d% car %2d%

	opcode 00dc
	@arg player 
	@arg vehicle 
*/
bool opcode_00dc(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x00dc);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_char_in_model %1d% model %2o%

	opcode 00dd
	@arg character Character/ped
	@arg model Model ID
*/
bool opcode_00dd(const ScriptArguments& args, const ScriptCharacter character, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x00dd);
	RW_UNUSED(character);
	RW_UNUSED(model);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_player_in_model %1d% model %2t%

	opcode 00de
	@arg player 
	@arg model 
*/
bool opcode_00de(const ScriptArguments& args, const ScriptPlayer player, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x00de);
	RW_UNUSED(player);
	RW_UNUSED(model);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_char_in_any_car %1d%

	opcode 00df
	@arg character Character/ped
*/
bool opcode_00df(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x00df);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_player_in_any_car %1d%

	opcode 00e0
	@arg player 
*/
bool opcode_00e0(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x00e0);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_button_pressed %1d% button %2d%

	opcode 00e1
	@arg player Player
	@arg buttonID Button ID
*/
bool opcode_00e1(const ScriptArguments& args, const ScriptPad player, const ScriptButton buttonID) {
	RW_UNIMPLEMENTED_OPCODE(0x00e1);
	RW_UNUSED(player);
	RW_UNUSED(buttonID);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %3d% = get_pad_state %1d% button %2d%

	opcode 00e2
	@arg padID Pad ID
	@arg buttonID Button ID
	@arg arg3 
*/
void opcode_00e2(const ScriptArguments& args, const ScriptPad padID, const ScriptButton buttonID, ScriptInt& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00e2);
	RW_UNUSED(padID);
	RW_UNUSED(buttonID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00e3
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00e3(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e3);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00e4
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00e4(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e4);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00e5
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00e5(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e5);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00e6
	@arg player Player
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00e6(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e6);
	RW_UNUSED(player);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00e7
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00e7(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e7);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00e8
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00e8(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00e8);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor %2d% radius %3d% %4d%

	opcode 00e9
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e9(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e9);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor_on_foot %2d% radius %3d% %4d%

	opcode 00ea
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00ea(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00ea);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor_in_car %2d% radius %3d% %4d%

	opcode 00eb
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00eb(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00eb);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00ec
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00ec(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00ec);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00ed
	@arg character Character/ped
	@arg coord Coordinages
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00ed(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00ed);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00ee
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00ee(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00ee);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% sphere %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00ef
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00ef(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00ef);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00f0
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00f0(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00f0);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00f1
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_00f1(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00f1);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   locate_char_any_means_char_2d %1d% char %2d% radius %3d% %4d% sphere %5h%

	opcode 00f2
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_00f2(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00f2);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_actor_on_foot %2d% radius %3d% %4d% sphere %5h%

	opcode 00f3
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_00f3(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00f3);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_actor_in_car %2d% radius %3d% %4d% %5h%

	opcode 00f4
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_00f4(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00f4);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f5
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00f5(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00f5);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f6
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00f6(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00f6);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% sphere %8b% near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f7
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00f7(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00f7);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f8
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00f8(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00f8);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f9
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00f9(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00f9);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00fa
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_00fa(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00fa);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% radius %3d% %4d% %5d%

	opcode 00fb
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00fb(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00fb);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% on_foot radius %3d% %4d% %5d%

	opcode 00fc
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00fc(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00fc);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% in_car radius %3d% %4d% %5d%

	opcode 00fd
	@arg player 
	@arg character 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_00fd(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x00fd);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %8bin-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00fe
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_00fe(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00fe);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %8bin-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00ff
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_00ff(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x00ff);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0100
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_0100(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0100);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0101
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_0101(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0101);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0102
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_0102(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0102);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8d%

	opcode 0103
	@arg character Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_0103(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0103);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_actor %2d% radius %3d% %4d% %5d% sphere %6h%

	opcode 0104
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0104(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0104);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_actor_on_foot %2d% radius %3d% %4d% %5d% sphere %6h%

	opcode 0105
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0105(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0105);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_actor_in_car %2d% radius %3d% %4d% %5d% %6h%

	opcode 0106
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0106(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0106);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %5d% = create_object %1o% at %2d% %3d% %4d%

	opcode 0107
	@arg model Model ID
	@arg coord Coordinages
	@arg object Object
*/
void opcode_0107(const ScriptArguments& args, const ScriptModel model, ScriptVec3 coord, ScriptObject& object) {
	RW_UNIMPLEMENTED_OPCODE(0x0107);
	RW_UNUSED(model);
	RW_UNUSED(coord);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief destroy_object %1d%

	opcode 0108
	@arg object Object
*/
void opcode_0108(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x0108);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief player %1d% money += %2d%

	opcode 0109
	@arg player Player
	@arg arg2 
*/
void opcode_0109(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0109);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% money > %2d%

	opcode 010a
	@arg player Player
	@arg arg2 
*/
bool opcode_010a(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x010a);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %2d% = player %1d% money

	opcode 010b
	@arg player Player
	@arg arg2 
*/
void opcode_010b(const ScriptArguments& args, const ScriptPlayer player, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x010b);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief change_player_into_rc_buggy %1d% at %2d% %3d% %4d% %5d%

	opcode 010c
	@arg player Player
	@arg coord Coordinages
	@arg arg5 
*/
void opcode_010c(const ScriptArguments& args, const ScriptPlayer player, ScriptVec3 coord, const ScriptFloat arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x010c);
	RW_UNUSED(player);
	RW_UNUSED(coord);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% wanted_level_to %2d%

	opcode 010d
	@arg player Player
	@arg arg2 
*/
void opcode_010d(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x010d);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% minimum_wanted_level_to %2d%

	opcode 010e
	@arg player Player
	@arg arg2 
*/
void opcode_010e(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x010e);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% wanted_level > %2d%

	opcode 010f
	@arg player Player
	@arg arg2 
*/
bool opcode_010f(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x010f);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief clear_player %1d% wanted_level

	opcode 0110
	@arg player Player
*/
void opcode_0110(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0110);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief set_wasted_busted_check_to %1benabled/disabled%

	opcode 0111
	@arg arg1 Boolean true/false
*/
void opcode_0111(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0111);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   has_deatharrest_been_executed

	opcode 0112
*/
bool opcode_0112(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0112);
	RW_UNUSED(args);
	return false;
}

/**
	@brief add_ammo_to_player %1d% weapon %2h% to %3d%

	opcode 0113
	@arg player Player
	@arg weaponID Weapon ID
	@arg arg3 
*/
void opcode_0113(const ScriptArguments& args, const ScriptPlayer player, const ScriptWeaponType weaponID, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0113);
	RW_UNUSED(player);
	RW_UNUSED(weaponID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% car_weapon %2h% ammo_to %3d%

	opcode 0114
	@arg character Character/ped
	@arg weaponID Weapon ID
	@arg arg3 
*/
void opcode_0114(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0114);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% wasted

	opcode 0117
	@arg player Player
*/
bool opcode_0117(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0117);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% dead

	opcode 0118
	@arg character Character/ped
*/
bool opcode_0118(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0118);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% wrecked

	opcode 0119
	@arg vehicle Car/vehicle
*/
bool opcode_0119(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0119);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_actor %1d% search_threat %2i%

	opcode 011a
	@arg character 
	@arg arg2 
*/
void opcode_011a(const ScriptArguments& args, const ScriptCharacter character, const ScriptThreat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x011a);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% clear_objective

	opcode 011c
	@arg character 
*/
void opcode_011c(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x011c);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% in_zone %2z%

	opcode 0121
	@arg player Player
	@arg areaName Area name
*/
bool opcode_0121(const ScriptArguments& args, const ScriptPlayer player, const ScriptString areaName) {
	RW_UNIMPLEMENTED_OPCODE(0x0121);
	RW_UNUSED(player);
	RW_UNUSED(areaName);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% pressing_horn

	opcode 0122
	@arg player Player
*/
bool opcode_0122(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0122);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% spotted_player %2d%

	opcode 0123
	@arg character Character/ped
	@arg player Player
*/
bool opcode_0123(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0123);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% walking

	opcode 0126
	@arg character Character/ped
*/
bool opcode_0126(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0126);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %4d% = create_actor %2d% %3o% in_car %1d% driverseat

	opcode 0129
	@arg vehicle Ped type
	@arg pedType Model ID
	@arg model Car/vehicle
	@arg character Character/ped
*/
void opcode_0129(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptPedType pedType, const ScriptModelID model, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x0129);
	RW_UNUSED(vehicle);
	RW_UNUSED(pedType);
	RW_UNUSED(model);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief put_player %1d% at %2d% %3d% %4d% and_remove_from_car

	opcode 012a
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_012a(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x012a);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% busted

	opcode 0130
	@arg player Player
*/
bool opcode_0130(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0130);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_car %1d% door_lock %2d%

	opcode 0135
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_0135(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCarLock arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0135);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief  shake_cam_with_point %1d% xyz %2% %3% %4%

	opcode 0136
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_0136(const ScriptArguments& args, const ScriptInt arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0136);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% id == %2o%

	opcode 0137
	@arg vehicle Car/vehicle
	@arg model Model ID
*/
bool opcode_0137(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x0137);
	RW_UNUSED(vehicle);
	RW_UNUSED(model);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% crushed_by_car_crusher

	opcode 0149
	@arg vehicle Car/vehicle
*/
bool opcode_0149(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0149);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %13d% = init_car_generator %5o% %6d% %7d% force_spawn %8d% alarm %9d% door_lock %10d% min_delay %11d% max_delay %12d% at %1d% %2d% %3d% angle %4d%

	opcode 014b
	@arg coord Coordinages
	@arg angle Angle
	@arg model Model ID
	@arg carColour0 Car colour ID
	@arg carColour1 Car colour ID
	@arg arg8 Boolean true/false
	@arg arg9 
	@arg arg10 
	@arg time0 Time (ms)
	@arg time1 Time (ms)
	@arg carGen Car generator
*/
void opcode_014b(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle, const ScriptModelID model, const ScriptCarColour carColour0, const ScriptCarColour carColour1, const ScriptBoolean arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt time0, const ScriptInt time1, ScriptVehicleGenerator& carGen) {
	RW_UNIMPLEMENTED_OPCODE(0x014b);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(model);
	RW_UNUSED(carColour0);
	RW_UNUSED(carColour1);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(time0);
	RW_UNUSED(time1);
	RW_UNUSED(carGen);
	RW_UNUSED(args);
}

/**
	@brief set_parked_car_generator %1d% cars_to_generate_to %2d%

	opcode 014c
	@arg carGen Car generator
	@arg arg2 
*/
void opcode_014c(const ScriptArguments& args, const ScriptVehicleGenerator carGen, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x014c);
	RW_UNUSED(carGen);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief text_pager %1g% time_per_char %2d% ms unknown_flags %3d% %4d%

	opcode 014d
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_014d(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x014d);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief start_timer_at %1d%

	opcode 014e
	@arg arg1G Global timer storage
*/
void opcode_014e(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x014e);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief stop_timer %1d%

	opcode 014f
	@arg arg1G Global timer storage
*/
void opcode_014f(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x014f);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief remove_status_text %1d%

	opcode 0151
	@arg arg1G 
*/
void opcode_0151(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0151);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief set_zone_car_info %1s% %2bday/night% %3h% %4h% %5h% %6h% %7h% %8h% %9h% %10h% %11h% %12h% %13h% %14h% %15h% %16h% %17h%

	opcode 0152
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
	@arg arg10 
	@arg arg11 
	@arg arg12 
	@arg arg13 
	@arg arg14 
	@arg arg15 
	@arg arg16 
	@arg arg17 
*/
void opcode_0152(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt arg11, const ScriptInt arg12, const ScriptInt arg13, const ScriptInt arg14, const ScriptInt arg15, const ScriptInt arg16, const ScriptInt arg17) {
	RW_UNIMPLEMENTED_OPCODE(0x0152);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(arg11);
	RW_UNUSED(arg12);
	RW_UNUSED(arg13);
	RW_UNUSED(arg14);
	RW_UNUSED(arg15);
	RW_UNUSED(arg16);
	RW_UNUSED(arg17);
	RW_UNUSED(args);
}

/**
	@brief   actor %1d% in_zone %2z%

	opcode 0154
	@arg character Character/ped
	@arg areaName Area name
*/
bool opcode_0154(const ScriptArguments& args, const ScriptCharacter character, const ScriptString areaName) {
	RW_UNIMPLEMENTED_OPCODE(0x0154);
	RW_UNUSED(character);
	RW_UNUSED(areaName);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_zone_ped_density %1z% %2b:day/night% %3d%

	opcode 0156
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_0156(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0156);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief camera_on_player %1d% mode %2d% switchstyle %3d%

	opcode 0157
	@arg player Player
	@arg cameraModeID Camera mode ID
	@arg arg3 
*/
void opcode_0157(const ScriptArguments& args, const ScriptPlayer player, const ScriptCamMode cameraModeID, const ScriptChangeCamMode arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0157);
	RW_UNUSED(player);
	RW_UNUSED(cameraModeID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief camera_on_vehicle %1d% mode %2d% switchstyle %3d%

	opcode 0158
	@arg vehicle Car/vehicle
	@arg cameraModeID Camera mode ID
	@arg arg3 
*/
void opcode_0158(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCamMode cameraModeID, const ScriptChangeCamMode arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0158);
	RW_UNUSED(vehicle);
	RW_UNUSED(cameraModeID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief camera_on_ped %1d% mode %2d% switchstyle %3d%

	opcode 0159
	@arg character Character/ped
	@arg cameraModeID Camera mode ID
	@arg arg3 
*/
void opcode_0159(const ScriptArguments& args, const ScriptCharacter character, const ScriptCamMode cameraModeID, const ScriptChangeCamMode arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0159);
	RW_UNUSED(character);
	RW_UNUSED(cameraModeID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief restore_camera

	opcode 015a
*/
void opcode_015a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x015a);
	RW_UNUSED(args);
}

/**
	@brief set_zone_gang_info %1s% %2bday/night% %3h% %4h% %5h% %6h% %7h% %8h% %9h% %10h% %11h%

	opcode 015c
	@arg areaName Area name
	@arg arg2 Boolean true/false
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
	@arg arg10 
	@arg arg11 
*/
void opcode_015c(const ScriptArguments& args, const ScriptString areaName, const ScriptBoolean arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt arg11) {
	RW_UNIMPLEMENTED_OPCODE(0x015c);
	RW_UNUSED(areaName);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(arg11);
	RW_UNUSED(args);
}

/**
	@brief set_time_scale %1d%

	opcode 015d
	@arg arg1 
*/
void opcode_015d(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x015d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% wheels_on_ground

	opcode 015e
	@arg vehicle 
*/
bool opcode_015e(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x015e);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_camera_position %1d% %2d% %3d% rotation %4d% %5d% %6d%

	opcode 015f
	@arg coord Coordinages
	@arg rotation Rotation
*/
void opcode_015f(const ScriptArguments& args, ScriptVec3 coord, ScriptVec3 rotation) {
	RW_UNIMPLEMENTED_OPCODE(0x015f);
	RW_UNUSED(coord);
	RW_UNUSED(rotation);
	RW_UNUSED(args);
}

/**
	@brief point_camera %1d% %2d% %3d% switchstyle %4d%

	opcode 0160
	@arg coord Coordinages
	@arg arg4 
*/
void opcode_0160(const ScriptArguments& args, ScriptVec3 coord, const ScriptChangeCamMode arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0160);
	RW_UNUSED(coord);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_marker_above_car %1d% color %2d% visibility %3d%

	opcode 0161
	@arg vehicle Car/vehicle
	@arg arg2 
	@arg arg3 Boolean true/false
	@arg blip Blip
*/
void opcode_0161(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBlipColour arg2, const ScriptBoolean arg3, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0161);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_marker_above_actor %1d% color %2d% visibility %3d%

	opcode 0162
	@arg character Character/ped
	@arg arg2 
	@arg arg3 
	@arg blip Blip
*/
void opcode_0162(const ScriptArguments& args, const ScriptCharacter character, const ScriptBlipColour arg2, const ScriptBlipDisplay arg3, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0162);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief disable_marker %1d%

	opcode 0164
	@arg blip Blip
*/
void opcode_0164(const ScriptArguments& args, const ScriptBlip blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0164);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief set_marker %1d% color_to %2d%

	opcode 0165
	@arg blip Blip
	@arg arg2 
*/
void opcode_0165(const ScriptArguments& args, const ScriptBlip blip, const ScriptBlipColour arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0165);
	RW_UNUSED(blip);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_marker %1d% brightness_to %2d%

	opcode 0166
	@arg blip Blip
	@arg arg2 Boolean true/false
*/
void opcode_0166(const ScriptArguments& args, const ScriptBlip blip, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0166);
	RW_UNUSED(blip);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %6d% = create_marker_at %1d% %2d% %3d% color %4d% visibility %5d%

	opcode 0167
	@arg coord Coordinages
	@arg arg4 
	@arg arg5 
	@arg blip Blip
*/
void opcode_0167(const ScriptArguments& args, ScriptVec3 coord, const ScriptBlipColour arg4, const ScriptBlipDisplay arg5, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0167);
	RW_UNUSED(coord);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief show_on_radar %1d% %2d%

	opcode 0168
	@arg blip Blip
	@arg arg2 
*/
void opcode_0168(const ScriptArguments& args, const ScriptBlip blip, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0168);
	RW_UNUSED(blip);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_fade_color %1d% %2d% %3d%

	opcode 0169
	@arg colour Colour (0-255)
*/
void opcode_0169(const ScriptArguments& args, ScriptRGB colour) {
	RW_UNIMPLEMENTED_OPCODE(0x0169);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief fade %2b% for %1d% ms

	opcode 016a
	@arg time Time (ms)
	@arg scriptFade Boolean true/false
*/
void opcode_016a(const ScriptArguments& args, const ScriptInt time, const ScriptBoolean scriptFade) {
	RW_UNIMPLEMENTED_OPCODE(0x016a);
	RW_UNUSED(time);
	RW_UNUSED(scriptFade);
	RW_UNUSED(args);
}

/**
	@brief   fading

	opcode 016b
*/
bool opcode_016b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x016b);
	RW_UNUSED(args);
	return false;
}

/**
	@brief restart_if_wasted at %1d% %2d% %3d% heading %4d%

	opcode 016c
	@arg coord Coordinages
	@arg angle Angle
*/
void opcode_016c(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x016c);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief restart_if_busted at %1d% %2d% %3d% heading %4d%

	opcode 016d
	@arg coord Coordinages
	@arg angle Angle
*/
void opcode_016d(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x016d);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief override_next_restart at %1d% %2d% %3d% heading %4d%

	opcode 016e
	@arg coord Coordinages
	@arg angle Angle
*/
void opcode_016e(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x016e);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief create_particle %1a% %5d% %6d% %7d% %8d% %9d% %10d% at %2d% %3d% %4d%

	opcode 016f
	@arg arg1 
	@arg coord Coordinages
	@arg angle Angle
	@arg arg6 
	@arg arg7 
	@arg colour Colour (0-255)
*/
void opcode_016f(const ScriptArguments& args, const ScriptShadow arg1, ScriptVec3 coord, const ScriptFloat angle, const ScriptFloat arg6, const ScriptInt arg7, ScriptRGB colour) {
	RW_UNIMPLEMENTED_OPCODE(0x016f);
	RW_UNUSED(arg1);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief %2d% = player %1d% z_angle

	opcode 0170
	@arg player Player
	@arg angle Angle
*/
void opcode_0170(const ScriptArguments& args, const ScriptPlayer player, ScriptFloat& angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0170);
	RW_UNUSED(player);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% z_angle_to %2d%

	opcode 0171
	@arg player Player
	@arg angle Angle
*/
void opcode_0171(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0171);
	RW_UNUSED(player);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief %2d% = actor %1d% z_angle

	opcode 0172
	@arg character Character/ped
	@arg angle Angle
*/
void opcode_0172(const ScriptArguments& args, const ScriptCharacter character, ScriptFloat& angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0172);
	RW_UNUSED(character);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% z_angle_to %2d%

	opcode 0173
	@arg character Character/ped
	@arg angle Angle
*/
void opcode_0173(const ScriptArguments& args, const ScriptCharacter character, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0173);
	RW_UNUSED(character);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% z_angle

	opcode 0174
	@arg vehicle Car/vehicle
	@arg angle Angle
*/
void opcode_0174(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFloat& angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0174);
	RW_UNUSED(vehicle);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% z_angle_to %2d%

	opcode 0175
	@arg vehicle Car/vehicle
	@arg angle Angle
*/
void opcode_0175(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0175);
	RW_UNUSED(vehicle);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief %2d% = object %1d% z_angle

	opcode 0176
	@arg object Object
	@arg angle Angle
*/
void opcode_0176(const ScriptArguments& args, const ScriptObject object, ScriptFloat& angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0176);
	RW_UNUSED(object);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief set_object %1d% z_angle_to %2d%

	opcode 0177
	@arg object Object
	@arg angle Angle
*/
void opcode_0177(const ScriptArguments& args, const ScriptObject object, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0177);
	RW_UNUSED(object);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% picked_up_object %2d%

	opcode 0178
	@arg player Player
	@arg object Object
*/
bool opcode_0178(const ScriptArguments& args, const ScriptPlayer player, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x0178);
	RW_UNUSED(player);
	RW_UNUSED(object);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% picked_up_object %2d%

	opcode 0179
	@arg character Character/ped
	@arg object Object
*/
bool opcode_0179(const ScriptArguments& args, const ScriptCharacter character, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x0179);
	RW_UNUSED(character);
	RW_UNUSED(object);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_player %1d% weapon %2d% ammo_to %3d%

	opcode 017a
	@arg player 
	@arg arg2 
	@arg arg3 
*/
void opcode_017a(const ScriptArguments& args, const ScriptPlayer player, const ScriptWeaponType arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x017a);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% weapon %2d% ammo_to %3d%

	opcode 017b
	@arg character Character/ped
	@arg weaponID Weapon ID
	@arg arg3 
*/
void opcode_017b(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x017b);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief declare_mission_flag %1d%

	opcode 0180
	@arg arg1G 
*/
void opcode_0180(const ScriptArguments& args, ScriptIntGlobal arg1G) {
	RW_UNIMPLEMENTED_OPCODE(0x0180);
	RW_UNUSED(arg1G);
	RW_UNUSED(args);
}

/**
	@brief declare_mission_flag_for_contact %1d% as %2d%

	opcode 0181
	@arg arg1 
	@arg arg2G 
*/
void opcode_0181(const ScriptArguments& args, const ScriptContact arg1, ScriptIntGlobal arg2G) {
	RW_UNIMPLEMENTED_OPCODE(0x0181);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2G);
	RW_UNUSED(args);
}

/**
	@brief contact %1d% base_brief = %2d%

	opcode 0182
	@arg arg1 
	@arg arg2 
*/
void opcode_0182(const ScriptArguments& args, const ScriptContact arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0182);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% health > %2h%

	opcode 0183
	@arg player Player
	@arg arg2 
*/
bool opcode_0183(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0183);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% health >= %2d%

	opcode 0184
	@arg character Character/ped
	@arg arg2 
*/
bool opcode_0184(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0184);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% health >= %2d%

	opcode 0185
	@arg vehicle Car/vehicle
	@arg arg2 
*/
bool opcode_0185(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0185);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %2d% = create_marker_above_car %1d%

	opcode 0186
	@arg vehicle Car/vehicle
	@arg blip Blip
*/
void opcode_0186(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0186);
	RW_UNUSED(vehicle);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %2d% = create_marker_above_actor %1d%

	opcode 0187
	@arg character Character/ped
	@arg blip Blip
*/
void opcode_0187(const ScriptArguments& args, const ScriptCharacter character, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0187);
	RW_UNUSED(character);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %2d% = create_marker_above_object %1d%

	opcode 0188
	@arg object Character/ped
	@arg blip Blip
*/
void opcode_0188(const ScriptArguments& args, const ScriptObject object, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0188);
	RW_UNUSED(object);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %4d% = unknown_create_checkpoint_at %1d% %2d% %3d%

	opcode 0189
	@arg coord Coordinages
	@arg blip Blip
*/
void opcode_0189(const ScriptArguments& args, ScriptVec3 coord, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x0189);
	RW_UNUSED(coord);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_checkpoint_at %1d% %2d% %3d%

	opcode 018a
	@arg coord Coordinages
	@arg blip Blip
*/
void opcode_018a(const ScriptArguments& args, ScriptVec3 coord, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x018a);
	RW_UNUSED(coord);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief show_on_radar %1d% %2d%

	opcode 018b
	@arg blip Blip
	@arg arg2 
*/
void opcode_018b(const ScriptArguments& args, const ScriptBlip blip, const ScriptBlipDisplay arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x018b);
	RW_UNUSED(blip);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief play_sound %4d% at %1d% %2d% %3d%

	opcode 018c
	@arg coord Coordinages
	@arg sound 
*/
void opcode_018c(const ScriptArguments& args, ScriptVec3 coord, const ScriptSoundType sound) {
	RW_UNIMPLEMENTED_OPCODE(0x018c);
	RW_UNUSED(coord);
	RW_UNUSED(sound);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_sound %4d% at %1d% %2d% %3d%

	opcode 018d
	@arg coord Coordinages
	@arg sound0 
	@arg sound1 
*/
void opcode_018d(const ScriptArguments& args, ScriptVec3 coord, const ScriptSoundType sound0, ScriptSound& sound1) {
	RW_UNIMPLEMENTED_OPCODE(0x018d);
	RW_UNUSED(coord);
	RW_UNUSED(sound0);
	RW_UNUSED(sound1);
	RW_UNUSED(args);
}

/**
	@brief stop_sound %1d%

	opcode 018e
	@arg sound 
*/
void opcode_018e(const ScriptArguments& args, const ScriptSound sound) {
	RW_UNIMPLEMENTED_OPCODE(0x018e);
	RW_UNUSED(sound);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% flipped_for_2_seconds

	opcode 018f
	@arg vehicle Car/vehicle
*/
bool opcode_018f(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x018f);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief add_car %1d% to_flipped_check

	opcode 0190
	@arg vehicle Car/vehicle
*/
void opcode_0190(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0190);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief remove_car %1d% from_flipped_check

	opcode 0191
	@arg vehicle Car/vehicle
*/
void opcode_0191(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0191);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% objective_to_stand_still

	opcode 0192
	@arg character Character/ped
*/
void opcode_0192(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0192);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% objective_to_act_like_ped

	opcode 0193
	@arg character Character/ped
*/
void opcode_0193(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0193);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% objective_to_guard_point %2d% %3d% %4d%

	opcode 0194
	@arg character Character/ped
	@arg coord Coordinages
*/
void opcode_0194(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0194);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% objective3 %2d% %3d% %4d% %5d%

	opcode 0195
	@arg character 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_0195(const ScriptArguments& args, const ScriptCharacter character, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0195);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% objective5

	opcode 0196
	@arg character 
*/
void opcode_0196(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0196);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 0197
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_0197(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0197);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 0198
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_0198(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0198);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 0199
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_0199(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0199);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 019a
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_019a(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x019a);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 019b
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_019b(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x019b);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019c
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_019c(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x019c);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019d
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_019d(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x019d);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019e
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_019e(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x019e);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019f
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_019f(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x019f);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a0
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_01a0(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01a0);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 01a1
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01a1(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01a1);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 01a2
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01a2(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01a2);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 01a3
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01a3(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01a3);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 01a4
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01a4(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01a4);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 01a5
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01a5(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01a5);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a6
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01a6(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01a6);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a7
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01a7(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01a7);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %8bin-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a8
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01a8(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01a8);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a9
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01a9(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01a9);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01aa
	@arg character Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01aa(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01aa);
	RW_UNUSED(character);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% stopped %6b:in-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 01ab
	@arg vehicle Character/ped
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg6 Boolean true/false
*/
bool opcode_01ab(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01ab);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% stopped %8b:in-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01ac
	@arg vehicle Car/vehicle
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg8 Boolean true/false
*/
bool opcode_01ac(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01ac);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% sphere %6b% near_point %2d% %3d% radius %4d% %5d%

	opcode 01ad
	@arg vehicle Car/vehicle
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_01ad(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01ad);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% stopped %6b:in-sphere/%near_point %2d% %3d% %4d% %5d%

	opcode 01ae
	@arg vehicle Car/vehicle
	@arg coord Coordinages
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_01ae(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec2 coord, ScriptVec2 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01ae);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% %8bin-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 01af
	@arg vehicle Car/vehicle
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_01af(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01af);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% stopped %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 01b0
	@arg vehicle Character/ped
	@arg coord Coordinages
	@arg radius Radius
	@arg arg8 Boolean true/false
*/
bool opcode_01b0(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord, ScriptVec3 radius, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x01b0);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
	return false;
}

/**
	@brief give_player %1d% weapon %2c% ammo %3d%

	opcode 01b1
	@arg player 
	@arg arg2 
	@arg arg3 
*/
void opcode_01b1(const ScriptArguments& args, const ScriptPlayer player, const ScriptWeaponType arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01b1);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief give_actor %1d% weapon %2c% ammo %3d%

	opcode 01b2
	@arg character Character/ped
	@arg weaponID Weapon ID
	@arg arg3 
*/
void opcode_01b2(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01b2);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% controllable %2btrue/false%

	opcode 01b4
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_01b4(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01b4);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief force_weather %1d%

	opcode 01b5
	@arg arg1 
*/
void opcode_01b5(const ScriptArguments& args, const ScriptWeather arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01b5);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_weather %1d%

	opcode 01b6
	@arg weatherID Weather ID
*/
void opcode_01b6(const ScriptArguments& args, const ScriptWeather weatherID) {
	RW_UNIMPLEMENTED_OPCODE(0x01b6);
	RW_UNUSED(weatherID);
	RW_UNUSED(args);
}

/**
	@brief release_weather

	opcode 01b7
*/
void opcode_01b7(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x01b7);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% armed_weapon_to %2c%

	opcode 01b8
	@arg player 
	@arg arg2 
*/
void opcode_01b8(const ScriptArguments& args, const ScriptPlayer player, const ScriptWeaponType arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01b8);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% armed_weapon_to %2c%

	opcode 01b9
	@arg character Character/ped
	@arg weaponID Weapon ID
*/
void opcode_01b9(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID) {
	RW_UNIMPLEMENTED_OPCODE(0x01b9);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(args);
}

/**
	@brief store_object %1d% position_to %2d% %3d% %4d%

	opcode 01bb
	@arg object Object
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_01bb(const ScriptArguments& args, const ScriptObject object, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x01bb);
	RW_UNUSED(object);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set_object_coordinates %1d% at %2d% %3d% %4d%

	opcode 01bc
	@arg object Object
	@arg coord Coordinages
*/
void opcode_01bc(const ScriptArguments& args, const ScriptObject object, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x01bc);
	RW_UNUSED(object);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief %1d% = current_time_in_ms

	opcode 01bd
	@arg time Time (ms)
*/
void opcode_01bd(const ScriptArguments& args, ScriptInt& time) {
	RW_UNIMPLEMENTED_OPCODE(0x01bd);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% to_look_at_spot %2d% %3d% %4d%

	opcode 01be
	@arg character 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_01be(const ScriptArguments& args, const ScriptCharacter character, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01be);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief %2d% = player %1d% wanted_level

	opcode 01c0
	@arg player Player
	@arg arg2 
*/
void opcode_01c0(const ScriptArguments& args, const ScriptPlayer player, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01c0);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% stopped

	opcode 01c1
	@arg vehicle Car/vehicle
*/
bool opcode_01c1(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01c1);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief remove_references_to_actor %1d%

	opcode 01c2
	@arg character Character/ped
*/
void opcode_01c2(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x01c2);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief remove_references_to_car %1d%

	opcode 01c3
	@arg vehicle Car/vehicle
*/
void opcode_01c3(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01c3);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief remove_references_to_object %1d%

	opcode 01c4
	@arg object Object
*/
void opcode_01c4(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x01c4);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief remove_actor_from_mission_cleanup_list %1d%

	opcode 01c5
	@arg character Character/ped
*/
void opcode_01c5(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x01c5);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief remove_car_from_mission_cleanup_list %1d%

	opcode 01c6
	@arg vehicle Car/vehicle
*/
void opcode_01c6(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01c6);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief remove_object_from_mission_cleanup_list %1d%

	opcode 01c7
	@arg object Object
*/
void opcode_01c7(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x01c7);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_actor %2d% model %3o% in_car %1d% passenger_seat %4d%

	opcode 01c8
	@arg vehicle Ped type
	@arg pedType Model ID
	@arg model Car/vehicle
	@arg arg4 
	@arg character Character/ped
*/
void opcode_01c8(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptPedType pedType, const ScriptModelID model, const ScriptInt arg4, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x01c8);
	RW_UNUSED(vehicle);
	RW_UNUSED(pedType);
	RW_UNUSED(model);
	RW_UNUSED(arg4);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% kill_actor %2d%

	opcode 01c9
	@arg character0 
	@arg character1 
*/
void opcode_01c9(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x01c9);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% kill_player %2d%

	opcode 01ca
	@arg character 
	@arg player 
*/
void opcode_01ca(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01ca);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% kill_actor %2d%

	opcode 01cb
	@arg character0 
	@arg character1 
*/
void opcode_01cb(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x01cb);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% kill_player %2d%

	opcode 01cc
	@arg character 
	@arg player 
*/
void opcode_01cc(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01cc);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% avoid_player %2d%

	opcode 01ce
	@arg character 
	@arg player 
*/
void opcode_01ce(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01ce);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% avoid_char %2d%

	opcode 01cf
	@arg character0 
	@arg character1 
*/
void opcode_01cf(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x01cf);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% avoid_player %2d%

	opcode 01d0
	@arg character 
	@arg player 
*/
void opcode_01d0(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01d0);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% follow_actor %2d%

	opcode 01d1
	@arg character0 
	@arg character1 
*/
void opcode_01d1(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d1);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% follow_player %2d%

	opcode 01d2
	@arg character 
	@arg player 
*/
void opcode_01d2(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01d2);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% leave_car %2d%

	opcode 01d3
	@arg character 
	@arg vehicle 
*/
void opcode_01d3(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01d3);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% go_to_car %2d% and_enter_it_as_a_passenger

	opcode 01d4
	@arg character 
	@arg vehicle 
*/
void opcode_01d4(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01d4);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% go_to_and_drive_car %2d%

	opcode 01d5
	@arg character 
	@arg vehicle 
*/
void opcode_01d5(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01d5);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% destroy_object %2d%

	opcode 01d8
	@arg character 
	@arg object 
*/
void opcode_01d8(const ScriptArguments& args, const ScriptCharacter character, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x01d8);
	RW_UNUSED(character);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% destroy_car %2d%

	opcode 01d9
	@arg character 
	@arg vehicle 
*/
void opcode_01d9(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01d9);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief tie_actor %1d% to_actor %2d%

	opcode 01de
	@arg character0 
	@arg character1 
*/
void opcode_01de(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x01de);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief tie_actor %1d% to_player %2d%

	opcode 01df
	@arg character 
	@arg player 
*/
void opcode_01df(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x01df);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief clear_leader %1d%

	opcode 01e0
	@arg character 
*/
void opcode_01e0(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x01e0);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% follow_route %2d% behaviour %3d%

	opcode 01e1
	@arg character 
	@arg arg2 
	@arg arg3 
*/
void opcode_01e1(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2, const ScriptFollowRoute arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01e1);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief add_route_point %1d% at %2d% %3d% %4d%

	opcode 01e2
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_01e2(const ScriptArguments& args, const ScriptInt arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01e2);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_1number_styled %1g% number %2d% duration %3d% ms style %4d%

	opcode 01e3
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_01e3(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01e3);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_1number_lowpriority %1g% number %2d% duration %3d% ms flag %4d%

	opcode 01e4
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_01e4(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01e4);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_1number_highpriority %1g% number %2d% duration %3d% ms flag %4d%

	opcode 01e5
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_01e5(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01e5);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief switch_roads_on %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 01e7
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_01e7(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x01e7);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief switch_roads_off %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 01e8
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_01e8(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x01e8);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% num_passengers

	opcode 01e9
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_01e9(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01e9);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% max_passengers

	opcode 01ea
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_01ea(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01ea);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_car_density_to %1d%

	opcode 01eb
	@arg arg1 
*/
void opcode_01eb(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01eb);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief make_car %1d% very_heavy %2h%

	opcode 01ec
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_01ec(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01ec);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief clear_actor %1d% threat_search

	opcode 01ed
	@arg character 
*/
void opcode_01ed(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x01ed);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief activate_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 01ee
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
	@arg arg10 
*/
void opcode_01ee(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptFloat arg9, const ScriptFloat arg10) {
	RW_UNIMPLEMENTED_OPCODE(0x01ee);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(args);
}

/**
	@brief deactivate_crane %1d% %2d%

	opcode 01ef
	@arg arg1 
	@arg arg2 
*/
void opcode_01ef(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01ef);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_max_wanted_level_to %1d%

	opcode 01f0
	@arg arg1 
*/
void opcode_01f0(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01f0);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% airborne

	opcode 01f3
	@arg vehicle Car/vehicle
*/
bool opcode_01f3(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01f3);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   car %1d% flipped

	opcode 01f4
	@arg vehicle Car/vehicle
*/
bool opcode_01f4(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x01f4);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %2d% = create_emulated_actor_from_player %1d%

	opcode 01f5
	@arg player Player
	@arg character Character/ped
*/
void opcode_01f5(const ScriptArguments& args, const ScriptPlayer player, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x01f5);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief cancel_override_restart

	opcode 01f6
*/
void opcode_01f6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x01f6);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% ignored_by_cops_state_to %2b:true/false%

	opcode 01f7
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_01f7(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01f7);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief init_rampage %1g% weapon %2d% time %3d% %4d% targets %5o% %6o% %7o% %8o% flag %9d%

	opcode 01f9
	@arg gxtEntry GXT entry
	@arg weaponID Weapon ID
	@arg time Time (ms)
	@arg arg4 
	@arg model0 Model ID
	@arg model1 Model ID
	@arg model2 Model ID
	@arg model3 Model ID
	@arg arg9 Boolean true/false
*/
void opcode_01f9(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptWeaponType weaponID, const ScriptInt time, const ScriptInt arg4, const ScriptModelID model0, const ScriptModelID model1, const ScriptModelID model2, const ScriptModelID model3, const ScriptBoolean arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x01f9);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(weaponID);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(model0);
	RW_UNUSED(model1);
	RW_UNUSED(model2);
	RW_UNUSED(model3);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief %1d% = rampage_status

	opcode 01fa
	@arg arg1 
*/
void opcode_01fa(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01fa);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %2d% = square_root %1d%

	opcode 01fb
	@arg arg1 
	@arg arg2 
*/
void opcode_01fb(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01fb);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% near_car %2d% radius %3d% %4d% unknown %5d%

	opcode 01fc
	@arg player 
	@arg vehicle 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_01fc(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x01fc);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% near_car_on_foot %2d% radius %3d% %4d% unknown %5d%

	opcode 01fd
	@arg player 
	@arg vehicle 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_01fd(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x01fd);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% near_car_in_car %2d% radius %3d% %4d% unknown %5d%

	opcode 01fe
	@arg player 
	@arg vehicle 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_01fe(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x01fe);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% near_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 01ff
	@arg player Player
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_01ff(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x01ff);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% near_car_on_foot %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0200
	@arg player Player
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0200(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0200);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% near_car_in_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0201
	@arg player Player
	@arg vehicle Character/ped
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0201(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0201);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car %2d% radius %3d% %4d% sphere %5d%

	opcode 0202
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_0202(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0202);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car_on_foot %2d% radius %3d% %4d% unknown %5d%

	opcode 0203
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_0203(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0203);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car_in_car %2d% radius %3d% %4d% unknown %5d%

	opcode 0204
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
bool opcode_0204(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec2 radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0204);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0205
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0205(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0205);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car_on_foot %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0206
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0206(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0206);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% near_car_in_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0207
	@arg character Character/ped
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg arg6 Boolean true/false
*/
bool opcode_0207(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle, ScriptVec3 radius, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0207);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %3d% = random_float %1d% %2d%

	opcode 0208
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_0208(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, ScriptFloat& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0208);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief %3d% = random_int_in_ranges %1d% %2d%

	opcode 0209
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_0209(const ScriptArguments& args, const ScriptInt arg1, const ScriptInt arg2, ScriptInt& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0209);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% door_status_to %2d%

	opcode 020a
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_020a(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCarLock arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x020a);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief explode_car %1d%

	opcode 020b
	@arg vehicle Car/vehicle
*/
void opcode_020b(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x020b);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief create_explosion %4d% at %1d% %2d% %3d%

	opcode 020c
	@arg coord Coordinages
	@arg explosionID Explosion ID
*/
void opcode_020c(const ScriptArguments& args, ScriptVec3 coord, const ScriptExplosion explosionID) {
	RW_UNIMPLEMENTED_OPCODE(0x020c);
	RW_UNUSED(coord);
	RW_UNUSED(explosionID);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% is_upright

	opcode 020d
	@arg vehicle Car/vehicle
*/
bool opcode_020d(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x020d);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief actor %1d% look_at_actor %2d%

	opcode 020e
	@arg character0 
	@arg character1 
*/
void opcode_020e(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x020e);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% look_at_player %2d%

	opcode 020f
	@arg character 
	@arg player 
*/
void opcode_020f(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x020f);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief player %1d% look_at_actor %2d%

	opcode 0210
	@arg player Player
	@arg character Character/ped
*/
void opcode_0210(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0210);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% walk_to %2d% %3d%

	opcode 0211
	@arg character Character/ped
	@arg coord Coordinages
*/
void opcode_0211(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0211);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief %6d% = create_pickup %1o% type %2d% at %3d% %4d% %5d%

	opcode 0213
	@arg model Model ID
	@arg pickup0 
	@arg coord Coordinages
	@arg pickup1 Pickup
*/
void opcode_0213(const ScriptArguments& args, const ScriptModel model, const ScriptPickupType pickup0, ScriptVec3 coord, ScriptPickup& pickup1) {
	RW_UNIMPLEMENTED_OPCODE(0x0213);
	RW_UNUSED(model);
	RW_UNUSED(pickup0);
	RW_UNUSED(coord);
	RW_UNUSED(pickup1);
	RW_UNUSED(args);
}

/**
	@brief   pickup %1d% picked_up

	opcode 0214
	@arg pickup Pickup
*/
bool opcode_0214(const ScriptArguments& args, const ScriptPickup pickup) {
	RW_UNIMPLEMENTED_OPCODE(0x0214);
	RW_UNUSED(pickup);
	RW_UNUSED(args);
	return false;
}

/**
	@brief destroy_pickup %1d%

	opcode 0215
	@arg pickup Pickup
*/
void opcode_0215(const ScriptArguments& args, const ScriptPickup pickup) {
	RW_UNIMPLEMENTED_OPCODE(0x0215);
	RW_UNUSED(pickup);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% taxi_available_light_to %2b:on/off%

	opcode 0216
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_0216(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0216);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief text_big_styled %1g% duration %2d% ms style %3d%

	opcode 0217
	@arg gxtEntry GXT entry
	@arg time Time (ms)
	@arg arg3 
*/
void opcode_0217(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt time, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0217);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(time);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief text_big_1number_styled %1g% number %2d% duration %3d% ms style %4d%

	opcode 0218
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_0218(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0218);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief %8h% = create_garage %7h% from %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0219
	@arg zCoord Z Coord
	@arg coord Coordinages
	@arg arg5 
	@arg arg6 Handle
	@arg arg7 
	@arg garage 
*/
void opcode_0219(const ScriptArguments& args, const ScriptFloat zCoord, ScriptVec3 coord, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7, ScriptGarage& garage) {
	RW_UNIMPLEMENTED_OPCODE(0x0219);
	RW_UNUSED(zCoord);
	RW_UNUSED(coord);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief set_garage %1d% to_accept_car %2d%

	opcode 021b
	@arg garage 
	@arg vehicle Car/vehicle
*/
void opcode_021b(const ScriptArguments& args, const ScriptGarage garage, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x021b);
	RW_UNUSED(garage);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   car_inside_garage %1d%

	opcode 021c
	@arg garage 
*/
bool opcode_021c(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x021c);
	RW_UNUSED(garage);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_free_bomb_shop_to %1btrue/false%

	opcode 021d
	@arg arg1 
*/
void opcode_021d(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x021d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   car %d has_car_bomb

	opcode 0220
	@arg vehicle Car/vehicle
*/
bool opcode_0220(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0220);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_player %1d% apply_brakes_to_car %2d%

	opcode 0221
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0221(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0221);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% health_to %2d%

	opcode 0222
	@arg player Player
	@arg arg2 
*/
void opcode_0222(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0222);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% health_to %2d%

	opcode 0223
	@arg character Character/ped
	@arg arg2 
*/
void opcode_0223(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0223);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% health_to %2d%

	opcode 0224
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_0224(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0224);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = player %1d% health

	opcode 0225
	@arg player Player
	@arg arg2 
*/
void opcode_0225(const ScriptArguments& args, const ScriptPlayer player, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0225);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = actor %1d% health

	opcode 0226
	@arg character Character/ped
	@arg arg2 
*/
void opcode_0226(const ScriptArguments& args, const ScriptCharacter character, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0226);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% health

	opcode 0227
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_0227(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0227);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% bomb_status == %2d%

	opcode 0228
	@arg vehicle Car/vehicle
	@arg arg2 
*/
bool opcode_0228(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCarBomb arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0228);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_car %1d% color_to %2d% %3d%

	opcode 0229
	@arg vehicle Car/vehicle
	@arg carColour0 Car colour ID
	@arg carColour1 Car colour ID
*/
void opcode_0229(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCarColour carColour0, const ScriptCarColour carColour1) {
	RW_UNIMPLEMENTED_OPCODE(0x0229);
	RW_UNUSED(vehicle);
	RW_UNUSED(carColour0);
	RW_UNUSED(carColour1);
	RW_UNUSED(args);
}

/**
	@brief switch_ped_roads_on %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 022a
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_022a(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x022a);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief switch_ped_roads_off %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 022b
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_022b(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x022b);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% to_look_at_actor %2d%

	opcode 022c
	@arg character0 
	@arg character1 
*/
void opcode_022c(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x022c);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% to_look_at_player %2d%

	opcode 022d
	@arg character 
	@arg player 
*/
void opcode_022d(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x022d);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% to_look_at_actor %2d%

	opcode 022e
	@arg player 
	@arg character 
*/
void opcode_022e(const ScriptArguments& args, const ScriptPlayer player, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x022e);
	RW_UNUSED(player);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% stop_looking

	opcode 022f
	@arg character 
*/
void opcode_022f(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x022f);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% stop_looking

	opcode 0230
	@arg player Player
*/
void opcode_0230(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0230);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief script_heli %1bon/off%

	opcode 0231
	@arg arg1 Boolean true/false
*/
void opcode_0231(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0231);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_gang %1h% models_to %2o% %3o%

	opcode 0235
	@arg gangID Gang ID
	@arg model0 Model ID
	@arg model1 Model ID
*/
void opcode_0235(const ScriptArguments& args, const ScriptGang gangID, const ScriptModelID model0, const ScriptModelID model1) {
	RW_UNIMPLEMENTED_OPCODE(0x0235);
	RW_UNUSED(gangID);
	RW_UNUSED(model0);
	RW_UNUSED(model1);
	RW_UNUSED(args);
}

/**
	@brief set_gang %1d% car_to %2o%

	opcode 0236
	@arg gangID Gang ID
	@arg model Model ID
*/
void opcode_0236(const ScriptArguments& args, const ScriptGang gangID, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x0236);
	RW_UNUSED(gangID);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief set_gang %1d% primary_weapon_to %2c% secondary_weapon_to %3c%

	opcode 0237
	@arg gangID Gang ID
	@arg weaponID0 Weapon ID
	@arg weaponID1 Weapon ID
*/
void opcode_0237(const ScriptArguments& args, const ScriptGang gangID, const ScriptWeaponType weaponID0, const ScriptWeaponType weaponID1) {
	RW_UNIMPLEMENTED_OPCODE(0x0237);
	RW_UNUSED(gangID);
	RW_UNUSED(weaponID0);
	RW_UNUSED(weaponID1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% run_to %2d% %3d%

	opcode 0239
	@arg character Character/ped
	@arg coord Coordinages
*/
void opcode_0239(const ScriptArguments& args, const ScriptCharacter character, ScriptVec2 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0239);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief has_player_collided_with_object %1d% %2d%

	opcode 023a
	@arg player 
	@arg object 
*/
void opcode_023a(const ScriptArguments& args, const ScriptPlayer player, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x023a);
	RW_UNUSED(player);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief has_actor_collided_with_object %1d% %2d%

	opcode 023b
	@arg character Character/ped
	@arg object Object
*/
void opcode_023b(const ScriptArguments& args, const ScriptCharacter character, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x023b);
	RW_UNUSED(character);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief load_special_actor %2d% as %1d%

	opcode 023c
	@arg arg1 
	@arg arg2 
*/
void opcode_023c(const ScriptArguments& args, const ScriptInt arg1, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x023c);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   special_actor %1d% loaded

	opcode 023d
	@arg arg1 
*/
bool opcode_023d(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x023d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief flash_object %1d% %2d%

	opcode 0240
	@arg object Object
	@arg arg2 Boolean true/false
*/
void opcode_0240(const ScriptArguments& args, const ScriptObject object, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0240);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% in_remote_mode

	opcode 0241
	@arg player Player
*/
bool opcode_0241(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0241);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_car %1d% bomb_status_to %2d%

	opcode 0242
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_0242(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptCarBomb arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0242);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% ped_stats_to %2d%

	opcode 0243
	@arg character Character/ped
	@arg arg2 
*/
void opcode_0243(const ScriptArguments& args, const ScriptCharacter character, const ScriptPedStat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0243);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_cutscene_pos %1d% %2d% %3d%

	opcode 0244
	@arg coord Coordinages
*/
void opcode_0244(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0244);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% walk_style_to %2d%

	opcode 0245
	@arg character Character/ped
	@arg arg2 
*/
void opcode_0245(const ScriptArguments& args, const ScriptCharacter character, const ScriptAnim arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0245);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief request_model %1o%

	opcode 0247
	@arg model Model ID
*/
void opcode_0247(const ScriptArguments& args, const ScriptModel model) {
	RW_UNIMPLEMENTED_OPCODE(0x0247);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief   model %1o% available

	opcode 0248
	@arg model Model ID
*/
bool opcode_0248(const ScriptArguments& args, const ScriptModel model) {
	RW_UNIMPLEMENTED_OPCODE(0x0248);
	RW_UNUSED(model);
	RW_UNUSED(args);
	return false;
}

/**
	@brief release_model %1o%

	opcode 0249
	@arg model Model ID
*/
void opcode_0249(const ScriptArguments& args, const ScriptModel model) {
	RW_UNIMPLEMENTED_OPCODE(0x0249);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief %3d% = create_phone_at %1d% %2d%

	opcode 024a
	@arg coord Coordinages
	@arg phone Handle
*/
void opcode_024a(const ScriptArguments& args, ScriptVec2 coord, ScriptPhone& phone) {
	RW_UNIMPLEMENTED_OPCODE(0x024a);
	RW_UNUSED(coord);
	RW_UNUSED(phone);
	RW_UNUSED(args);
}

/**
	@brief text_phone_repeatedly %1d% %2g%

	opcode 024b
	@arg phone 
	@arg arg2 
*/
void opcode_024b(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x024b);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief text_phone %1d% %2g%

	opcode 024c
	@arg phone 
	@arg arg2 
*/
void opcode_024c(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x024c);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   phone_text_been_displayed %1d%

	opcode 024d
	@arg phone 
*/
bool opcode_024d(const ScriptArguments& args, const ScriptPhone phone) {
	RW_UNIMPLEMENTED_OPCODE(0x024d);
	RW_UNUSED(phone);
	RW_UNUSED(args);
	return false;
}

/**
	@brief disable_phone %1d%

	opcode 024e
	@arg phone 
*/
void opcode_024e(const ScriptArguments& args, const ScriptPhone phone) {
	RW_UNIMPLEMENTED_OPCODE(0x024e);
	RW_UNUSED(phone);
	RW_UNUSED(args);
}

/**
	@brief create_corona %4d% %5d% %6d% with_color %7d% %8d% %9d% at_point %1d% %2d% %3d%

	opcode 024f
	@arg coord Coordinages
	@arg radius Radius
	@arg arg5 
	@arg arg6 Boolean true/false
	@arg colour Colour (0-255)
*/
void opcode_024f(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius, const ScriptCoronaType arg5, const ScriptBoolean arg6, ScriptRGB colour) {
	RW_UNIMPLEMENTED_OPCODE(0x024f);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief create_light_at %1d% %2d% %3d% RGB_values %4d% %5d% %6d%

	opcode 0250
	@arg coord Coordinages
	@arg colour Colour (0-255)
*/
void opcode_0250(const ScriptArguments& args, ScriptVec3 coord, ScriptRGB colour) {
	RW_UNIMPLEMENTED_OPCODE(0x0250);
	RW_UNUSED(coord);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief save_current_time

	opcode 0253
*/
void opcode_0253(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0253);
	RW_UNUSED(args);
}

/**
	@brief restore_time_of_day

	opcode 0254
*/
void opcode_0254(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0254);
	RW_UNUSED(args);
}

/**
	@brief set_critical_mission_restart_at %1d% %2d% %3d% angle %4d%

	opcode 0255
	@arg coord Coordinages
	@arg angle Angle
*/
void opcode_0255(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0255);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief   is_player %1d% defined

	opcode 0256
	@arg player Player
*/
bool opcode_0256(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0256);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_actor %1d% attack_when_provoked %2d%

	opcode 0291
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0291(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0291);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %1d% = get_controller_mode

	opcode 0293
	@arg arg1 
*/
void opcode_0293(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0293);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% resprayable_to %2benabled/disabled%

	opcode 0294
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_0294(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0294);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief unload_special_actor %1d%

	opcode 0296
	@arg arg1 
*/
void opcode_0296(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0296);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief clear_rampage_kills

	opcode 0297
*/
void opcode_0297(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0297);
	RW_UNUSED(args);
}

/**
	@brief %2d% = rampage_kills %1o%

	opcode 0298
	@arg model0 Player
	@arg model1 Model ID
*/
void opcode_0298(const ScriptArguments& args, const ScriptModelID model0, ScriptInt& model1) {
	RW_UNIMPLEMENTED_OPCODE(0x0298);
	RW_UNUSED(model0);
	RW_UNUSED(model1);
	RW_UNUSED(args);
}

/**
	@brief activate_garage %1d%

	opcode 0299
	@arg garage 
*/
void opcode_0299(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x0299);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_object %1o% at %2d% %3d% %4d%

	opcode 029b
	@arg model Model ID
	@arg coord Coordinages
	@arg object Object
*/
void opcode_029b(const ScriptArguments& args, const ScriptModel model, ScriptVec3 coord, ScriptObject& object) {
	RW_UNIMPLEMENTED_OPCODE(0x029b);
	RW_UNUSED(model);
	RW_UNUSED(coord);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief   is_boat %1d%

	opcode 029c
	@arg vehicle 
*/
bool opcode_029c(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x029c);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped

	opcode 029f
	@arg player 
*/
bool opcode_029f(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x029f);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% stopped

	opcode 02a0
	@arg character Character/ped
*/
bool opcode_02a0(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x02a0);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief 

	opcode 02a1
	@arg arg1 
	@arg arg2 
*/
void opcode_02a1(const ScriptArguments& args, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02a1);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief create_particle %1a% %5d% at %2d% %3d% %4d%

	opcode 02a2
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_02a2(const ScriptArguments& args, const ScriptPObject arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02a2);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief toggle_widescreen %1bon/off%

	opcode 02a3
	@arg arg1 Boolean true/false
*/
void opcode_02a3(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02a3);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_icon_marker_and_sphere %4d% at %1d% %2d% %3d%

	opcode 02a7
	@arg coord Coordinages
	@arg blipSprite Blip sprite ID
	@arg blip Blip
*/
void opcode_02a7(const ScriptArguments& args, ScriptVec3 coord, const ScriptRadarSprite blipSprite, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x02a7);
	RW_UNUSED(coord);
	RW_UNUSED(blipSprite);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_marker %4d% at %1d% %2d% %3d%

	opcode 02a8
	@arg coord Coordinages
	@arg blipSprite Blip sprite ID
	@arg blip Blip
*/
void opcode_02a8(const ScriptArguments& args, ScriptVec3 coord, const ScriptRadarSprite blipSprite, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x02a8);
	RW_UNUSED(coord);
	RW_UNUSED(blipSprite);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief set_char_only_damaged_by_player %1d% to %2d%

	opcode 02a9
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_02a9(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02a9);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% immune_to_nonplayer %2d%

	opcode 02aa
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_02aa(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02aa);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% immunities BP %2d% FP %3d% EP %4d% CP %5d% MP %6d%

	opcode 02ab
	@arg character Character/ped
	@arg arg2 Boolean true/false
	@arg arg3 Boolean true/false
	@arg arg4 Boolean true/false
	@arg arg5 Boolean true/false
	@arg arg6 Boolean true/false
*/
void opcode_02ab(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2, const ScriptBoolean arg3, const ScriptBoolean arg4, const ScriptBoolean arg5, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02ab);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% immunities %2d% %3d% %4d% %5d% %6d%

	opcode 02ac
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
	@arg arg3 Boolean true/false
	@arg arg4 Boolean true/false
	@arg arg5 Boolean true/false
	@arg arg6 Boolean true/false
*/
void opcode_02ac(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2, const ScriptBoolean arg3, const ScriptBoolean arg4, const ScriptBoolean arg5, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02ac);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% in_area %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02ad
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg radius Radius
	@arg arg7 Boolean true/false
*/
bool opcode_02ad(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptFloat radius, const ScriptBoolean arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02ad);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(radius);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_area_on_foot %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02ae
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg radius Radius
	@arg arg7 Boolean true/false
*/
bool opcode_02ae(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptFloat radius, const ScriptBoolean arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02ae);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(radius);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_area_in_car %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02af
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg radius Radius
	@arg arg7 Boolean true/false
*/
bool opcode_02af(const ScriptArguments& args, const ScriptPlayer player, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptFloat radius, const ScriptBoolean arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02af);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(radius);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_area %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b0
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_02b0(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02b0);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_area_on_foot %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b1
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_02b1(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02b1);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_area_in_car %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b2
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_02b2(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x02b2);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_cube %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b3
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
*/
bool opcode_02b3(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b3);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b4
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
*/
bool opcode_02b4(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b4);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b5
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg radius Radius
	@arg arg9 Boolean true/false
*/
bool opcode_02b5(const ScriptArguments& args, const ScriptPlayer player, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptFloat radius, const ScriptBoolean arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b5);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(radius);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b6
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
*/
bool opcode_02b6(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b6);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b7
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
*/
bool opcode_02b7(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b7);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b8
	@arg player Player
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg radius Radius
	@arg arg9 Boolean true/false
*/
bool opcode_02b8(const ScriptArguments& args, const ScriptPlayer player, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptFloat radius, const ScriptBoolean arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02b8);
	RW_UNUSED(player);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(radius);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief deactivate_garage %1d%

	opcode 02b9
	@arg garage 
*/
void opcode_02b9(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x02b9);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief set_cop_behaviour %1b:kill/arrest%

	opcode 02bc
	@arg arg1 
*/
void opcode_02bc(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02bc);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% sunk

	opcode 02bf
	@arg vehicle Car/vehicle
*/
bool opcode_02bf(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x02bf);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set %4d% %5d% %6d% to_ped_path_coords_closest_to %1d% %2d% %3d%

	opcode 02c0
	@arg coord Coordinages
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_02c0(const ScriptArguments& args, ScriptVec3 coord, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x02c0);
	RW_UNUSED(coord);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set %4d% %5d% %6d% to_car_path_coords_closest_to %1d% %2d% %3d%

	opcode 02c1
	@arg coord Coordinages
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_02c1(const ScriptArguments& args, ScriptVec3 coord, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x02c1);
	RW_UNUSED(coord);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief car %1d% drive_to_point %2d% %3d% %4d%

	opcode 02c2
	@arg vehicle Car/vehicle
	@arg coord Coordinages
*/
void opcode_02c2(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x02c2);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief create_donkey_mags %1d%

	opcode 02c3
	@arg arg1 
*/
void opcode_02c3(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02c3);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %1d% = donkey_mags_picked_up

	opcode 02c5
	@arg arg1 
*/
void opcode_02c5(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02c5);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief remove_pickup_items_from_ground

	opcode 02c6
*/
void opcode_02c6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02c6);
	RW_UNUSED(args);
}

/**
	@brief scatter_platinum %5d% at %1d% %2d% %3d% %4d%

	opcode 02c7
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_02c7(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02c7);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief %1d% = platinum_pieces_in_car

	opcode 02c8
	@arg arg1 
*/
void opcode_02c8(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02c8);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief remove_platinum_from_car

	opcode 02c9
*/
void opcode_02c9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02c9);
	RW_UNUSED(args);
}

/**
	@brief   is_car_on_screen %1d% 

	opcode 02ca
	@arg vehicle Car/vehicle
*/
bool opcode_02ca(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x02ca);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_actor_on_screen %1d% 

	opcode 02cb
	@arg character Character/ped
*/
bool opcode_02cb(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x02cb);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_object_on_screen %1d% 

	opcode 02cc
	@arg object Object
*/
bool opcode_02cc(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x02cc);
	RW_UNUSED(object);
	RW_UNUSED(args);
	return false;
}

/**
	@brief call %1p% %2p%

	opcode 02cd
	@arg arg1 
	@arg arg2 
*/
void opcode_02cd(const ScriptArguments& args, const ScriptLabel arg1, const ScriptLabel arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02cd);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief get_ground_z_for_3d_coord %1d% %2d% %3d% store_to %4d%

	opcode 02ce
	@arg coord Coordinages
	@arg zCoord Z Coord
*/
void opcode_02ce(const ScriptArguments& args, ScriptVec3 coord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x02ce);
	RW_UNUSED(coord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_fire_at %1d% %2d% %3d%

	opcode 02cf
	@arg coord Coordinages
	@arg fire 
*/
void opcode_02cf(const ScriptArguments& args, ScriptVec3 coord, ScriptFire& fire) {
	RW_UNIMPLEMENTED_OPCODE(0x02cf);
	RW_UNUSED(coord);
	RW_UNUSED(fire);
	RW_UNUSED(args);
}

/**
	@brief   fire %1d% extinguished

	opcode 02d0
	@arg fire Fire
*/
bool opcode_02d0(const ScriptArguments& args, const ScriptFire fire) {
	RW_UNIMPLEMENTED_OPCODE(0x02d0);
	RW_UNUSED(fire);
	RW_UNUSED(args);
	return false;
}

/**
	@brief remove_fire %1d%

	opcode 02d1
	@arg fire Fire
*/
void opcode_02d1(const ScriptArguments& args, const ScriptFire fire) {
	RW_UNIMPLEMENTED_OPCODE(0x02d1);
	RW_UNUSED(fire);
	RW_UNUSED(args);
}

/**
	@brief boat %1d% drive_to %2d% %3d% %4d%

	opcode 02d3
	@arg vehicle Car/vehicle
	@arg coord Coordinages
*/
void opcode_02d3(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x02d3);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief boat_stop %1d%

	opcode 02d4
	@arg vehicle Car/vehicle
*/
void opcode_02d4(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x02d4);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% firing_weapons_in_rectangle %2d% %3d% %4d% %5d% %6d%

	opcode 02d5
	@arg player 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_02d5(const ScriptArguments& args, const ScriptPlayer player, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02d5);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% currentweapon == %2c%

	opcode 02d7
	@arg player 
	@arg arg2 
*/
bool opcode_02d7(const ScriptArguments& args, const ScriptPlayer player, const ScriptWeaponType arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02d7);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% current_weapon == %2c%

	opcode 02d8
	@arg character Character/ped
	@arg weaponID Weapon ID
*/
bool opcode_02d8(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID) {
	RW_UNIMPLEMENTED_OPCODE(0x02d8);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(args);
	return false;
}

/**
	@brief donkey_mags_picked_up = none

	opcode 02d9
*/
void opcode_02d9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02d9);
	RW_UNUSED(args);
}

/**
	@brief set_boat %1d% speed_to %2d%

	opcode 02db
	@arg vehicle 
	@arg arg2 
*/
void opcode_02db(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02db);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief get_random_actor %2d% in_zone %1s%

	opcode 02dd
	@arg areaName Area name
	@arg character Character/ped
*/
void opcode_02dd(const ScriptArguments& args, const ScriptString areaName, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x02dd);
	RW_UNUSED(areaName);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% driving_taxi_vehicle

	opcode 02de
	@arg player 
*/
bool opcode_02de(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x02de);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief player %1d% agressive

	opcode 02df
	@arg player 
*/
void opcode_02df(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x02df);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief   actor %1d% firing_weapon

	opcode 02e0
	@arg character Character/ped
*/
bool opcode_02e0(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x02e0);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %5d% = create_cash_pickup %4d% at %1d% %2d% %3d%

	opcode 02e1
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg pickup 
*/
void opcode_02e1(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4, ScriptPickup& pickup) {
	RW_UNIMPLEMENTED_OPCODE(0x02e1);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(pickup);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% weapon_accuracy_to %2d%

	opcode 02e2
	@arg character Character/ped
	@arg arg2 
*/
void opcode_02e2(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02e2);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% speed

	opcode 02e3
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_02e3(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02e3);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief load_cutscene_data %1s%

	opcode 02e4
	@arg arg1 
*/
void opcode_02e4(const ScriptArguments& args, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02e4);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %2d% = create_cutscene_object %1o%

	opcode 02e5
	@arg model Model ID
	@arg object Object
*/
void opcode_02e5(const ScriptArguments& args, const ScriptModelID model, ScriptObject& object) {
	RW_UNIMPLEMENTED_OPCODE(0x02e5);
	RW_UNUSED(model);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief set_cutscene_anim %1d% %2s%

	opcode 02e6
	@arg object Player
	@arg arg2 
*/
void opcode_02e6(const ScriptArguments& args, const ScriptObject object, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02e6);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief start_cutscene

	opcode 02e7
*/
void opcode_02e7(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02e7);
	RW_UNUSED(args);
}

/**
	@brief %1d% = cutscenetime

	opcode 02e8
	@arg arg1 
*/
void opcode_02e8(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02e8);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief cutscene_reached_end

	opcode 02e9
*/
void opcode_02e9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02e9);
	RW_UNUSED(args);
}

/**
	@brief end_cutscene

	opcode 02ea
*/
void opcode_02ea(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02ea);
	RW_UNUSED(args);
}

/**
	@brief restore_camera_jumpcut

	opcode 02eb
*/
void opcode_02eb(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02eb);
	RW_UNUSED(args);
}

/**
	@brief put_hidden_package_at %1d% %2d% %3d%

	opcode 02ec
	@arg coord Coordinages
*/
void opcode_02ec(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x02ec);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief set_total_hidden_packages_to %1d%

	opcode 02ed
	@arg arg1 
*/
void opcode_02ed(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ed);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   is_projectile_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 02ee
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
bool opcode_02ee(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ee);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief destroy_projectiles_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 02ef
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_02ef(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02ef);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief drop_nautical_mine_at %1d% %2d% %3d%

	opcode 02f1
	@arg coord Coordinages
*/
void opcode_02f1(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x02f1);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief   actor %1d% model == %2h%

	opcode 02f2
	@arg character Character/ped
	@arg model Model ID
*/
bool opcode_02f2(const ScriptArguments& args, const ScriptCharacter character, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x02f2);
	RW_UNUSED(character);
	RW_UNUSED(model);
	RW_UNUSED(args);
	return false;
}

/**
	@brief load_object %1o% %2f%

	opcode 02f3
	@arg model Model ID
	@arg arg2 
*/
void opcode_02f3(const ScriptArguments& args, const ScriptModelID model, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02f3);
	RW_UNUSED(model);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief create_cutscene_actor %3d% from_head %2o% and_body %1d%

	opcode 02f4
	@arg object0 
	@arg model 
	@arg object1 
*/
void opcode_02f4(const ScriptArguments& args, const ScriptObject object0, const ScriptModelID model, ScriptObject& object1) {
	RW_UNIMPLEMENTED_OPCODE(0x02f4);
	RW_UNUSED(object0);
	RW_UNUSED(model);
	RW_UNUSED(object1);
	RW_UNUSED(args);
}

/**
	@brief set_head_anim %1d% %2s%

	opcode 02f5
	@arg object 
	@arg arg2 
*/
void opcode_02f5(const ScriptArguments& args, const ScriptObject object, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02f5);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = sine %1d%

	opcode 02f6
	@arg angle Angle
	@arg xOffset X offset
*/
void opcode_02f6(const ScriptArguments& args, const ScriptFloat angle, ScriptFloat& xOffset) {
	RW_UNIMPLEMENTED_OPCODE(0x02f6);
	RW_UNUSED(angle);
	RW_UNUSED(xOffset);
	RW_UNUSED(args);
}

/**
	@brief %2d% = cosine %1d%

	opcode 02f7
	@arg angle Angle
	@arg yOffset Y offset
*/
void opcode_02f7(const ScriptArguments& args, const ScriptFloat angle, ScriptFloat& yOffset) {
	RW_UNIMPLEMENTED_OPCODE(0x02f7);
	RW_UNUSED(angle);
	RW_UNUSED(yOffset);
	RW_UNUSED(args);
}

/**
	@brief get_car %1d% Z_angle_sine_to %2d%

	opcode 02f8
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_02f8(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02f8);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief get_car %1d% Z_angle_cosine_to %2d%

	opcode 02f9
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_02f9(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02f9);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief garage %1d% change_to_type %2d%

	opcode 02fa
	@arg garage0 
	@arg garage1 
*/
void opcode_02fa(const ScriptArguments& args, const ScriptGarage garage0, const ScriptGarageType garage1) {
	RW_UNIMPLEMENTED_OPCODE(0x02fa);
	RW_UNUSED(garage0);
	RW_UNUSED(garage1);
	RW_UNUSED(args);
}

/**
	@brief create_crusher_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 02fb
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
	@arg arg10 
*/
void opcode_02fb(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptFloat arg9, const ScriptFloat arg10) {
	RW_UNIMPLEMENTED_OPCODE(0x02fb);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(args);
}

/**
	@brief text_2numbers %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fc
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_02fc(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02fc);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief text_2numbers_lowpriority %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fd
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg time Time (ms)
	@arg arg5 
*/
void opcode_02fd(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt time, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02fd);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(time);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief text_2numbers_highpriority %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fe
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_02fe(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02fe);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief text_3numbers %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 02ff
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg time Time (ms)
	@arg arg6 
*/
void opcode_02ff(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt time, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02ff);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(time);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_3numbers_highpriority %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 0300
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg time Time (ms)
	@arg arg6 
*/
void opcode_0300(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt time, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0300);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(time);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_3numbers_lowpriority %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 0301
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg time Time (ms)
	@arg arg6 
*/
void opcode_0301(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt time, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0301);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(time);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_4numbers %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0302
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg time Time (ms)
	@arg arg7 
*/
void opcode_0302(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt time, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0302);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(time);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief text_4numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0303
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg time Time (ms)
	@arg arg7 
*/
void opcode_0303(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt time, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0303);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(time);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief text_4numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0304
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg time Time (ms)
	@arg arg7 
*/
void opcode_0304(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt time, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0304);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(time);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief text_5numbers %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0305
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg time Time (ms)
	@arg arg8 
*/
void opcode_0305(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt time, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0305);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(time);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief text_5numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0306
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg time Time (ms)
	@arg arg8 
*/
void opcode_0306(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt time, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0306);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(time);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief text_5numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0307
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg time Time (ms)
	@arg arg8 
*/
void opcode_0307(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt time, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0307);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(time);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief text_6numbers %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0308
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg time Time (ms)
	@arg arg9 
*/
void opcode_0308(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt time, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x0308);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(time);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief text_6numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0309
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg time Time (ms)
	@arg arg9 
*/
void opcode_0309(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt time, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x0309);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(time);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief text_6numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 030a
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
*/
void opcode_030a(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x030a);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief set_mission_points += %1d%

	opcode 030c
	@arg arg1 
*/
void opcode_030c(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x030c);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_total_mission_points_to %1d%

	opcode 030d
	@arg arg1 
*/
void opcode_030d(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x030d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_jump_distance %1d%

	opcode 030e
	@arg arg1 
*/
void opcode_030e(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x030e);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_jump_height %1d%

	opcode 030f
	@arg arg1 
*/
void opcode_030f(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x030f);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_jump_flips %1d%

	opcode 0310
	@arg arg1 
*/
void opcode_0310(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0310);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_jump_rotation %1d%

	opcode 0311
	@arg arg1 
*/
void opcode_0311(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0311);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_jump_type %1d%

	opcode 0312
	@arg arg1 
*/
void opcode_0312(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0312);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief increment_unique_jumps_found

	opcode 0313
*/
void opcode_0313(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0313);
	RW_UNUSED(args);
}

/**
	@brief set_total_unique_jumps_to %1d%

	opcode 0314
	@arg arg1 
*/
void opcode_0314(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0314);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief increment_taxi_dropoffs

	opcode 0315
*/
void opcode_0315(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0315);
	RW_UNUSED(args);
}

/**
	@brief save_taxi_earnings_from %1d%

	opcode 0316
	@arg arg1 
*/
void opcode_0316(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0316);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief increment_mission_attempts

	opcode 0317
*/
void opcode_0317(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0317);
	RW_UNUSED(args);
}

/**
	@brief set_latest_mission_passed %1g%

	opcode 0318
	@arg gxtEntry GXT entry
*/
void opcode_0318(const ScriptArguments& args, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x0318);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% running %2b:true/false%

	opcode 0319
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0319(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0319);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief remove_all_fires

	opcode 031a
*/
void opcode_031a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x031a);
	RW_UNUSED(args);
}

/**
	@brief   actor %1d% hit_by_weapon %2d%

	opcode 031d
	@arg character Character/ped
	@arg weaponID Weapon ID
*/
bool opcode_031d(const ScriptArguments& args, const ScriptCharacter character, const ScriptWeaponType weaponID) {
	RW_UNIMPLEMENTED_OPCODE(0x031d);
	RW_UNUSED(character);
	RW_UNUSED(weaponID);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   vehicle %1d% hit_by_weapon %2h%

	opcode 031e
	@arg vehicle Car/vehicle
	@arg weaponID Weapon ID
*/
bool opcode_031e(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptWeaponType weaponID) {
	RW_UNIMPLEMENTED_OPCODE(0x031e);
	RW_UNUSED(vehicle);
	RW_UNUSED(weaponID);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   unknown_actor %1d% unknown_actor %2d%

	opcode 031f
	@arg character0 Character/ped
	@arg character1 Character/ped
*/
bool opcode_031f(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1) {
	RW_UNIMPLEMENTED_OPCODE(0x031f);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% in_range_of_player %2d%

	opcode 0320
	@arg character Character/ped
	@arg player Player
*/
bool opcode_0320(const ScriptArguments& args, const ScriptCharacter character, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0320);
	RW_UNUSED(character);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief kill_actor %1d%

	opcode 0321
	@arg character Character/ped
*/
void opcode_0321(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0321);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief kill_player %1d%

	opcode 0322
	@arg player Player
*/
void opcode_0322(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0322);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief enable_boat %1d% anchor %2d%

	opcode 0323
	@arg vehicle 
	@arg arg2 Boolean true/false
*/
void opcode_0323(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0323);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_zone_pedgroup_info %1z% %2b:day/night% %3u%

	opcode 0324
	@arg arg1 
	@arg arg2 Boolean true/false
	@arg arg3 
*/
void opcode_0324(const ScriptArguments& args, const ScriptString arg1, const ScriptBoolean arg2, const ScriptPedGrp arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0324);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_car_on_fire %1d% store_to %2d%

	opcode 0325
	@arg vehicle Car/vehicle
	@arg fire Fire
*/
void opcode_0325(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptFire& fire) {
	RW_UNIMPLEMENTED_OPCODE(0x0325);
	RW_UNUSED(vehicle);
	RW_UNUSED(fire);
	RW_UNUSED(args);
}

/**
	@brief set_actor_on_fire %1d% fire store_to %2d%

	opcode 0326
	@arg character Character/ped
	@arg fire Fire
*/
void opcode_0326(const ScriptArguments& args, const ScriptCharacter character, ScriptFire& fire) {
	RW_UNIMPLEMENTED_OPCODE(0x0326);
	RW_UNUSED(character);
	RW_UNUSED(fire);
	RW_UNUSED(args);
}

/**
	@brief %6d% = get_random_car_of_type %5d% in_area %1d% %2d% to %3d% %4d%

	opcode 0327
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg model Model ID
	@arg vehicle Car/vehicle
*/
void opcode_0327(const ScriptArguments& args, ScriptVec2 coord0, ScriptVec2 coord1, const ScriptModelID model, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0327);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(model);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   garage %1d% respray_done

	opcode 0329
	@arg garage Handle
*/
bool opcode_0329(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x0329);
	RW_UNUSED(garage);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_behind_camera_mode_to %1h%

	opcode 032a
	@arg arg1 
*/
void opcode_032a(const ScriptArguments& args, const ScriptCamZoom arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x032a);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %7d% = create_weapon_pickup %1o% type %2d% ammo %3d% at %4d% %5d% %6d%

	opcode 032b
	@arg model Model ID
	@arg pickup0 Weapon ID
	@arg arg3 
	@arg coord Coordinages
	@arg pickup1 Player
*/
void opcode_032b(const ScriptArguments& args, const ScriptModel model, const ScriptPickupType pickup0, const ScriptInt arg3, ScriptVec3 coord, ScriptPickup& pickup1) {
	RW_UNIMPLEMENTED_OPCODE(0x032b);
	RW_UNUSED(model);
	RW_UNUSED(pickup0);
	RW_UNUSED(arg3);
	RW_UNUSED(coord);
	RW_UNUSED(pickup1);
	RW_UNUSED(args);
}

/**
	@brief car %1d% ram %2d%

	opcode 032c
	@arg vehicle0 Car/vehicle
	@arg vehicle1 Car/vehicle
*/
void opcode_032c(const ScriptArguments& args, const ScriptVehicle vehicle0, const ScriptVehicle vehicle1) {
	RW_UNIMPLEMENTED_OPCODE(0x032c);
	RW_UNUSED(vehicle0);
	RW_UNUSED(vehicle1);
	RW_UNUSED(args);
}

/**
	@brief car %1d% block %2d%

	opcode 032d
	@arg vehicle0 
	@arg vehicle1 
*/
void opcode_032d(const ScriptArguments& args, const ScriptVehicle vehicle0, const ScriptVehicle vehicle1) {
	RW_UNIMPLEMENTED_OPCODE(0x032d);
	RW_UNUSED(vehicle0);
	RW_UNUSED(vehicle1);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% infinite_run_to %2b:true/false%

	opcode 0330
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0330(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0330);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% fast_reload %2h%

	opcode 0331
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0331(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0331);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% bleeding_to %2b:true/false%

	opcode 0332
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0332(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0332);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_free_paynspray_to %1b:true/false%

	opcode 0335
	@arg arg1 Boolean true/false
*/
void opcode_0335(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0335);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% visible %2d%

	opcode 0336
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0336(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0336);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% visible %2h%

	opcode 0337
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0337(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0337);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   objects_in_cube %1d% %2d% %3d% to %4d% %5d% %6d% flags %7d% %8d% %9d% %10d% %11d%

	opcode 0339
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg arg7 Boolean true/false
	@arg arg8 Boolean true/false
	@arg arg9 Boolean true/false
	@arg arg10 Boolean true/false
	@arg arg11 Boolean true/false
*/
bool opcode_0339(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1, const ScriptBoolean arg7, const ScriptBoolean arg8, const ScriptBoolean arg9, const ScriptBoolean arg10, const ScriptBoolean arg11) {
	RW_UNIMPLEMENTED_OPCODE(0x0339);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(arg11);
	RW_UNUSED(args);
	return false;
}

/**
	@brief create_incoming_cessna

	opcode 033a
*/
void opcode_033a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033a);
	RW_UNUSED(args);
}

/**
	@brief   incoming_cessna_landed

	opcode 033b
*/
bool opcode_033b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033b);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   incoming_cessna_destroyed

	opcode 033c
*/
bool opcode_033c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033c);
	RW_UNUSED(args);
	return false;
}

/**
	@brief text_draw %1d% %2d% %3g%

	opcode 033e
	@arg pixelX 2D pixel X
	@arg pixelY 2D pixel Y
	@arg gxtEntry GXT entry
*/
void opcode_033e(const ScriptArguments& args, const ScriptFloat pixelX, const ScriptFloat pixelY, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x033e);
	RW_UNUSED(pixelX);
	RW_UNUSED(pixelY);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_letter_width_height %1d% %2d%

	opcode 033f
	@arg arg1 
	@arg arg2 
*/
void opcode_033f(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x033f);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_color %1d% %2d% %3d% %4d%

	opcode 0340
	@arg colour Colour (0-255)
*/
void opcode_0340(const ScriptArguments& args, ScriptRGBA colour) {
	RW_UNIMPLEMENTED_OPCODE(0x0340);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_align_justify %1d%

	opcode 0341
	@arg arg1 Boolean true/false
*/
void opcode_0341(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0341);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_centered %1d%

	opcode 0342
	@arg arg1 Boolean true/false
*/
void opcode_0342(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0342);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_text_linewidth %1d%

	opcode 0343
	@arg pixelX 2D pixel X
*/
void opcode_0343(const ScriptArguments& args, const ScriptFloat pixelX) {
	RW_UNIMPLEMENTED_OPCODE(0x0343);
	RW_UNUSED(pixelX);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_linewidth %1d% for_centered_text

	opcode 0344
	@arg arg1 
*/
void opcode_0344(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0344);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief enable_text_draw_background %1d%

	opcode 0345
	@arg arg1 Boolean true/false
*/
void opcode_0345(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0345);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_background_color %1d% %2d% %3d% %4d%

	opcode 0346
	@arg colour Colour (0-255)
*/
void opcode_0346(const ScriptArguments& args, ScriptRGBA colour) {
	RW_UNIMPLEMENTED_OPCODE(0x0346);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief enable_text_draw_proportional %1d%

	opcode 0348
	@arg arg1 Boolean true/false
*/
void opcode_0348(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0348);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief text_draw_style = %1d%

	opcode 0349
	@arg arg1 
*/
void opcode_0349(const ScriptArguments& args, const ScriptFont arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0349);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief portland_complete

	opcode 034a
*/
void opcode_034a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034a);
	RW_UNUSED(args);
}

/**
	@brief staunton_complete

	opcode 034b
*/
void opcode_034b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034b);
	RW_UNUSED(args);
}

/**
	@brief shoreside_complete

	opcode 034c
*/
void opcode_034c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034c);
	RW_UNUSED(args);
}

/**
	@brief rotate_object %1d% from_angle %2d% to %3d% collision_check %4d%

	opcode 034d
	@arg object Object
	@arg angle0 Angle
	@arg angle1 Angle
	@arg arg4 Boolean true/false
*/
void opcode_034d(const ScriptArguments& args, const ScriptObject object, const ScriptFloat angle0, const ScriptFloat angle1, const ScriptBoolean arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x034d);
	RW_UNUSED(object);
	RW_UNUSED(angle0);
	RW_UNUSED(angle1);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief move_object %1d% to %2d% %3d% %4d% speed %5d% %6d% %7d% collision_check %8d%

	opcode 034e
	@arg object Object
	@arg coord Coordinages
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 Boolean true/false
*/
void opcode_034e(const ScriptArguments& args, const ScriptObject object, ScriptVec3 coord, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptBoolean arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x034e);
	RW_UNUSED(object);
	RW_UNUSED(coord);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief destroy_actor_with_fade %1d%

	opcode 034f
	@arg character Character/ped
*/
void opcode_034f(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x034f);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% maintain_position_when_attacked %2d%

	opcode 0350
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0350(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0350);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   gore_enabled

	opcode 0351
*/
bool opcode_0351(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0351);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_actor %1d% skin_to %2s%

	opcode 0352
	@arg character Character/ped
	@arg arg2 
*/
void opcode_0352(const ScriptArguments& args, const ScriptCharacter character, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0352);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief refresh_actor %1d%

	opcode 0353
	@arg character Character/ped
*/
void opcode_0353(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0353);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_up_chase_scene %1d%

	opcode 0354
	@arg arg1 
*/
void opcode_0354(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0354);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief clean_up_chase_scene

	opcode 0355
*/
void opcode_0355(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0355);
	RW_UNUSED(args);
}

/**
	@brief   explosion_type %1d% in_cube %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 0356
	@arg explosionID Explosion ID
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
bool opcode_0356(const ScriptArguments& args, const ScriptExplosion explosionID, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0356);
	RW_UNUSED(explosionID);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief  explosion_type %1d% in_zone %2z%

	opcode 0357
	@arg explosionID Explosion ID
	@arg areaName Area name
*/
void opcode_0357(const ScriptArguments& args, const ScriptExplosion explosionID, const ScriptString areaName) {
	RW_UNIMPLEMENTED_OPCODE(0x0357);
	RW_UNUSED(explosionID);
	RW_UNUSED(areaName);
	RW_UNUSED(args);
}

/**
	@brief start_drug_drop_off

	opcode 0358
*/
void opcode_0358(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0358);
	RW_UNUSED(args);
}

/**
	@brief   drop_off_cessna_shot_down

	opcode 0359
*/
bool opcode_0359(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0359);
	RW_UNUSED(args);
	return false;
}

/**
	@brief find_drop_off_plane_coords %1d% %2d% %3d%

	opcode 035a
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_035a(const ScriptArguments& args, ScriptFloat& arg1, ScriptFloat& arg2, ScriptFloat& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x035a);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_drop_off_package %1d% %2d% %3d%

	opcode 035b
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg pickup 
*/
void opcode_035b(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, ScriptPickup& pickup) {
	RW_UNIMPLEMENTED_OPCODE(0x035b);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(pickup);
	RW_UNUSED(args);
}

/**
	@brief place_object %1d% relative_to_car %2d% offset %3d% %4d% %5d%

	opcode 035c
	@arg object Object
	@arg vehicle Car/vehicle
	@arg offset Offset
*/
void opcode_035c(const ScriptArguments& args, const ScriptObject object, const ScriptVehicle vehicle, ScriptVec3 offset) {
	RW_UNIMPLEMENTED_OPCODE(0x035c);
	RW_UNUSED(object);
	RW_UNUSED(vehicle);
	RW_UNUSED(offset);
	RW_UNUSED(args);
}

/**
	@brief make_object %1d% targetable

	opcode 035d
	@arg object Object
*/
void opcode_035d(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x035d);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% armour_to %2d%

	opcode 035e
	@arg player Player
	@arg arg2 
*/
void opcode_035e(const ScriptArguments& args, const ScriptPlayer player, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x035e);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% armour_to %2d%

	opcode 035f
	@arg character Character/ped
	@arg arg2 
*/
void opcode_035f(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x035f);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief open_garage %1d%

	opcode 0360
	@arg garage 
*/
void opcode_0360(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x0360);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief close_garage %1d%

	opcode 0361
	@arg garage 
*/
void opcode_0361(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x0361);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief remove_actor %1d% from_car_and_place_at %2d% %3d% %4d%

	opcode 0362
	@arg character Character/ped
	@arg coord Coordinages
*/
void opcode_0362(const ScriptArguments& args, const ScriptCharacter character, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x0362);
	RW_UNUSED(character);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief toggle_model_render_at %1d% %2d% %3d% radius %4d% object %5o% %6d%

	opcode 0363
	@arg coord Coordinages
	@arg radius Radius
	@arg model Model ID
	@arg arg6 Boolean true/false
*/
void opcode_0363(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius, const ScriptModel model, const ScriptBoolean arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0363);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(model);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% objective_hail_taxi

	opcode 0365
	@arg character Character/ped
*/
void opcode_0365(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0365);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief    had_object_been_damaged %1d%

	opcode 0366
	@arg object Object
*/
bool opcode_0366(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x0366);
	RW_UNUSED(object);
	RW_UNUSED(args);
	return false;
}

/**
	@brief init_headshot_rampage %1g% weapon %2d% time %3d% %4d% targets %5o% %6o% %7o% %8o% flag %9d%

	opcode 0367
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg model0 Model ID
	@arg model1 Model ID
	@arg model2 Model ID
	@arg model3 Model ID
	@arg arg9 Boolean true/false
*/
void opcode_0367(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptWeaponType arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptModelID model0, const ScriptModelID model1, const ScriptModelID model2, const ScriptModelID model3, const ScriptBoolean arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x0367);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(model0);
	RW_UNUSED(model1);
	RW_UNUSED(model2);
	RW_UNUSED(model3);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief create_ev_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 0368
	@arg coord0 Coordinages
	@arg coord1 Coordinages
	@arg coord2 Coordinages
	@arg coord3 Coordinages
	@arg arg9 
	@arg arg10 
*/
void opcode_0368(const ScriptArguments& args, ScriptVec2 coord0, ScriptVec2 coord1, ScriptVec2 coord2, ScriptVec2 coord3, const ScriptFloat arg9, const ScriptFloat arg10) {
	RW_UNIMPLEMENTED_OPCODE(0x0368);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(coord2);
	RW_UNUSED(coord3);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(args);
}

/**
	@brief put_player %1d% in_car %2d%

	opcode 0369
	@arg player Player
	@arg vehicle Car/vehicle
*/
void opcode_0369(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0369);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief put_actor %1d% in_car %2d%

	opcode 036a
	@arg character Character/ped
	@arg vehicle Car/vehicle
*/
void opcode_036a(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x036a);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief text_2numbers_styled %1g% numbers %2d% %3d% duration %4d% ms style %5d%

	opcode 036d
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg time Time (ms)
	@arg arg5 
*/
void opcode_036d(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt time, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x036d);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(time);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief text_3numbers_styled %1g% numbers %2d% %3d% %4d% duration %5d% ms style %6d%

	opcode 036e
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_036e(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x036e);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_4numbers_styled %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 036f
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_036f(const ScriptArguments& args, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x036f);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief text_5numbers_styled %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0370
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg time Time (ms)
	@arg arg8 
*/
void opcode_0370(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt time, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0370);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(time);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief text_6numbers_styled %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0371
	@arg gxtEntry GXT entry
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg time Time (ms)
	@arg arg9 
*/
void opcode_0371(const ScriptArguments& args, const ScriptString gxtEntry, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt time, const ScriptInt arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x0371);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(time);
	RW_UNUSED(arg9);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% anim %2d% wait_state_time %3d% ms

	opcode 0372
	@arg character Character/ped
	@arg arg2 
	@arg time Time (ms)
*/
void opcode_0372(const ScriptArguments& args, const ScriptCharacter character, const ScriptWaitState arg2, const ScriptInt time) {
	RW_UNIMPLEMENTED_OPCODE(0x0372);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief set_camera_directly_behind_player

	opcode 0373
*/
void opcode_0373(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0373);
	RW_UNUSED(args);
}

/**
	@brief set_motion_blur %1d%

	opcode 0374
	@arg arg1 
*/
void opcode_0374(const ScriptArguments& args, const ScriptMotionBlur arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0374);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief text_1string %1g% %2g% duration %3d% ms flag %4d%

	opcode 0375
	@arg gxtEntry0 GXT entry
	@arg gxtEntry1 GXT entry
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_0375(const ScriptArguments& args, const ScriptString gxtEntry0, const ScriptString gxtEntry1, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0375);
	RW_UNUSED(gxtEntry0);
	RW_UNUSED(gxtEntry1);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief %4d% = create_random_actor %1d% %2d% %3d%

	opcode 0376
	@arg coord Coordinages
	@arg character Character/ped
*/
void opcode_0376(const ScriptArguments& args, ScriptVec3 coord, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x0376);
	RW_UNUSED(coord);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% steal_any_car

	opcode 0377
	@arg character Character/ped
*/
void opcode_0377(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0377);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief text_phone_1string_repeatedly %1d% %2g% %3g%  

	opcode 0378
	@arg phone 
	@arg arg2 
	@arg arg3 
*/
void opcode_0378(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0378);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief text_phone_1string %1d% %2g% %3g%  

	opcode 0379
	@arg phone 
	@arg arg2 
	@arg arg3 
*/
void opcode_0379(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0379);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief text_phone_2strings_repeatedly %1d% %2g% %3g% %4g%  

	opcode 037a
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_037a(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x037a);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_phone_2strings %1d% %2g% %3g% %4g%  

	opcode 037b
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_037b(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x037b);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_phone_3strings_repeatedly %1d% %2g% %3g% %4g% %5g%  

	opcode 037c
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_037c(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x037c);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief text_phone_3strings %1d% %2g% %3g% %4g% %5g%  

	opcode 037d
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_037d(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x037d);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief   is_sniper_bullet_in_area %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 037e
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
bool opcode_037e(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x037e);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief give_player_detonator

	opcode 037f
*/
void opcode_037f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x037f);
	RW_UNUSED(args);
}

/**
	@brief throw_object %1d% distance %2d% %3d% %4d%

	opcode 0381
	@arg object Object
	@arg offset Offset
*/
void opcode_0381(const ScriptArguments& args, const ScriptObject object, ScriptVec3 offset) {
	RW_UNIMPLEMENTED_OPCODE(0x0381);
	RW_UNUSED(object);
	RW_UNUSED(offset);
	RW_UNUSED(args);
}

/**
	@brief set_object %1d% collision_detection %2d%

	opcode 0382
	@arg object Object
	@arg arg2 Boolean true/false
*/
void opcode_0382(const ScriptArguments& args, const ScriptObject object, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0382);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% car_horn_activated

	opcode 0383
	@arg vehicle Car/vehicle
*/
bool opcode_0383(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0383);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief text_1string %1g% string %2g% duration %3d% ms flag %4d%

	opcode 0384
	@arg gxtEntry0 GXT entry
	@arg gxtEntry1 GXT entry
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_0384(const ScriptArguments& args, const ScriptString gxtEntry0, const ScriptString gxtEntry1, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0384);
	RW_UNUSED(gxtEntry0);
	RW_UNUSED(gxtEntry1);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_1string_lowpriority %1g% string %2g% duration %3d% ms flag %4d%

	opcode 0385
	@arg gxtEntry0 GXT entry
	@arg gxtEntry1 GXT entry
	@arg time Time (ms)
	@arg arg4 
*/
void opcode_0385(const ScriptArguments& args, const ScriptString gxtEntry0, const ScriptString gxtEntry1, const ScriptInt time, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0385);
	RW_UNUSED(gxtEntry0);
	RW_UNUSED(gxtEntry1);
	RW_UNUSED(time);
	RW_UNUSED(arg4);
	RW_UNUSED(args);
}

/**
	@brief text_phone_4strings_repeatedly %1d% %2g% %3g% %4g% %5g% %6g%  

	opcode 0386
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0386(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0386);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_phone_4strings %1d% %2g% %3g% %4g% %5g% %6g%  

	opcode 0387
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0387(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0387);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief text_phone_5strings_repeatedly %1d% %2g% %3g% %4g% %5g% %6g% %7g%  

	opcode 0388
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_0388(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6, const ScriptString arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0388);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief text_phone_5strings %1d% %2g% %3g% %4g% %5g% %6g% %7g%  

	opcode 0389
	@arg phone 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_0389(const ScriptArguments& args, const ScriptPhone phone, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6, const ScriptString arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0389);
	RW_UNUSED(phone);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief   car_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 038a
	@arg coord Coordinages
	@arg radius Radius
*/
bool opcode_038a(const ScriptArguments& args, ScriptVec3 coord, ScriptVec3 radius) {
	RW_UNIMPLEMENTED_OPCODE(0x038a);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(args);
	return false;
}

/**
	@brief load_all_models_now

	opcode 038b
*/
void opcode_038b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x038b);
	RW_UNUSED(args);
}

/**
	@brief object %1d% scatter %2d% %3d% %4d%

	opcode 038c
	@arg object Object
	@arg offset Offset
*/
void opcode_038c(const ScriptArguments& args, const ScriptObject object, ScriptVec3 offset) {
	RW_UNIMPLEMENTED_OPCODE(0x038c);
	RW_UNUSED(object);
	RW_UNUSED(offset);
	RW_UNUSED(args);
}

/**
	@brief draw_texture %1h% position %2d% %3d% size %4d% %5d% RGBA %6d% %7d% %8d% %9d% 

	opcode 038d
	@arg arg1 
	@arg pixelX 2D pixel X
	@arg pixelY 2D pixel Y
	@arg arg4 
	@arg arg5 
	@arg colour Colour (0-255)
*/
void opcode_038d(const ScriptArguments& args, const ScriptInt arg1, const ScriptFloat pixelX, const ScriptFloat pixelY, const ScriptFloat arg4, const ScriptFloat arg5, ScriptRGBA colour) {
	RW_UNIMPLEMENTED_OPCODE(0x038d);
	RW_UNUSED(arg1);
	RW_UNUSED(pixelX);
	RW_UNUSED(pixelY);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(colour);
	RW_UNUSED(args);
}

/**
	@brief load_texture %2h% as %1d%  

	opcode 038f
	@arg arg1 
	@arg arg2 
*/
void opcode_038f(const ScriptArguments& args, const ScriptInt arg1, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x038f);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief load_txd_dictionary %1h% 

	opcode 0390
	@arg arg1 
*/
void opcode_0390(const ScriptArguments& args, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0390);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief release_textures

	opcode 0391
*/
void opcode_0391(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0391);
	RW_UNUSED(args);
}

/**
	@brief object %1d% toggle_in_moving_list %2d%

	opcode 0392
	@arg object Object
	@arg arg2 Boolean true/false
*/
void opcode_0392(const ScriptArguments& args, const ScriptObject object, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0392);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief play_mission_passed_music %1d%

	opcode 0394
	@arg arg1 
*/
void opcode_0394(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0394);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief clear_area %5d% at %1d% %2d% range %3d% %4d%

	opcode 0395
	@arg coord Coordinages
	@arg radius Radius
	@arg arg5 Boolean true/false
*/
void opcode_0395(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius, const ScriptBoolean arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0395);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief pause_timer %1d%

	opcode 0396
	@arg arg1 Boolean true/false
*/
void opcode_0396(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0396);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief car %1d% siren = %2b:on/off%

	opcode 0397
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_0397(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0397);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief remove_forbidden_for_peds_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 0398
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_0398(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0398);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief create_forbidden_for_peds_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 0399
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_0399(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0399);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief remove_forbidden_for_cars_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 039a
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_039a(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x039a);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief create_forbidden_for_cars_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 039b
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_039b(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x039b);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% watertight %2h%

	opcode 039c
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_039c(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x039c);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief scatter_particles type %1a% %8d% %9d% %10d% %11d% %12d% from %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 039d
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
	@arg arg9 
	@arg arg10 
	@arg arg11 
	@arg arg12 
*/
void opcode_039d(const ScriptArguments& args, const ScriptPObject arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt arg11, const ScriptInt arg12) {
	RW_UNIMPLEMENTED_OPCODE(0x039d);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(arg9);
	RW_UNUSED(arg10);
	RW_UNUSED(arg11);
	RW_UNUSED(arg12);
	RW_UNUSED(args);
}

/**
	@brief set_char_cant_be_dragged_out %1d% to %2d%

	opcode 039e
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_039e(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x039e);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief turn_car %1d% to_face %2d% %3d%

	opcode 039f
	@arg vehicle Car/vehicle
	@arg coord Coordinages
*/
void opcode_039f(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptVec2 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x039f);
	RW_UNUSED(vehicle);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief   car %3d% picked_up_by_crane %1d% %2d%

	opcode 03a0
	@arg arg1 
	@arg arg2 
	@arg vehicle 
*/
bool opcode_03a0(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03a0);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief unknown_clear_point %1d% %2d% %3d% radius %4d%

	opcode 03a1
	@arg coord Coordinages
	@arg radius Radius
*/
void opcode_03a1(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius) {
	RW_UNIMPLEMENTED_OPCODE(0x03a1);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(args);
}

/**
	@brief set_car_status %1d% to %2h%

	opcode 03a2
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_03a2(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptStatus arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03a2);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief    is_char_male %1d%

	opcode 03a3
	@arg character Character/ped
*/
bool opcode_03a3(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x03a3);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief name_thread %1s%

	opcode 03a4
	@arg name Set script name
*/
void opcode_03a4(const ScriptArguments& args, const ScriptString name) {
	RW_UNIMPLEMENTED_OPCODE(0x03a4);
	RW_UNUSED(name);
	RW_UNUSED(args);
}

/**
	@brief set_garage %1d% type_to %2d% %3d%

	opcode 03a5
	@arg garage0 
	@arg garage1 
	@arg model 
*/
void opcode_03a5(const ScriptArguments& args, const ScriptGarage garage0, const ScriptGarageType garage1, const ScriptModelID model) {
	RW_UNIMPLEMENTED_OPCODE(0x03a5);
	RW_UNUSED(garage0);
	RW_UNUSED(garage1);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief get_drug_plane_coords %1d% %2d% %3d%

	opcode 03a6
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_03a6(const ScriptArguments& args, ScriptFloat& arg1, ScriptFloat& arg2, ScriptFloat& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x03a6);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief play_suspect_last_seen_at %1d% %2d% %3d%

	opcode 03aa
	@arg coord Coordinages
*/
void opcode_03aa(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x03aa);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% strong %2d%

	opcode 03ab
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_03ab(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03ab);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief clear_route %1d%

	opcode 03ac
	@arg arg1 
*/
void opcode_03ac(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ac);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_rubbish %1b:visible/invisible%

	opcode 03ad
	@arg arg1 Boolean true/false
*/
void opcode_03ad(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ad);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief remove_objects_from_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 03ae
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_03ae(const ScriptArguments& args, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x03ae);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(args);
}

/**
	@brief set_streaming %1b:enabled/disabled%

	opcode 03af
	@arg arg1 Boolean true/false
*/
void opcode_03af(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03af);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   garage %1d% door_open

	opcode 03b0
	@arg garage 
*/
bool opcode_03b0(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x03b0);
	RW_UNUSED(garage);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   garage %1d% door_closed

	opcode 03b1
	@arg garage 
*/
bool opcode_03b1(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x03b1);
	RW_UNUSED(garage);
	RW_UNUSED(args);
	return false;
}

/**
	@brief start_catalina_flyby

	opcode 03b2
*/
void opcode_03b2(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b2);
	RW_UNUSED(args);
}

/**
	@brief catalina_take_off

	opcode 03b3
*/
void opcode_03b3(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b3);
	RW_UNUSED(args);
}

/**
	@brief remove_catalina_heli

	opcode 03b4
*/
void opcode_03b4(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b4);
	RW_UNUSED(args);
}

/**
	@brief   catalina_shot_down

	opcode 03b5
*/
bool opcode_03b5(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b5);
	RW_UNUSED(args);
	return false;
}

/**
	@brief replace_model_at %1d% %2d% %3d% radius %4d% from %5o% to %6o%

	opcode 03b6
	@arg coord Coordinages
	@arg radius Radius
	@arg model0 Model ID
	@arg model1 Model ID
*/
void opcode_03b6(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius, const ScriptModel model0, const ScriptModel model1) {
	RW_UNIMPLEMENTED_OPCODE(0x03b6);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(model0);
	RW_UNUSED(model1);
	RW_UNUSED(args);
}

/**
	@brief process_cut_scene_only %1b:false/true%

	opcode 03b7
	@arg arg1 Boolean true/false
*/
void opcode_03b7(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03b7);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief clear_weapons_from_player %1d%

	opcode 03b8
	@arg player 
*/
void opcode_03b8(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x03b8);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief create_catalinas_chopper %1d%

	opcode 03b9
	@arg vehicle 
*/
void opcode_03b9(const ScriptArguments& args, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03b9);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief clear_cars_from_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 03ba
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_03ba(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ba);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief set_garage %1d% door_type_to_swing_open

	opcode 03bb
	@arg garage 
*/
void opcode_03bb(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x03bb);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief %5d% = create_sphere_at %1d% %2d% %3d% radius %4d%

	opcode 03bc
	@arg coord Coordinages
	@arg radius Radius
	@arg sphere Handle
*/
void opcode_03bc(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat radius, ScriptSphere& sphere) {
	RW_UNIMPLEMENTED_OPCODE(0x03bc);
	RW_UNUSED(coord);
	RW_UNUSED(radius);
	RW_UNUSED(sphere);
	RW_UNUSED(args);
}

/**
	@brief destroy_sphere %1d%

	opcode 03bd
	@arg sphere Handle
*/
void opcode_03bd(const ScriptArguments& args, const ScriptSphere sphere) {
	RW_UNIMPLEMENTED_OPCODE(0x03bd);
	RW_UNUSED(sphere);
	RW_UNUSED(args);
}

/**
	@brief catalina_heli_drop_explosives_on_player

	opcode 03be
*/
void opcode_03be(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03be);
	RW_UNUSED(args);
}

/**
	@brief set_player %1d% ignored_by_everyone_to %2b:true/false%

	opcode 03bf
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_03bf(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03bf);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief %2d% = actor %1d% car

	opcode 03c0
	@arg character Character/ped
	@arg vehicle Car/vehicle
*/
void opcode_03c0(const ScriptArguments& args, const ScriptCharacter character, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03c0);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief %2d% = player %1d% car_no_save

	opcode 03c1
	@arg player 
	@arg vehicle 
*/
void opcode_03c1(const ScriptArguments& args, const ScriptPlayer player, ScriptVehicle& vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03c1);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   phone %1d% answered

	opcode 03c2
	@arg phone 
*/
bool opcode_03c2(const ScriptArguments& args, const ScriptPhone phone) {
	RW_UNIMPLEMENTED_OPCODE(0x03c2);
	RW_UNUSED(phone);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_timer_with_text_to %1d% type %2h% text %3g%

	opcode 03c3
	@arg arg1G Global timer storage
	@arg arg2 
	@arg gxtEntry GXT entry
*/
void opcode_03c3(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptTimer arg2, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x03c3);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief set_status_text_to %1d% %2b:bar/number% %3g%

	opcode 03c4
	@arg arg1G 
	@arg arg2 Boolean true/false
	@arg gxtEntry GXT entry
*/
void opcode_03c4(const ScriptArguments& args, ScriptIntGlobal arg1G, const ScriptBoolean arg2, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x03c4);
	RW_UNUSED(arg1G);
	RW_UNUSED(arg2);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief create_random_car_for_carpark %1d% %2d% %3d% %4d%

	opcode 03c5
	@arg coord Coordinages
	@arg angle Angle
*/
void opcode_03c5(const ScriptArguments& args, ScriptVec3 coord, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x03c5);
	RW_UNUSED(coord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief   current_island == %1d%

	opcode 03c6
	@arg arg1 
*/
bool opcode_03c6(const ScriptArguments& args, const ScriptLevel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03c6);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_sensitivity_to_crime_to %1d%

	opcode 03c7
	@arg arg1 
*/
void opcode_03c7(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03c7);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_camera_directly_before_player

	opcode 03c8
*/
void opcode_03c8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03c8);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% damaged

	opcode 03c9
	@arg vehicle Car/vehicle
*/
bool opcode_03c9(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03c9);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   object %1d% exists

	opcode 03ca
	@arg object Object
*/
bool opcode_03ca(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x03ca);
	RW_UNUSED(object);
	RW_UNUSED(args);
	return false;
}

/**
	@brief load_scene %1d% %2d% %3d%

	opcode 03cb
	@arg coord Coordinages
*/
void opcode_03cb(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x03cb);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief car %1d% add_to_stuck_car_check %2d% = %3d%

	opcode 03cc
	@arg vehicle Car/vehicle
	@arg radius Radius
	@arg time Time (ms)
*/
void opcode_03cc(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptFloat radius, const ScriptInt time) {
	RW_UNIMPLEMENTED_OPCODE(0x03cc);
	RW_UNUSED(vehicle);
	RW_UNUSED(radius);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief car %1d% remove_from_stuck_car_check

	opcode 03cd
	@arg vehicle Car/vehicle
*/
void opcode_03cd(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03cd);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% stuck

	opcode 03ce
	@arg vehicle Car/vehicle
*/
bool opcode_03ce(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x03ce);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief load_wav %1s%

	opcode 03cf
	@arg soundID Sound ID
*/
void opcode_03cf(const ScriptArguments& args, const ScriptString soundID) {
	RW_UNIMPLEMENTED_OPCODE(0x03cf);
	RW_UNUSED(soundID);
	RW_UNUSED(args);
}

/**
	@brief   wav_loaded

	opcode 03d0
*/
bool opcode_03d0(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d0);
	RW_UNUSED(args);
	return false;
}

/**
	@brief play_wav

	opcode 03d1
*/
void opcode_03d1(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d1);
	RW_UNUSED(args);
}

/**
	@brief   wav_ended

	opcode 03d2
*/
bool opcode_03d2(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief get_closest_car_node_at %1d% %2d% %3d% store_to %4d% %5d% %6d% heading %7d%

	opcode 03d3
	@arg coord Coordinages
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
	@arg angle Angle
*/
void opcode_03d3(const ScriptArguments& args, ScriptVec3 coord, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord, ScriptFloat& angle) {
	RW_UNIMPLEMENTED_OPCODE(0x03d3);
	RW_UNUSED(coord);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief   garage %1d% contains_neededcar %2d%

	opcode 03d4
	@arg garage Handle
	@arg arg2 
*/
bool opcode_03d4(const ScriptArguments& args, const ScriptGarage garage, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03d4);
	RW_UNUSED(garage);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief remove_text %1g%

	opcode 03d5
	@arg gxtEntry GXT entry
*/
void opcode_03d5(const ScriptArguments& args, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x03d5);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief remove_styled_text %1g%

	opcode 03d6
	@arg gxtEntry GXT entry
*/
void opcode_03d6(const ScriptArguments& args, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x03d6);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief set_wav_location %1d% %2d% %3d%

	opcode 03d7
	@arg coord Coordinages
*/
void opcode_03d7(const ScriptArguments& args, ScriptVec3 coord) {
	RW_UNIMPLEMENTED_OPCODE(0x03d7);
	RW_UNUSED(coord);
	RW_UNUSED(args);
}

/**
	@brief show_save_screen

	opcode 03d8
*/
void opcode_03d8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d8);
	RW_UNUSED(args);
}

/**
	@brief   save_done

	opcode 03d9
*/
bool opcode_03d9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d9);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_garage %1d% camera_follows_player

	opcode 03da
	@arg garage Handle
*/
void opcode_03da(const ScriptArguments& args, const ScriptGarage garage) {
	RW_UNIMPLEMENTED_OPCODE(0x03da);
	RW_UNUSED(garage);
	RW_UNUSED(args);
}

/**
	@brief %2d% = create_marker_above_pickup %1d%

	opcode 03dc
	@arg pickup Player
	@arg blip Blip
*/
void opcode_03dc(const ScriptArguments& args, const ScriptPickup pickup, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x03dc);
	RW_UNUSED(pickup);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief pickup %1d% show_on_radar %2d% %3d%

	opcode 03dd
	@arg pickup 
	@arg arg2 
	@arg blip 
*/
void opcode_03dd(const ScriptArguments& args, const ScriptPickup pickup, const ScriptRadarSprite arg2, ScriptBlip& blip) {
	RW_UNIMPLEMENTED_OPCODE(0x03dd);
	RW_UNUSED(pickup);
	RW_UNUSED(arg2);
	RW_UNUSED(blip);
	RW_UNUSED(args);
}

/**
	@brief set_ped_density_multiplier %1d%

	opcode 03de
	@arg arg1 
*/
void opcode_03de(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03de);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief all_random_peds %1o%

	opcode 03df
	@arg pedType Model ID
*/
void opcode_03df(const ScriptArguments& args, const ScriptPedType pedType) {
	RW_UNIMPLEMENTED_OPCODE(0x03df);
	RW_UNUSED(pedType);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_before_fade %1h%

	opcode 03e0
	@arg arg1 Boolean true/false
*/
void opcode_03e0(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e0);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %1d% = packages_found

	opcode 03e1
	@arg arg1 
*/
void opcode_03e1(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e1);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief actor %1d% exit_car

	opcode 03e2
	@arg arg1 
*/
void opcode_03e2(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e2);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_sprites_draw_before_fade %1h%

	opcode 03e3
	@arg arg1 Boolean true/false
*/
void opcode_03e3(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e3);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_text_draw_align_right %1h%

	opcode 03e4
	@arg arg1 Boolean true/false
*/
void opcode_03e4(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e4);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief text_box %1g%

	opcode 03e5
	@arg gxtEntry GXT entry
*/
void opcode_03e5(const ScriptArguments& args, const ScriptString gxtEntry) {
	RW_UNIMPLEMENTED_OPCODE(0x03e5);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(args);
}

/**
	@brief remove_text_box

	opcode 03e6
*/
void opcode_03e6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03e6);
	RW_UNUSED(args);
}

/**
	@brief flash_hud %1d%

	opcode 03e7
	@arg arg1 
*/
void opcode_03e7(const ScriptArguments& args, const ScriptHudFlash arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03e7);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief generate_cars_around_camera %1d%

	opcode 03ea
	@arg arg1 Boolean true/false
*/
void opcode_03ea(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ea);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief clear_small_messages_only

	opcode 03eb
*/
void opcode_03eb(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03eb);
	RW_UNUSED(args);
}

/**
	@brief   ev_crane_collected_all_cars

	opcode 03ec
*/
bool opcode_03ec(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03ec);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_car %1d% not_damaged_when_upside_down %2h%

	opcode 03ed
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_03ed(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03ed);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% controllable

	opcode 03ee
	@arg player Player
*/
bool opcode_03ee(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x03ee);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief player %1d% make_safe

	opcode 03ef
	@arg player Player
*/
void opcode_03ef(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x03ef);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief enable_text_draw %1d%

	opcode 03f0
	@arg arg1 
*/
void opcode_03f0(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f0);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief pedtype %1e% add_threat %2e%

	opcode 03f1
	@arg pedType 
	@arg arg2 
*/
void opcode_03f1(const ScriptArguments& args, const ScriptPedType pedType, const ScriptThreat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03f1);
	RW_UNUSED(pedType);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief pedgroup %1e% remove_threat %2e%

	opcode 03f2
	@arg pedType 
	@arg arg2 
*/
void opcode_03f2(const ScriptArguments& args, const ScriptPedType pedType, const ScriptThreat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03f2);
	RW_UNUSED(pedType);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief get_car %1d% color %2d% %3d%

	opcode 03f3
	@arg vehicle Car/vehicle
	@arg carColour0 Car colour ID
	@arg carColour1 Car colour ID
*/
void opcode_03f3(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptInt& carColour0, ScriptInt& carColour1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f3);
	RW_UNUSED(vehicle);
	RW_UNUSED(carColour0);
	RW_UNUSED(carColour1);
	RW_UNUSED(args);
}

/**
	@brief set_all_cars_can_be_damaged %1b:true/false%

	opcode 03f4
	@arg arg1 Boolean true/false
*/
void opcode_03f4(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f4);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% can_be_damaged %1b:true/false%

	opcode 03f5
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_03f5(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03f5);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief load_island_data %1d%

	opcode 03f7
	@arg arg1 
*/
void opcode_03f7(const ScriptArguments& args, const ScriptLevel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f7);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief get_body_cast_health %1d%

	opcode 03f8
	@arg arg1 
*/
void opcode_03f8(const ScriptArguments& args, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f8);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief make_actors %1d% %2d% converse_in %3d% ms

	opcode 03f9
	@arg character0 
	@arg character1 
	@arg arg3 
*/
void opcode_03f9(const ScriptArguments& args, const ScriptCharacter character0, const ScriptCharacter character1, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x03f9);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% stays_on_current_island %2d%

	opcode 03fb
	@arg vehicle 
	@arg arg2 
*/
void opcode_03fb(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03fb);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% stays_on_current_island %2d%

	opcode 03fc
	@arg character 
	@arg arg2 
*/
void opcode_03fc(const ScriptArguments& args, const ScriptCharacter character, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03fc);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief save_offroad_time %1d%

	opcode 03fd
	@arg arg1 
*/
void opcode_03fd(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03fd);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_offroadII_time %1d%

	opcode 03fe
	@arg arg1 
*/
void opcode_03fe(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03fe);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_offroadIII_time %1d%

	opcode 03ff
	@arg arg1 
*/
void opcode_03ff(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ff);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief save_mayhem_time %1d%

	opcode 0400
	@arg object Object
*/
void opcode_0400(const ScriptArguments& args, const ScriptInt object) {
	RW_UNIMPLEMENTED_OPCODE(0x0400);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief increment_people_saved_in_ambulance

	opcode 0401
*/
void opcode_0401(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0401);
	RW_UNUSED(args);
}

/**
	@brief increment_criminals_stopped

	opcode 0402
*/
void opcode_0402(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0402);
	RW_UNUSED(args);
}

/**
	@brief save_highest_ambulance_level %1d%

	opcode 0403
	@arg arg1 
*/
void opcode_0403(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0403);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief increment_fires_extinguished

	opcode 0404
*/
void opcode_0404(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0404);
	RW_UNUSED(args);
}

/**
	@brief enable_phone %1d%

	opcode 0405
	@arg phone Handle
*/
void opcode_0405(const ScriptArguments& args, const ScriptPhone phone) {
	RW_UNIMPLEMENTED_OPCODE(0x0405);
	RW_UNUSED(phone);
	RW_UNUSED(args);
}

/**
	@brief save_dodo_flight_time %1d%

	opcode 0406
	@arg arg1 
*/
void opcode_0406(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0406);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief time_taken_defuse_mission = %1d%

	opcode 0407
	@arg vehicle Car/vehicle
*/
void opcode_0407(const ScriptArguments& args, const ScriptInt vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0407);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief set_total_rampages_to %1d%

	opcode 0408
	@arg arg1 
*/
void opcode_0408(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0408);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief blow_up_rc_buggy

	opcode 0409
*/
void opcode_0409(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0409);
	RW_UNUSED(args);
}

/**
	@brief remove_car_from_chase %1d%

	opcode 040a
	@arg arg1 
*/
void opcode_040a(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x040a);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   is_french_game

	opcode 040b
*/
bool opcode_040b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040b);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   is_german_game

	opcode 040c
*/
bool opcode_040c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040c);
	RW_UNUSED(args);
	return false;
}

/**
	@brief clear_mission_audio

	opcode 040d
*/
void opcode_040d(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040d);
	RW_UNUSED(args);
}

/**
	@brief %1b:set/clear% FadeInAfterNextArrest

	opcode 040e
	@arg arg1 
*/
void opcode_040e(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x040e);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %1b:set/clear% FadeInAfterNextDeath

	opcode 040f
	@arg arg1 
*/
void opcode_040f(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x040f);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief override_gang_model %1d% %2d%

	opcode 0410
	@arg arg1 
	@arg model Model ID
*/
void opcode_0410(const ScriptArguments& args, const ScriptGang arg1, const ScriptInt model) {
	RW_UNIMPLEMENTED_OPCODE(0x0410);
	RW_UNUSED(arg1);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% use_pednode_seek %2d:true/false%

	opcode 0411
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0411(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0411);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief 

	opcode 0412
	@arg vehicle 
	@arg arg2 
*/
void opcode_0412(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0412);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief enable %1d% get_out_of_jail_free %2d%

	opcode 0413
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0413(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0413);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief toggle_player %1d% free_treatment_once %2d%

	opcode 0414
	@arg player Player
	@arg arg2 Boolean true/false
*/
void opcode_0414(const ScriptArguments& args, const ScriptPlayer player, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0414);
	RW_UNUSED(player);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief 

	opcode 0415
	@arg vehicle 
	@arg arg2 
*/
void opcode_0415(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptDoor arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0415);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief start_mission %1d%

	opcode 0417
	@arg arg1 
*/
void opcode_0417(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0417);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_object %1d% draw_last %2h%

	opcode 0418
	@arg object Object
	@arg arg2 Boolean true/false
*/
void opcode_0418(const ScriptArguments& args, const ScriptObject object, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0418);
	RW_UNUSED(object);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief get_ammo_of_player %1d% weapon %2c% store_to %3d%

	opcode 0419
	@arg player0 Weapon ID
	@arg player1 Player
	@arg arg3 
*/
void opcode_0419(const ScriptArguments& args, const ScriptPlayer player0, const ScriptWeaponType player1, ScriptInt& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0419);
	RW_UNUSED(player0);
	RW_UNUSED(player1);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief get_ammo_of_actor %1d% weapon %2c% store_to %3d%

	opcode 041a
	@arg character0 Weapon ID
	@arg character1 Character/ped
	@arg arg3 
*/
void opcode_041a(const ScriptArguments& args, const ScriptCharacter character0, const ScriptWeaponType character1, ScriptInt& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x041a);
	RW_UNUSED(character0);
	RW_UNUSED(character1);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief make_actor %1d% say %2d%

	opcode 041c
	@arg character 
	@arg sound 
*/
void opcode_041c(const ScriptArguments& args, const ScriptCharacter character, const ScriptSoundType sound) {
	RW_UNIMPLEMENTED_OPCODE(0x041c);
	RW_UNUSED(character);
	RW_UNUSED(sound);
	RW_UNUSED(args);
}

/**
	@brief set_camera_near_clip %1d%

	opcode 041d
	@arg arg1 
*/
void opcode_041d(const ScriptArguments& args, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x041d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_radio_station %1d% %2d%

	opcode 041e
	@arg arg1 
	@arg arg2 
*/
void opcode_041e(const ScriptArguments& args, const ScriptRadio arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x041e);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief override_hospital %1d%

	opcode 041f
	@arg arg1 
*/
void opcode_041f(const ScriptArguments& args, const ScriptLevel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x041f);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief override_police_station %1d%

	opcode 0420
	@arg arg1 
*/
void opcode_0420(const ScriptArguments& args, const ScriptLevel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0420);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief force_rain %1d%

	opcode 0421
	@arg arg1 Boolean true/false
*/
void opcode_0421(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0421);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief   garage_contain_car %1d% %2d%

	opcode 0422
	@arg garage Handle
	@arg vehicle Car/vehicle
*/
bool opcode_0422(const ScriptArguments& args, const ScriptGarage garage, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0422);
	RW_UNUSED(garage);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief car %1d% improve_handling %2d%

	opcode 0423
	@arg vehicle Car/vehicle
	@arg arg2 
*/
void opcode_0423(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0423);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   metric

	opcode 0424
*/
bool opcode_0424(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0424);
	RW_UNUSED(args);
	return false;
}

/**
	@brief convert_metres_to_feet %2d% store_to %1d%

	opcode 0425
	@arg arg1 
	@arg arg2 
*/
void opcode_0425(const ScriptArguments& args, const ScriptFloat arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0425);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief create_save_cars_between_levels_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0426
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_0426(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0426);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief create_save_peds_between_levels_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0427
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_0427(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0427);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief set_car %1d% avoid_level_transitions %2d%

	opcode 0428
	@arg vehicle Car/vehicle
	@arg arg2 Boolean true/false
*/
void opcode_0428(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0428);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   ped_threat_exists %1u% %2u%

	opcode 042a
	@arg pedType 
	@arg arg2 
*/
bool opcode_042a(const ScriptArguments& args, const ScriptPedType pedType, const ScriptThreat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x042a);
	RW_UNUSED(pedType);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief clear_peds_from_cube %1d% %2d% %3d% %4d% %5d% %6d%

	opcode 042b
	@arg coord0 Coordinages
	@arg coord1 Coordinages
*/
void opcode_042b(const ScriptArguments& args, ScriptVec3 coord0, ScriptVec3 coord1) {
	RW_UNIMPLEMENTED_OPCODE(0x042b);
	RW_UNUSED(coord0);
	RW_UNUSED(coord1);
	RW_UNUSED(args);
}

/**
	@brief set_total_missions_to %1d%

	opcode 042c
	@arg arg1 
*/
void opcode_042c(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x042c);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief %2d% = metric_to_imperial %1d%

	opcode 042d
	@arg arg1 
	@arg arg2 
*/
void opcode_042d(const ScriptArguments& args, const ScriptInt arg1, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x042d);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief register_lowest_int_stat %1h% to %2d%

	opcode 042e
	@arg statID Stat ID
	@arg arg2 
*/
void opcode_042e(const ScriptArguments& args, const ScriptInt statID, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x042e);
	RW_UNUSED(statID);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief save_record %1d% %2d%

	opcode 042f
	@arg statID Stat ID
	@arg arg2 
*/
void opcode_042f(const ScriptArguments& args, const ScriptInt statID, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x042f);
	RW_UNUSED(statID);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   car %1d% passenger_seat_free %2d%

	opcode 0431
	@arg vehicle Car/vehicle
	@arg arg2 
*/
bool opcode_0431(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0431);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
	return false;
}

/**
	@brief %3d% = get_passenger_in_car %1d% seat %2h%

	opcode 0432
	@arg vehicle Car/vehicle
	@arg arg2 
	@arg character Character/ped
*/
void opcode_0432(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2, ScriptCharacter& character) {
	RW_UNIMPLEMENTED_OPCODE(0x0432);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(character);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% criminal_flag %2h%

	opcode 0433
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0433(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0433);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief show_credits

	opcode 0434
*/
void opcode_0434(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0434);
	RW_UNUSED(args);
}

/**
	@brief end_credits

	opcode 0435
*/
void opcode_0435(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0435);
	RW_UNUSED(args);
}

/**
	@brief   reached_end_of_credits

	opcode 0436
*/
bool opcode_0436(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0436);
	RW_UNUSED(args);
	return false;
}

/**
	@brief scatter_particle %1a% %8d% at %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 0437
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
void opcode_0437(const ScriptArguments& args, const ScriptParticle arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0437);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(arg6);
	RW_UNUSED(arg7);
	RW_UNUSED(arg8);
	RW_UNUSED(args);
}

/**
	@brief set_actor %1d% ignore_level_transitions %2d%

	opcode 0438
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0438(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0438);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief start_boat_foam_animation

	opcode 043a
*/
void opcode_043a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x043a);
	RW_UNUSED(args);
}

/**
	@brief update_boat %1d% foam_animation

	opcode 043b
	@arg object 
*/
void opcode_043b(const ScriptArguments& args, const ScriptObject object) {
	RW_UNIMPLEMENTED_OPCODE(0x043b);
	RW_UNUSED(object);
	RW_UNUSED(args);
}

/**
	@brief set_game_sounds_fade %1d%

	opcode 043c
	@arg arg1 Boolean true/false
*/
void opcode_043c(const ScriptArguments& args, const ScriptBoolean arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x043c);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief set_intro_is_playing %1d%

	opcode 043d
	@arg arg1 
*/
void opcode_043d(const ScriptArguments& args, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x043d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief play_cutscene_music

	opcode 043f
*/
void opcode_043f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x043f);
	RW_UNUSED(args);
}

/**
	@brief stop_cutscene_music

	opcode 0440
*/
void opcode_0440(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0440);
	RW_UNUSED(args);
}

/**
	@brief %2d% = car %1d% model

	opcode 0441
	@arg vehicle Car/vehicle
	@arg model Model ID
*/
void opcode_0441(const ScriptArguments& args, const ScriptVehicle vehicle, ScriptInt& model) {
	RW_UNIMPLEMENTED_OPCODE(0x0441);
	RW_UNUSED(vehicle);
	RW_UNUSED(model);
	RW_UNUSED(args);
}

/**
	@brief   player %1d% in_car %2d%

	opcode 0442
	@arg player Player
	@arg vehicle Car/vehicle
*/
bool opcode_0442(const ScriptArguments& args, const ScriptPlayer player, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0442);
	RW_UNUSED(player);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   player %1d% in_a_car

	opcode 0443
	@arg player Player
*/
bool opcode_0443(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0443);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief create_fire_audio %1d% %2d%

	opcode 0444
	@arg fire Handle
	@arg arg2 Boolean true/false
*/
void opcode_0444(const ScriptArguments& args, const ScriptFire fire, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0444);
	RW_UNUSED(fire);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief   are_any_car_cheats_activated

	opcode 0445
*/
bool opcode_0445(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0445);
	RW_UNUSED(args);
	return false;
}

/**
	@brief set_actor %1d% dismemberment_possible %2d%

	opcode 0446
	@arg character Character/ped
	@arg arg2 Boolean true/false
*/
void opcode_0446(const ScriptArguments& args, const ScriptCharacter character, const ScriptBoolean arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0446);
	RW_UNUSED(character);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief    is_player_lifting_a_phone %1d%

	opcode 0447
	@arg player Player
*/
bool opcode_0447(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x0447);
	RW_UNUSED(player);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% in_car %2d%

	opcode 0448
	@arg character Character/ped
	@arg vehicle Car/vehicle
*/
bool opcode_0448(const ScriptArguments& args, const ScriptCharacter character, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0448);
	RW_UNUSED(character);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
	return false;
}

/**
	@brief   actor %1d% in_a_car

	opcode 0449
	@arg character Character/ped
*/
bool opcode_0449(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x0449);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief 

	opcode 044a
	@arg player Player
*/
void opcode_044a(const ScriptArguments& args, const ScriptPlayer player) {
	RW_UNIMPLEMENTED_OPCODE(0x044a);
	RW_UNUSED(player);
	RW_UNUSED(args);
}

/**
	@brief    is_char_on_foot %1d%

	opcode 044b
	@arg character Character/ped
*/
bool opcode_044b(const ScriptArguments& args, const ScriptCharacter character) {
	RW_UNIMPLEMENTED_OPCODE(0x044b);
	RW_UNUSED(character);
	RW_UNUSED(args);
	return false;
}

/**
	@brief change_to_island %1d%

	opcode 044c
	@arg arg1 
*/
void opcode_044c(const ScriptArguments& args, const ScriptLevel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x044c);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief load_splash %1x%

	opcode 044d
	@arg arg1 
*/
void opcode_044d(const ScriptArguments& args, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x044d);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief car %1d% level %2b:set_from_position/clear%

	opcode 044e
	@arg vehicle 
	@arg arg2 
*/
void opcode_044e(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x044e);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief make_craigs_car_a_bit_stronger %1d% %2d%

	opcode 044f
	@arg vehicle 
	@arg arg2 
*/
void opcode_044f(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x044f);
	RW_UNUSED(vehicle);
	RW_UNUSED(arg2);
	RW_UNUSED(args);
}

/**
	@brief car %1d% warp_to_player

	opcode 0450
	@arg vehicle Car/vehicle
*/
void opcode_0450(const ScriptArguments& args, const ScriptVehicle vehicle) {
	RW_UNIMPLEMENTED_OPCODE(0x0450);
	RW_UNUSED(vehicle);
	RW_UNUSED(args);
}

/**
	@brief load_end_of_game_audio

	opcode 0451
*/
void opcode_0451(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0451);
	RW_UNUSED(args);
}

/**
	@brief enable_player_control_camera

	opcode 0452
*/
void opcode_0452(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0452);
	RW_UNUSED(args);
}

/**
	@brief object %1d% set_rotation %2d% %3d% %4d%

	opcode 0453
	@arg object Object
	@arg rotation Rotation
	@arg angle Angle
*/
void opcode_0453(const ScriptArguments& args, const ScriptObject object, ScriptVec2 rotation, const ScriptFloat angle) {
	RW_UNIMPLEMENTED_OPCODE(0x0453);
	RW_UNUSED(object);
	RW_UNUSED(rotation);
	RW_UNUSED(angle);
	RW_UNUSED(args);
}

/**
	@brief store_debug_camera_position_to %1d% %2d% %3d%

	opcode 0454
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_0454(const ScriptArguments& args, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x0454);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief 

	opcode 0455
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_0455(const ScriptArguments& args, ScriptFloat& arg1, ScriptFloat& arg2, ScriptFloat& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0455);
	RW_UNUSED(arg1);
	RW_UNUSED(arg2);
	RW_UNUSED(arg3);
	RW_UNUSED(args);
}

/**
	@brief end_threads_named %1s%

	opcode 0459
	@arg arg1 
*/
void opcode_0459(const ScriptArguments& args, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0459);
	RW_UNUSED(arg1);
	RW_UNUSED(args);
}

/**
	@brief text_draw_2numbers %3g% numbers %4d% %5d% at %1d% %2d% 

	opcode 045b
	@arg pixelX 2D pixel X
	@arg pixelY 2D pixel Y
	@arg gxtEntry GXT entry
	@arg arg4 
	@arg arg5 
*/
void opcode_045b(const ScriptArguments& args, const ScriptFloat pixelX, const ScriptFloat pixelY, const ScriptString gxtEntry, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x045b);
	RW_UNUSED(pixelX);
	RW_UNUSED(pixelY);
	RW_UNUSED(gxtEntry);
	RW_UNUSED(arg4);
	RW_UNUSED(arg5);
	RW_UNUSED(args);
}

/**
	@brief get_debug_camera_point_at %1d% %2d% %3d%

	opcode 0463
	@arg xCoord X Coord
	@arg yCoord Y Coord
	@arg zCoord Z Coord
*/
void opcode_0463(const ScriptArguments& args, ScriptFloat& xCoord, ScriptFloat& yCoord, ScriptFloat& zCoord) {
	RW_UNIMPLEMENTED_OPCODE(0x0463);
	RW_UNUSED(xCoord);
	RW_UNUSED(yCoord);
	RW_UNUSED(zCoord);
	RW_UNUSED(args);
}

/**
	@brief set_car_temp_action %1d% to %2h% time %3d%

	opcode 0477
	@arg vehicle Car/vehicle
	@arg vehicleActionID Vehicle action ID
	@arg time Time (ms)
*/
void opcode_0477(const ScriptArguments& args, const ScriptVehicle vehicle, const ScriptTempact vehicleActionID, const ScriptInt time) {
	RW_UNIMPLEMENTED_OPCODE(0x0477);
	RW_UNUSED(vehicle);
	RW_UNUSED(vehicleActionID);
	RW_UNUSED(time);
	RW_UNUSED(args);
}

/**
	@brief get_joystick %1h% direction_offset_to %2d% %3d% %4d% %5d%

	opcode 0494
*/
void opcode_0494(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0494);
	RW_UNUSED(args);
}

