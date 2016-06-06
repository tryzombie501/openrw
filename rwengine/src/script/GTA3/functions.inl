/**
	@brief NOP

	opcode 0000
*/
void opcode_0000(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0000);
}

/**
	@brief wait %1d% ms

	opcode 0001
	@arg arg0 Time (ms)
*/
void opcode_0001(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0001);
}

/**
	@brief goto %1p%

	opcode 0002
	@arg arg0 
*/
void opcode_0002(const ScriptLabel arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0002);
}

/**
	@brief shake_cam %1d%

	opcode 0003
	@arg arg0 Time (ms)
*/
void opcode_0003(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0003);
}

/**
	@brief %1d% = %2d%

	opcode 0004
	@arg global0 
	@arg arg0 
*/
void opcode_0004(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0004);
}

/**
	@brief %1d% = %2d%

	opcode 0005
	@arg global0 
	@arg arg0 
*/
void opcode_0005(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0005);
}

/**
	@brief %1d% = %2d%

	opcode 0006
	@arg local0 
	@arg arg0 
*/
void opcode_0006(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0006);
}

/**
	@brief %1d% = %2d%

	opcode 0007
	@arg local0 
	@arg arg0 
*/
void opcode_0007(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0007);
}

/**
	@brief %1d% += %2d%

	opcode 0008
	@arg global0 
	@arg arg0 
*/
void opcode_0008(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0008);
}

/**
	@brief %1d% += %2d%

	opcode 0009
	@arg global0 
	@arg arg0 
*/
void opcode_0009(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0009);
}

/**
	@brief %1d% += %2h%

	opcode 000a
	@arg local0 
	@arg arg0 
*/
void opcode_000a(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000a);
}

/**
	@brief %1d% += %2d%

	opcode 000b
	@arg local0 
	@arg arg0 
*/
void opcode_000b(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000b);
}

/**
	@brief %1d% -= %2d%

	opcode 000c
	@arg global0 
	@arg arg0 
*/
void opcode_000c(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000c);
}

/**
	@brief %1d% -= %2d%

	opcode 000d
	@arg global0 
	@arg arg0 
*/
void opcode_000d(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000d);
}

/**
	@brief %1d% -= %2h%

	opcode 000e
	@arg local0 
	@arg arg0 
*/
void opcode_000e(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000e);
}

/**
	@brief %1d% -= %2d%

	opcode 000f
	@arg local0 
	@arg arg0 
*/
void opcode_000f(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x000f);
}

/**
	@brief %1d% *= %2d%

	opcode 0010
	@arg global0 
	@arg arg0 
*/
void opcode_0010(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0010);
}

/**
	@brief %1d% *= %2d%

	opcode 0011
	@arg global0 
	@arg arg0 
*/
void opcode_0011(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0011);
}

/**
	@brief %1d% *= %2d%

	opcode 0012
	@arg local0 
	@arg arg0 
*/
void opcode_0012(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0012);
}

/**
	@brief %1d% *= %2d%

	opcode 0013
	@arg local0 
	@arg arg0 
*/
void opcode_0013(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0013);
}

/**
	@brief %1d% /= %2d%

	opcode 0014
	@arg global0 
	@arg arg0 
*/
void opcode_0014(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0014);
}

/**
	@brief %1d% /= %2d%

	opcode 0015
	@arg global0 
	@arg arg0 
*/
void opcode_0015(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0015);
}

/**
	@brief %1d% /= %2d%

	opcode 0016
	@arg local0 
	@arg arg0 
*/
void opcode_0016(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0016);
}

/**
	@brief %1d% /= %2d%

	opcode 0017
	@arg local0 
	@arg arg0 
*/
void opcode_0017(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0017);
}

/**
	@brief   %1d% > %2d%

	opcode 0018
	@arg global0 
	@arg arg0 
*/
bool opcode_0018(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0018);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0019
	@arg local0 
	@arg arg0 
*/
bool opcode_0019(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0019);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001a
	@arg arg0 
	@arg global0 
*/
bool opcode_001a(const ScriptInt arg0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x001a);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001b
	@arg arg0 
	@arg local0 
*/
bool opcode_001b(const ScriptInt arg0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x001b);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001c
	@arg global0 
	@arg global1 
*/
bool opcode_001c(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x001c);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001d
	@arg local0 
	@arg local1 
*/
bool opcode_001d(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x001d);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001e
	@arg global0 
	@arg local0 
*/
bool opcode_001e(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x001e);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 001f
	@arg local0 
	@arg global0 
*/
bool opcode_001f(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x001f);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0020
	@arg global0 
	@arg arg0 
*/
bool opcode_0020(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0020);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0021
	@arg local0 
	@arg arg0 
*/
bool opcode_0021(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0021);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0022
	@arg arg0 
	@arg global0 
*/
bool opcode_0022(const ScriptFloat arg0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0022);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0023
	@arg arg0 
	@arg local0 
*/
bool opcode_0023(const ScriptFloat arg0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0023);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0024
	@arg global0 
	@arg global1 
*/
bool opcode_0024(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0024);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0025
	@arg local0 
	@arg local1 
*/
bool opcode_0025(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0025);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0026
	@arg global0 
	@arg local0 
*/
bool opcode_0026(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0026);
	return false;
}

/**
	@brief   %1d% > %2d%

	opcode 0027
	@arg local0 
	@arg global0 
*/
bool opcode_0027(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0027);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0028
	@arg global0 
	@arg arg0 
*/
bool opcode_0028(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0028);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0029
	@arg local0 
	@arg arg0 
*/
bool opcode_0029(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0029);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002a
	@arg arg0 
	@arg global0 
*/
bool opcode_002a(const ScriptInt arg0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x002a);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002b
	@arg arg0 
	@arg local0 
*/
bool opcode_002b(const ScriptInt arg0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x002b);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002c
	@arg global0 
	@arg global1 
*/
bool opcode_002c(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x002c);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002d
	@arg local0 
	@arg local1 
*/
bool opcode_002d(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x002d);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002e
	@arg global0 
	@arg local0 
*/
bool opcode_002e(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x002e);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 002f
	@arg local0 
	@arg global0 
*/
bool opcode_002f(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x002f);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0030
	@arg global0 
	@arg arg0 
*/
bool opcode_0030(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0030);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0031
	@arg local0 
	@arg arg0 
*/
bool opcode_0031(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0031);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0032
	@arg arg0 
	@arg global0 
*/
bool opcode_0032(const ScriptFloat arg0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0032);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0033
	@arg arg0 
	@arg local0 
*/
bool opcode_0033(const ScriptFloat arg0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0033);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0034
	@arg global0 
	@arg global1 
*/
bool opcode_0034(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0034);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0035
	@arg local0 
	@arg local1 
*/
bool opcode_0035(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0035);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0036
	@arg global0 
	@arg local0 
*/
bool opcode_0036(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0036);
	return false;
}

/**
	@brief   %1d% >= %2d%

	opcode 0037
	@arg local0 
	@arg global0 
*/
bool opcode_0037(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0037);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0038
	@arg global0 
	@arg arg0 
*/
bool opcode_0038(ScriptIntGlobal global0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0038);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0039
	@arg local0 
	@arg arg0 
*/
bool opcode_0039(ScriptIntLocal local0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0039);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003a
	@arg global0 
	@arg global1 
*/
bool opcode_003a(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x003a);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003b
	@arg local0 
	@arg local1 
*/
bool opcode_003b(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x003b);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 003c
	@arg global0 
	@arg local0 
*/
bool opcode_003c(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x003c);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0042
	@arg global0 
	@arg arg0 
*/
bool opcode_0042(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0042);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0043
	@arg local0 
	@arg arg0 
*/
bool opcode_0043(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0043);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0044
	@arg global0 
	@arg global1 
*/
bool opcode_0044(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0044);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0045
	@arg local0 
	@arg local1 
*/
bool opcode_0045(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0045);
	return false;
}

/**
	@brief   %1d% == %2d%

	opcode 0046
	@arg global0 
	@arg local0 
*/
bool opcode_0046(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0046);
	return false;
}

/**
	@brief goto_if_true %1p%

	opcode 004c
	@arg arg0 
*/
void opcode_004c(const ScriptLabel arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x004c);
}

/**
	@brief goto_if_false %1p%

	opcode 004d
	@arg arg0 
*/
void opcode_004d(const ScriptLabel arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x004d);
}

/**
	@brief end_thread

	opcode 004e
*/
void opcode_004e(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x004e);
}

/**
	@brief create_thread %1p%

	opcode 004f
	@arg arg0 
	@arg arg1 
*/
void opcode_004f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x004f);
}

/**
	@brief gosub %1p%

	opcode 0050
	@arg arg0 
*/
void opcode_0050(const ScriptLabel arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0050);
}

/**
	@brief return

	opcode 0051
*/
void opcode_0051(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0051);
}

/**
	@brief  %5d% = create_player %1o% at %2d% %3d% %4d%

	opcode 0053
	@arg model0 Model ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg player0 Player
*/
void opcode_0053(const ScriptInt model0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0053);
}

/**
	@brief get_player_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 0054
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0054(const ScriptPlayer& player0, ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0054);
}

/**
	@brief set_player_coordinates %1d% to %2d% %3d% %4d%

	opcode 0055
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0055(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0055);
}

/**
	@brief   is_player_in_area_2d %1d% coords %2d% %3d% to %4d% %5d% sphere %6b%

	opcode 0056
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_0056(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0056);
	return false;
}

/**
	@brief   is_player_in_area_3d %1d% coords %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8b%

	opcode 0057
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_0057(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0057);
	return false;
}

/**
	@brief %1d% += %2d%

	opcode 0058
	@arg global0 
	@arg global1 
*/
void opcode_0058(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0058);
}

/**
	@brief %1d% += %2d%

	opcode 0059
	@arg global0 
	@arg global1 
*/
void opcode_0059(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0059);
}

/**
	@brief %1d% += %2d% 

	opcode 005a
	@arg local0 
	@arg local1 
*/
void opcode_005a(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x005a);
}

/**
	@brief %1d% += %2d% 

	opcode 005b
	@arg local0 
	@arg local1 
*/
void opcode_005b(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x005b);
}

/**
	@brief %1d% += %2d%

	opcode 005c
	@arg local0 
	@arg global0 
*/
void opcode_005c(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x005c);
}

/**
	@brief %1d% += %2d% 

	opcode 005d
	@arg local0 
	@arg global0 
*/
void opcode_005d(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x005d);
}

/**
	@brief %1d% += %2d%  

	opcode 005e
	@arg global0 
	@arg local0 
*/
void opcode_005e(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x005e);
}

/**
	@brief %1d% += %2d% 

	opcode 005f
	@arg global0 
	@arg local0 
*/
void opcode_005f(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x005f);
}

/**
	@brief %1d% -= %2d% 

	opcode 0060
	@arg global0 
	@arg global1 
*/
void opcode_0060(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0060);
}

/**
	@brief %1d% -= %2d% 

	opcode 0061
	@arg global0 
	@arg global1 
*/
void opcode_0061(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0061);
}

/**
	@brief %1d% -= %2d%

	opcode 0062
	@arg local0 
	@arg local1 
*/
void opcode_0062(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0062);
}

/**
	@brief %1d% -= %2d% 

	opcode 0063
	@arg local0 
	@arg local1 
*/
void opcode_0063(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0063);
}

/**
	@brief %1d% -= %2d%  

	opcode 0064
	@arg local0 
	@arg global0 
*/
void opcode_0064(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0064);
}

/**
	@brief %1d% -= %2d% 

	opcode 0065
	@arg local0 
	@arg global0 
*/
void opcode_0065(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0065);
}

/**
	@brief %1d% -= %2d%

	opcode 0066
	@arg global0 
	@arg local0 
*/
void opcode_0066(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0066);
}

/**
	@brief %1d% -= %2d% 

	opcode 0067
	@arg global0 
	@arg local0 
*/
void opcode_0067(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0067);
}

/**
	@brief %1d% *= %2d%  

	opcode 0068
	@arg global0 
	@arg global1 
*/
void opcode_0068(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0068);
}

/**
	@brief %1d% *= %2d%

	opcode 0069
	@arg global0 
	@arg global1 
*/
void opcode_0069(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0069);
}

/**
	@brief %1d% *= %2d% 

	opcode 006a
	@arg local0 
	@arg local1 
*/
void opcode_006a(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x006a);
}

/**
	@brief %1d% *= %2d% 

	opcode 006b
	@arg local0 
	@arg local1 
*/
void opcode_006b(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x006b);
}

/**
	@brief %1d% *= %2d%  

	opcode 006c
	@arg global0 
	@arg local0 
*/
void opcode_006c(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x006c);
}

/**
	@brief %1d% *= %2d%  

	opcode 006d
	@arg global0 
	@arg local0 
*/
void opcode_006d(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x006d);
}

/**
	@brief %1d% *= %2d%  

	opcode 006e
	@arg local0 
	@arg global0 
*/
void opcode_006e(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x006e);
}

/**
	@brief %1d% *= %2d%  

	opcode 006f
	@arg local0 
	@arg global0 
*/
void opcode_006f(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x006f);
}

/**
	@brief %1d% /= %2d%  

	opcode 0070
	@arg global0 
	@arg global1 
*/
void opcode_0070(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0070);
}

/**
	@brief %1d% /= %2d% 

	opcode 0071
	@arg global0 
	@arg global1 
*/
void opcode_0071(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0071);
}

/**
	@brief %1d% /= %2d%  

	opcode 0072
	@arg local0 
	@arg local1 
*/
void opcode_0072(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0072);
}

/**
	@brief %1d% /= %2d% 

	opcode 0073
	@arg local0 
	@arg local1 
*/
void opcode_0073(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0073);
}

/**
	@brief %1d% /= %2d% 

	opcode 0074
	@arg global0 
	@arg local0 
*/
void opcode_0074(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0074);
}

/**
	@brief %1d% /= %2d% 

	opcode 0075
	@arg global0 
	@arg local0 
*/
void opcode_0075(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0075);
}

/**
	@brief %1d% /= %2d% 

	opcode 0076
	@arg local0 
	@arg global0 
*/
void opcode_0076(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0076);
}

/**
	@brief %1d% /= %2d%

	opcode 0077
	@arg local0 
	@arg global0 
*/
void opcode_0077(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0077);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 0078
	@arg global0 
	@arg arg0 
*/
void opcode_0078(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0078);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 0079
	@arg local0 
	@arg arg0 
*/
void opcode_0079(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0079);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007a
	@arg global0 
	@arg global1 
*/
void opcode_007a(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x007a);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007b
	@arg local0 
	@arg local1 
*/
void opcode_007b(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x007b);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007c
	@arg global0 
	@arg local0 
*/
void opcode_007c(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x007c);
}

/**
	@brief %1d% += frame_delta_time * %2d%

	opcode 007d
	@arg local0 
	@arg global0 
*/
void opcode_007d(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x007d);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 007e
	@arg global0 
	@arg arg0 
*/
void opcode_007e(ScriptFloatGlobal global0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x007e);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 007f
	@arg local0 
	@arg arg0 
*/
void opcode_007f(ScriptFloatLocal local0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x007f);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0080
	@arg global0 
	@arg global1 
*/
void opcode_0080(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0080);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0081
	@arg local0 
	@arg local1 
*/
void opcode_0081(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0081);
}

/**
	@brief %1d% -= frame_delta_time * %2d% 

	opcode 0082
	@arg global0 
	@arg local0 
*/
void opcode_0082(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0082);
}

/**
	@brief %1d% -= frame_delta_time * %2d%

	opcode 0083
	@arg local0 
	@arg global0 
*/
void opcode_0083(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0083);
}

/**
	@brief %1d% = %2d% 

	opcode 0084
	@arg global0 
	@arg global1 
*/
void opcode_0084(ScriptIntGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0084);
}

/**
	@brief %1d% = %2d% 

	opcode 0085
	@arg local0 
	@arg local1 
*/
void opcode_0085(ScriptIntLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0085);
}

/**
	@brief %1d% = %2d%

	opcode 0086
	@arg global0 
	@arg global1 
*/
void opcode_0086(ScriptFloatGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x0086);
}

/**
	@brief %1d% = %2d% 

	opcode 0087
	@arg local0 
	@arg local1 
*/
void opcode_0087(ScriptFloatLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0087);
}

/**
	@brief %1d% = %2d% 

	opcode 0088
	@arg global0 
	@arg local0 
*/
void opcode_0088(ScriptFloatGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0088);
}

/**
	@brief %1d% = %2d%  

	opcode 0089
	@arg local0 
	@arg global0 
*/
void opcode_0089(ScriptFloatLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0089);
}

/**
	@brief %1d% = %2d% 

	opcode 008a
	@arg global0 
	@arg local0 
*/
void opcode_008a(ScriptIntGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x008a);
}

/**
	@brief %1d% = %2d%  

	opcode 008b
	@arg local0 
	@arg global0 
*/
void opcode_008b(ScriptIntLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x008b);
}

/**
	@brief %1d% = float_to_integer %2d%

	opcode 008c
	@arg global0 
	@arg global1 
*/
void opcode_008c(ScriptIntGlobal global0, ScriptFloatGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x008c);
}

/**
	@brief %1d% = integer_to_float %2d%

	opcode 008d
	@arg global0 
	@arg global1 
*/
void opcode_008d(ScriptFloatGlobal global0, ScriptIntGlobal global1) {
	RW_UNIMPLEMENTED_OPCODE(0x008d);
}

/**
	@brief %1d% = float_to_integer %2d%

	opcode 008e
	@arg local0 
	@arg global0 
*/
void opcode_008e(ScriptIntLocal local0, ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x008e);
}

/**
	@brief %1d% = integer_to_float %2d%

	opcode 008f
	@arg local0 
	@arg global0 
*/
void opcode_008f(ScriptFloatLocal local0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x008f);
}

/**
	@brief %1d% = float_to_int %2d%

	opcode 0090
	@arg global0 
	@arg local0 
*/
void opcode_0090(ScriptIntGlobal global0, ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0090);
}

/**
	@brief %1d% = int_to_float %2d%

	opcode 0091
	@arg global0 
	@arg local0 
*/
void opcode_0091(ScriptFloatGlobal global0, ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0091);
}

/**
	@brief %1d% = float_to_int %2d%

	opcode 0092
	@arg local0 
	@arg local1 
*/
void opcode_0092(ScriptIntLocal local0, ScriptFloatLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0092);
}

/**
	@brief %1d% = int_to_float %2d%

	opcode 0093
	@arg local0 
	@arg local1 
*/
void opcode_0093(ScriptFloatLocal local0, ScriptIntLocal local1) {
	RW_UNIMPLEMENTED_OPCODE(0x0093);
}

/**
	@brief abs_var_int %1d%

	opcode 0094
	@arg global0 
*/
void opcode_0094(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0094);
}

/**
	@brief abs_lvar_int %1d%

	opcode 0095
	@arg local0 
*/
void opcode_0095(ScriptIntLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0095);
}

/**
	@brief abs_var_float %1d%

	opcode 0096
	@arg global0 
*/
void opcode_0096(ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0096);
}

/**
	@brief abs_lvar_float %1d%

	opcode 0097
	@arg local0 
*/
void opcode_0097(ScriptFloatLocal local0) {
	RW_UNIMPLEMENTED_OPCODE(0x0097);
}

/**
	@brief generate_random_float %1d%

	opcode 0098
	@arg global0 
*/
void opcode_0098(ScriptFloatGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0098);
}

/**
	@brief generate_random_int %1d%

	opcode 0099
	@arg global0 
*/
void opcode_0099(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0099);
}

/**
	@brief %6d% = create_char %1d% model %2o% at %3d% %4d% %5d%

	opcode 009a
	@arg arg0 Ped type
	@arg model0 Model ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg character0 Character/ped
*/
void opcode_009a(const ScriptInt arg0, const ScriptModelID model0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x009a);
}

/**
	@brief delete_char %1d%

	opcode 009b
	@arg character0 Character/ped
*/
void opcode_009b(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x009b);
}

/**
	@brief char_wander_dir %1d% to %2d%

	opcode 009c
	@arg arg0 
	@arg arg1 
*/
void opcode_009c(const ScriptCharacter& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x009c);
}

/**
	@brief char_wander_range

	opcode 009d
	@arg arg0 
*/
void opcode_009d(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x009d);
}

/**
	@brief char_follow_path %1d% path %2d% %3d% %4d%

	opcode 009e
	@arg arg0 
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_009e(const ScriptCharacter& arg0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x009e);
}

/**
	@brief char_set_idle %1d%

	opcode 009f
	@arg arg0 
*/
void opcode_009f(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x009f);
}

/**
	@brief get_char_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 00a0
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_00a0(const ScriptCharacter& character0, ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a0);
}

/**
	@brief set_char_coordinates %1d% to %2d% %3d% %4d%

	opcode 00a1
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_00a1(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a1);
}

/**
	@brief   is_char_still_alive %1d%

	opcode 00a2
	@arg arg0 
*/
bool opcode_00a2(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a2);
	return false;
}

/**
	@brief   is_char_in_area_2d %1d% from %2d% %3d% to %4d% %5d% sphere %6d%

	opcode 00a3
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_00a3(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a3);
	return false;
}

/**
	@brief   is_char_in_area_3d %1d% from %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8d%

	opcode 00a4
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_00a4(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a4);
	return false;
}

/**
	@brief %5d% = create_car %1o% at %2d% %3d% %4d%

	opcode 00a5
	@arg model0 Model ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg vehicle0 Car/vehicle
*/
void opcode_00a5(const ScriptModelID model0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a5);
}

/**
	@brief delete_car %1d%

	opcode 00a6
	@arg vehicle0 Car/vehicle
*/
void opcode_00a6(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a6);
}

/**
	@brief car_goto_coordinates %1d% coords %2d% %3d% %4d%

	opcode 00a7
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_00a7(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a7);
}

/**
	@brief car_wander_randomly %1d%

	opcode 00a8
	@arg vehicle0 Car/vehicle
*/
void opcode_00a8(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a8);
}

/**
	@brief car_set_idle %1d%

	opcode 00a9
	@arg vehicle0 Car/vehicle
*/
void opcode_00a9(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00a9);
}

/**
	@brief get_car_coordinates %1d% store_to %2d% %3d% %4d%

	opcode 00aa
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_00aa(const ScriptVehicle& vehicle0, ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x00aa);
}

/**
	@brief set_car_coordinates %1d% to %2d% %3d% %4d%

	opcode 00ab
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_00ab(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x00ab);
}

/**
	@brief   is_car_still_alive %1d%

	opcode 00ac
	@arg arg0 
*/
bool opcode_00ac(const ScriptVehicle& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00ac);
	return false;
}

/**
	@brief set_car_cruise_speed %1d% to %2d%

	opcode 00ad
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_00ad(const ScriptVehicle& vehicle0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00ad);
}

/**
	@brief set_car_driving_style %1d% to %2d%

	opcode 00ae
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_00ae(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00ae);
}

/**
	@brief set_car_mission %1d% to %2d%

	opcode 00af
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_00af(const ScriptVehicle& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00af);
}

/**
	@brief   is_car_in_area_2d %1d% from %2d% %3d% to %4d% %5d% sphere %6d%

	opcode 00b0
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_00b0(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00b0);
	return false;
}

/**
	@brief   is_car_in_area_3d %1d% from %2d% %3d% %4d% to %5d% %6d% %7d% sphere %8d%

	opcode 00b1
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_00b1(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00b1);
	return false;
}

/**
	@brief print_big %1g% duration %2d% ms style %3d%

	opcode 00ba
	@arg arg0 GXT entry
	@arg arg1 Time (ms)
	@arg arg2 
*/
void opcode_00ba(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ba);
}

/**
	@brief print %1g% duration %2d% ms flag %3d%

	opcode 00bb
	@arg arg0 GXT entry
	@arg arg1 Time (ms)
	@arg arg2 
*/
void opcode_00bb(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00bb);
}

/**
	@brief print_now %1g% duration %2d% ms flag %3d%

	opcode 00bc
	@arg arg0 GXT entry
	@arg arg1 Time (ms)
	@arg arg2 
*/
void opcode_00bc(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00bc);
}

/**
	@brief print_soon %1g% duration %2d% ms flag %3d%

	opcode 00bd
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_00bd(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00bd);
}

/**
	@brief clear_prints

	opcode 00be
*/
void opcode_00be(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00be);
}

/**
	@brief get_time_of_day %1d% %2d%

	opcode 00bf
	@arg arg0 
	@arg arg1 
*/
void opcode_00bf(ScriptInt& arg0, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00bf);
}

/**
	@brief set_current_time %1d% %2d%

	opcode 00c0
	@arg arg0 
	@arg arg1 
*/
void opcode_00c0(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00c0);
}

/**
	@brief %3d% = get_minutes_until_time_of_day %1d% %2d%

	opcode 00c1
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_00c1(const ScriptInt arg0, const ScriptInt arg1, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00c1);
}

/**
	@brief   is_point_on_screen %1d% %2d% %3d% %4d%

	opcode 00c2
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
*/
bool opcode_00c2(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00c2);
	return false;
}

/**
	@brief debug_on

	opcode 00c3
*/
void opcode_00c3(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c3);
}

/**
	@brief debug_off

	opcode 00c4
*/
void opcode_00c4(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c4);
}

/**
	@brief return_true

	opcode 00c5
*/
void opcode_00c5(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c5);
}

/**
	@brief return_false

	opcode 00c6
*/
void opcode_00c6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00c6);
}

/**
	@brief if %1d%

	opcode 00d6
	@arg arg0 
*/
void opcode_00d6(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00d6);
}

/**
	@brief create_thread_without_extra_params %1p%

	opcode 00d7
	@arg arg0 
*/
void opcode_00d7(const ScriptLabel arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00d7);
}

/**
	@brief mission_has_finished

	opcode 00d8
*/
void opcode_00d8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x00d8);
}

/**
	@brief %2d% = store_car_char_is_in %1d%

	opcode 00d9
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
*/
void opcode_00d9(const ScriptCharacter& character0, ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00d9);
}

/**
	@brief %2d% = store_car_player_is_in %1d%

	opcode 00da
	@arg arg0 
	@arg arg1 
*/
void opcode_00da(const ScriptPlayer& arg0, ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00da);
}

/**
	@brief   is_char_in_car %1d% car %2d%

	opcode 00db
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
*/
bool opcode_00db(const ScriptCharacter& character0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x00db);
	return false;
}

/**
	@brief   is_player_in_car %1d% car %2d%

	opcode 00dc
	@arg arg0 
	@arg arg1 
*/
bool opcode_00dc(const ScriptPlayer& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00dc);
	return false;
}

/**
	@brief   is_char_in_model %1d% model %2o%

	opcode 00dd
	@arg character0 Character/ped
	@arg model0 Model ID
*/
bool opcode_00dd(const ScriptCharacter& character0, const ScriptModelID model0) {
	RW_UNIMPLEMENTED_OPCODE(0x00dd);
	return false;
}

/**
	@brief   is_player_in_model %1d% model %2t%

	opcode 00de
	@arg arg0 
	@arg arg1 
*/
bool opcode_00de(const ScriptPlayer& arg0, const ScriptModelID arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x00de);
	return false;
}

/**
	@brief   is_char_in_any_car %1d%

	opcode 00df
	@arg character0 Character/ped
*/
bool opcode_00df(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x00df);
	return false;
}

/**
	@brief   is_player_in_any_car %1d%

	opcode 00e0
	@arg arg0 
*/
bool opcode_00e0(const ScriptPlayer& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00e0);
	return false;
}

/**
	@brief   is_button_pressed %1d% button %2d%

	opcode 00e1
	@arg player0 Player
	@arg arg0 Button ID
*/
bool opcode_00e1(const ScriptInt player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x00e1);
	return false;
}

/**
	@brief %3d% = get_pad_state %1d% button %2d%

	opcode 00e2
	@arg arg0 Pad ID
	@arg arg1 Button ID
	@arg arg2 
*/
void opcode_00e2(const ScriptInt arg0, const ScriptInt arg1, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00e2);
}

/**
	@brief   player %1d% %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00e3
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e3(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e3);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00e4
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e4(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e4);
	return false;
}

/**
	@brief   player %1d% %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00e5
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e5(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e5);
	return false;
}

/**
	@brief   player %1d% stopped %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00e6
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00e6(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00e6);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00e7
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e7(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e7);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00e8
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00e8(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00e8);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor %2d% radius %3d% %4d%

	opcode 00e9
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_00e9(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x00e9);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor_on_foot %2d% radius %3d% %4d%

	opcode 00ea
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_00ea(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x00ea);
	return false;
}

/**
	@brief   player %1d% %5b:in-sphere/%near_actor_in_car %2d% radius %3d% %4d%

	opcode 00eb
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_00eb(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x00eb);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00ec
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00ec(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ec);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00ed
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
bool opcode_00ed(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ed);
	return false;
}

/**
	@brief   actor %1d% %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00ee
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00ee(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ee);
	return false;
}

/**
	@brief   actor %1d% sphere %6bin-sphere/%near_point %2d% %3d% radius %4d% %5d%

	opcode 00ef
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00ef(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00ef);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%near_point_on_foot %2d% %3d% radius %4d% %5d%

	opcode 00f0
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00f0(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00f0);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%near_point_in_car %2d% %3d% radius %4d% %5d%

	opcode 00f1
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00f1(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00f1);
	return false;
}

/**
	@brief   locate_char_any_means_char_2d %1d% char %2d% radius %3d% %4d% sphere %5h%

	opcode 00f2
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00f2(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00f2);
	return false;
}

/**
	@brief   actor %1d% near_actor_on_foot %2d% radius %3d% %4d% sphere %5h%

	opcode 00f3
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00f3(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00f3);
	return false;
}

/**
	@brief   actor %1d% near_actor_in_car %2d% radius %3d% %4d% %5h%

	opcode 00f4
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_00f4(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x00f4);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f5
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00f5(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00f5);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f6
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00f6(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00f6);
	return false;
}

/**
	@brief   player %1d% sphere %8b% near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f7
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00f7(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00f7);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f8
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00f8(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00f8);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00f9
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00f9(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00f9);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00fa
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_00fa(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x00fa);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% radius %3d% %4d% %5d%

	opcode 00fb
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00fb(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00fb);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% on_foot radius %3d% %4d% %5d%

	opcode 00fc
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00fc(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00fc);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%near_actor %2d% in_car radius %3d% %4d% %5d%

	opcode 00fd
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_00fd(const ScriptPlayer& arg0, const ScriptCharacter& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x00fd);
	return false;
}

/**
	@brief   actor %1d% %8bin-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00fe
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_00fe(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00fe);
	return false;
}

/**
	@brief   actor %1d% %8bin-sphere/%near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 00ff
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_00ff(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x00ff);
	return false;
}

/**
	@brief   actor %1d% near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0100
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0100(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0100);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0101
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0101(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0101);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point_on_foot %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8h%

	opcode 0102
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0102(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0102);
	return false;
}

/**
	@brief   actor %1d% stopped_near_point_in_car %2d% %3d% %4d% radius %5d% %6d% %7d% sphere %8d%

	opcode 0103
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0103(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0103);
	return false;
}

/**
	@brief   actor %1d% near_actor %2d% radius %3d% %4d% %5d% sphere %6h%

	opcode 0104
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0104(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0104);
	return false;
}

/**
	@brief   actor %1d% near_actor_on_foot %2d% radius %3d% %4d% %5d% sphere %6h%

	opcode 0105
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0105(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0105);
	return false;
}

/**
	@brief   actor %1d% near_actor_in_car %2d% radius %3d% %4d% %5d% %6h%

	opcode 0106
	@arg character0 Character/ped
	@arg character1 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0106(const ScriptCharacter& character0, const ScriptCharacter& character1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0106);
	return false;
}

/**
	@brief %5d% = create_object %1o% at %2d% %3d% %4d%

	opcode 0107
	@arg model0 Model ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg object0 Object
*/
void opcode_0107(const ScriptInt model0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0107);
}

/**
	@brief destroy_object %1d%

	opcode 0108
	@arg object0 Object
*/
void opcode_0108(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0108);
}

/**
	@brief player %1d% money += %2d%

	opcode 0109
	@arg player0 Player
	@arg arg0 
*/
void opcode_0109(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0109);
}

/**
	@brief   player %1d% money > %2d%

	opcode 010a
	@arg player0 Player
	@arg arg0 
*/
bool opcode_010a(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010a);
	return false;
}

/**
	@brief %2d% = player %1d% money

	opcode 010b
	@arg player0 Player
	@arg arg0 
*/
void opcode_010b(const ScriptPlayer& player0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010b);
}

/**
	@brief change_player_into_rc_buggy %1d% at %2d% %3d% %4d% %5d%

	opcode 010c
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
*/
void opcode_010c(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010c);
}

/**
	@brief set_player %1d% wanted_level_to %2d%

	opcode 010d
	@arg player0 Player
	@arg arg0 
*/
void opcode_010d(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010d);
}

/**
	@brief set_player %1d% minimum_wanted_level_to %2d%

	opcode 010e
	@arg player0 Player
	@arg arg0 
*/
void opcode_010e(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010e);
}

/**
	@brief   player %1d% wanted_level > %2d%

	opcode 010f
	@arg player0 Player
	@arg arg0 
*/
bool opcode_010f(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x010f);
	return false;
}

/**
	@brief clear_player %1d% wanted_level

	opcode 0110
	@arg player0 Player
*/
void opcode_0110(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0110);
}

/**
	@brief set_wasted_busted_check_to %1benabled/disabled%

	opcode 0111
	@arg arg0 Boolean true/false
*/
void opcode_0111(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0111);
}

/**
	@brief   has_deatharrest_been_executed

	opcode 0112
*/
bool opcode_0112(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0112);
	return false;
}

/**
	@brief add_ammo_to_player %1d% weapon %2h% to %3d%

	opcode 0113
	@arg player0 Player
	@arg arg0 Weapon ID
	@arg arg1 
*/
void opcode_0113(const ScriptPlayer& player0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0113);
}

/**
	@brief set_actor %1d% car_weapon %2h% ammo_to %3d%

	opcode 0114
	@arg character0 Character/ped
	@arg arg0 Weapon ID
	@arg arg1 
*/
void opcode_0114(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0114);
}

/**
	@brief   player %1d% wasted

	opcode 0117
	@arg player0 Player
*/
bool opcode_0117(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0117);
	return false;
}

/**
	@brief   actor %1d% dead

	opcode 0118
	@arg character0 Character/ped
*/
bool opcode_0118(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0118);
	return false;
}

/**
	@brief   car %1d% wrecked

	opcode 0119
	@arg vehicle0 Car/vehicle
*/
bool opcode_0119(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0119);
	return false;
}

/**
	@brief set_actor %1d% search_threat %2i%

	opcode 011a
	@arg arg0 
	@arg arg1 
*/
void opcode_011a(const ScriptCharacter& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x011a);
}

/**
	@brief actor %1d% clear_objective

	opcode 011c
	@arg arg0 
*/
void opcode_011c(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x011c);
}

/**
	@brief   player %1d% in_zone %2z%

	opcode 0121
	@arg player0 Player
	@arg arg0 Area name
*/
bool opcode_0121(const ScriptPlayer& player0, const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0121);
	return false;
}

/**
	@brief   player %1d% pressing_horn

	opcode 0122
	@arg player0 Player
*/
bool opcode_0122(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0122);
	return false;
}

/**
	@brief   actor %1d% spotted_player %2d%

	opcode 0123
	@arg character0 Character/ped
	@arg player0 Player
*/
bool opcode_0123(const ScriptCharacter& character0, const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0123);
	return false;
}

/**
	@brief   actor %1d% walking

	opcode 0126
	@arg character0 Character/ped
*/
bool opcode_0126(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0126);
	return false;
}

/**
	@brief %4d% = create_actor %2d% %3o% in_car %1d% driverseat

	opcode 0129
	@arg arg0 Ped type
	@arg model0 Model ID
	@arg vehicle0 Car/vehicle
	@arg character0 Character/ped
*/
void opcode_0129(const ScriptVehicle& arg0, const ScriptInt model0, const ScriptModelID vehicle0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0129);
}

/**
	@brief put_player %1d% at %2d% %3d% %4d% and_remove_from_car

	opcode 012a
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_012a(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x012a);
}

/**
	@brief   player %1d% busted

	opcode 0130
	@arg player0 Player
*/
bool opcode_0130(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0130);
	return false;
}

/**
	@brief set_car %1d% door_lock %2d%

	opcode 0135
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_0135(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0135);
}

/**
	@brief  shake_cam_with_point %1d% xyz %2% %3% %4%

	opcode 0136
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_0136(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0136);
}

/**
	@brief   car %1d% id == %2o%

	opcode 0137
	@arg vehicle0 Car/vehicle
	@arg model0 Model ID
*/
bool opcode_0137(const ScriptVehicle& vehicle0, const ScriptModelID model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0137);
	return false;
}

/**
	@brief   car %1d% crushed_by_car_crusher

	opcode 0149
	@arg vehicle0 Car/vehicle
*/
bool opcode_0149(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0149);
	return false;
}

/**
	@brief %13d% = init_car_generator %5o% %6d% %7d% force_spawn %8d% alarm %9d% door_lock %10d% min_delay %11d% max_delay %12d% at %1d% %2d% %3d% angle %4d%

	opcode 014b
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
	@arg model0 Model ID
	@arg arg1 Car colour ID
	@arg arg2 Car colour ID
	@arg arg3 Boolean true/false
	@arg arg4 
	@arg arg5 
	@arg arg6 Time (ms)
	@arg arg7 Time (ms)
	@arg arg8 Car generator
*/
void opcode_014b(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptModelID model0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, ScriptVehicleGenerator& arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x014b);
}

/**
	@brief set_parked_car_generator %1d% cars_to_generate_to %2d%

	opcode 014c
	@arg arg0 Car generator
	@arg arg1 
*/
void opcode_014c(const ScriptVehicleGenerator& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x014c);
}

/**
	@brief text_pager %1g% time_per_char %2d% ms unknown_flags %3d% %4d%

	opcode 014d
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_014d(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x014d);
}

/**
	@brief start_timer_at %1d%

	opcode 014e
	@arg global0 Global timer storage
*/
void opcode_014e(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x014e);
}

/**
	@brief stop_timer %1d%

	opcode 014f
	@arg global0 Global timer storage
*/
void opcode_014f(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x014f);
}

/**
	@brief remove_status_text %1d%

	opcode 0151
	@arg global0 
*/
void opcode_0151(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0151);
}

/**
	@brief set_zone_car_info %1s% %2bday/night% %3h% %4h% %5h% %6h% %7h% %8h% %9h% %10h% %11h% %12h% %13h% %14h% %15h% %16h% %17h%

	opcode 0152
	@arg arg0 
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
*/
void opcode_0152(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt arg11, const ScriptInt arg12, const ScriptInt arg13, const ScriptInt arg14, const ScriptInt arg15, const ScriptInt arg16) {
	RW_UNIMPLEMENTED_OPCODE(0x0152);
}

/**
	@brief   actor %1d% in_zone %2z%

	opcode 0154
	@arg character0 Character/ped
	@arg arg0 Area name
*/
bool opcode_0154(const ScriptCharacter& character0, const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0154);
	return false;
}

/**
	@brief set_zone_ped_density %1z% %2b:day/night% %3d%

	opcode 0156
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0156(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0156);
}

/**
	@brief camera_on_player %1d% mode %2d% switchstyle %3d%

	opcode 0157
	@arg player0 Player
	@arg arg0 Camera mode ID
	@arg arg1 
*/
void opcode_0157(const ScriptPlayer& player0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0157);
}

/**
	@brief camera_on_vehicle %1d% mode %2d% switchstyle %3d%

	opcode 0158
	@arg vehicle0 Car/vehicle
	@arg arg0 Camera mode ID
	@arg arg1 
*/
void opcode_0158(const ScriptVehicle& vehicle0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0158);
}

/**
	@brief camera_on_ped %1d% mode %2d% switchstyle %3d%

	opcode 0159
	@arg character0 Character/ped
	@arg arg0 Camera mode ID
	@arg arg1 
*/
void opcode_0159(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0159);
}

/**
	@brief restore_camera

	opcode 015a
*/
void opcode_015a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x015a);
}

/**
	@brief set_zone_gang_info %1s% %2bday/night% %3h% %4h% %5h% %6h% %7h% %8h% %9h% %10h% %11h%

	opcode 015c
	@arg arg0 Area name
	@arg arg1 Boolean true/false
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
void opcode_015c(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8, const ScriptInt arg9, const ScriptInt arg10) {
	RW_UNIMPLEMENTED_OPCODE(0x015c);
}

/**
	@brief set_time_scale %1d%

	opcode 015d
	@arg arg0 
*/
void opcode_015d(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x015d);
}

/**
	@brief   car %1d% wheels_on_ground

	opcode 015e
	@arg arg0 
*/
bool opcode_015e(const ScriptVehicle& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x015e);
	return false;
}

/**
	@brief set_camera_position %1d% %2d% %3d% rotation %4d% %5d% %6d%

	opcode 015f
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Rotation
	@arg arg1 Y Rotation
	@arg arg2 Z Rotation
*/
void opcode_015f(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x015f);
}

/**
	@brief point_camera %1d% %2d% %3d% switchstyle %4d%

	opcode 0160
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
*/
void opcode_0160(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0160);
}

/**
	@brief %4d% = create_marker_above_car %1d% color %2d% visibility %3d%

	opcode 0161
	@arg vehicle0 Car/vehicle
	@arg arg0 
	@arg arg1 Boolean true/false
	@arg arg2 Blip
*/
void opcode_0161(const ScriptVehicle& vehicle0, const ScriptInt arg0, const ScriptInt arg1, ScriptBlip& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0161);
}

/**
	@brief %4d% = create_marker_above_actor %1d% color %2d% visibility %3d%

	opcode 0162
	@arg character0 Character/ped
	@arg arg0 
	@arg arg1 
	@arg arg2 Blip
*/
void opcode_0162(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1, ScriptBlip& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0162);
}

/**
	@brief disable_marker %1d%

	opcode 0164
	@arg arg0 Blip
*/
void opcode_0164(const ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0164);
}

/**
	@brief set_marker %1d% color_to %2d%

	opcode 0165
	@arg arg0 Blip
	@arg arg1 
*/
void opcode_0165(const ScriptBlip& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0165);
}

/**
	@brief set_marker %1d% brightness_to %2d%

	opcode 0166
	@arg arg0 Blip
	@arg arg1 Boolean true/false
*/
void opcode_0166(const ScriptBlip& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0166);
}

/**
	@brief %6d% = create_marker_at %1d% %2d% %3d% color %4d% visibility %5d%

	opcode 0167
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
	@arg arg1 
	@arg arg2 Blip
*/
void opcode_0167(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0, const ScriptInt arg1, ScriptBlip& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0167);
}

/**
	@brief show_on_radar %1d% %2d%

	opcode 0168
	@arg arg0 Blip
	@arg arg1 
*/
void opcode_0168(const ScriptBlip& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0168);
}

/**
	@brief set_fade_color %1d% %2d% %3d%

	opcode 0169
	@arg arg0 Red (0-255)
	@arg arg1 Green (0-255)
	@arg arg2 Blue (0-255)
*/
void opcode_0169(const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0169);
}

/**
	@brief fade %2b% for %1d% ms

	opcode 016a
	@arg arg0 Boolean true/false
	@arg arg1 Time (ms)
*/
void opcode_016a(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x016a);
}

/**
	@brief   fading

	opcode 016b
*/
bool opcode_016b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x016b);
	return false;
}

/**
	@brief restart_if_wasted at %1d% %2d% %3d% heading %4d%

	opcode 016c
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
*/
void opcode_016c(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x016c);
}

/**
	@brief restart_if_busted at %1d% %2d% %3d% heading %4d%

	opcode 016d
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
*/
void opcode_016d(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x016d);
}

/**
	@brief override_next_restart at %1d% %2d% %3d% heading %4d%

	opcode 016e
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
*/
void opcode_016e(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x016e);
}

/**
	@brief create_particle %1a% %5d% %6d% %7d% %8d% %9d% %10d% at %2d% %3d% %4d%

	opcode 016f
	@arg arg0 
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg1 Angle
	@arg arg2 
	@arg arg3 
	@arg arg4 Red (0-255)
	@arg arg5 Green (0-255)
	@arg arg6 Blue (0-255)
*/
void opcode_016f(const ScriptInt arg0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x016f);
}

/**
	@brief %2d% = player %1d% z_angle

	opcode 0170
	@arg player0 Player
	@arg arg0 Angle
*/
void opcode_0170(const ScriptPlayer& player0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0170);
}

/**
	@brief set_player %1d% z_angle_to %2d%

	opcode 0171
	@arg player0 Player
	@arg arg0 Angle
*/
void opcode_0171(const ScriptPlayer& player0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0171);
}

/**
	@brief %2d% = actor %1d% z_angle

	opcode 0172
	@arg character0 Character/ped
	@arg arg0 Angle
*/
void opcode_0172(const ScriptCharacter& character0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0172);
}

/**
	@brief set_actor %1d% z_angle_to %2d%

	opcode 0173
	@arg character0 Character/ped
	@arg arg0 Angle
*/
void opcode_0173(const ScriptCharacter& character0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0173);
}

/**
	@brief %2d% = car %1d% z_angle

	opcode 0174
	@arg vehicle0 Car/vehicle
	@arg arg0 Angle
*/
void opcode_0174(const ScriptVehicle& vehicle0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0174);
}

/**
	@brief set_car %1d% z_angle_to %2d%

	opcode 0175
	@arg vehicle0 Car/vehicle
	@arg arg0 Angle
*/
void opcode_0175(const ScriptVehicle& vehicle0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0175);
}

/**
	@brief %2d% = object %1d% z_angle

	opcode 0176
	@arg object0 Object
	@arg arg0 Angle
*/
void opcode_0176(const ScriptObject& object0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0176);
}

/**
	@brief set_object %1d% z_angle_to %2d%

	opcode 0177
	@arg object0 Object
	@arg arg0 Angle
*/
void opcode_0177(const ScriptObject& object0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0177);
}

/**
	@brief   player %1d% picked_up_object %2d%

	opcode 0178
	@arg player0 Player
	@arg object0 Object
*/
bool opcode_0178(const ScriptPlayer& player0, const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0178);
	return false;
}

/**
	@brief   actor %1d% picked_up_object %2d%

	opcode 0179
	@arg character0 Character/ped
	@arg object0 Object
*/
bool opcode_0179(const ScriptCharacter& character0, const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0179);
	return false;
}

/**
	@brief set_player %1d% weapon %2d% ammo_to %3d%

	opcode 017a
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_017a(const ScriptPlayer& arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x017a);
}

/**
	@brief set_actor %1d% weapon %2d% ammo_to %3d%

	opcode 017b
	@arg character0 Character/ped
	@arg arg0 Weapon ID
	@arg arg1 
*/
void opcode_017b(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x017b);
}

/**
	@brief declare_mission_flag %1d%

	opcode 0180
	@arg global0 
*/
void opcode_0180(ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0180);
}

/**
	@brief declare_mission_flag_for_contact %1d% as %2d%

	opcode 0181
	@arg arg0 
	@arg global0 
*/
void opcode_0181(const ScriptInt arg0, ScriptIntGlobal global0) {
	RW_UNIMPLEMENTED_OPCODE(0x0181);
}

/**
	@brief contact %1d% base_brief = %2d%

	opcode 0182
	@arg arg0 
	@arg arg1 
*/
void opcode_0182(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0182);
}

/**
	@brief   player %1d% health > %2h%

	opcode 0183
	@arg player0 Player
	@arg arg0 
*/
bool opcode_0183(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0183);
	return false;
}

/**
	@brief   actor %1d% health >= %2d%

	opcode 0184
	@arg character0 Character/ped
	@arg arg0 
*/
bool opcode_0184(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0184);
	return false;
}

/**
	@brief   car %1d% health >= %2d%

	opcode 0185
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
bool opcode_0185(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0185);
	return false;
}

/**
	@brief %2d% = create_marker_above_car %1d%

	opcode 0186
	@arg vehicle0 Car/vehicle
	@arg arg0 Blip
*/
void opcode_0186(const ScriptVehicle& vehicle0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0186);
}

/**
	@brief %2d% = create_marker_above_actor %1d%

	opcode 0187
	@arg character0 Character/ped
	@arg arg0 Blip
*/
void opcode_0187(const ScriptCharacter& character0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0187);
}

/**
	@brief %2d% = create_marker_above_object %1d%

	opcode 0188
	@arg character0 Character/ped
	@arg arg0 Blip
*/
void opcode_0188(const ScriptObject& character0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0188);
}

/**
	@brief %4d% = unknown_create_checkpoint_at %1d% %2d% %3d%

	opcode 0189
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Blip
*/
void opcode_0189(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0189);
}

/**
	@brief %4d% = create_checkpoint_at %1d% %2d% %3d%

	opcode 018a
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Blip
*/
void opcode_018a(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x018a);
}

/**
	@brief show_on_radar %1d% %2d%

	opcode 018b
	@arg arg0 Blip
	@arg arg1 
*/
void opcode_018b(const ScriptBlip& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x018b);
}

/**
	@brief play_sound %4d% at %1d% %2d% %3d%

	opcode 018c
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
*/
void opcode_018c(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptSound arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x018c);
}

/**
	@brief %5d% = create_sound %4d% at %1d% %2d% %3d%

	opcode 018d
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
	@arg arg1 
*/
void opcode_018d(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptSound arg0, ScriptSound& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x018d);
}

/**
	@brief stop_sound %1d%

	opcode 018e
	@arg arg0 
*/
void opcode_018e(const ScriptSound& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x018e);
}

/**
	@brief   car %1d% flipped_for_2_seconds

	opcode 018f
	@arg vehicle0 Car/vehicle
*/
bool opcode_018f(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x018f);
	return false;
}

/**
	@brief add_car %1d% to_flipped_check

	opcode 0190
	@arg vehicle0 Car/vehicle
*/
void opcode_0190(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0190);
}

/**
	@brief remove_car %1d% from_flipped_check

	opcode 0191
	@arg vehicle0 Car/vehicle
*/
void opcode_0191(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0191);
}

/**
	@brief set_actor %1d% objective_to_stand_still

	opcode 0192
	@arg character0 Character/ped
*/
void opcode_0192(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0192);
}

/**
	@brief set_actor %1d% objective_to_act_like_ped

	opcode 0193
	@arg character0 Character/ped
*/
void opcode_0193(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0193);
}

/**
	@brief set_actor %1d% objective_to_guard_point %2d% %3d% %4d%

	opcode 0194
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0194(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0194);
}

/**
	@brief set_actor %1d% objective3 %2d% %3d% %4d% %5d%

	opcode 0195
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_0195(const ScriptCharacter& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0195);
}

/**
	@brief actor %1d% objective5

	opcode 0196
	@arg arg0 
*/
void opcode_0196(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0196);
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 0197
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_0197(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0197);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 0198
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_0198(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0198);
	return false;
}

/**
	@brief   player %1d% %6b:in-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 0199
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_0199(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0199);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 019a
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_019a(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x019a);
	return false;
}

/**
	@brief   player %1d% stopped %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 019b
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_019b(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x019b);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019c
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_019c(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x019c);
	return false;
}

/**
	@brief   player %1d% %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019d
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_019d(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x019d);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019e
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_019e(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x019e);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 019f
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_019f(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x019f);
	return false;
}

/**
	@brief   player %1d% stopped %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a0
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
bool opcode_01a0(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x01a0);
	return false;
}

/**
	@brief   actor %1d% %6b:in-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 01a1
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a1(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a1);
	return false;
}

/**
	@brief   actor %1d% %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 01a2
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a2(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a2);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 01a3
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a3(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a3);
	return false;
}

/**
	@brief   actor %1d% stopped %6bin-sphere/%in_rectangle_on_foot %2d% %3d% %4d% %5d%

	opcode 01a4
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a4(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a4);
	return false;
}

/**
	@brief   actor %1d% stopped %6b:in-sphere/%in_rectangle_in_car %2d% %3d% %4d% %5d%

	opcode 01a5
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a5(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a5);
	return false;
}

/**
	@brief   actor %1d% %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a6
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a6(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a6);
	return false;
}

/**
	@brief   actor %1d% %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a7
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a7(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a7);
	return false;
}

/**
	@brief   actor %1d% stopped %8bin-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a8
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a8(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a8);
	return false;
}

/**
	@brief   actor %1d% stopped %8b:in-sphere/%in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01a9
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01a9(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01a9);
	return false;
}

/**
	@brief   actor %1d% stopped %8b:in-sphere/%in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01aa
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01aa(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01aa);
	return false;
}

/**
	@brief   car %1d% stopped %6b:in-sphere/%in_rectangle %2d% %3d% %4d% %5d%

	opcode 01ab
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01ab(const ScriptVehicle& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01ab);
	return false;
}

/**
	@brief   car %1d% stopped %8b:in-sphere/%in_cube %2d% %3d% %4d% %5d% %6d% %7d%

	opcode 01ac
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
*/
bool opcode_01ac(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01ac);
	return false;
}

/**
	@brief   car %1d% sphere %6b% near_point %2d% %3d% radius %4d% %5d%

	opcode 01ad
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_01ad(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01ad);
	return false;
}

/**
	@brief   car %1d% stopped %6b:in-sphere/%near_point %2d% %3d% %4d% %5d%

	opcode 01ae
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_01ae(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01ae);
	return false;
}

/**
	@brief   car %1d% %8bin-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 01af
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_01af(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01af);
	return false;
}

/**
	@brief   car %1d% stopped %8b:in-sphere/%near_point %2d% %3d% %4d% radius %5d% %6d% %7d%

	opcode 01b0
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_01b0(const ScriptVehicle& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01b0);
	return false;
}

/**
	@brief give_player %1d% weapon %2c% ammo %3d%

	opcode 01b1
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_01b1(const ScriptPlayer& arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01b1);
}

/**
	@brief give_actor %1d% weapon %2c% ammo %3d%

	opcode 01b2
	@arg character0 Character/ped
	@arg arg0 Weapon ID
	@arg arg1 
*/
void opcode_01b2(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01b2);
}

/**
	@brief set_player %1d% controllable %2btrue/false%

	opcode 01b4
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_01b4(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01b4);
}

/**
	@brief force_weather %1d%

	opcode 01b5
	@arg arg0 
*/
void opcode_01b5(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01b5);
}

/**
	@brief set_weather %1d%

	opcode 01b6
	@arg arg0 Weather ID
*/
void opcode_01b6(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01b6);
}

/**
	@brief release_weather

	opcode 01b7
*/
void opcode_01b7(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x01b7);
}

/**
	@brief set_player %1d% armed_weapon_to %2c%

	opcode 01b8
	@arg arg0 
	@arg arg1 
*/
void opcode_01b8(const ScriptPlayer& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01b8);
}

/**
	@brief set_actor %1d% armed_weapon_to %2c%

	opcode 01b9
	@arg character0 Character/ped
	@arg arg0 Weapon ID
*/
void opcode_01b9(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01b9);
}

/**
	@brief store_object %1d% position_to %2d% %3d% %4d%

	opcode 01bb
	@arg object0 Object
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_01bb(const ScriptObject& object0, ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x01bb);
}

/**
	@brief set_object_coordinates %1d% at %2d% %3d% %4d%

	opcode 01bc
	@arg object0 Object
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_01bc(const ScriptObject& object0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x01bc);
}

/**
	@brief %1d% = current_time_in_ms

	opcode 01bd
	@arg arg0 Time (ms)
*/
void opcode_01bd(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01bd);
}

/**
	@brief set_actor %1d% to_look_at_spot %2d% %3d% %4d%

	opcode 01be
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_01be(const ScriptCharacter& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01be);
}

/**
	@brief %2d% = player %1d% wanted_level

	opcode 01c0
	@arg player0 Player
	@arg arg0 
*/
void opcode_01c0(const ScriptPlayer& player0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c0);
}

/**
	@brief   car %1d% stopped

	opcode 01c1
	@arg vehicle0 Car/vehicle
*/
bool opcode_01c1(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c1);
	return false;
}

/**
	@brief remove_references_to_actor %1d%

	opcode 01c2
	@arg character0 Character/ped
*/
void opcode_01c2(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c2);
}

/**
	@brief remove_references_to_car %1d%

	opcode 01c3
	@arg vehicle0 Car/vehicle
*/
void opcode_01c3(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c3);
}

/**
	@brief remove_references_to_object %1d%

	opcode 01c4
	@arg object0 Object
*/
void opcode_01c4(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c4);
}

/**
	@brief remove_actor_from_mission_cleanup_list %1d%

	opcode 01c5
	@arg character0 Character/ped
*/
void opcode_01c5(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c5);
}

/**
	@brief remove_car_from_mission_cleanup_list %1d%

	opcode 01c6
	@arg vehicle0 Car/vehicle
*/
void opcode_01c6(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c6);
}

/**
	@brief remove_object_from_mission_cleanup_list %1d%

	opcode 01c7
	@arg object0 Object
*/
void opcode_01c7(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c7);
}

/**
	@brief %5d% = create_actor %2d% model %3o% in_car %1d% passenger_seat %4d%

	opcode 01c8
	@arg arg0 Ped type
	@arg model0 Model ID
	@arg vehicle0 Car/vehicle
	@arg arg1 
	@arg character0 Character/ped
*/
void opcode_01c8(const ScriptVehicle& arg0, const ScriptInt model0, const ScriptModelID vehicle0, const ScriptInt arg1, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x01c8);
}

/**
	@brief actor %1d% kill_actor %2d%

	opcode 01c9
	@arg arg0 
	@arg arg1 
*/
void opcode_01c9(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01c9);
}

/**
	@brief actor %1d% kill_player %2d%

	opcode 01ca
	@arg arg0 
	@arg arg1 
*/
void opcode_01ca(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01ca);
}

/**
	@brief actor %1d% kill_actor %2d%

	opcode 01cb
	@arg arg0 
	@arg arg1 
*/
void opcode_01cb(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01cb);
}

/**
	@brief actor %1d% kill_player %2d%

	opcode 01cc
	@arg arg0 
	@arg arg1 
*/
void opcode_01cc(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01cc);
}

/**
	@brief actor %1d% avoid_player %2d%

	opcode 01ce
	@arg arg0 
	@arg arg1 
*/
void opcode_01ce(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01ce);
}

/**
	@brief actor %1d% avoid_char %2d%

	opcode 01cf
	@arg arg0 
	@arg arg1 
*/
void opcode_01cf(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01cf);
}

/**
	@brief actor %1d% avoid_player %2d%

	opcode 01d0
	@arg arg0 
	@arg arg1 
*/
void opcode_01d0(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d0);
}

/**
	@brief actor %1d% follow_actor %2d%

	opcode 01d1
	@arg arg0 
	@arg arg1 
*/
void opcode_01d1(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d1);
}

/**
	@brief actor %1d% follow_player %2d%

	opcode 01d2
	@arg arg0 
	@arg arg1 
*/
void opcode_01d2(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d2);
}

/**
	@brief actor %1d% leave_car %2d%

	opcode 01d3
	@arg arg0 
	@arg arg1 
*/
void opcode_01d3(const ScriptCharacter& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d3);
}

/**
	@brief actor %1d% go_to_car %2d% and_enter_it_as_a_passenger

	opcode 01d4
	@arg arg0 
	@arg arg1 
*/
void opcode_01d4(const ScriptCharacter& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d4);
}

/**
	@brief actor %1d% go_to_and_drive_car %2d%

	opcode 01d5
	@arg arg0 
	@arg arg1 
*/
void opcode_01d5(const ScriptCharacter& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d5);
}

/**
	@brief actor %1d% destroy_object %2d%

	opcode 01d8
	@arg arg0 
	@arg arg1 
*/
void opcode_01d8(const ScriptCharacter& arg0, const ScriptObject& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d8);
}

/**
	@brief actor %1d% destroy_car %2d%

	opcode 01d9
	@arg arg0 
	@arg arg1 
*/
void opcode_01d9(const ScriptCharacter& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01d9);
}

/**
	@brief tie_actor %1d% to_actor %2d%

	opcode 01de
	@arg arg0 
	@arg arg1 
*/
void opcode_01de(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01de);
}

/**
	@brief tie_actor %1d% to_player %2d%

	opcode 01df
	@arg arg0 
	@arg arg1 
*/
void opcode_01df(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01df);
}

/**
	@brief clear_leader %1d%

	opcode 01e0
	@arg arg0 
*/
void opcode_01e0(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01e0);
}

/**
	@brief set_actor %1d% follow_route %2d% behaviour %3d%

	opcode 01e1
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_01e1(const ScriptCharacter& arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x01e1);
}

/**
	@brief add_route_point %1d% at %2d% %3d% %4d%

	opcode 01e2
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_01e2(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01e2);
}

/**
	@brief text_1number_styled %1g% number %2d% duration %3d% ms style %4d%

	opcode 01e3
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_01e3(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01e3);
}

/**
	@brief text_1number_lowpriority %1g% number %2d% duration %3d% ms flag %4d%

	opcode 01e4
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_01e4(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01e4);
}

/**
	@brief text_1number_highpriority %1g% number %2d% duration %3d% ms flag %4d%

	opcode 01e5
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_01e5(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01e5);
}

/**
	@brief switch_roads_on %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 01e7
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_01e7(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x01e7);
}

/**
	@brief switch_roads_off %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 01e8
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_01e8(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x01e8);
}

/**
	@brief %2d% = car %1d% num_passengers

	opcode 01e9
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_01e9(const ScriptVehicle& vehicle0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01e9);
}

/**
	@brief %2d% = car %1d% max_passengers

	opcode 01ea
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_01ea(const ScriptVehicle& vehicle0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01ea);
}

/**
	@brief set_car_density_to %1d%

	opcode 01eb
	@arg arg0 
*/
void opcode_01eb(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01eb);
}

/**
	@brief make_car %1d% very_heavy %2h%

	opcode 01ec
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_01ec(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01ec);
}

/**
	@brief clear_actor %1d% threat_search

	opcode 01ed
	@arg arg0 
*/
void opcode_01ed(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01ed);
}

/**
	@brief activate_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 01ee
	@arg arg0 
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
void opcode_01ee(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptFloat arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x01ee);
}

/**
	@brief deactivate_crane %1d% %2d%

	opcode 01ef
	@arg arg0 
	@arg arg1 
*/
void opcode_01ef(const ScriptFloat arg0, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01ef);
}

/**
	@brief set_max_wanted_level_to %1d%

	opcode 01f0
	@arg arg0 
*/
void opcode_01f0(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01f0);
}

/**
	@brief   car %1d% airborne

	opcode 01f3
	@arg vehicle0 Car/vehicle
*/
bool opcode_01f3(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x01f3);
	return false;
}

/**
	@brief   car %1d% flipped

	opcode 01f4
	@arg vehicle0 Car/vehicle
*/
bool opcode_01f4(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x01f4);
	return false;
}

/**
	@brief %2d% = create_emulated_actor_from_player %1d%

	opcode 01f5
	@arg player0 Player
	@arg character0 Character/ped
*/
void opcode_01f5(const ScriptPlayer& player0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x01f5);
}

/**
	@brief cancel_override_restart

	opcode 01f6
*/
void opcode_01f6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x01f6);
}

/**
	@brief set_player %1d% ignored_by_cops_state_to %2b:true/false%

	opcode 01f7
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_01f7(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01f7);
}

/**
	@brief init_rampage %1g% weapon %2d% time %3d% %4d% targets %5o% %6o% %7o% %8o% flag %9d%

	opcode 01f9
	@arg arg0 GXT entry
	@arg arg1 Weapon ID
	@arg arg2 Time (ms)
	@arg arg3 
	@arg model0 Model ID
	@arg model1 Model ID
	@arg model2 Model ID
	@arg model3 Model ID
	@arg arg4 Boolean true/false
*/
void opcode_01f9(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptModelID model0, const ScriptModelID model1, const ScriptModelID model2, const ScriptModelID model3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01f9);
}

/**
	@brief %1d% = rampage_status

	opcode 01fa
	@arg arg0 
*/
void opcode_01fa(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x01fa);
}

/**
	@brief %2d% = square_root %1d%

	opcode 01fb
	@arg arg0 
	@arg arg1 
*/
void opcode_01fb(const ScriptFloat arg0, ScriptFloat& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x01fb);
}

/**
	@brief   player %1d% near_car %2d% radius %3d% %4d% unknown %5d%

	opcode 01fc
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_01fc(const ScriptPlayer& arg0, const ScriptVehicle& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01fc);
	return false;
}

/**
	@brief   player %1d% near_car_on_foot %2d% radius %3d% %4d% unknown %5d%

	opcode 01fd
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_01fd(const ScriptPlayer& arg0, const ScriptVehicle& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01fd);
	return false;
}

/**
	@brief   player %1d% near_car_in_car %2d% radius %3d% %4d% unknown %5d%

	opcode 01fe
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
bool opcode_01fe(const ScriptPlayer& arg0, const ScriptVehicle& arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x01fe);
	return false;
}

/**
	@brief   player %1d% near_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 01ff
	@arg player0 Player
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_01ff(const ScriptPlayer& player0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x01ff);
	return false;
}

/**
	@brief   player %1d% near_car_on_foot %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0200
	@arg player0 Player
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0200(const ScriptPlayer& player0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0200);
	return false;
}

/**
	@brief   player %1d% near_car_in_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0201
	@arg player0 Player
	@arg character0 Character/ped
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0201(const ScriptPlayer& player0, const ScriptVehicle& character0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0201);
	return false;
}

/**
	@brief   actor %1d% near_car %2d% radius %3d% %4d% sphere %5d%

	opcode 0202
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_0202(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0202);
	return false;
}

/**
	@brief   actor %1d% near_car_on_foot %2d% radius %3d% %4d% unknown %5d%

	opcode 0203
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_0203(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0203);
	return false;
}

/**
	@brief   actor %1d% near_car_in_car %2d% radius %3d% %4d% unknown %5d%

	opcode 0204
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Boolean true/false
*/
bool opcode_0204(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0204);
	return false;
}

/**
	@brief   actor %1d% near_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0205
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0205(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0205);
	return false;
}

/**
	@brief   actor %1d% near_car_on_foot %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0206
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0206(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0206);
	return false;
}

/**
	@brief   actor %1d% near_car_in_car %2d% radius %3d% %4d% %5d% unknown %6h%

	opcode 0207
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
	@arg arg3 Boolean true/false
*/
bool opcode_0207(const ScriptCharacter& character0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0207);
	return false;
}

/**
	@brief %3d% = random_float %1d% %2d%

	opcode 0208
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0208(const ScriptFloat arg0, const ScriptFloat arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0208);
}

/**
	@brief %3d% = random_int_in_ranges %1d% %2d%

	opcode 0209
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0209(const ScriptInt arg0, const ScriptInt arg1, ScriptInt& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0209);
}

/**
	@brief set_car %1d% door_status_to %2d%

	opcode 020a
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_020a(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x020a);
}

/**
	@brief explode_car %1d%

	opcode 020b
	@arg vehicle0 Car/vehicle
*/
void opcode_020b(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x020b);
}

/**
	@brief create_explosion %4d% at %1d% %2d% %3d%

	opcode 020c
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Explosion ID
*/
void opcode_020c(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x020c);
}

/**
	@brief   car %1d% is_upright

	opcode 020d
	@arg vehicle0 Car/vehicle
*/
bool opcode_020d(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x020d);
	return false;
}

/**
	@brief actor %1d% look_at_actor %2d%

	opcode 020e
	@arg arg0 
	@arg arg1 
*/
void opcode_020e(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x020e);
}

/**
	@brief actor %1d% look_at_player %2d%

	opcode 020f
	@arg arg0 
	@arg arg1 
*/
void opcode_020f(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x020f);
}

/**
	@brief player %1d% look_at_actor %2d%

	opcode 0210
	@arg player0 Player
	@arg character0 Character/ped
*/
void opcode_0210(const ScriptPlayer& player0, const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0210);
}

/**
	@brief actor %1d% walk_to %2d% %3d%

	opcode 0211
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
*/
void opcode_0211(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0211);
}

/**
	@brief %6d% = create_pickup %1o% type %2d% at %3d% %4d% %5d%

	opcode 0213
	@arg model0 Model ID
	@arg arg0 
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg1 Pickup
*/
void opcode_0213(const ScriptInt model0, const ScriptPickup arg0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptPickup& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0213);
}

/**
	@brief   pickup %1d% picked_up

	opcode 0214
	@arg arg0 Pickup
*/
bool opcode_0214(const ScriptPickup& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0214);
	return false;
}

/**
	@brief destroy_pickup %1d%

	opcode 0215
	@arg arg0 Pickup
*/
void opcode_0215(const ScriptPickup& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0215);
}

/**
	@brief set_car %1d% taxi_available_light_to %2b:on/off%

	opcode 0216
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_0216(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0216);
}

/**
	@brief text_big_styled %1g% duration %2d% ms style %3d%

	opcode 0217
	@arg arg0 GXT entry
	@arg arg1 Time (ms)
	@arg arg2 
*/
void opcode_0217(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0217);
}

/**
	@brief text_big_1number_styled %1g% number %2d% duration %3d% ms style %4d%

	opcode 0218
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_0218(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0218);
}

/**
	@brief %8h% = create_garage %7h% from %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0219
	@arg zCoord0 Z Coord
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 
	@arg arg1 Handle
	@arg arg2 
	@arg arg3 
*/
void opcode_0219(const ScriptFloat zCoord0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord1, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2, ScriptGarage& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0219);
}

/**
	@brief set_garage %1d% to_accept_car %2d%

	opcode 021b
	@arg arg0 
	@arg vehicle0 Car/vehicle
*/
void opcode_021b(const ScriptGarage& arg0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x021b);
}

/**
	@brief   car_inside_garage %1d%

	opcode 021c
	@arg arg0 
*/
bool opcode_021c(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x021c);
	return false;
}

/**
	@brief set_free_bomb_shop_to %1btrue/false%

	opcode 021d
	@arg arg0 
*/
void opcode_021d(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x021d);
}

/**
	@brief   car %d has_car_bomb

	opcode 0220
	@arg vehicle0 Car/vehicle
*/
bool opcode_0220(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0220);
	return false;
}

/**
	@brief set_player %1d% apply_brakes_to_car %2d%

	opcode 0221
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0221(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0221);
}

/**
	@brief set_player %1d% health_to %2d%

	opcode 0222
	@arg player0 Player
	@arg arg0 
*/
void opcode_0222(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0222);
}

/**
	@brief set_actor %1d% health_to %2d%

	opcode 0223
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_0223(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0223);
}

/**
	@brief set_car %1d% health_to %2d%

	opcode 0224
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_0224(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0224);
}

/**
	@brief %2d% = player %1d% health

	opcode 0225
	@arg player0 Player
	@arg arg0 
*/
void opcode_0225(const ScriptPlayer& player0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0225);
}

/**
	@brief %2d% = actor %1d% health

	opcode 0226
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_0226(const ScriptCharacter& character0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0226);
}

/**
	@brief %2d% = car %1d% health

	opcode 0227
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_0227(const ScriptVehicle& vehicle0, ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0227);
}

/**
	@brief   car %1d% bomb_status == %2d%

	opcode 0228
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
bool opcode_0228(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0228);
	return false;
}

/**
	@brief set_car %1d% color_to %2d% %3d%

	opcode 0229
	@arg vehicle0 Car/vehicle
	@arg arg0 Car colour ID
	@arg arg1 Car colour ID
*/
void opcode_0229(const ScriptVehicle& vehicle0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0229);
}

/**
	@brief switch_ped_roads_on %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 022a
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_022a(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x022a);
}

/**
	@brief switch_ped_roads_off %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 022b
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_022b(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x022b);
}

/**
	@brief set_actor %1d% to_look_at_actor %2d%

	opcode 022c
	@arg arg0 
	@arg arg1 
*/
void opcode_022c(const ScriptCharacter& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x022c);
}

/**
	@brief set_actor %1d% to_look_at_player %2d%

	opcode 022d
	@arg arg0 
	@arg arg1 
*/
void opcode_022d(const ScriptCharacter& arg0, const ScriptPlayer& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x022d);
}

/**
	@brief set_player %1d% to_look_at_actor %2d%

	opcode 022e
	@arg arg0 
	@arg arg1 
*/
void opcode_022e(const ScriptPlayer& arg0, const ScriptCharacter& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x022e);
}

/**
	@brief set_actor %1d% stop_looking

	opcode 022f
	@arg arg0 
*/
void opcode_022f(const ScriptCharacter& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x022f);
}

/**
	@brief set_player %1d% stop_looking

	opcode 0230
	@arg player0 Player
*/
void opcode_0230(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0230);
}

/**
	@brief script_heli %1bon/off%

	opcode 0231
	@arg arg0 Boolean true/false
*/
void opcode_0231(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0231);
}

/**
	@brief set_gang %1h% models_to %2o% %3o%

	opcode 0235
	@arg arg0 Gang ID
	@arg model0 Model ID
	@arg model1 Model ID
*/
void opcode_0235(const ScriptInt arg0, const ScriptModelID model0, const ScriptModelID model1) {
	RW_UNIMPLEMENTED_OPCODE(0x0235);
}

/**
	@brief set_gang %1d% car_to %2o%

	opcode 0236
	@arg arg0 Gang ID
	@arg model0 Model ID
*/
void opcode_0236(const ScriptInt arg0, const ScriptModelID model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0236);
}

/**
	@brief set_gang %1d% primary_weapon_to %2c% secondary_weapon_to %3c%

	opcode 0237
	@arg arg0 Gang ID
	@arg arg1 Weapon ID
	@arg arg2 Weapon ID
*/
void opcode_0237(const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0237);
}

/**
	@brief actor %1d% run_to %2d% %3d%

	opcode 0239
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
*/
void opcode_0239(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0239);
}

/**
	@brief has_player_collided_with_object %1d% %2d%

	opcode 023a
	@arg arg0 
	@arg arg1 
*/
void opcode_023a(const ScriptPlayer& arg0, const ScriptObject& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x023a);
}

/**
	@brief has_actor_collided_with_object %1d% %2d%

	opcode 023b
	@arg character0 Character/ped
	@arg object0 Object
*/
void opcode_023b(const ScriptCharacter& character0, const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x023b);
}

/**
	@brief load_special_actor %2d% as %1d%

	opcode 023c
	@arg arg0 
	@arg arg1 
*/
void opcode_023c(const ScriptInt arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x023c);
}

/**
	@brief   special_actor %1d% loaded

	opcode 023d
	@arg arg0 
*/
bool opcode_023d(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x023d);
	return false;
}

/**
	@brief flash_object %1d% %2d%

	opcode 0240
	@arg object0 Object
	@arg arg0 Boolean true/false
*/
void opcode_0240(const ScriptObject& object0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0240);
}

/**
	@brief   player %1d% in_remote_mode

	opcode 0241
	@arg player0 Player
*/
bool opcode_0241(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0241);
	return false;
}

/**
	@brief set_car %1d% bomb_status_to %2d%

	opcode 0242
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_0242(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0242);
}

/**
	@brief set_actor %1d% ped_stats_to %2d%

	opcode 0243
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_0243(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0243);
}

/**
	@brief set_cutscene_pos %1d% %2d% %3d%

	opcode 0244
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0244(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0244);
}

/**
	@brief set_actor %1d% walk_style_to %2d%

	opcode 0245
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_0245(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0245);
}

/**
	@brief request_model %1o%

	opcode 0247
	@arg model0 Model ID
*/
void opcode_0247(const ScriptInt model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0247);
}

/**
	@brief   model %1o% available

	opcode 0248
	@arg model0 Model ID
*/
bool opcode_0248(const ScriptInt model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0248);
	return false;
}

/**
	@brief release_model %1o%

	opcode 0249
	@arg model0 Model ID
*/
void opcode_0249(const ScriptInt model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0249);
}

/**
	@brief %3d% = create_phone_at %1d% %2d%

	opcode 024a
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg arg0 Handle
*/
void opcode_024a(const ScriptFloat xCoord0, const ScriptFloat yCoord0, ScriptPhone& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x024a);
}

/**
	@brief text_phone_repeatedly %1d% %2g%

	opcode 024b
	@arg arg0 
	@arg arg1 
*/
void opcode_024b(const ScriptPhone& arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x024b);
}

/**
	@brief text_phone %1d% %2g%

	opcode 024c
	@arg arg0 
	@arg arg1 
*/
void opcode_024c(const ScriptPhone& arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x024c);
}

/**
	@brief   phone_text_been_displayed %1d%

	opcode 024d
	@arg arg0 
*/
bool opcode_024d(const ScriptPhone& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x024d);
	return false;
}

/**
	@brief disable_phone %1d%

	opcode 024e
	@arg arg0 
*/
void opcode_024e(const ScriptPhone& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x024e);
}

/**
	@brief create_corona %4d% %5d% %6d% with_color %7d% %8d% %9d% at_point %1d% %2d% %3d%

	opcode 024f
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
	@arg arg1 
	@arg arg2 Boolean true/false
	@arg arg3 Red (0-255)
	@arg arg4 Green (0-255)
	@arg arg5 Blue (0-255)
*/
void opcode_024f(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x024f);
}

/**
	@brief create_light_at %1d% %2d% %3d% RGB_values %4d% %5d% %6d%

	opcode 0250
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Red (0-255)
	@arg arg1 Green (0-255)
	@arg arg2 Blue (0-255)
*/
void opcode_0250(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0250);
}

/**
	@brief save_current_time

	opcode 0253
*/
void opcode_0253(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0253);
}

/**
	@brief restore_time_of_day

	opcode 0254
*/
void opcode_0254(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0254);
}

/**
	@brief set_critical_mission_restart_at %1d% %2d% %3d% angle %4d%

	opcode 0255
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
*/
void opcode_0255(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0255);
}

/**
	@brief   is_player %1d% defined

	opcode 0256
	@arg player0 Player
*/
bool opcode_0256(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0256);
	return false;
}

/**
	@brief set_actor %1d% attack_when_provoked %2d%

	opcode 0291
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0291(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0291);
}

/**
	@brief %1d% = get_controller_mode

	opcode 0293
	@arg arg0 
*/
void opcode_0293(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0293);
}

/**
	@brief set_car %1d% resprayable_to %2benabled/disabled%

	opcode 0294
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_0294(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0294);
}

/**
	@brief unload_special_actor %1d%

	opcode 0296
	@arg arg0 
*/
void opcode_0296(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0296);
}

/**
	@brief clear_rampage_kills

	opcode 0297
*/
void opcode_0297(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0297);
}

/**
	@brief %2d% = rampage_kills %1o%

	opcode 0298
	@arg player0 Player
	@arg model0 Model ID
*/
void opcode_0298(const ScriptModelID player0, ScriptInt& model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0298);
}

/**
	@brief activate_garage %1d%

	opcode 0299
	@arg arg0 
*/
void opcode_0299(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0299);
}

/**
	@brief %5d% = create_object %1o% at %2d% %3d% %4d%

	opcode 029b
	@arg model0 Model ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg object0 Object
*/
void opcode_029b(const ScriptInt model0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x029b);
}

/**
	@brief   is_boat %1d%

	opcode 029c
	@arg arg0 
*/
bool opcode_029c(const ScriptVehicle& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x029c);
	return false;
}

/**
	@brief   player %1d% stopped

	opcode 029f
	@arg arg0 
*/
bool opcode_029f(const ScriptPlayer& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x029f);
	return false;
}

/**
	@brief   actor %1d% stopped

	opcode 02a0
	@arg character0 Character/ped
*/
bool opcode_02a0(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x02a0);
	return false;
}

/**
	@brief 

	opcode 02a1
	@arg arg0 
	@arg arg1 
*/
void opcode_02a1(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02a1);
}

/**
	@brief create_particle %1a% %5d% at %2d% %3d% %4d%

	opcode 02a2
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_02a2(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02a2);
}

/**
	@brief toggle_widescreen %1bon/off%

	opcode 02a3
	@arg arg0 Boolean true/false
*/
void opcode_02a3(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02a3);
}

/**
	@brief %5d% = create_icon_marker_and_sphere %4d% at %1d% %2d% %3d%

	opcode 02a7
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Blip sprite ID
	@arg arg1 Blip
*/
void opcode_02a7(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0, ScriptBlip& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02a7);
}

/**
	@brief %5d% = create_marker %4d% at %1d% %2d% %3d%

	opcode 02a8
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Blip sprite ID
	@arg arg1 Blip
*/
void opcode_02a8(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptInt arg0, ScriptBlip& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02a8);
}

/**
	@brief set_char_only_damaged_by_player %1d% to %2d%

	opcode 02a9
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_02a9(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02a9);
}

/**
	@brief set_car %1d% immune_to_nonplayer %2d%

	opcode 02aa
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_02aa(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02aa);
}

/**
	@brief set_actor %1d% immunities BP %2d% FP %3d% EP %4d% CP %5d% MP %6d%

	opcode 02ab
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
	@arg arg1 Boolean true/false
	@arg arg2 Boolean true/false
	@arg arg3 Boolean true/false
	@arg arg4 Boolean true/false
*/
void opcode_02ab(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02ab);
}

/**
	@brief set_car %1d% immunities %2d% %3d% %4d% %5d% %6d%

	opcode 02ac
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
	@arg arg1 Boolean true/false
	@arg arg2 Boolean true/false
	@arg arg3 Boolean true/false
	@arg arg4 Boolean true/false
*/
void opcode_02ac(const ScriptVehicle& vehicle0, const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02ac);
}

/**
	@brief   player %1d% in_area %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02ad
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
bool opcode_02ad(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ad);
	return false;
}

/**
	@brief   player %1d% in_area_on_foot %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02ae
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
bool opcode_02ae(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ae);
	return false;
}

/**
	@brief   player %1d% in_area_in_car %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02af
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
bool opcode_02af(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02af);
	return false;
}

/**
	@brief   player %1d% stopped_in_area %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b0
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_02b0(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02b0);
	return false;
}

/**
	@brief   player %1d% stopped_in_area_on_foot %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b1
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_02b1(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02b1);
	return false;
}

/**
	@brief   player %1d% stopped_in_area_in_car %2d% %3d% %4d% %5d% radius %6d% sphere %7h%

	opcode 02b2
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
bool opcode_02b2(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x02b2);
	return false;
}

/**
	@brief   player %1d% in_cube %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b3
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_02b3(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x02b3);
	return false;
}

/**
	@brief   player %1d% in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b4
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_02b4(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x02b4);
	return false;
}

/**
	@brief   player %1d% in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b5
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
bool opcode_02b5(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02b5);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b6
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_02b6(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x02b6);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube_on_foot %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b7
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
bool opcode_02b7(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x02b7);
	return false;
}

/**
	@brief   player %1d% stopped_in_cube_in_car %2d% %3d% %4d% %5d% %6d% %7d% radius %8d% sphere %9h%

	opcode 02b8
	@arg player0 Player
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
bool opcode_02b8(const ScriptPlayer& player0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02b8);
	return false;
}

/**
	@brief deactivate_garage %1d%

	opcode 02b9
	@arg arg0 
*/
void opcode_02b9(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02b9);
}

/**
	@brief set_cop_behaviour %1b:kill/arrest%

	opcode 02bc
	@arg arg0 
*/
void opcode_02bc(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02bc);
}

/**
	@brief   car %1d% sunk

	opcode 02bf
	@arg vehicle0 Car/vehicle
*/
bool opcode_02bf(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x02bf);
	return false;
}

/**
	@brief set %4d% %5d% %6d% to_ped_path_coords_closest_to %1d% %2d% %3d%

	opcode 02c0
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_02c0(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptFloat& xCoord1, ScriptFloat& yCoord1, ScriptFloat& zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x02c0);
}

/**
	@brief set %4d% %5d% %6d% to_car_path_coords_closest_to %1d% %2d% %3d%

	opcode 02c1
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_02c1(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptFloat& xCoord1, ScriptFloat& yCoord1, ScriptFloat& zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x02c1);
}

/**
	@brief car %1d% drive_to_point %2d% %3d% %4d%

	opcode 02c2
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_02c2(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x02c2);
}

/**
	@brief create_donkey_mags %1d%

	opcode 02c3
	@arg arg0 
*/
void opcode_02c3(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02c3);
}

/**
	@brief %1d% = donkey_mags_picked_up

	opcode 02c5
	@arg arg0 
*/
void opcode_02c5(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02c5);
}

/**
	@brief remove_pickup_items_from_ground

	opcode 02c6
*/
void opcode_02c6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02c6);
}

/**
	@brief scatter_platinum %5d% at %1d% %2d% %3d% %4d%

	opcode 02c7
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_02c7(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02c7);
}

/**
	@brief %1d% = platinum_pieces_in_car

	opcode 02c8
	@arg arg0 
*/
void opcode_02c8(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02c8);
}

/**
	@brief remove_platinum_from_car

	opcode 02c9
*/
void opcode_02c9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02c9);
}

/**
	@brief   is_car_on_screen %1d% 

	opcode 02ca
	@arg vehicle0 Car/vehicle
*/
bool opcode_02ca(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x02ca);
	return false;
}

/**
	@brief   is_actor_on_screen %1d% 

	opcode 02cb
	@arg character0 Character/ped
*/
bool opcode_02cb(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x02cb);
	return false;
}

/**
	@brief   is_object_on_screen %1d% 

	opcode 02cc
	@arg object0 Object
*/
bool opcode_02cc(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x02cc);
	return false;
}

/**
	@brief call %1p% %2p%

	opcode 02cd
	@arg arg0 
	@arg arg1 
*/
void opcode_02cd(const ScriptLabel arg0, const ScriptLabel arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02cd);
}

/**
	@brief get_ground_z_for_3d_coord %1d% %2d% %3d% store_to %4d%

	opcode 02ce
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg zCoord1 Z Coord
*/
void opcode_02ce(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptFloat& zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ce);
}

/**
	@brief %4d% = create_fire_at %1d% %2d% %3d%

	opcode 02cf
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
*/
void opcode_02cf(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptFire& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02cf);
}

/**
	@brief   fire %1d% extinguished

	opcode 02d0
	@arg arg0 Fire
*/
bool opcode_02d0(const ScriptFire& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02d0);
	return false;
}

/**
	@brief remove_fire %1d%

	opcode 02d1
	@arg arg0 Fire
*/
void opcode_02d1(const ScriptFire& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02d1);
}

/**
	@brief boat %1d% drive_to %2d% %3d% %4d%

	opcode 02d3
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_02d3(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x02d3);
}

/**
	@brief boat_stop %1d%

	opcode 02d4
	@arg vehicle0 Car/vehicle
*/
void opcode_02d4(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x02d4);
}

/**
	@brief   player %1d% firing_weapons_in_rectangle %2d% %3d% %4d% %5d% %6d%

	opcode 02d5
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
bool opcode_02d5(const ScriptPlayer& arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02d5);
	return false;
}

/**
	@brief   player %1d% currentweapon == %2c%

	opcode 02d7
	@arg arg0 
	@arg arg1 
*/
bool opcode_02d7(const ScriptPlayer& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02d7);
	return false;
}

/**
	@brief   actor %1d% current_weapon == %2c%

	opcode 02d8
	@arg character0 Character/ped
	@arg arg0 Weapon ID
*/
bool opcode_02d8(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02d8);
	return false;
}

/**
	@brief donkey_mags_picked_up = none

	opcode 02d9
*/
void opcode_02d9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02d9);
}

/**
	@brief set_boat %1d% speed_to %2d%

	opcode 02db
	@arg arg0 
	@arg arg1 
*/
void opcode_02db(const ScriptVehicle& arg0, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02db);
}

/**
	@brief get_random_actor %2d% in_zone %1s%

	opcode 02dd
	@arg arg0 Area name
	@arg character0 Character/ped
*/
void opcode_02dd(const ScriptString arg0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x02dd);
}

/**
	@brief   player %1d% driving_taxi_vehicle

	opcode 02de
	@arg arg0 
*/
bool opcode_02de(const ScriptPlayer& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02de);
	return false;
}

/**
	@brief player %1d% agressive

	opcode 02df
	@arg arg0 
*/
void opcode_02df(const ScriptPlayer& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02df);
}

/**
	@brief   actor %1d% firing_weapon

	opcode 02e0
	@arg character0 Character/ped
*/
bool opcode_02e0(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e0);
	return false;
}

/**
	@brief %5d% = create_cash_pickup %4d% at %1d% %2d% %3d%

	opcode 02e1
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_02e1(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3, ScriptPickup& arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02e1);
}

/**
	@brief set_actor %1d% weapon_accuracy_to %2d%

	opcode 02e2
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_02e2(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e2);
}

/**
	@brief %2d% = car %1d% speed

	opcode 02e3
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_02e3(const ScriptVehicle& vehicle0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e3);
}

/**
	@brief load_cutscene_data %1s%

	opcode 02e4
	@arg arg0 
*/
void opcode_02e4(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e4);
}

/**
	@brief %2d% = create_cutscene_object %1o%

	opcode 02e5
	@arg model0 Model ID
	@arg object0 Object
*/
void opcode_02e5(const ScriptModelID model0, ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e5);
}

/**
	@brief set_cutscene_anim %1d% %2s%

	opcode 02e6
	@arg player0 Player
	@arg arg0 
*/
void opcode_02e6(const ScriptObject& player0, const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e6);
}

/**
	@brief start_cutscene

	opcode 02e7
*/
void opcode_02e7(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02e7);
}

/**
	@brief %1d% = cutscenetime

	opcode 02e8
	@arg arg0 
*/
void opcode_02e8(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02e8);
}

/**
	@brief cutscene_reached_end

	opcode 02e9
*/
void opcode_02e9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02e9);
}

/**
	@brief end_cutscene

	opcode 02ea
*/
void opcode_02ea(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02ea);
}

/**
	@brief restore_camera_jumpcut

	opcode 02eb
*/
void opcode_02eb(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x02eb);
}

/**
	@brief put_hidden_package_at %1d% %2d% %3d%

	opcode 02ec
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_02ec(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x02ec);
}

/**
	@brief set_total_hidden_packages_to %1d%

	opcode 02ed
	@arg arg0 
*/
void opcode_02ed(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02ed);
}

/**
	@brief   is_projectile_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 02ee
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
bool opcode_02ee(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x02ee);
	return false;
}

/**
	@brief destroy_projectiles_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 02ef
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_02ef(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02ef);
}

/**
	@brief drop_nautical_mine_at %1d% %2d% %3d%

	opcode 02f1
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_02f1(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x02f1);
}

/**
	@brief   actor %1d% model == %2h%

	opcode 02f2
	@arg character0 Character/ped
	@arg model0 Model ID
*/
bool opcode_02f2(const ScriptCharacter& character0, const ScriptModelID model0) {
	RW_UNIMPLEMENTED_OPCODE(0x02f2);
	return false;
}

/**
	@brief load_object %1o% %2f%

	opcode 02f3
	@arg model0 Model ID
	@arg arg0 
*/
void opcode_02f3(const ScriptModelID model0, const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02f3);
}

/**
	@brief create_cutscene_actor %3d% from_head %2o% and_body %1d%

	opcode 02f4
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_02f4(const ScriptObject& arg0, const ScriptModelID arg1, ScriptObject& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x02f4);
}

/**
	@brief set_head_anim %1d% %2s%

	opcode 02f5
	@arg arg0 
	@arg arg1 
*/
void opcode_02f5(const ScriptObject& arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02f5);
}

/**
	@brief %2d% = sine %1d%

	opcode 02f6
	@arg arg0 Angle
	@arg arg1 X offset
*/
void opcode_02f6(const ScriptFloat arg0, ScriptFloat& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02f6);
}

/**
	@brief %2d% = cosine %1d%

	opcode 02f7
	@arg arg0 Angle
	@arg arg1 Y offset
*/
void opcode_02f7(const ScriptFloat arg0, ScriptFloat& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02f7);
}

/**
	@brief get_car %1d% Z_angle_sine_to %2d%

	opcode 02f8
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_02f8(const ScriptVehicle& vehicle0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02f8);
}

/**
	@brief get_car %1d% Z_angle_cosine_to %2d%

	opcode 02f9
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_02f9(const ScriptVehicle& vehicle0, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x02f9);
}

/**
	@brief garage %1d% change_to_type %2d%

	opcode 02fa
	@arg arg0 
	@arg arg1 
*/
void opcode_02fa(const ScriptGarage& arg0, const ScriptGarage arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x02fa);
}

/**
	@brief create_crusher_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 02fb
	@arg arg0 
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
void opcode_02fb(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptFloat arg8, const ScriptFloat arg9) {
	RW_UNIMPLEMENTED_OPCODE(0x02fb);
}

/**
	@brief text_2numbers %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fc
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_02fc(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02fc);
}

/**
	@brief text_2numbers_lowpriority %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fd
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 Time (ms)
	@arg arg4 
*/
void opcode_02fd(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02fd);
}

/**
	@brief text_2numbers_highpriority %1g% numbers %2d% %3d% duration %4d% ms flag %5d%

	opcode 02fe
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_02fe(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x02fe);
}

/**
	@brief text_3numbers %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 02ff
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 Time (ms)
	@arg arg5 
*/
void opcode_02ff(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x02ff);
}

/**
	@brief text_3numbers_highpriority %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 0300
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 Time (ms)
	@arg arg5 
*/
void opcode_0300(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0300);
}

/**
	@brief text_3numbers_lowpriority %1g% numbers %2d% %3d% %4d% duration %5d% ms flag %6h%

	opcode 0301
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 Time (ms)
	@arg arg5 
*/
void opcode_0301(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0301);
}

/**
	@brief text_4numbers %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0302
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 Time (ms)
	@arg arg6 
*/
void opcode_0302(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0302);
}

/**
	@brief text_4numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0303
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 Time (ms)
	@arg arg6 
*/
void opcode_0303(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0303);
}

/**
	@brief text_4numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 0304
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 Time (ms)
	@arg arg6 
*/
void opcode_0304(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0304);
}

/**
	@brief text_5numbers %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0305
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 Time (ms)
	@arg arg7 
*/
void opcode_0305(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0305);
}

/**
	@brief text_5numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0306
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 Time (ms)
	@arg arg7 
*/
void opcode_0306(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0306);
}

/**
	@brief text_5numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0307
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 Time (ms)
	@arg arg7 
*/
void opcode_0307(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0307);
}

/**
	@brief text_6numbers %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0308
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 Time (ms)
	@arg arg8 
*/
void opcode_0308(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0308);
}

/**
	@brief text_6numbers_highpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0309
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 Time (ms)
	@arg arg8 
*/
void opcode_0309(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0309);
}

/**
	@brief text_6numbers_lowpriority %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 030a
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
	@arg arg8 
*/
void opcode_030a(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x030a);
}

/**
	@brief set_mission_points += %1d%

	opcode 030c
	@arg arg0 
*/
void opcode_030c(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x030c);
}

/**
	@brief set_total_mission_points_to %1d%

	opcode 030d
	@arg arg0 
*/
void opcode_030d(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x030d);
}

/**
	@brief save_jump_distance %1d%

	opcode 030e
	@arg arg0 
*/
void opcode_030e(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x030e);
}

/**
	@brief save_jump_height %1d%

	opcode 030f
	@arg arg0 
*/
void opcode_030f(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x030f);
}

/**
	@brief save_jump_flips %1d%

	opcode 0310
	@arg arg0 
*/
void opcode_0310(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0310);
}

/**
	@brief save_jump_rotation %1d%

	opcode 0311
	@arg arg0 
*/
void opcode_0311(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0311);
}

/**
	@brief save_jump_type %1d%

	opcode 0312
	@arg arg0 
*/
void opcode_0312(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0312);
}

/**
	@brief increment_unique_jumps_found

	opcode 0313
*/
void opcode_0313(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0313);
}

/**
	@brief set_total_unique_jumps_to %1d%

	opcode 0314
	@arg arg0 
*/
void opcode_0314(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0314);
}

/**
	@brief increment_taxi_dropoffs

	opcode 0315
*/
void opcode_0315(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0315);
}

/**
	@brief save_taxi_earnings_from %1d%

	opcode 0316
	@arg arg0 
*/
void opcode_0316(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0316);
}

/**
	@brief increment_mission_attempts

	opcode 0317
*/
void opcode_0317(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0317);
}

/**
	@brief set_latest_mission_passed %1g%

	opcode 0318
	@arg arg0 GXT entry
*/
void opcode_0318(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0318);
}

/**
	@brief set_actor %1d% running %2b:true/false%

	opcode 0319
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0319(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0319);
}

/**
	@brief remove_all_fires

	opcode 031a
*/
void opcode_031a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x031a);
}

/**
	@brief   actor %1d% hit_by_weapon %2d%

	opcode 031d
	@arg character0 Character/ped
	@arg arg0 Weapon ID
*/
bool opcode_031d(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x031d);
	return false;
}

/**
	@brief   vehicle %1d% hit_by_weapon %2h%

	opcode 031e
	@arg vehicle0 Car/vehicle
	@arg arg0 Weapon ID
*/
bool opcode_031e(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x031e);
	return false;
}

/**
	@brief   unknown_actor %1d% unknown_actor %2d%

	opcode 031f
	@arg character0 Character/ped
	@arg character1 Character/ped
*/
bool opcode_031f(const ScriptCharacter& character0, const ScriptCharacter& character1) {
	RW_UNIMPLEMENTED_OPCODE(0x031f);
	return false;
}

/**
	@brief   actor %1d% in_range_of_player %2d%

	opcode 0320
	@arg character0 Character/ped
	@arg player0 Player
*/
bool opcode_0320(const ScriptCharacter& character0, const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0320);
	return false;
}

/**
	@brief kill_actor %1d%

	opcode 0321
	@arg character0 Character/ped
*/
void opcode_0321(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0321);
}

/**
	@brief kill_player %1d%

	opcode 0322
	@arg player0 Player
*/
void opcode_0322(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0322);
}

/**
	@brief enable_boat %1d% anchor %2d%

	opcode 0323
	@arg arg0 
	@arg arg1 Boolean true/false
*/
void opcode_0323(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0323);
}

/**
	@brief set_zone_pedgroup_info %1z% %2b:day/night% %3u%

	opcode 0324
	@arg arg0 
	@arg arg1 Boolean true/false
	@arg arg2 
*/
void opcode_0324(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0324);
}

/**
	@brief set_car_on_fire %1d% store_to %2d%

	opcode 0325
	@arg vehicle0 Car/vehicle
	@arg arg0 Fire
*/
void opcode_0325(const ScriptVehicle& vehicle0, ScriptFire& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0325);
}

/**
	@brief set_actor_on_fire %1d% fire store_to %2d%

	opcode 0326
	@arg character0 Character/ped
	@arg arg0 Fire
*/
void opcode_0326(const ScriptCharacter& character0, ScriptFire& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0326);
}

/**
	@brief %6d% = get_random_car_of_type %5d% in_area %1d% %2d% to %3d% %4d%

	opcode 0327
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg model0 Model ID
	@arg vehicle0 Car/vehicle
*/
void opcode_0327(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptModelID model0, ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0327);
}

/**
	@brief   garage %1d% respray_done

	opcode 0329
	@arg arg0 Handle
*/
bool opcode_0329(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0329);
	return false;
}

/**
	@brief set_behind_camera_mode_to %1h%

	opcode 032a
	@arg arg0 
*/
void opcode_032a(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x032a);
}

/**
	@brief %7d% = create_weapon_pickup %1o% type %2d% ammo %3d% at %4d% %5d% %6d%

	opcode 032b
	@arg model0 Model ID
	@arg arg0 Weapon ID
	@arg arg1 
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg player0 Player
*/
void opcode_032b(const ScriptInt model0, const ScriptPickup arg0, const ScriptInt arg1, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptPickup& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x032b);
}

/**
	@brief car %1d% ram %2d%

	opcode 032c
	@arg vehicle0 Car/vehicle
	@arg vehicle1 Car/vehicle
*/
void opcode_032c(const ScriptVehicle& vehicle0, const ScriptVehicle& vehicle1) {
	RW_UNIMPLEMENTED_OPCODE(0x032c);
}

/**
	@brief car %1d% block %2d%

	opcode 032d
	@arg arg0 
	@arg arg1 
*/
void opcode_032d(const ScriptVehicle& arg0, const ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x032d);
}

/**
	@brief set_player %1d% infinite_run_to %2b:true/false%

	opcode 0330
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0330(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0330);
}

/**
	@brief set_player %1d% fast_reload %2h%

	opcode 0331
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0331(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0331);
}

/**
	@brief set_actor %1d% bleeding_to %2b:true/false%

	opcode 0332
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0332(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0332);
}

/**
	@brief set_free_paynspray_to %1b:true/false%

	opcode 0335
	@arg arg0 Boolean true/false
*/
void opcode_0335(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0335);
}

/**
	@brief set_player %1d% visible %2d%

	opcode 0336
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0336(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0336);
}

/**
	@brief set_actor %1d% visible %2h%

	opcode 0337
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0337(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0337);
}

/**
	@brief   objects_in_cube %1d% %2d% %3d% to %4d% %5d% %6d% flags %7d% %8d% %9d% %10d% %11d%

	opcode 0339
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Boolean true/false
	@arg arg1 Boolean true/false
	@arg arg2 Boolean true/false
	@arg arg3 Boolean true/false
	@arg arg4 Boolean true/false
*/
bool opcode_0339(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1, const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0339);
	return false;
}

/**
	@brief create_incoming_cessna

	opcode 033a
*/
void opcode_033a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033a);
}

/**
	@brief   incoming_cessna_landed

	opcode 033b
*/
bool opcode_033b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033b);
	return false;
}

/**
	@brief   incoming_cessna_destroyed

	opcode 033c
*/
bool opcode_033c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x033c);
	return false;
}

/**
	@brief text_draw %1d% %2d% %3g%

	opcode 033e
	@arg arg0 2D pixel X
	@arg arg1 2D pixel Y
	@arg arg2 GXT entry
*/
void opcode_033e(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x033e);
}

/**
	@brief set_text_draw_letter_width_height %1d% %2d%

	opcode 033f
	@arg arg0 
	@arg arg1 
*/
void opcode_033f(const ScriptFloat arg0, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x033f);
}

/**
	@brief set_text_draw_color %1d% %2d% %3d% %4d%

	opcode 0340
	@arg arg0 Red (0-255)
	@arg arg1 Green (0-255)
	@arg arg2 Blue (0-255)
	@arg arg3 Alpha (0-255)
*/
void opcode_0340(const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0340);
}

/**
	@brief set_text_draw_align_justify %1d%

	opcode 0341
	@arg arg0 Boolean true/false
*/
void opcode_0341(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0341);
}

/**
	@brief set_text_draw_centered %1d%

	opcode 0342
	@arg arg0 Boolean true/false
*/
void opcode_0342(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0342);
}

/**
	@brief set_text_linewidth %1d%

	opcode 0343
	@arg arg0 2D pixel X
*/
void opcode_0343(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0343);
}

/**
	@brief set_text_draw_linewidth %1d% for_centered_text

	opcode 0344
	@arg arg0 
*/
void opcode_0344(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0344);
}

/**
	@brief enable_text_draw_background %1d%

	opcode 0345
	@arg arg0 Boolean true/false
*/
void opcode_0345(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0345);
}

/**
	@brief set_text_draw_background_color %1d% %2d% %3d% %4d%

	opcode 0346
	@arg arg0 Red (0-255)
	@arg arg1 Green (0-255)
	@arg arg2 Blue (0-255)
	@arg arg3 Alpha (0-255)
*/
void opcode_0346(const ScriptInt arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0346);
}

/**
	@brief enable_text_draw_proportional %1d%

	opcode 0348
	@arg arg0 Boolean true/false
*/
void opcode_0348(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0348);
}

/**
	@brief text_draw_style = %1d%

	opcode 0349
	@arg arg0 
*/
void opcode_0349(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0349);
}

/**
	@brief portland_complete

	opcode 034a
*/
void opcode_034a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034a);
}

/**
	@brief staunton_complete

	opcode 034b
*/
void opcode_034b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034b);
}

/**
	@brief shoreside_complete

	opcode 034c
*/
void opcode_034c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x034c);
}

/**
	@brief rotate_object %1d% from_angle %2d% to %3d% collision_check %4d%

	opcode 034d
	@arg object0 Object
	@arg arg0 Angle
	@arg arg1 Angle
	@arg arg2 Boolean true/false
*/
void opcode_034d(const ScriptObject& object0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x034d);
}

/**
	@brief move_object %1d% to %2d% %3d% %4d% speed %5d% %6d% %7d% collision_check %8d%

	opcode 034e
	@arg object0 Object
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 Boolean true/false
*/
void opcode_034e(const ScriptObject& object0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x034e);
}

/**
	@brief destroy_actor_with_fade %1d%

	opcode 034f
	@arg character0 Character/ped
*/
void opcode_034f(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x034f);
}

/**
	@brief set_actor %1d% maintain_position_when_attacked %2d%

	opcode 0350
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0350(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0350);
}

/**
	@brief   gore_enabled

	opcode 0351
*/
bool opcode_0351(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0351);
	return false;
}

/**
	@brief set_actor %1d% skin_to %2s%

	opcode 0352
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_0352(const ScriptCharacter& character0, const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0352);
}

/**
	@brief refresh_actor %1d%

	opcode 0353
	@arg character0 Character/ped
*/
void opcode_0353(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0353);
}

/**
	@brief set_up_chase_scene %1d%

	opcode 0354
	@arg arg0 
*/
void opcode_0354(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0354);
}

/**
	@brief clean_up_chase_scene

	opcode 0355
*/
void opcode_0355(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0355);
}

/**
	@brief   explosion_type %1d% in_cube %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 0356
	@arg arg0 Explosion ID
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
bool opcode_0356(const ScriptInt arg0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0356);
	return false;
}

/**
	@brief  explosion_type %1d% in_zone %2z%

	opcode 0357
	@arg arg0 Explosion ID
	@arg arg1 Area name
*/
void opcode_0357(const ScriptInt arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0357);
}

/**
	@brief start_drug_drop_off

	opcode 0358
*/
void opcode_0358(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0358);
}

/**
	@brief   drop_off_cessna_shot_down

	opcode 0359
*/
bool opcode_0359(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0359);
	return false;
}

/**
	@brief find_drop_off_plane_coords %1d% %2d% %3d%

	opcode 035a
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_035a(ScriptFloat& arg0, ScriptFloat& arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x035a);
}

/**
	@brief %4d% = create_drop_off_package %1d% %2d% %3d%

	opcode 035b
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_035b(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, ScriptPickup& arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x035b);
}

/**
	@brief place_object %1d% relative_to_car %2d% offset %3d% %4d% %5d%

	opcode 035c
	@arg object0 Object
	@arg vehicle0 Car/vehicle
	@arg arg0 X offset
	@arg arg1 Y offset
	@arg arg2 Z offset
*/
void opcode_035c(const ScriptObject& object0, const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x035c);
}

/**
	@brief make_object %1d% targetable

	opcode 035d
	@arg object0 Object
*/
void opcode_035d(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x035d);
}

/**
	@brief set_player %1d% armour_to %2d%

	opcode 035e
	@arg player0 Player
	@arg arg0 
*/
void opcode_035e(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x035e);
}

/**
	@brief set_actor %1d% armour_to %2d%

	opcode 035f
	@arg character0 Character/ped
	@arg arg0 
*/
void opcode_035f(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x035f);
}

/**
	@brief open_garage %1d%

	opcode 0360
	@arg arg0 
*/
void opcode_0360(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0360);
}

/**
	@brief close_garage %1d%

	opcode 0361
	@arg arg0 
*/
void opcode_0361(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0361);
}

/**
	@brief remove_actor %1d% from_car_and_place_at %2d% %3d% %4d%

	opcode 0362
	@arg character0 Character/ped
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0362(const ScriptCharacter& character0, const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0362);
}

/**
	@brief toggle_model_render_at %1d% %2d% %3d% radius %4d% object %5o% %6d%

	opcode 0363
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
	@arg model0 Model ID
	@arg arg1 Boolean true/false
*/
void opcode_0363(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptInt model0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0363);
}

/**
	@brief set_actor %1d% objective_hail_taxi

	opcode 0365
	@arg character0 Character/ped
*/
void opcode_0365(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0365);
}

/**
	@brief    had_object_been_damaged %1d%

	opcode 0366
	@arg object0 Object
*/
bool opcode_0366(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0366);
	return false;
}

/**
	@brief init_headshot_rampage %1g% weapon %2d% time %3d% %4d% targets %5o% %6o% %7o% %8o% flag %9d%

	opcode 0367
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg model0 Model ID
	@arg model1 Model ID
	@arg model2 Model ID
	@arg model3 Model ID
	@arg arg4 Boolean true/false
*/
void opcode_0367(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptModelID model0, const ScriptModelID model1, const ScriptModelID model2, const ScriptModelID model3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x0367);
}

/**
	@brief create_ev_crane %1d% %2d% %3d% %4d% %5d% %6d% %7d% %8d% %9d% %10d%

	opcode 0368
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg xCoord2 X Coord
	@arg yCoord2 Y Coord
	@arg xCoord3 X Coord
	@arg yCoord3 Y Coord
	@arg arg0 
	@arg arg1 
*/
void opcode_0368(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat xCoord2, const ScriptFloat yCoord2, const ScriptFloat xCoord3, const ScriptFloat yCoord3, const ScriptFloat arg0, const ScriptFloat arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0368);
}

/**
	@brief put_player %1d% in_car %2d%

	opcode 0369
	@arg player0 Player
	@arg vehicle0 Car/vehicle
*/
void opcode_0369(const ScriptPlayer& player0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0369);
}

/**
	@brief put_actor %1d% in_car %2d%

	opcode 036a
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
*/
void opcode_036a(const ScriptCharacter& character0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x036a);
}

/**
	@brief text_2numbers_styled %1g% numbers %2d% %3d% duration %4d% ms style %5d%

	opcode 036d
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 Time (ms)
	@arg arg4 
*/
void opcode_036d(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x036d);
}

/**
	@brief text_3numbers_styled %1g% numbers %2d% %3d% %4d% duration %5d% ms style %6d%

	opcode 036e
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_036e(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x036e);
}

/**
	@brief text_4numbers_styled %1g% numbers %2d% %3d% %4d% %5d% duration %6d% ms flag %7d%

	opcode 036f
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_036f(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x036f);
}

/**
	@brief text_5numbers_styled %1g% numbers %2d% %3d% %4d% %5d% %6d% duration %7d% ms flag %8d%

	opcode 0370
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 Time (ms)
	@arg arg7 
*/
void opcode_0370(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0370);
}

/**
	@brief text_6numbers_styled %1g% numbers %2d% %3d% %4d% %5d% %6d% %7d% duration %8d% ms flag %9d%

	opcode 0371
	@arg arg0 GXT entry
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 Time (ms)
	@arg arg8 
*/
void opcode_0371(const ScriptString arg0, const ScriptInt arg1, const ScriptInt arg2, const ScriptInt arg3, const ScriptInt arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x0371);
}

/**
	@brief set_actor %1d% anim %2d% wait_state_time %3d% ms

	opcode 0372
	@arg character0 Character/ped
	@arg arg0 
	@arg arg1 Time (ms)
*/
void opcode_0372(const ScriptCharacter& character0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0372);
}

/**
	@brief set_camera_directly_behind_player

	opcode 0373
*/
void opcode_0373(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0373);
}

/**
	@brief set_motion_blur %1d%

	opcode 0374
	@arg arg0 
*/
void opcode_0374(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0374);
}

/**
	@brief text_1string %1g% %2g% duration %3d% ms flag %4d%

	opcode 0375
	@arg arg0 GXT entry
	@arg arg1 GXT entry
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_0375(const ScriptString arg0, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0375);
}

/**
	@brief %4d% = create_random_actor %1d% %2d% %3d%

	opcode 0376
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg character0 Character/ped
*/
void opcode_0376(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0376);
}

/**
	@brief set_actor %1d% steal_any_car

	opcode 0377
	@arg character0 Character/ped
*/
void opcode_0377(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0377);
}

/**
	@brief text_phone_1string_repeatedly %1d% %2g% %3g%  

	opcode 0378
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0378(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0378);
}

/**
	@brief text_phone_1string %1d% %2g% %3g%  

	opcode 0379
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0379(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0379);
}

/**
	@brief text_phone_2strings_repeatedly %1d% %2g% %3g% %4g%  

	opcode 037a
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_037a(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x037a);
}

/**
	@brief text_phone_2strings %1d% %2g% %3g% %4g%  

	opcode 037b
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
*/
void opcode_037b(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x037b);
}

/**
	@brief text_phone_3strings_repeatedly %1d% %2g% %3g% %4g% %5g%  

	opcode 037c
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_037c(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x037c);
}

/**
	@brief text_phone_3strings %1d% %2g% %3g% %4g% %5g%  

	opcode 037d
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
*/
void opcode_037d(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x037d);
}

/**
	@brief   is_sniper_bullet_in_area %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 037e
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
bool opcode_037e(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x037e);
	return false;
}

/**
	@brief give_player_detonator

	opcode 037f
*/
void opcode_037f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x037f);
}

/**
	@brief throw_object %1d% distance %2d% %3d% %4d%

	opcode 0381
	@arg object0 Object
	@arg arg0 X offset
	@arg arg1 Y offset
	@arg arg2 Z offset
*/
void opcode_0381(const ScriptObject& object0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0381);
}

/**
	@brief set_object %1d% collision_detection %2d%

	opcode 0382
	@arg object0 Object
	@arg arg0 Boolean true/false
*/
void opcode_0382(const ScriptObject& object0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0382);
}

/**
	@brief   player %1d% car_horn_activated

	opcode 0383
	@arg vehicle0 Car/vehicle
*/
bool opcode_0383(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0383);
	return false;
}

/**
	@brief text_1string %1g% string %2g% duration %3d% ms flag %4d%

	opcode 0384
	@arg arg0 GXT entry
	@arg arg1 GXT entry
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_0384(const ScriptString arg0, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0384);
}

/**
	@brief text_1string_lowpriority %1g% string %2g% duration %3d% ms flag %4d%

	opcode 0385
	@arg arg0 GXT entry
	@arg arg1 GXT entry
	@arg arg2 Time (ms)
	@arg arg3 
*/
void opcode_0385(const ScriptString arg0, const ScriptString arg1, const ScriptInt arg2, const ScriptInt arg3) {
	RW_UNIMPLEMENTED_OPCODE(0x0385);
}

/**
	@brief text_phone_4strings_repeatedly %1d% %2g% %3g% %4g% %5g% %6g%  

	opcode 0386
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_0386(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0386);
}

/**
	@brief text_phone_4strings %1d% %2g% %3g% %4g% %5g% %6g%  

	opcode 0387
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_0387(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x0387);
}

/**
	@brief text_phone_5strings_repeatedly %1d% %2g% %3g% %4g% %5g% %6g% %7g%  

	opcode 0388
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0388(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0388);
}

/**
	@brief text_phone_5strings %1d% %2g% %3g% %4g% %5g% %6g% %7g%  

	opcode 0389
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0389(const ScriptPhone& arg0, const ScriptString arg1, const ScriptString arg2, const ScriptString arg3, const ScriptString arg4, const ScriptString arg5, const ScriptString arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0389);
}

/**
	@brief   car_in_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 038a
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 X Radius
	@arg arg1 Y Radius
	@arg arg2 Z Radius
*/
bool opcode_038a(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x038a);
	return false;
}

/**
	@brief load_all_models_now

	opcode 038b
*/
void opcode_038b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x038b);
}

/**
	@brief object %1d% scatter %2d% %3d% %4d%

	opcode 038c
	@arg object0 Object
	@arg arg0 X offset
	@arg arg1 Y offset
	@arg arg2 Z offset
*/
void opcode_038c(const ScriptObject& object0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x038c);
}

/**
	@brief draw_texture %1h% position %2d% %3d% size %4d% %5d% RGBA %6d% %7d% %8d% %9d% 

	opcode 038d
	@arg arg0 
	@arg arg1 2D pixel X
	@arg arg2 2D pixel Y
	@arg arg3 
	@arg arg4 
	@arg arg5 Red (0-255)
	@arg arg6 Green (0-255)
	@arg arg7 Blue (0-255)
	@arg arg8 Alpha (0-255)
*/
void opcode_038d(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptInt arg5, const ScriptInt arg6, const ScriptInt arg7, const ScriptInt arg8) {
	RW_UNIMPLEMENTED_OPCODE(0x038d);
}

/**
	@brief load_texture %2h% as %1d%  

	opcode 038f
	@arg arg0 
	@arg arg1 
*/
void opcode_038f(const ScriptInt arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x038f);
}

/**
	@brief load_txd_dictionary %1h% 

	opcode 0390
	@arg arg0 
*/
void opcode_0390(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0390);
}

/**
	@brief release_textures

	opcode 0391
*/
void opcode_0391(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0391);
}

/**
	@brief object %1d% toggle_in_moving_list %2d%

	opcode 0392
	@arg object0 Object
	@arg arg0 Boolean true/false
*/
void opcode_0392(const ScriptObject& object0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0392);
}

/**
	@brief play_mission_passed_music %1d%

	opcode 0394
	@arg arg0 
*/
void opcode_0394(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0394);
}

/**
	@brief clear_area %5d% at %1d% %2d% range %3d% %4d%

	opcode 0395
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
	@arg arg1 Boolean true/false
*/
void opcode_0395(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0395);
}

/**
	@brief pause_timer %1d%

	opcode 0396
	@arg arg0 Boolean true/false
*/
void opcode_0396(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0396);
}

/**
	@brief car %1d% siren = %2b:on/off%

	opcode 0397
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_0397(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0397);
}

/**
	@brief remove_forbidden_for_peds_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 0398
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0398(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0398);
}

/**
	@brief create_forbidden_for_peds_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 0399
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_0399(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x0399);
}

/**
	@brief remove_forbidden_for_cars_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 039a
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_039a(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x039a);
}

/**
	@brief create_forbidden_for_cars_angled_cube %1d% %2d% %3d% to %4d% %5d% %6d% angle %7d%

	opcode 039b
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
*/
void opcode_039b(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6) {
	RW_UNIMPLEMENTED_OPCODE(0x039b);
}

/**
	@brief set_car %1d% watertight %2h%

	opcode 039c
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_039c(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x039c);
}

/**
	@brief scatter_particles type %1a% %8d% %9d% %10d% %11d% %12d% from %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 039d
	@arg arg0 
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
*/
void opcode_039d(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7, const ScriptInt arg8, const ScriptInt arg9, const ScriptInt arg10, const ScriptInt arg11) {
	RW_UNIMPLEMENTED_OPCODE(0x039d);
}

/**
	@brief set_char_cant_be_dragged_out %1d% to %2d%

	opcode 039e
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_039e(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x039e);
}

/**
	@brief turn_car %1d% to_face %2d% %3d%

	opcode 039f
	@arg vehicle0 Car/vehicle
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
*/
void opcode_039f(const ScriptVehicle& vehicle0, const ScriptFloat xCoord0, const ScriptFloat yCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x039f);
}

/**
	@brief   car %3d% picked_up_by_crane %1d% %2d%

	opcode 03a0
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
bool opcode_03a0(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptVehicle& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03a0);
	return false;
}

/**
	@brief unknown_clear_point %1d% %2d% %3d% radius %4d%

	opcode 03a1
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
*/
void opcode_03a1(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03a1);
}

/**
	@brief set_car_status %1d% to %2h%

	opcode 03a2
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_03a2(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03a2);
}

/**
	@brief    is_char_male %1d%

	opcode 03a3
	@arg character0 Character/ped
*/
bool opcode_03a3(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x03a3);
	return false;
}

/**
	@brief name_thread %1s%

	opcode 03a4
	@arg arg0 Set script name
*/
void opcode_03a4(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03a4);
}

/**
	@brief set_garage %1d% type_to %2d% %3d%

	opcode 03a5
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_03a5(const ScriptGarage& arg0, const ScriptGarage arg1, const ScriptModelID arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03a5);
}

/**
	@brief get_drug_plane_coords %1d% %2d% %3d%

	opcode 03a6
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_03a6(ScriptFloat& arg0, ScriptFloat& arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03a6);
}

/**
	@brief play_suspect_last_seen_at %1d% %2d% %3d%

	opcode 03aa
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_03aa(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x03aa);
}

/**
	@brief set_car %1d% strong %2d%

	opcode 03ab
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_03ab(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ab);
}

/**
	@brief clear_route %1d%

	opcode 03ac
	@arg arg0 
*/
void opcode_03ac(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ac);
}

/**
	@brief set_rubbish %1b:visible/invisible%

	opcode 03ad
	@arg arg0 Boolean true/false
*/
void opcode_03ad(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ad);
}

/**
	@brief remove_objects_from_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 03ae
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
*/
void opcode_03ae(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5) {
	RW_UNIMPLEMENTED_OPCODE(0x03ae);
}

/**
	@brief set_streaming %1b:enabled/disabled%

	opcode 03af
	@arg arg0 Boolean true/false
*/
void opcode_03af(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03af);
}

/**
	@brief   garage %1d% door_open

	opcode 03b0
	@arg arg0 
*/
bool opcode_03b0(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03b0);
	return false;
}

/**
	@brief   garage %1d% door_closed

	opcode 03b1
	@arg arg0 
*/
bool opcode_03b1(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03b1);
	return false;
}

/**
	@brief start_catalina_flyby

	opcode 03b2
*/
void opcode_03b2(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b2);
}

/**
	@brief catalina_take_off

	opcode 03b3
*/
void opcode_03b3(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b3);
}

/**
	@brief remove_catalina_heli

	opcode 03b4
*/
void opcode_03b4(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b4);
}

/**
	@brief   catalina_shot_down

	opcode 03b5
*/
bool opcode_03b5(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03b5);
	return false;
}

/**
	@brief replace_model_at %1d% %2d% %3d% radius %4d% from %5o% to %6o%

	opcode 03b6
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
	@arg model0 Model ID
	@arg model1 Model ID
*/
void opcode_03b6(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, const ScriptInt model0, const ScriptInt model1) {
	RW_UNIMPLEMENTED_OPCODE(0x03b6);
}

/**
	@brief process_cut_scene_only %1b:false/true%

	opcode 03b7
	@arg arg0 Boolean true/false
*/
void opcode_03b7(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03b7);
}

/**
	@brief clear_weapons_from_player %1d%

	opcode 03b8
	@arg arg0 
*/
void opcode_03b8(const ScriptPlayer& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03b8);
}

/**
	@brief create_catalinas_chopper %1d%

	opcode 03b9
	@arg arg0 
*/
void opcode_03b9(ScriptVehicle& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03b9);
}

/**
	@brief clear_cars_from_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 03ba
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_03ba(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x03ba);
}

/**
	@brief set_garage %1d% door_type_to_swing_open

	opcode 03bb
	@arg arg0 
*/
void opcode_03bb(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03bb);
}

/**
	@brief %5d% = create_sphere_at %1d% %2d% %3d% radius %4d%

	opcode 03bc
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Radius
	@arg arg1 Handle
*/
void opcode_03bc(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0, ScriptSphere& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03bc);
}

/**
	@brief destroy_sphere %1d%

	opcode 03bd
	@arg arg0 Handle
*/
void opcode_03bd(const ScriptSphere& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03bd);
}

/**
	@brief catalina_heli_drop_explosives_on_player

	opcode 03be
*/
void opcode_03be(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03be);
}

/**
	@brief set_player %1d% ignored_by_everyone_to %2b:true/false%

	opcode 03bf
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_03bf(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03bf);
}

/**
	@brief %2d% = actor %1d% car

	opcode 03c0
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
*/
void opcode_03c0(const ScriptCharacter& character0, ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c0);
}

/**
	@brief %2d% = player %1d% car_no_save

	opcode 03c1
	@arg arg0 
	@arg arg1 
*/
void opcode_03c1(const ScriptPlayer& arg0, ScriptVehicle& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03c1);
}

/**
	@brief   phone %1d% answered

	opcode 03c2
	@arg arg0 
*/
bool opcode_03c2(const ScriptPhone& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c2);
	return false;
}

/**
	@brief set_timer_with_text_to %1d% type %2h% text %3g%

	opcode 03c3
	@arg global0 Global timer storage
	@arg arg0 
	@arg arg1 GXT entry
*/
void opcode_03c3(ScriptIntGlobal global0, const ScriptInt arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03c3);
}

/**
	@brief set_status_text_to %1d% %2b:bar/number% %3g%

	opcode 03c4
	@arg global0 
	@arg arg0 Boolean true/false
	@arg arg1 GXT entry
*/
void opcode_03c4(ScriptIntGlobal global0, const ScriptInt arg0, const ScriptString arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03c4);
}

/**
	@brief create_random_car_for_carpark %1d% %2d% %3d% %4d%

	opcode 03c5
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg arg0 Angle
*/
void opcode_03c5(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c5);
}

/**
	@brief   current_island == %1d%

	opcode 03c6
	@arg arg0 
*/
bool opcode_03c6(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c6);
	return false;
}

/**
	@brief set_sensitivity_to_crime_to %1d%

	opcode 03c7
	@arg arg0 
*/
void opcode_03c7(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c7);
}

/**
	@brief set_camera_directly_before_player

	opcode 03c8
*/
void opcode_03c8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03c8);
}

/**
	@brief   car %1d% damaged

	opcode 03c9
	@arg vehicle0 Car/vehicle
*/
bool opcode_03c9(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x03c9);
	return false;
}

/**
	@brief   object %1d% exists

	opcode 03ca
	@arg object0 Object
*/
bool opcode_03ca(const ScriptObject& object0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ca);
	return false;
}

/**
	@brief load_scene %1d% %2d% %3d%

	opcode 03cb
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_03cb(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x03cb);
}

/**
	@brief car %1d% add_to_stuck_car_check %2d% = %3d%

	opcode 03cc
	@arg vehicle0 Car/vehicle
	@arg arg0 Radius
	@arg arg1 Time (ms)
*/
void opcode_03cc(const ScriptVehicle& vehicle0, const ScriptFloat arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03cc);
}

/**
	@brief car %1d% remove_from_stuck_car_check

	opcode 03cd
	@arg vehicle0 Car/vehicle
*/
void opcode_03cd(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x03cd);
}

/**
	@brief   car %1d% stuck

	opcode 03ce
	@arg vehicle0 Car/vehicle
*/
bool opcode_03ce(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ce);
	return false;
}

/**
	@brief load_wav %1s%

	opcode 03cf
	@arg arg0 Sound ID
*/
void opcode_03cf(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03cf);
}

/**
	@brief   wav_loaded

	opcode 03d0
*/
bool opcode_03d0(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d0);
	return false;
}

/**
	@brief play_wav

	opcode 03d1
*/
void opcode_03d1(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d1);
}

/**
	@brief   wav_ended

	opcode 03d2
*/
bool opcode_03d2(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d2);
	return false;
}

/**
	@brief get_closest_car_node_at %1d% %2d% %3d% store_to %4d% %5d% %6d% heading %7d%

	opcode 03d3
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
	@arg arg0 Angle
*/
void opcode_03d3(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, ScriptFloat& xCoord1, ScriptFloat& yCoord1, ScriptFloat& zCoord1, ScriptFloat& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03d3);
}

/**
	@brief   garage %1d% contains_neededcar %2d%

	opcode 03d4
	@arg arg0 Handle
	@arg arg1 
*/
bool opcode_03d4(const ScriptGarage& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03d4);
	return false;
}

/**
	@brief remove_text %1g%

	opcode 03d5
	@arg arg0 GXT entry
*/
void opcode_03d5(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03d5);
}

/**
	@brief remove_styled_text %1g%

	opcode 03d6
	@arg arg0 GXT entry
*/
void opcode_03d6(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03d6);
}

/**
	@brief set_wav_location %1d% %2d% %3d%

	opcode 03d7
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_03d7(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x03d7);
}

/**
	@brief show_save_screen

	opcode 03d8
*/
void opcode_03d8(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d8);
}

/**
	@brief   save_done

	opcode 03d9
*/
bool opcode_03d9(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03d9);
	return false;
}

/**
	@brief set_garage %1d% camera_follows_player

	opcode 03da
	@arg arg0 Handle
*/
void opcode_03da(const ScriptGarage& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03da);
}

/**
	@brief %2d% = create_marker_above_pickup %1d%

	opcode 03dc
	@arg player0 Player
	@arg arg0 Blip
*/
void opcode_03dc(const ScriptPickup& player0, ScriptBlip& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03dc);
}

/**
	@brief pickup %1d% show_on_radar %2d% %3d%

	opcode 03dd
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_03dd(const ScriptPickup& arg0, const ScriptInt arg1, ScriptBlip& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03dd);
}

/**
	@brief set_ped_density_multiplier %1d%

	opcode 03de
	@arg arg0 
*/
void opcode_03de(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03de);
}

/**
	@brief all_random_peds %1o%

	opcode 03df
	@arg model0 Model ID
*/
void opcode_03df(const ScriptInt model0) {
	RW_UNIMPLEMENTED_OPCODE(0x03df);
}

/**
	@brief set_text_draw_before_fade %1h%

	opcode 03e0
	@arg arg0 Boolean true/false
*/
void opcode_03e0(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e0);
}

/**
	@brief %1d% = packages_found

	opcode 03e1
	@arg arg0 
*/
void opcode_03e1(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e1);
}

/**
	@brief actor %1d% exit_car

	opcode 03e2
	@arg arg0 
*/
void opcode_03e2(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e2);
}

/**
	@brief set_sprites_draw_before_fade %1h%

	opcode 03e3
	@arg arg0 Boolean true/false
*/
void opcode_03e3(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e3);
}

/**
	@brief set_text_draw_align_right %1h%

	opcode 03e4
	@arg arg0 Boolean true/false
*/
void opcode_03e4(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e4);
}

/**
	@brief text_box %1g%

	opcode 03e5
	@arg arg0 GXT entry
*/
void opcode_03e5(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e5);
}

/**
	@brief remove_text_box

	opcode 03e6
*/
void opcode_03e6(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03e6);
}

/**
	@brief flash_hud %1d%

	opcode 03e7
	@arg arg0 
*/
void opcode_03e7(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03e7);
}

/**
	@brief generate_cars_around_camera %1d%

	opcode 03ea
	@arg arg0 Boolean true/false
*/
void opcode_03ea(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ea);
}

/**
	@brief clear_small_messages_only

	opcode 03eb
*/
void opcode_03eb(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03eb);
}

/**
	@brief   ev_crane_collected_all_cars

	opcode 03ec
*/
bool opcode_03ec(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x03ec);
	return false;
}

/**
	@brief set_car %1d% not_damaged_when_upside_down %2h%

	opcode 03ed
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_03ed(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ed);
}

/**
	@brief   player %1d% controllable

	opcode 03ee
	@arg player0 Player
*/
bool opcode_03ee(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ee);
	return false;
}

/**
	@brief player %1d% make_safe

	opcode 03ef
	@arg player0 Player
*/
void opcode_03ef(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ef);
}

/**
	@brief enable_text_draw %1d%

	opcode 03f0
	@arg arg0 
*/
void opcode_03f0(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03f0);
}

/**
	@brief pedtype %1e% add_threat %2e%

	opcode 03f1
	@arg arg0 
	@arg arg1 
*/
void opcode_03f1(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f1);
}

/**
	@brief pedgroup %1e% remove_threat %2e%

	opcode 03f2
	@arg arg0 
	@arg arg1 
*/
void opcode_03f2(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f2);
}

/**
	@brief get_car %1d% color %2d% %3d%

	opcode 03f3
	@arg vehicle0 Car/vehicle
	@arg arg0 Car colour ID
	@arg arg1 Car colour ID
*/
void opcode_03f3(const ScriptVehicle& vehicle0, ScriptInt& arg0, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03f3);
}

/**
	@brief set_all_cars_can_be_damaged %1b:true/false%

	opcode 03f4
	@arg arg0 Boolean true/false
*/
void opcode_03f4(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03f4);
}

/**
	@brief set_car %1d% can_be_damaged %1b:true/false%

	opcode 03f5
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_03f5(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03f5);
}

/**
	@brief load_island_data %1d%

	opcode 03f7
	@arg arg0 
*/
void opcode_03f7(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03f7);
}

/**
	@brief get_body_cast_health %1d%

	opcode 03f8
	@arg arg0 
*/
void opcode_03f8(ScriptInt& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03f8);
}

/**
	@brief make_actors %1d% %2d% converse_in %3d% ms

	opcode 03f9
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_03f9(const ScriptCharacter& arg0, const ScriptCharacter& arg1, const ScriptInt arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x03f9);
}

/**
	@brief set_car %1d% stays_on_current_island %2d%

	opcode 03fb
	@arg arg0 
	@arg arg1 
*/
void opcode_03fb(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03fb);
}

/**
	@brief set_actor %1d% stays_on_current_island %2d%

	opcode 03fc
	@arg arg0 
	@arg arg1 
*/
void opcode_03fc(const ScriptCharacter& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x03fc);
}

/**
	@brief save_offroad_time %1d%

	opcode 03fd
	@arg arg0 
*/
void opcode_03fd(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03fd);
}

/**
	@brief save_offroadII_time %1d%

	opcode 03fe
	@arg arg0 
*/
void opcode_03fe(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03fe);
}

/**
	@brief save_offroadIII_time %1d%

	opcode 03ff
	@arg arg0 
*/
void opcode_03ff(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x03ff);
}

/**
	@brief save_mayhem_time %1d%

	opcode 0400
	@arg object0 Object
*/
void opcode_0400(const ScriptInt object0) {
	RW_UNIMPLEMENTED_OPCODE(0x0400);
}

/**
	@brief increment_people_saved_in_ambulance

	opcode 0401
*/
void opcode_0401(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0401);
}

/**
	@brief increment_criminals_stopped

	opcode 0402
*/
void opcode_0402(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0402);
}

/**
	@brief save_highest_ambulance_level %1d%

	opcode 0403
	@arg arg0 
*/
void opcode_0403(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0403);
}

/**
	@brief increment_fires_extinguished

	opcode 0404
*/
void opcode_0404(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0404);
}

/**
	@brief enable_phone %1d%

	opcode 0405
	@arg arg0 Handle
*/
void opcode_0405(const ScriptPhone& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0405);
}

/**
	@brief save_dodo_flight_time %1d%

	opcode 0406
	@arg arg0 
*/
void opcode_0406(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0406);
}

/**
	@brief time_taken_defuse_mission = %1d%

	opcode 0407
	@arg vehicle0 Car/vehicle
*/
void opcode_0407(const ScriptInt vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0407);
}

/**
	@brief set_total_rampages_to %1d%

	opcode 0408
	@arg arg0 
*/
void opcode_0408(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0408);
}

/**
	@brief blow_up_rc_buggy

	opcode 0409
*/
void opcode_0409(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0409);
}

/**
	@brief remove_car_from_chase %1d%

	opcode 040a
	@arg arg0 
*/
void opcode_040a(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x040a);
}

/**
	@brief   is_french_game

	opcode 040b
*/
bool opcode_040b(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040b);
	return false;
}

/**
	@brief   is_german_game

	opcode 040c
*/
bool opcode_040c(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040c);
	return false;
}

/**
	@brief clear_mission_audio

	opcode 040d
*/
void opcode_040d(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x040d);
}

/**
	@brief %1b:set/clear% FadeInAfterNextArrest

	opcode 040e
	@arg arg0 
*/
void opcode_040e(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x040e);
}

/**
	@brief %1b:set/clear% FadeInAfterNextDeath

	opcode 040f
	@arg arg0 
*/
void opcode_040f(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x040f);
}

/**
	@brief override_gang_model %1d% %2d%

	opcode 0410
	@arg arg0 
	@arg model0 Model ID
*/
void opcode_0410(const ScriptInt arg0, const ScriptInt model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0410);
}

/**
	@brief set_actor %1d% use_pednode_seek %2d:true/false%

	opcode 0411
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0411(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0411);
}

/**
	@brief 

	opcode 0412
	@arg arg0 
	@arg arg1 
*/
void opcode_0412(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0412);
}

/**
	@brief enable %1d% get_out_of_jail_free %2d%

	opcode 0413
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0413(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0413);
}

/**
	@brief toggle_player %1d% free_treatment_once %2d%

	opcode 0414
	@arg player0 Player
	@arg arg0 Boolean true/false
*/
void opcode_0414(const ScriptPlayer& player0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0414);
}

/**
	@brief 

	opcode 0415
	@arg arg0 
	@arg arg1 
*/
void opcode_0415(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0415);
}

/**
	@brief start_mission %1d%

	opcode 0417
	@arg arg0 
*/
void opcode_0417(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0417);
}

/**
	@brief set_object %1d% draw_last %2h%

	opcode 0418
	@arg object0 Object
	@arg arg0 Boolean true/false
*/
void opcode_0418(const ScriptObject& object0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0418);
}

/**
	@brief get_ammo_of_player %1d% weapon %2c% store_to %3d%

	opcode 0419
	@arg arg0 Weapon ID
	@arg player0 Player
	@arg arg1 
*/
void opcode_0419(const ScriptPlayer& arg0, const ScriptInt player0, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0419);
}

/**
	@brief get_ammo_of_actor %1d% weapon %2c% store_to %3d%

	opcode 041a
	@arg arg0 Weapon ID
	@arg character0 Character/ped
	@arg arg1 
*/
void opcode_041a(const ScriptCharacter& arg0, const ScriptInt character0, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x041a);
}

/**
	@brief make_actor %1d% say %2d%

	opcode 041c
	@arg arg0 
	@arg arg1 
*/
void opcode_041c(const ScriptCharacter& arg0, const ScriptSound arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x041c);
}

/**
	@brief set_camera_near_clip %1d%

	opcode 041d
	@arg arg0 
*/
void opcode_041d(const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x041d);
}

/**
	@brief set_radio_station %1d% %2d%

	opcode 041e
	@arg arg0 
	@arg arg1 
*/
void opcode_041e(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x041e);
}

/**
	@brief override_hospital %1d%

	opcode 041f
	@arg arg0 
*/
void opcode_041f(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x041f);
}

/**
	@brief override_police_station %1d%

	opcode 0420
	@arg arg0 
*/
void opcode_0420(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0420);
}

/**
	@brief force_rain %1d%

	opcode 0421
	@arg arg0 Boolean true/false
*/
void opcode_0421(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0421);
}

/**
	@brief   garage_contain_car %1d% %2d%

	opcode 0422
	@arg arg0 Handle
	@arg vehicle0 Car/vehicle
*/
bool opcode_0422(const ScriptGarage& arg0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0422);
	return false;
}

/**
	@brief car %1d% improve_handling %2d%

	opcode 0423
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
void opcode_0423(const ScriptVehicle& vehicle0, const ScriptFloat arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0423);
}

/**
	@brief   metric

	opcode 0424
*/
bool opcode_0424(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0424);
	return false;
}

/**
	@brief convert_metres_to_feet %2d% store_to %1d%

	opcode 0425
	@arg arg0 
	@arg arg1 
*/
void opcode_0425(const ScriptFloat arg0, ScriptFloat& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0425);
}

/**
	@brief create_save_cars_between_levels_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0426
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_0426(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0426);
}

/**
	@brief create_save_peds_between_levels_cube %1d% %2d% %3d% to %4d% %5d% %6d%

	opcode 0427
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_0427(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x0427);
}

/**
	@brief set_car %1d% avoid_level_transitions %2d%

	opcode 0428
	@arg vehicle0 Car/vehicle
	@arg arg0 Boolean true/false
*/
void opcode_0428(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0428);
}

/**
	@brief   ped_threat_exists %1u% %2u%

	opcode 042a
	@arg arg0 
	@arg arg1 
*/
bool opcode_042a(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x042a);
	return false;
}

/**
	@brief clear_peds_from_cube %1d% %2d% %3d% %4d% %5d% %6d%

	opcode 042b
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
	@arg xCoord1 X Coord
	@arg yCoord1 Y Coord
	@arg zCoord1 Z Coord
*/
void opcode_042b(const ScriptFloat xCoord0, const ScriptFloat yCoord0, const ScriptFloat zCoord0, const ScriptFloat xCoord1, const ScriptFloat yCoord1, const ScriptFloat zCoord1) {
	RW_UNIMPLEMENTED_OPCODE(0x042b);
}

/**
	@brief set_total_missions_to %1d%

	opcode 042c
	@arg arg0 
*/
void opcode_042c(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x042c);
}

/**
	@brief %2d% = metric_to_imperial %1d%

	opcode 042d
	@arg arg0 
	@arg arg1 
*/
void opcode_042d(const ScriptInt arg0, ScriptInt& arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x042d);
}

/**
	@brief register_lowest_int_stat %1h% to %2d%

	opcode 042e
	@arg arg0 Stat ID
	@arg arg1 
*/
void opcode_042e(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x042e);
}

/**
	@brief save_record %1d% %2d%

	opcode 042f
	@arg arg0 Stat ID
	@arg arg1 
*/
void opcode_042f(const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x042f);
}

/**
	@brief   car %1d% passenger_seat_free %2d%

	opcode 0431
	@arg vehicle0 Car/vehicle
	@arg arg0 
*/
bool opcode_0431(const ScriptVehicle& vehicle0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0431);
	return false;
}

/**
	@brief %3d% = get_passenger_in_car %1d% seat %2h%

	opcode 0432
	@arg vehicle0 Car/vehicle
	@arg arg0 
	@arg character0 Character/ped
*/
void opcode_0432(const ScriptVehicle& vehicle0, const ScriptInt arg0, ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0432);
}

/**
	@brief set_actor %1d% criminal_flag %2h%

	opcode 0433
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0433(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0433);
}

/**
	@brief show_credits

	opcode 0434
*/
void opcode_0434(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0434);
}

/**
	@brief end_credits

	opcode 0435
*/
void opcode_0435(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0435);
}

/**
	@brief   reached_end_of_credits

	opcode 0436
*/
bool opcode_0436(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0436);
	return false;
}

/**
	@brief scatter_particle %1a% %8d% at %2d% %3d% %4d% to %5d% %6d% %7d%

	opcode 0437
	@arg arg0 
	@arg arg1 
	@arg arg2 
	@arg arg3 
	@arg arg4 
	@arg arg5 
	@arg arg6 
	@arg arg7 
*/
void opcode_0437(const ScriptInt arg0, const ScriptFloat arg1, const ScriptFloat arg2, const ScriptFloat arg3, const ScriptFloat arg4, const ScriptFloat arg5, const ScriptFloat arg6, const ScriptFloat arg7) {
	RW_UNIMPLEMENTED_OPCODE(0x0437);
}

/**
	@brief set_actor %1d% ignore_level_transitions %2d%

	opcode 0438
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0438(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0438);
}

/**
	@brief start_boat_foam_animation

	opcode 043a
*/
void opcode_043a(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x043a);
}

/**
	@brief update_boat %1d% foam_animation

	opcode 043b
	@arg arg0 
*/
void opcode_043b(const ScriptObject& arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x043b);
}

/**
	@brief set_game_sounds_fade %1d%

	opcode 043c
	@arg arg0 Boolean true/false
*/
void opcode_043c(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x043c);
}

/**
	@brief set_intro_is_playing %1d%

	opcode 043d
	@arg arg0 
*/
void opcode_043d(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x043d);
}

/**
	@brief play_cutscene_music

	opcode 043f
*/
void opcode_043f(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x043f);
}

/**
	@brief stop_cutscene_music

	opcode 0440
*/
void opcode_0440(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0440);
}

/**
	@brief %2d% = car %1d% model

	opcode 0441
	@arg vehicle0 Car/vehicle
	@arg model0 Model ID
*/
void opcode_0441(const ScriptVehicle& vehicle0, ScriptInt& model0) {
	RW_UNIMPLEMENTED_OPCODE(0x0441);
}

/**
	@brief   player %1d% in_car %2d%

	opcode 0442
	@arg player0 Player
	@arg vehicle0 Car/vehicle
*/
bool opcode_0442(const ScriptPlayer& player0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0442);
	return false;
}

/**
	@brief   player %1d% in_a_car

	opcode 0443
	@arg player0 Player
*/
bool opcode_0443(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0443);
	return false;
}

/**
	@brief create_fire_audio %1d% %2d%

	opcode 0444
	@arg arg0 Handle
	@arg arg1 Boolean true/false
*/
void opcode_0444(const ScriptFire& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0444);
}

/**
	@brief   are_any_car_cheats_activated

	opcode 0445
*/
bool opcode_0445(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0445);
	return false;
}

/**
	@brief set_actor %1d% dismemberment_possible %2d%

	opcode 0446
	@arg character0 Character/ped
	@arg arg0 Boolean true/false
*/
void opcode_0446(const ScriptCharacter& character0, const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0446);
}

/**
	@brief    is_player_lifting_a_phone %1d%

	opcode 0447
	@arg player0 Player
*/
bool opcode_0447(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x0447);
	return false;
}

/**
	@brief   actor %1d% in_car %2d%

	opcode 0448
	@arg character0 Character/ped
	@arg vehicle0 Car/vehicle
*/
bool opcode_0448(const ScriptCharacter& character0, const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0448);
	return false;
}

/**
	@brief   actor %1d% in_a_car

	opcode 0449
	@arg character0 Character/ped
*/
bool opcode_0449(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x0449);
	return false;
}

/**
	@brief 

	opcode 044a
	@arg player0 Player
*/
void opcode_044a(const ScriptPlayer& player0) {
	RW_UNIMPLEMENTED_OPCODE(0x044a);
}

/**
	@brief    is_char_on_foot %1d%

	opcode 044b
	@arg character0 Character/ped
*/
bool opcode_044b(const ScriptCharacter& character0) {
	RW_UNIMPLEMENTED_OPCODE(0x044b);
	return false;
}

/**
	@brief change_to_island %1d%

	opcode 044c
	@arg arg0 
*/
void opcode_044c(const ScriptInt arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x044c);
}

/**
	@brief load_splash %1x%

	opcode 044d
	@arg arg0 
*/
void opcode_044d(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x044d);
}

/**
	@brief car %1d% level %2b:set_from_position/clear%

	opcode 044e
	@arg arg0 
	@arg arg1 
*/
void opcode_044e(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x044e);
}

/**
	@brief make_craigs_car_a_bit_stronger %1d% %2d%

	opcode 044f
	@arg arg0 
	@arg arg1 
*/
void opcode_044f(const ScriptVehicle& arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x044f);
}

/**
	@brief car %1d% warp_to_player

	opcode 0450
	@arg vehicle0 Car/vehicle
*/
void opcode_0450(const ScriptVehicle& vehicle0) {
	RW_UNIMPLEMENTED_OPCODE(0x0450);
}

/**
	@brief load_end_of_game_audio

	opcode 0451
*/
void opcode_0451(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0451);
}

/**
	@brief enable_player_control_camera

	opcode 0452
*/
void opcode_0452(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0452);
}

/**
	@brief object %1d% set_rotation %2d% %3d% %4d%

	opcode 0453
	@arg object0 Object
	@arg arg0 X Rotation
	@arg arg1 Y Rotation
	@arg arg2 Angle
*/
void opcode_0453(const ScriptObject& object0, const ScriptFloat arg0, const ScriptFloat arg1, const ScriptFloat arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0453);
}

/**
	@brief store_debug_camera_position_to %1d% %2d% %3d%

	opcode 0454
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0454(ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0454);
}

/**
	@brief 

	opcode 0455
	@arg arg0 
	@arg arg1 
	@arg arg2 
*/
void opcode_0455(ScriptFloat& arg0, ScriptFloat& arg1, ScriptFloat& arg2) {
	RW_UNIMPLEMENTED_OPCODE(0x0455);
}

/**
	@brief end_threads_named %1s%

	opcode 0459
	@arg arg0 
*/
void opcode_0459(const ScriptString arg0) {
	RW_UNIMPLEMENTED_OPCODE(0x0459);
}

/**
	@brief text_draw_2numbers %3g% numbers %4d% %5d% at %1d% %2d% 

	opcode 045b
	@arg arg0 2D pixel X
	@arg arg1 2D pixel Y
	@arg arg2 GXT entry
	@arg arg3 
	@arg arg4 
*/
void opcode_045b(const ScriptFloat arg0, const ScriptFloat arg1, const ScriptString arg2, const ScriptInt arg3, const ScriptInt arg4) {
	RW_UNIMPLEMENTED_OPCODE(0x045b);
}

/**
	@brief get_debug_camera_point_at %1d% %2d% %3d%

	opcode 0463
	@arg xCoord0 X Coord
	@arg yCoord0 Y Coord
	@arg zCoord0 Z Coord
*/
void opcode_0463(ScriptFloat& xCoord0, ScriptFloat& yCoord0, ScriptFloat& zCoord0) {
	RW_UNIMPLEMENTED_OPCODE(0x0463);
}

/**
	@brief set_car_temp_action %1d% to %2h% time %3d%

	opcode 0477
	@arg vehicle0 Car/vehicle
	@arg arg0 Vehicle action ID
	@arg arg1 Time (ms)
*/
void opcode_0477(const ScriptVehicle& vehicle0, const ScriptInt arg0, const ScriptInt arg1) {
	RW_UNIMPLEMENTED_OPCODE(0x0477);
}

/**
	@brief get_joystick %1h% direction_offset_to %2d% %3d% %4d% %5d%

	opcode 0494
*/
void opcode_0494(const ScriptArguments& args) {
	RW_UNIMPLEMENTED_OPCODE(0x0494);
}

