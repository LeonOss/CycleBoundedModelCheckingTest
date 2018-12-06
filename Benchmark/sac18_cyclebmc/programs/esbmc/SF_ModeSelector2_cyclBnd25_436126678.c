// FORMULA: AG (S_Mode0Sel + S_Mode1Sel + S_Mode2Sel + S_Mode3Sel + S_Mode4Sel + S_Mode5Sel + S_Mode6Sel + S_Mode7Sel<=1)
// BOUND: 25

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_ModeSelector2_Activate = 0;
	int SF_ModeSelector2_S_Mode0 = 0;
	int SF_ModeSelector2_S_Mode1 = 0;
	int SF_ModeSelector2_S_Mode2 = 0;
	int SF_ModeSelector2_S_Mode3 = 0;
	int SF_ModeSelector2_S_Mode4 = 0;
	int SF_ModeSelector2_S_Mode5 = 0;
	int SF_ModeSelector2_S_Mode6 = 0;
	int SF_ModeSelector2_S_Mode7 = 0;
	int SF_ModeSelector2_S_Unlock = 0;
	int SF_ModeSelector2_S_SetMode = 0;
	int SF_ModeSelector2_AutoSetMode = 0;
	int SF_ModeSelector2_ModeMonitorTime = 0;
	int SF_ModeSelector2_Reset = 0;
	int SF_ModeSelector2_Ready = 0;
	int SF_ModeSelector2_S_Mode0Sel = 0;
	int SF_ModeSelector2_S_Mode1Sel = 0;
	int SF_ModeSelector2_S_Mode2Sel = 0;
	int SF_ModeSelector2_S_Mode3Sel = 0;
	int SF_ModeSelector2_S_Mode4Sel = 0;
	int SF_ModeSelector2_S_Mode5Sel = 0;
	int SF_ModeSelector2_S_Mode6Sel = 0;
	int SF_ModeSelector2_S_Mode7Sel = 0;
	int SF_ModeSelector2_S_AnyModeSel = 0;
	int SF_ModeSelector2_Error = 0;
	int SF_ModeSelector2_DiagCode = 0;
	int SF_ModeSelector2_T_1_IN = 0;
	int SF_ModeSelector2_T_1_PT = 0;
	int SF_ModeSelector2_T_1_Q = 0;
	int SF_ModeSelector2_T_1___TEMP0 = 0;
	int SF_ModeSelector2_R_TRIGatReset_CLK = 0;
	int SF_ModeSelector2_R_TRIGatReset_Q = 0;
	int SF_ModeSelector2_R_TRIGatReset_M = 0;
	int SF_ModeSelector2_R_TRIGatSetMode_CLK = 0;
	int SF_ModeSelector2_R_TRIGatSetMode_Q = 0;
	int SF_ModeSelector2_R_TRIGatSetMode_M = 0;
	int SF_ModeSelector2_F_TRIGatModeSel0_CLK = 0;
	int SF_ModeSelector2_F_TRIGatModeSel0_Q = 0;
	int SF_ModeSelector2_F_TRIGatModeSel0_M = 0;
	int SF_ModeSelector2_R_TRIGatModeSel0_CLK = 0;
	int SF_ModeSelector2_R_TRIGatModeSel0_Q = 0;
	int SF_ModeSelector2_R_TRIGatModeSel0_M = 0;
	int SF_ModeSelector2_Error1 = 0;
	int SF_ModeSelector2_Error2 = 0;
	int SF_ModeSelector2___TEMP0 = 0;
	int SF_ModeSelector2___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc151;

	loc16:
	SF_ModeSelector2___TEMP1 = 0;
	goto loc17;

	loc17:
	SF_ModeSelector2___TEMP0 = 0;
	goto loc18;

	loc18:
	SF_ModeSelector2_Error2 = 0;
	goto loc19;

	loc19:
	SF_ModeSelector2_Error1 = 0;
	goto loc20;

	loc20:
	goto loc213;

	loc21:
	goto loc219;

	loc22:
	if ((!(SF_ModeSelector2_Activate))){
		goto loc23;
	}else{
		goto loc24;
	}

	loc23:
	SF_ModeSelector2_DiagCode = 0;
	goto loc24;

	loc24:
	if (((((((((((SF_ModeSelector2_S_Mode0!=0)?1:0) + ((SF_ModeSelector2_S_Mode1!=0)?1:0)) + ((SF_ModeSelector2_S_Mode2!=0)?1:0)) + ((SF_ModeSelector2_S_Mode3!=0)?1:0)) + ((SF_ModeSelector2_S_Mode4!=0)?1:0)) + ((SF_ModeSelector2_S_Mode5!=0)?1:0)) + ((SF_ModeSelector2_S_Mode6!=0)?1:0)) + ((SF_ModeSelector2_S_Mode7!=0)?1:0)) > 1)){
		goto loc25;
	}else{
		goto loc27;
	}

	loc25:
	SF_ModeSelector2_Error1 = 1;
	goto loc26;

	loc26:
	goto loc28;

	loc27:
	SF_ModeSelector2_Error1 = 0;
	goto loc28;

	loc28:
	SF_ModeSelector2___TEMP0 = SF_ModeSelector2_DiagCode;
	goto loc29;

	loc29:
	if ((SF_ModeSelector2___TEMP0 == 0)){
		goto loc30;
	}else{
		goto loc33;
	}

	loc30:
	if (SF_ModeSelector2_Activate){
		goto loc31;
	}else{
		goto loc32;
	}

	loc31:
	SF_ModeSelector2_DiagCode = 32773;
	goto loc32;

	loc32:
	goto loc99;

	loc33:
	if ((SF_ModeSelector2___TEMP0 == 32773)){
		goto loc34;
	}else{
		goto loc63;
	}

	loc34:
	if (((((((((!(SF_ModeSelector2_S_Mode0)) && (!(SF_ModeSelector2_S_Mode1))) && (!(SF_ModeSelector2_S_Mode2))) && (!(SF_ModeSelector2_S_Mode3))) && (!(SF_ModeSelector2_S_Mode4))) && (!(SF_ModeSelector2_S_Mode5))) && (!(SF_ModeSelector2_S_Mode6))) && (!(SF_ModeSelector2_S_Mode7)))){
		goto loc35;
	}else{
		goto loc38;
	}

	loc35:
	goto loc184;

	loc36:
	goto loc190;

	loc37:
	goto loc40;

	loc38:
	goto loc155;

	loc39:
	goto loc178;

	loc40:
	if (SF_ModeSelector2_F_TRIGatModeSel0_Q){
		goto loc41;
	}else{
		goto loc43;
	}

	loc41:
	goto loc206;

	loc42:
	goto loc45;

	loc43:
	if (SF_ModeSelector2_R_TRIGatModeSel0_Q){
		goto loc44;
	}else{
		goto loc45;
	}

	loc44:
	goto loc171;

	loc45:
	SF_ModeSelector2_Error2 = SF_ModeSelector2_T_1_Q;
	goto loc46;

	loc46:
	if (SF_ModeSelector2_Error1){
		goto loc47;
	}else{
		goto loc49;
	}

	loc47:
	SF_ModeSelector2_DiagCode = 49153;
	goto loc48;

	loc48:
	goto loc62;

	loc49:
	if (SF_ModeSelector2_Error2){
		goto loc50;
	}else{
		goto loc52;
	}

	loc50:
	SF_ModeSelector2_DiagCode = 49154;
	goto loc51;

	loc51:
	goto loc62;

	loc52:
	if ((((SF_ModeSelector2_AutoSetMode || SF_ModeSelector2_R_TRIGatSetMode_Q) && SF_ModeSelector2_S_Unlock) && ((((((((((SF_ModeSelector2_S_Mode0!=0)?1:0) + ((SF_ModeSelector2_S_Mode1!=0)?1:0)) + ((SF_ModeSelector2_S_Mode2!=0)?1:0)) + ((SF_ModeSelector2_S_Mode3!=0)?1:0)) + ((SF_ModeSelector2_S_Mode4!=0)?1:0)) + ((SF_ModeSelector2_S_Mode5!=0)?1:0)) + ((SF_ModeSelector2_S_Mode6!=0)?1:0)) + ((SF_ModeSelector2_S_Mode7!=0)?1:0)) == 1))){
		goto loc53;
	}else{
		goto loc62;
	}

	loc53:
	SF_ModeSelector2_DiagCode = 32768;
	goto loc54;

	loc54:
	SF_ModeSelector2_S_Mode0Sel = SF_ModeSelector2_S_Mode0;
	goto loc55;

	loc55:
	SF_ModeSelector2_S_Mode1Sel = SF_ModeSelector2_S_Mode1;
	goto loc56;

	loc56:
	SF_ModeSelector2_S_Mode2Sel = SF_ModeSelector2_S_Mode2;
	goto loc57;

	loc57:
	SF_ModeSelector2_S_Mode3Sel = SF_ModeSelector2_S_Mode3;
	goto loc58;

	loc58:
	SF_ModeSelector2_S_Mode4Sel = SF_ModeSelector2_S_Mode4;
	goto loc59;

	loc59:
	SF_ModeSelector2_S_Mode5Sel = SF_ModeSelector2_S_Mode5;
	goto loc60;

	loc60:
	SF_ModeSelector2_S_Mode6Sel = SF_ModeSelector2_S_Mode6;
	goto loc61;

	loc61:
	SF_ModeSelector2_S_Mode7Sel = SF_ModeSelector2_S_Mode7;
	goto loc62;

	loc62:
	goto loc99;

	loc63:
	if ((SF_ModeSelector2___TEMP0 == 32768)){
		goto loc64;
	}else{
		goto loc73;
	}

	loc64:
	if (SF_ModeSelector2_Error1){
		goto loc65;
	}else{
		goto loc67;
	}

	loc65:
	SF_ModeSelector2_DiagCode = 49153;
	goto loc66;

	loc66:
	goto loc72;

	loc67:
	if (((((((((!((SF_ModeSelector2_S_Mode0 == SF_ModeSelector2_S_Mode0Sel))) || (!((SF_ModeSelector2_S_Mode1 == SF_ModeSelector2_S_Mode1Sel)))) || (!((SF_ModeSelector2_S_Mode2 == SF_ModeSelector2_S_Mode2Sel)))) || (!((SF_ModeSelector2_S_Mode3 == SF_ModeSelector2_S_Mode3Sel)))) || (!((SF_ModeSelector2_S_Mode4 == SF_ModeSelector2_S_Mode4Sel)))) || (!((SF_ModeSelector2_S_Mode5 == SF_ModeSelector2_S_Mode5Sel)))) || (!((SF_ModeSelector2_S_Mode6 == SF_ModeSelector2_S_Mode6Sel)))) || (!((SF_ModeSelector2_S_Mode7 == SF_ModeSelector2_S_Mode7Sel))))){
		goto loc68;
	}else{
		goto loc70;
	}

	loc68:
	SF_ModeSelector2_DiagCode = 32773;
	goto loc69;

	loc69:
	goto loc72;

	loc70:
	if ((!(SF_ModeSelector2_S_Unlock))){
		goto loc71;
	}else{
		goto loc72;
	}

	loc71:
	SF_ModeSelector2_DiagCode = 32772;
	goto loc72;

	loc72:
	goto loc99;

	loc73:
	if ((SF_ModeSelector2___TEMP0 == 32772)){
		goto loc74;
	}else{
		goto loc77;
	}

	loc74:
	if (SF_ModeSelector2_S_Unlock){
		goto loc75;
	}else{
		goto loc76;
	}

	loc75:
	SF_ModeSelector2_DiagCode = 32768;
	goto loc76;

	loc76:
	goto loc99;

	loc77:
	if ((SF_ModeSelector2___TEMP0 == 49153)){
		goto loc78;
	}else{
		goto loc84;
	}

	loc78:
	if ((SF_ModeSelector2_Reset && (!(SF_ModeSelector2_R_TRIGatReset_Q)))){
		goto loc79;
	}else{
		goto loc81;
	}

	loc79:
	SF_ModeSelector2_DiagCode = 49155;
	goto loc80;

	loc80:
	goto loc83;

	loc81:
	if (SF_ModeSelector2_R_TRIGatReset_Q){
		goto loc82;
	}else{
		goto loc83;
	}

	loc82:
	SF_ModeSelector2_DiagCode = 32773;
	goto loc83;

	loc83:
	goto loc99;

	loc84:
	if ((SF_ModeSelector2___TEMP0 == 49154)){
		goto loc85;
	}else{
		goto loc91;
	}

	loc85:
	if ((SF_ModeSelector2_Reset && (!(SF_ModeSelector2_R_TRIGatReset_Q)))){
		goto loc86;
	}else{
		goto loc88;
	}

	loc86:
	SF_ModeSelector2_DiagCode = 49156;
	goto loc87;

	loc87:
	goto loc90;

	loc88:
	if (SF_ModeSelector2_R_TRIGatReset_Q){
		goto loc89;
	}else{
		goto loc90;
	}

	loc89:
	SF_ModeSelector2_DiagCode = 32773;
	goto loc90;

	loc90:
	goto loc99;

	loc91:
	if ((SF_ModeSelector2___TEMP0 == 49155)){
		goto loc92;
	}else{
		goto loc95;
	}

	loc92:
	if ((!(SF_ModeSelector2_Reset))){
		goto loc93;
	}else{
		goto loc94;
	}

	loc93:
	SF_ModeSelector2_DiagCode = 49153;
	goto loc94;

	loc94:
	goto loc99;

	loc95:
	if ((SF_ModeSelector2___TEMP0 == 49156)){
		goto loc96;
	}else{
		goto loc99;
	}

	loc96:
	if ((!(SF_ModeSelector2_Reset))){
		goto loc97;
	}else{
		goto loc98;
	}

	loc97:
	SF_ModeSelector2_DiagCode = 49154;
	goto loc98;

	loc98:
	goto loc99;

	loc99:
	SF_ModeSelector2___TEMP1 = SF_ModeSelector2_DiagCode;
	goto loc100;

	loc100:
	if ((SF_ModeSelector2___TEMP1 == 0)){
		goto loc101;
	}else{
		goto loc113;
	}

	loc101:
	SF_ModeSelector2_Ready = 0;
	goto loc102;

	loc102:
	SF_ModeSelector2_S_Mode0Sel = 0;
	goto loc103;

	loc103:
	SF_ModeSelector2_S_Mode1Sel = 0;
	goto loc104;

	loc104:
	SF_ModeSelector2_S_Mode2Sel = 0;
	goto loc105;

	loc105:
	SF_ModeSelector2_S_Mode3Sel = 0;
	goto loc106;

	loc106:
	SF_ModeSelector2_S_Mode4Sel = 0;
	goto loc107;

	loc107:
	SF_ModeSelector2_S_Mode5Sel = 0;
	goto loc108;

	loc108:
	SF_ModeSelector2_S_Mode6Sel = 0;
	goto loc109;

	loc109:
	SF_ModeSelector2_S_Mode7Sel = 0;
	goto loc110;

	loc110:
	SF_ModeSelector2_S_AnyModeSel = 0;
	goto loc111;

	loc111:
	SF_ModeSelector2_Error = 0;
	goto loc112;

	loc112:
	goto loc149;

	loc113:
	if ((SF_ModeSelector2___TEMP1 == 32773)){
		goto loc114;
	}else{
		goto loc126;
	}

	loc114:
	SF_ModeSelector2_Ready = 1;
	goto loc115;

	loc115:
	SF_ModeSelector2_S_Mode0Sel = 0;
	goto loc116;

	loc116:
	SF_ModeSelector2_S_Mode1Sel = 0;
	goto loc117;

	loc117:
	SF_ModeSelector2_S_Mode2Sel = 0;
	goto loc118;

	loc118:
	SF_ModeSelector2_S_Mode3Sel = 0;
	goto loc119;

	loc119:
	SF_ModeSelector2_S_Mode4Sel = 0;
	goto loc120;

	loc120:
	SF_ModeSelector2_S_Mode5Sel = 0;
	goto loc121;

	loc121:
	SF_ModeSelector2_S_Mode6Sel = 0;
	goto loc122;

	loc122:
	SF_ModeSelector2_S_Mode7Sel = 0;
	goto loc123;

	loc123:
	SF_ModeSelector2_S_AnyModeSel = 0;
	goto loc124;

	loc124:
	SF_ModeSelector2_Error = 0;
	goto loc125;

	loc125:
	goto loc149;

	loc126:
	if ((SF_ModeSelector2___TEMP1 == 32768)){
		goto loc127;
	}else{
		goto loc131;
	}

	loc127:
	SF_ModeSelector2_Ready = 1;
	goto loc128;

	loc128:
	SF_ModeSelector2_S_AnyModeSel = 1;
	goto loc129;

	loc129:
	SF_ModeSelector2_Error = 0;
	goto loc130;

	loc130:
	goto loc149;

	loc131:
	if ((SF_ModeSelector2___TEMP1 == 32772)){
		goto loc132;
	}else{
		goto loc136;
	}

	loc132:
	SF_ModeSelector2_Ready = 1;
	goto loc133;

	loc133:
	SF_ModeSelector2_S_AnyModeSel = 1;
	goto loc134;

	loc134:
	SF_ModeSelector2_Error = 0;
	goto loc135;

	loc135:
	goto loc149;

	loc136:
	if (((SF_ModeSelector2___TEMP1 == 49153) || ((SF_ModeSelector2___TEMP1 == 49154) || ((SF_ModeSelector2___TEMP1 == 49155) || (SF_ModeSelector2___TEMP1 == 49156))))){
		goto loc137;
	}else{
		goto loc149;
	}

	loc137:
	SF_ModeSelector2_Ready = 1;
	goto loc138;

	loc138:
	SF_ModeSelector2_S_Mode0Sel = 0;
	goto loc139;

	loc139:
	SF_ModeSelector2_S_Mode1Sel = 0;
	goto loc140;

	loc140:
	SF_ModeSelector2_S_Mode2Sel = 0;
	goto loc141;

	loc141:
	SF_ModeSelector2_S_Mode3Sel = 0;
	goto loc142;

	loc142:
	SF_ModeSelector2_S_Mode4Sel = 0;
	goto loc143;

	loc143:
	SF_ModeSelector2_S_Mode5Sel = 0;
	goto loc144;

	loc144:
	SF_ModeSelector2_S_Mode6Sel = 0;
	goto loc145;

	loc145:
	SF_ModeSelector2_S_Mode7Sel = 0;
	goto loc146;

	loc146:
	SF_ModeSelector2_S_AnyModeSel = 0;
	goto loc147;

	loc147:
	SF_ModeSelector2_Error = 1;
	goto loc148;

	loc148:
	goto loc149;

	loc149:
	if ((!((SF_ModeSelector2_DiagCode == 32773)))){
		goto loc150;
	}else{
		goto loc151;
	}

	loc150:
	goto loc235;

	loc151:
	__VERIFIER_assert((!(((((((((((SF_ModeSelector2_S_Mode0Sel!=0)?1:0) + ((SF_ModeSelector2_S_Mode1Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode2Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode3Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode4Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode5Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode6Sel!=0)?1:0)) + ((SF_ModeSelector2_S_Mode7Sel!=0)?1:0)) > 1))));

	SF_ModeSelector2_Activate = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode0 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode1 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode2 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode3 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode4 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode5 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode6 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Mode7 = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_Unlock = __VERIFIER_nondet_bool();
	SF_ModeSelector2_S_SetMode = __VERIFIER_nondet_bool();
	SF_ModeSelector2_AutoSetMode = __VERIFIER_nondet_bool();
	SF_ModeSelector2_ModeMonitorTime = __VERIFIER_nondet_int();
	SF_ModeSelector2_Reset = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>25){return 0;}
	goto loc16;

	loc152:
	goto loc157;

	loc153:
	SF_ModeSelector2_F_TRIGatModeSel0_Q = ((!(SF_ModeSelector2_F_TRIGatModeSel0_CLK)) && SF_ModeSelector2_F_TRIGatModeSel0_M);
	goto loc154;

	loc154:
	SF_ModeSelector2_F_TRIGatModeSel0_M = SF_ModeSelector2_F_TRIGatModeSel0_CLK;
	goto loc152;

	loc155:
	SF_ModeSelector2_F_TRIGatModeSel0_CLK = 0;
	goto loc156;

	loc156:
	goto loc153;

	loc157:
	goto loc39;

	loc158:
	if ((!(SF_ModeSelector2_T_1_IN))){
		goto loc160;
	}else{
		goto loc162;
	}

	loc159:
	SF_ModeSelector2_T_1___TEMP0 = 0;
	goto loc158;

	loc160:
	SF_ModeSelector2_T_1_Q = 0;
	goto loc161;

	loc161:
	goto loc166;

	loc162:
	if ((!(SF_ModeSelector2_T_1_Q))){
		goto loc163;
	}else{
		goto loc166;
	}

	loc163:
	goto loc169;

	loc164:
	SF_ModeSelector2_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc165;

	loc165:
	SF_ModeSelector2_T_1_Q = SF_ModeSelector2_T_1___TEMP0;
	goto loc166;

	loc166:
	goto loc174;

	loc167:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc168;

	loc168:
	goto loc170;

	loc169:
	goto loc167;

	loc170:
	goto loc164;

	loc171:
	SF_ModeSelector2_T_1_IN = 0;
	goto loc172;

	loc172:
	SF_ModeSelector2_T_1_PT = SF_ModeSelector2_ModeMonitorTime;
	goto loc173;

	loc173:
	goto loc159;

	loc174:
	goto loc45;

	loc175:
	SF_ModeSelector2_R_TRIGatModeSel0_Q = (SF_ModeSelector2_R_TRIGatModeSel0_CLK && (!(SF_ModeSelector2_R_TRIGatModeSel0_M)));
	goto loc176;

	loc176:
	SF_ModeSelector2_R_TRIGatModeSel0_M = SF_ModeSelector2_R_TRIGatModeSel0_CLK;
	goto loc177;

	loc177:
	goto loc180;

	loc178:
	SF_ModeSelector2_R_TRIGatModeSel0_CLK = 0;
	goto loc179;

	loc179:
	goto loc175;

	loc180:
	goto loc40;

	loc181:
	goto loc186;

	loc182:
	SF_ModeSelector2_F_TRIGatModeSel0_Q = ((!(SF_ModeSelector2_F_TRIGatModeSel0_CLK)) && SF_ModeSelector2_F_TRIGatModeSel0_M);
	goto loc183;

	loc183:
	SF_ModeSelector2_F_TRIGatModeSel0_M = SF_ModeSelector2_F_TRIGatModeSel0_CLK;
	goto loc181;

	loc184:
	SF_ModeSelector2_F_TRIGatModeSel0_CLK = 1;
	goto loc185;

	loc185:
	goto loc182;

	loc186:
	goto loc36;

	loc187:
	SF_ModeSelector2_R_TRIGatModeSel0_Q = (SF_ModeSelector2_R_TRIGatModeSel0_CLK && (!(SF_ModeSelector2_R_TRIGatModeSel0_M)));
	goto loc188;

	loc188:
	SF_ModeSelector2_R_TRIGatModeSel0_M = SF_ModeSelector2_R_TRIGatModeSel0_CLK;
	goto loc189;

	loc189:
	goto loc192;

	loc190:
	SF_ModeSelector2_R_TRIGatModeSel0_CLK = 1;
	goto loc191;

	loc191:
	goto loc187;

	loc192:
	goto loc37;

	loc193:
	if ((!(SF_ModeSelector2_T_1_IN))){
		goto loc195;
	}else{
		goto loc197;
	}

	loc194:
	SF_ModeSelector2_T_1___TEMP0 = 0;
	goto loc193;

	loc195:
	SF_ModeSelector2_T_1_Q = 0;
	goto loc196;

	loc196:
	goto loc201;

	loc197:
	if ((!(SF_ModeSelector2_T_1_Q))){
		goto loc198;
	}else{
		goto loc201;
	}

	loc198:
	goto loc204;

	loc199:
	SF_ModeSelector2_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc200;

	loc200:
	SF_ModeSelector2_T_1_Q = SF_ModeSelector2_T_1___TEMP0;
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
	SF_ModeSelector2_T_1_IN = 1;
	goto loc207;

	loc207:
	SF_ModeSelector2_T_1_PT = SF_ModeSelector2_ModeMonitorTime;
	goto loc208;

	loc208:
	goto loc194;

	loc209:
	goto loc42;

	loc210:
	SF_ModeSelector2_R_TRIGatReset_Q = (SF_ModeSelector2_R_TRIGatReset_CLK && (!(SF_ModeSelector2_R_TRIGatReset_M)));
	goto loc211;

	loc211:
	SF_ModeSelector2_R_TRIGatReset_M = SF_ModeSelector2_R_TRIGatReset_CLK;
	goto loc212;

	loc212:
	goto loc215;

	loc213:
	SF_ModeSelector2_R_TRIGatReset_CLK = SF_ModeSelector2_Reset;
	goto loc214;

	loc214:
	goto loc210;

	loc215:
	goto loc21;

	loc216:
	SF_ModeSelector2_R_TRIGatSetMode_Q = (SF_ModeSelector2_R_TRIGatSetMode_CLK && (!(SF_ModeSelector2_R_TRIGatSetMode_M)));
	goto loc217;

	loc217:
	SF_ModeSelector2_R_TRIGatSetMode_M = SF_ModeSelector2_R_TRIGatSetMode_CLK;
	goto loc218;

	loc218:
	goto loc221;

	loc219:
	SF_ModeSelector2_R_TRIGatSetMode_CLK = SF_ModeSelector2_S_SetMode;
	goto loc220;

	loc220:
	goto loc216;

	loc221:
	goto loc22;

	loc222:
	if ((!(SF_ModeSelector2_T_1_IN))){
		goto loc224;
	}else{
		goto loc226;
	}

	loc223:
	SF_ModeSelector2_T_1___TEMP0 = 0;
	goto loc222;

	loc224:
	SF_ModeSelector2_T_1_Q = 0;
	goto loc225;

	loc225:
	goto loc230;

	loc226:
	if ((!(SF_ModeSelector2_T_1_Q))){
		goto loc227;
	}else{
		goto loc230;
	}

	loc227:
	goto loc233;

	loc228:
	SF_ModeSelector2_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc229;

	loc229:
	SF_ModeSelector2_T_1_Q = SF_ModeSelector2_T_1___TEMP0;
	goto loc230;

	loc230:
	goto loc238;

	loc231:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc232;

	loc232:
	goto loc234;

	loc233:
	goto loc231;

	loc234:
	goto loc228;

	loc235:
	SF_ModeSelector2_T_1_IN = 0;
	goto loc236;

	loc236:
	SF_ModeSelector2_T_1_PT = SF_ModeSelector2_ModeMonitorTime;
	goto loc237;

	loc237:
	goto loc223;

	loc238:
	goto loc151;


}
