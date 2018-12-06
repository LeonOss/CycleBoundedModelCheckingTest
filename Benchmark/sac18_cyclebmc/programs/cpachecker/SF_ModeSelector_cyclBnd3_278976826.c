// FORMULA: AG (S_Mode0Sel + S_Mode1Sel + S_Mode2Sel + S_Mode3Sel + S_Mode4Sel + S_Mode5Sel + S_Mode6Sel + S_Mode7Sel<=1)
// BOUND: 3

extern int __VERIFIER_nondet_int();
extern int __VERIFIER_nondet_bool();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_ModeSelector_Activate = 0;
	int SF_ModeSelector_S_Mode0 = 0;
	int SF_ModeSelector_S_Mode1 = 0;
	int SF_ModeSelector_S_Mode2 = 0;
	int SF_ModeSelector_S_Mode3 = 0;
	int SF_ModeSelector_S_Mode4 = 0;
	int SF_ModeSelector_S_Mode5 = 0;
	int SF_ModeSelector_S_Mode6 = 0;
	int SF_ModeSelector_S_Mode7 = 0;
	int SF_ModeSelector_S_Unlock = 0;
	int SF_ModeSelector_S_SetMode = 0;
	int SF_ModeSelector_AutoSetMode = 0;
	int SF_ModeSelector_ModeMonitorTime = 0;
	int SF_ModeSelector_Reset = 0;
	int SF_ModeSelector_Ready = 0;
	int SF_ModeSelector_S_Mode0Sel = 0;
	int SF_ModeSelector_S_Mode1Sel = 0;
	int SF_ModeSelector_S_Mode2Sel = 0;
	int SF_ModeSelector_S_Mode3Sel = 0;
	int SF_ModeSelector_S_Mode4Sel = 0;
	int SF_ModeSelector_S_Mode5Sel = 0;
	int SF_ModeSelector_S_Mode6Sel = 0;
	int SF_ModeSelector_S_Mode7Sel = 0;
	int SF_ModeSelector_S_AnyModeSel = 0;
	int SF_ModeSelector_Error = 0;
	int SF_ModeSelector_DiagCode = 0;
	int SF_ModeSelector_T_1_IN = 0;
	int SF_ModeSelector_T_1_PT = 0;
	int SF_ModeSelector_T_1_Q = 0;
	int SF_ModeSelector_T_1___TEMP0 = 0;
	int SF_ModeSelector_R_TRIGatReset_CLK = 0;
	int SF_ModeSelector_R_TRIGatReset_Q = 0;
	int SF_ModeSelector_R_TRIGatReset_M = 0;
	int SF_ModeSelector_R_TRIGatSetMode_CLK = 0;
	int SF_ModeSelector_R_TRIGatSetMode_Q = 0;
	int SF_ModeSelector_R_TRIGatSetMode_M = 0;
	int SF_ModeSelector_F_TRIGatModeSel0_CLK = 0;
	int SF_ModeSelector_F_TRIGatModeSel0_Q = 0;
	int SF_ModeSelector_F_TRIGatModeSel0_M = 0;
	int SF_ModeSelector_R_TRIGatModeSel0_CLK = 0;
	int SF_ModeSelector_R_TRIGatModeSel0_Q = 0;
	int SF_ModeSelector_R_TRIGatModeSel0_M = 0;
	int SF_ModeSelector_Error1 = 0;
	int SF_ModeSelector_Error2 = 0;
	int SF_ModeSelector___TEMP0 = 0;
	int SF_ModeSelector___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc151;

	loc16:
	SF_ModeSelector___TEMP1 = 0;
	goto loc17;

	loc17:
	SF_ModeSelector___TEMP0 = 0;
	goto loc18;

	loc18:
	SF_ModeSelector_Error2 = 0;
	goto loc19;

	loc19:
	SF_ModeSelector_Error1 = 0;
	goto loc20;

	loc20:
	goto loc236;

	loc21:
	goto loc155;

	loc22:
	if ((!(SF_ModeSelector_Activate))){
		goto loc23;
	}else{
		goto loc24;
	}

	loc23:
	SF_ModeSelector_DiagCode = 0;
	goto loc24;

	loc24:
	if (((((((((((SF_ModeSelector_S_Mode0!=0)?1:0) + ((SF_ModeSelector_S_Mode1!=0)?1:0)) + ((SF_ModeSelector_S_Mode2!=0)?1:0)) + ((SF_ModeSelector_S_Mode3!=0)?1:0)) + ((SF_ModeSelector_S_Mode4!=0)?1:0)) + ((SF_ModeSelector_S_Mode5!=0)?1:0)) + ((SF_ModeSelector_S_Mode6!=0)?1:0)) + ((SF_ModeSelector_S_Mode7!=0)?1:0)) > 1)){
		goto loc25;
	}else{
		goto loc27;
	}

	loc25:
	SF_ModeSelector_Error1 = 1;
	goto loc26;

	loc26:
	goto loc28;

	loc27:
	SF_ModeSelector_Error1 = 0;
	goto loc28;

	loc28:
	SF_ModeSelector___TEMP0 = SF_ModeSelector_DiagCode;
	goto loc29;

	loc29:
	if ((SF_ModeSelector___TEMP0 == 0)){
		goto loc30;
	}else{
		goto loc33;
	}

	loc30:
	if (SF_ModeSelector_Activate){
		goto loc31;
	}else{
		goto loc32;
	}

	loc31:
	SF_ModeSelector_DiagCode = 32773;
	goto loc32;

	loc32:
	goto loc91;

	loc33:
	if ((SF_ModeSelector___TEMP0 == 32773)){
		goto loc34;
	}else{
		goto loc55;
	}

	loc34:
	if (((((((((!(SF_ModeSelector_S_Mode0)) && (!(SF_ModeSelector_S_Mode1))) && (!(SF_ModeSelector_S_Mode2))) && (!(SF_ModeSelector_S_Mode3))) && (!(SF_ModeSelector_S_Mode4))) && (!(SF_ModeSelector_S_Mode5))) && (!(SF_ModeSelector_S_Mode6))) && (!(SF_ModeSelector_S_Mode7)))){
		goto loc35;
	}else{
		goto loc38;
	}

	loc35:
	goto loc161;

	loc36:
	goto loc213;

	loc37:
	goto loc40;

	loc38:
	goto loc167;

	loc39:
	goto loc173;

	loc40:
	if (SF_ModeSelector_F_TRIGatModeSel0_Q){
		goto loc41;
	}else{
		goto loc43;
	}

	loc41:
	goto loc229;

	loc42:
	goto loc45;

	loc43:
	if (SF_ModeSelector_R_TRIGatModeSel0_Q){
		goto loc44;
	}else{
		goto loc45;
	}

	loc44:
	goto loc189;

	loc45:
	SF_ModeSelector_Error2 = SF_ModeSelector_T_1_Q;
	goto loc46;

	loc46:
	if (SF_ModeSelector_Error1){
		goto loc47;
	}else{
		goto loc49;
	}

	loc47:
	SF_ModeSelector_DiagCode = 49153;
	goto loc48;

	loc48:
	goto loc54;

	loc49:
	if (SF_ModeSelector_Error2){
		goto loc50;
	}else{
		goto loc52;
	}

	loc50:
	SF_ModeSelector_DiagCode = 49154;
	goto loc51;

	loc51:
	goto loc54;

	loc52:
	if ((((SF_ModeSelector_AutoSetMode || SF_ModeSelector_R_TRIGatSetMode_Q) && SF_ModeSelector_S_Unlock) && ((((((((((SF_ModeSelector_S_Mode0!=0)?1:0) + ((SF_ModeSelector_S_Mode1!=0)?1:0)) + ((SF_ModeSelector_S_Mode2!=0)?1:0)) + ((SF_ModeSelector_S_Mode3!=0)?1:0)) + ((SF_ModeSelector_S_Mode4!=0)?1:0)) + ((SF_ModeSelector_S_Mode5!=0)?1:0)) + ((SF_ModeSelector_S_Mode6!=0)?1:0)) + ((SF_ModeSelector_S_Mode7!=0)?1:0)) == 1))){
		goto loc53;
	}else{
		goto loc54;
	}

	loc53:
	SF_ModeSelector_DiagCode = 32768;
	goto loc54;

	loc54:
	goto loc91;

	loc55:
	if ((SF_ModeSelector___TEMP0 == 32768)){
		goto loc56;
	}else{
		goto loc65;
	}

	loc56:
	if (SF_ModeSelector_Error1){
		goto loc57;
	}else{
		goto loc59;
	}

	loc57:
	SF_ModeSelector_DiagCode = 49153;
	goto loc58;

	loc58:
	goto loc64;

	loc59:
	if (((((((((!((SF_ModeSelector_S_Mode0 == SF_ModeSelector_S_Mode0Sel))) || (!((SF_ModeSelector_S_Mode1 == SF_ModeSelector_S_Mode1Sel)))) || (!((SF_ModeSelector_S_Mode2 == SF_ModeSelector_S_Mode2Sel)))) || (!((SF_ModeSelector_S_Mode3 == SF_ModeSelector_S_Mode3Sel)))) || (!((SF_ModeSelector_S_Mode4 == SF_ModeSelector_S_Mode4Sel)))) || (!((SF_ModeSelector_S_Mode5 == SF_ModeSelector_S_Mode5Sel)))) || (!((SF_ModeSelector_S_Mode6 == SF_ModeSelector_S_Mode6Sel)))) || (!((SF_ModeSelector_S_Mode7 == SF_ModeSelector_S_Mode7Sel))))){
		goto loc60;
	}else{
		goto loc62;
	}

	loc60:
	SF_ModeSelector_DiagCode = 32773;
	goto loc61;

	loc61:
	goto loc64;

	loc62:
	if ((!(SF_ModeSelector_S_Unlock))){
		goto loc63;
	}else{
		goto loc64;
	}

	loc63:
	SF_ModeSelector_DiagCode = 32772;
	goto loc64;

	loc64:
	goto loc91;

	loc65:
	if ((SF_ModeSelector___TEMP0 == 32772)){
		goto loc66;
	}else{
		goto loc69;
	}

	loc66:
	if (SF_ModeSelector_S_Unlock){
		goto loc67;
	}else{
		goto loc68;
	}

	loc67:
	SF_ModeSelector_DiagCode = 32768;
	goto loc68;

	loc68:
	goto loc91;

	loc69:
	if ((SF_ModeSelector___TEMP0 == 49153)){
		goto loc70;
	}else{
		goto loc76;
	}

	loc70:
	if ((SF_ModeSelector_Reset && (!(SF_ModeSelector_R_TRIGatReset_Q)))){
		goto loc71;
	}else{
		goto loc73;
	}

	loc71:
	SF_ModeSelector_DiagCode = 49155;
	goto loc72;

	loc72:
	goto loc75;

	loc73:
	if (SF_ModeSelector_R_TRIGatReset_Q){
		goto loc74;
	}else{
		goto loc75;
	}

	loc74:
	SF_ModeSelector_DiagCode = 32773;
	goto loc75;

	loc75:
	goto loc91;

	loc76:
	if ((SF_ModeSelector___TEMP0 == 49154)){
		goto loc77;
	}else{
		goto loc83;
	}

	loc77:
	if ((SF_ModeSelector_Reset && (!(SF_ModeSelector_R_TRIGatReset_Q)))){
		goto loc78;
	}else{
		goto loc80;
	}

	loc78:
	SF_ModeSelector_DiagCode = 49156;
	goto loc79;

	loc79:
	goto loc82;

	loc80:
	if (SF_ModeSelector_R_TRIGatReset_Q){
		goto loc81;
	}else{
		goto loc82;
	}

	loc81:
	SF_ModeSelector_DiagCode = 32773;
	goto loc82;

	loc82:
	goto loc91;

	loc83:
	if ((SF_ModeSelector___TEMP0 == 49155)){
		goto loc84;
	}else{
		goto loc87;
	}

	loc84:
	if ((!(SF_ModeSelector_Reset))){
		goto loc85;
	}else{
		goto loc86;
	}

	loc85:
	SF_ModeSelector_DiagCode = 49153;
	goto loc86;

	loc86:
	goto loc91;

	loc87:
	if ((SF_ModeSelector___TEMP0 == 49156)){
		goto loc88;
	}else{
		goto loc91;
	}

	loc88:
	if ((!(SF_ModeSelector_Reset))){
		goto loc89;
	}else{
		goto loc90;
	}

	loc89:
	SF_ModeSelector_DiagCode = 49154;
	goto loc90;

	loc90:
	goto loc91;

	loc91:
	SF_ModeSelector___TEMP1 = SF_ModeSelector_DiagCode;
	goto loc92;

	loc92:
	if ((SF_ModeSelector___TEMP1 == 0)){
		goto loc93;
	}else{
		goto loc105;
	}

	loc93:
	SF_ModeSelector_Ready = 0;
	goto loc94;

	loc94:
	SF_ModeSelector_S_Mode0Sel = 0;
	goto loc95;

	loc95:
	SF_ModeSelector_S_Mode1Sel = 0;
	goto loc96;

	loc96:
	SF_ModeSelector_S_Mode2Sel = 0;
	goto loc97;

	loc97:
	SF_ModeSelector_S_Mode3Sel = 0;
	goto loc98;

	loc98:
	SF_ModeSelector_S_Mode4Sel = 0;
	goto loc99;

	loc99:
	SF_ModeSelector_S_Mode5Sel = 0;
	goto loc100;

	loc100:
	SF_ModeSelector_S_Mode6Sel = 0;
	goto loc101;

	loc101:
	SF_ModeSelector_S_Mode7Sel = 0;
	goto loc102;

	loc102:
	SF_ModeSelector_S_AnyModeSel = 0;
	goto loc103;

	loc103:
	SF_ModeSelector_Error = 0;
	goto loc104;

	loc104:
	goto loc149;

	loc105:
	if ((SF_ModeSelector___TEMP1 == 32773)){
		goto loc106;
	}else{
		goto loc118;
	}

	loc106:
	SF_ModeSelector_Ready = 1;
	goto loc107;

	loc107:
	SF_ModeSelector_S_Mode0Sel = 0;
	goto loc108;

	loc108:
	SF_ModeSelector_S_Mode1Sel = 0;
	goto loc109;

	loc109:
	SF_ModeSelector_S_Mode2Sel = 0;
	goto loc110;

	loc110:
	SF_ModeSelector_S_Mode3Sel = 0;
	goto loc111;

	loc111:
	SF_ModeSelector_S_Mode4Sel = 0;
	goto loc112;

	loc112:
	SF_ModeSelector_S_Mode5Sel = 0;
	goto loc113;

	loc113:
	SF_ModeSelector_S_Mode6Sel = 0;
	goto loc114;

	loc114:
	SF_ModeSelector_S_Mode7Sel = 0;
	goto loc115;

	loc115:
	SF_ModeSelector_S_AnyModeSel = 0;
	goto loc116;

	loc116:
	SF_ModeSelector_Error = 0;
	goto loc117;

	loc117:
	goto loc149;

	loc118:
	if ((SF_ModeSelector___TEMP1 == 32768)){
		goto loc119;
	}else{
		goto loc131;
	}

	loc119:
	SF_ModeSelector_Ready = 1;
	goto loc120;

	loc120:
	SF_ModeSelector_S_Mode0Sel = SF_ModeSelector_S_Mode0;
	goto loc121;

	loc121:
	SF_ModeSelector_S_Mode1Sel = SF_ModeSelector_S_Mode1;
	goto loc122;

	loc122:
	SF_ModeSelector_S_Mode2Sel = SF_ModeSelector_S_Mode2;
	goto loc123;

	loc123:
	SF_ModeSelector_S_Mode3Sel = SF_ModeSelector_S_Mode3;
	goto loc124;

	loc124:
	SF_ModeSelector_S_Mode4Sel = SF_ModeSelector_S_Mode4;
	goto loc125;

	loc125:
	SF_ModeSelector_S_Mode5Sel = SF_ModeSelector_S_Mode5;
	goto loc126;

	loc126:
	SF_ModeSelector_S_Mode6Sel = SF_ModeSelector_S_Mode6;
	goto loc127;

	loc127:
	SF_ModeSelector_S_Mode7Sel = SF_ModeSelector_S_Mode7;
	goto loc128;

	loc128:
	SF_ModeSelector_S_AnyModeSel = 1;
	goto loc129;

	loc129:
	SF_ModeSelector_Error = 0;
	goto loc130;

	loc130:
	goto loc149;

	loc131:
	if ((SF_ModeSelector___TEMP1 == 32772)){
		goto loc132;
	}else{
		goto loc136;
	}

	loc132:
	SF_ModeSelector_Ready = 1;
	goto loc133;

	loc133:
	SF_ModeSelector_S_AnyModeSel = 1;
	goto loc134;

	loc134:
	SF_ModeSelector_Error = 0;
	goto loc135;

	loc135:
	goto loc149;

	loc136:
	if (((SF_ModeSelector___TEMP1 == 49153) || ((SF_ModeSelector___TEMP1 == 49154) || ((SF_ModeSelector___TEMP1 == 49155) || (SF_ModeSelector___TEMP1 == 49156))))){
		goto loc137;
	}else{
		goto loc149;
	}

	loc137:
	SF_ModeSelector_Ready = 1;
	goto loc138;

	loc138:
	SF_ModeSelector_S_Mode0Sel = 0;
	goto loc139;

	loc139:
	SF_ModeSelector_S_Mode1Sel = 0;
	goto loc140;

	loc140:
	SF_ModeSelector_S_Mode2Sel = 0;
	goto loc141;

	loc141:
	SF_ModeSelector_S_Mode3Sel = 0;
	goto loc142;

	loc142:
	SF_ModeSelector_S_Mode4Sel = 0;
	goto loc143;

	loc143:
	SF_ModeSelector_S_Mode5Sel = 0;
	goto loc144;

	loc144:
	SF_ModeSelector_S_Mode6Sel = 0;
	goto loc145;

	loc145:
	SF_ModeSelector_S_Mode7Sel = 0;
	goto loc146;

	loc146:
	SF_ModeSelector_S_AnyModeSel = 0;
	goto loc147;

	loc147:
	SF_ModeSelector_Error = 1;
	goto loc148;

	loc148:
	goto loc149;

	loc149:
	if ((!((SF_ModeSelector_DiagCode == 32773)))){
		goto loc150;
	}else{
		goto loc151;
	}

	loc150:
	goto loc206;

	loc151:
	__VERIFIER_assert((!(((((((((((SF_ModeSelector_S_Mode0Sel!=0)?1:0) + ((SF_ModeSelector_S_Mode1Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode2Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode3Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode4Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode5Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode6Sel!=0)?1:0)) + ((SF_ModeSelector_S_Mode7Sel!=0)?1:0)) > 1))));

	SF_ModeSelector_Activate = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode0 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode1 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode2 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode3 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode4 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode5 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode6 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Mode7 = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_Unlock = __VERIFIER_nondet_bool();
	SF_ModeSelector_S_SetMode = __VERIFIER_nondet_bool();
	SF_ModeSelector_AutoSetMode = __VERIFIER_nondet_bool();
	SF_ModeSelector_ModeMonitorTime = __VERIFIER_nondet_int();
	SF_ModeSelector_Reset = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>3){return 0;}
	goto loc16;

	loc152:
	SF_ModeSelector_R_TRIGatSetMode_Q = (SF_ModeSelector_R_TRIGatSetMode_CLK && (!(SF_ModeSelector_R_TRIGatSetMode_M)));
	goto loc153;

	loc153:
	SF_ModeSelector_R_TRIGatSetMode_M = SF_ModeSelector_R_TRIGatSetMode_CLK;
	goto loc154;

	loc154:
	goto loc157;

	loc155:
	SF_ModeSelector_R_TRIGatSetMode_CLK = SF_ModeSelector_S_SetMode;
	goto loc156;

	loc156:
	goto loc152;

	loc157:
	goto loc22;

	loc158:
	goto loc163;

	loc159:
	SF_ModeSelector_F_TRIGatModeSel0_Q = ((!(SF_ModeSelector_F_TRIGatModeSel0_CLK)) && SF_ModeSelector_F_TRIGatModeSel0_M);
	goto loc160;

	loc160:
	SF_ModeSelector_F_TRIGatModeSel0_M = SF_ModeSelector_F_TRIGatModeSel0_CLK;
	goto loc158;

	loc161:
	SF_ModeSelector_F_TRIGatModeSel0_CLK = 1;
	goto loc162;

	loc162:
	goto loc159;

	loc163:
	goto loc36;

	loc164:
	goto loc169;

	loc165:
	SF_ModeSelector_F_TRIGatModeSel0_Q = ((!(SF_ModeSelector_F_TRIGatModeSel0_CLK)) && SF_ModeSelector_F_TRIGatModeSel0_M);
	goto loc166;

	loc166:
	SF_ModeSelector_F_TRIGatModeSel0_M = SF_ModeSelector_F_TRIGatModeSel0_CLK;
	goto loc164;

	loc167:
	SF_ModeSelector_F_TRIGatModeSel0_CLK = 0;
	goto loc168;

	loc168:
	goto loc165;

	loc169:
	goto loc39;

	loc170:
	SF_ModeSelector_R_TRIGatModeSel0_Q = (SF_ModeSelector_R_TRIGatModeSel0_CLK && (!(SF_ModeSelector_R_TRIGatModeSel0_M)));
	goto loc171;

	loc171:
	SF_ModeSelector_R_TRIGatModeSel0_M = SF_ModeSelector_R_TRIGatModeSel0_CLK;
	goto loc172;

	loc172:
	goto loc175;

	loc173:
	SF_ModeSelector_R_TRIGatModeSel0_CLK = 0;
	goto loc174;

	loc174:
	goto loc170;

	loc175:
	goto loc40;

	loc176:
	if ((!(SF_ModeSelector_T_1_IN))){
		goto loc178;
	}else{
		goto loc180;
	}

	loc177:
	SF_ModeSelector_T_1___TEMP0 = 0;
	goto loc176;

	loc178:
	SF_ModeSelector_T_1_Q = 0;
	goto loc179;

	loc179:
	goto loc184;

	loc180:
	if ((!(SF_ModeSelector_T_1_Q))){
		goto loc181;
	}else{
		goto loc184;
	}

	loc181:
	goto loc187;

	loc182:
	SF_ModeSelector_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc183;

	loc183:
	SF_ModeSelector_T_1_Q = SF_ModeSelector_T_1___TEMP0;
	goto loc184;

	loc184:
	goto loc192;

	loc185:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc186;

	loc186:
	goto loc188;

	loc187:
	goto loc185;

	loc188:
	goto loc182;

	loc189:
	SF_ModeSelector_T_1_IN = 0;
	goto loc190;

	loc190:
	SF_ModeSelector_T_1_PT = SF_ModeSelector_ModeMonitorTime;
	goto loc191;

	loc191:
	goto loc177;

	loc192:
	goto loc45;

	loc193:
	if ((!(SF_ModeSelector_T_1_IN))){
		goto loc195;
	}else{
		goto loc197;
	}

	loc194:
	SF_ModeSelector_T_1___TEMP0 = 0;
	goto loc193;

	loc195:
	SF_ModeSelector_T_1_Q = 0;
	goto loc196;

	loc196:
	goto loc201;

	loc197:
	if ((!(SF_ModeSelector_T_1_Q))){
		goto loc198;
	}else{
		goto loc201;
	}

	loc198:
	goto loc204;

	loc199:
	SF_ModeSelector_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc200;

	loc200:
	SF_ModeSelector_T_1_Q = SF_ModeSelector_T_1___TEMP0;
	goto loc201;

	loc201:
	goto loc209;

	loc202:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc203;

	loc203:
	goto loc205;

	loc204:
	goto loc202;

	loc205:
	goto loc199;

	loc206:
	SF_ModeSelector_T_1_IN = 0;
	goto loc207;

	loc207:
	SF_ModeSelector_T_1_PT = SF_ModeSelector_ModeMonitorTime;
	goto loc208;

	loc208:
	goto loc194;

	loc209:
	goto loc151;

	loc210:
	SF_ModeSelector_R_TRIGatModeSel0_Q = (SF_ModeSelector_R_TRIGatModeSel0_CLK && (!(SF_ModeSelector_R_TRIGatModeSel0_M)));
	goto loc211;

	loc211:
	SF_ModeSelector_R_TRIGatModeSel0_M = SF_ModeSelector_R_TRIGatModeSel0_CLK;
	goto loc212;

	loc212:
	goto loc215;

	loc213:
	SF_ModeSelector_R_TRIGatModeSel0_CLK = 1;
	goto loc214;

	loc214:
	goto loc210;

	loc215:
	goto loc37;

	loc216:
	if ((!(SF_ModeSelector_T_1_IN))){
		goto loc218;
	}else{
		goto loc220;
	}

	loc217:
	SF_ModeSelector_T_1___TEMP0 = 0;
	goto loc216;

	loc218:
	SF_ModeSelector_T_1_Q = 0;
	goto loc219;

	loc219:
	goto loc224;

	loc220:
	if ((!(SF_ModeSelector_T_1_Q))){
		goto loc221;
	}else{
		goto loc224;
	}

	loc221:
	goto loc227;

	loc222:
	SF_ModeSelector_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc223;

	loc223:
	SF_ModeSelector_T_1_Q = SF_ModeSelector_T_1___TEMP0;
	goto loc224;

	loc224:
	goto loc232;

	loc225:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc226;

	loc226:
	goto loc228;

	loc227:
	goto loc225;

	loc228:
	goto loc222;

	loc229:
	SF_ModeSelector_T_1_IN = 1;
	goto loc230;

	loc230:
	SF_ModeSelector_T_1_PT = SF_ModeSelector_ModeMonitorTime;
	goto loc231;

	loc231:
	goto loc217;

	loc232:
	goto loc42;

	loc233:
	SF_ModeSelector_R_TRIGatReset_Q = (SF_ModeSelector_R_TRIGatReset_CLK && (!(SF_ModeSelector_R_TRIGatReset_M)));
	goto loc234;

	loc234:
	SF_ModeSelector_R_TRIGatReset_M = SF_ModeSelector_R_TRIGatReset_CLK;
	goto loc235;

	loc235:
	goto loc238;

	loc236:
	SF_ModeSelector_R_TRIGatReset_CLK = SF_ModeSelector_Reset;
	goto loc237;

	loc237:
	goto loc233;

	loc238:
	goto loc21;


}
