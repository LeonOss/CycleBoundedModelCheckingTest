// FORMULA: AG (S_GuardLocked => !S_UnlockGuard)
// BOUND: 37

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_GuardLocking_Activate = 0;
	int SF_GuardLocking_S_GuardMonitoring = 0;
	int SF_GuardLocking_S_SafetyActive = 0;
	int SF_GuardLocking_S_GuardLock = 0;
	int SF_GuardLocking_UnlockRequest = 0;
	int SF_GuardLocking_S_StartReset = 0;
	int SF_GuardLocking_S_AutoReset = 0;
	int SF_GuardLocking_Reset = 0;
	int SF_GuardLocking_Ready = 0;
	int SF_GuardLocking_S_GuardLocked = 0;
	int SF_GuardLocking_S_UnlockGuard = 0;
	int SF_GuardLocking_Error = 0;
	int SF_GuardLocking_DiagCode = 0;
	int SF_GuardLocking_R_TRIGatReset_CLK = 0;
	int SF_GuardLocking_R_TRIGatReset_Q = 0;
	int SF_GuardLocking_R_TRIGatReset_M = 0;
	int SF_GuardLocking_R_TRIGatUnlockRequest_CLK = 0;
	int SF_GuardLocking_R_TRIGatUnlockRequest_Q = 0;
	int SF_GuardLocking_R_TRIGatUnlockRequest_M = 0;
	int SF_GuardLocking_T1_IN = 0;
	int SF_GuardLocking_T1_PT = 0;
	int SF_GuardLocking_T1_Q = 0;
	int SF_GuardLocking_T1___TEMP0 = 0;
	int SF_GuardLocking___TEMP0 = 0;
	int SF_GuardLocking___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc131;

	loc12:
	SF_GuardLocking___TEMP1 = 0;
	goto loc13;

	loc13:
	SF_GuardLocking___TEMP0 = 0;
	goto loc14;

	loc14:
	goto loc135;

	loc15:
	goto loc141;

	loc16:
	if ((!(SF_GuardLocking_Activate))){
		goto loc17;
	}else{
		goto loc18;
	}

	loc17:
	SF_GuardLocking_DiagCode = 0;
	goto loc18;

	loc18:
	SF_GuardLocking___TEMP0 = SF_GuardLocking_DiagCode;
	goto loc19;

	loc19:
	if ((SF_GuardLocking___TEMP0 == 0)){
		goto loc20;
	}else{
		goto loc23;
	}

	loc20:
	if (SF_GuardLocking_Activate){
		goto loc21;
	}else{
		goto loc22;
	}

	loc21:
	SF_GuardLocking_DiagCode = 32769;
	goto loc22;

	loc22:
	goto loc100;

	loc23:
	if ((SF_GuardLocking___TEMP0 == 32768)){
		goto loc24;
	}else{
		goto loc30;
	}

	loc24:
	if (((!(SF_GuardLocking_S_GuardLock)) || (!(SF_GuardLocking_S_GuardMonitoring)))){
		goto loc25;
	}else{
		goto loc27;
	}

	loc25:
	SF_GuardLocking_DiagCode = 49156;
	goto loc26;

	loc26:
	goto loc29;

	loc27:
	if ((SF_GuardLocking_R_TRIGatUnlockRequest_Q && SF_GuardLocking_S_SafetyActive)){
		goto loc28;
	}else{
		goto loc29;
	}

	loc28:
	SF_GuardLocking_DiagCode = 32787;
	goto loc29;

	loc29:
	goto loc100;

	loc30:
	if ((SF_GuardLocking___TEMP0 == 32769)){
		goto loc31;
	}else{
		goto loc40;
	}

	loc31:
	if (((SF_GuardLocking_Reset && (!(SF_GuardLocking_R_TRIGatReset_Q))) && (!(SF_GuardLocking_S_StartReset)))){
		goto loc32;
	}else{
		goto loc34;
	}

	loc32:
	SF_GuardLocking_DiagCode = 49153;
	goto loc33;

	loc33:
	goto loc39;

	loc34:
	if (((!(SF_GuardLocking_S_GuardLock)) || (!(SF_GuardLocking_S_GuardMonitoring)))){
		goto loc35;
	}else{
		goto loc37;
	}

	loc35:
	SF_GuardLocking_DiagCode = 32785;
	goto loc36;

	loc36:
	goto loc39;

	loc37:
	if ((((SF_GuardLocking_R_TRIGatReset_Q || SF_GuardLocking_S_StartReset) && SF_GuardLocking_S_GuardMonitoring) && SF_GuardLocking_S_GuardLock)){
		goto loc38;
	}else{
		goto loc39;
	}

	loc38:
	SF_GuardLocking_DiagCode = 32768;
	goto loc39;

	loc39:
	goto loc100;

	loc40:
	if ((SF_GuardLocking___TEMP0 == 32771)){
		goto loc41;
	}else{
		goto loc50;
	}

	loc41:
	if (((SF_GuardLocking_Reset && (!(SF_GuardLocking_R_TRIGatReset_Q))) && (!(SF_GuardLocking_S_AutoReset)))){
		goto loc42;
	}else{
		goto loc44;
	}

	loc42:
	SF_GuardLocking_DiagCode = 49155;
	goto loc43;

	loc43:
	goto loc49;

	loc44:
	if (((!(SF_GuardLocking_S_GuardMonitoring)) || (!(SF_GuardLocking_S_GuardLock)))){
		goto loc45;
	}else{
		goto loc47;
	}

	loc45:
	SF_GuardLocking_DiagCode = 32785;
	goto loc46;

	loc46:
	goto loc49;

	loc47:
	if ((SF_GuardLocking_R_TRIGatReset_Q || SF_GuardLocking_S_AutoReset)){
		goto loc48;
	}else{
		goto loc49;
	}

	loc48:
	SF_GuardLocking_DiagCode = 32768;
	goto loc49;

	loc49:
	goto loc100;

	loc50:
	if ((SF_GuardLocking___TEMP0 == 32785)){
		goto loc51;
	}else{
		goto loc60;
	}

	loc51:
	if (((!(SF_GuardLocking_S_SafetyActive)) && ((!(SF_GuardLocking_S_GuardMonitoring)) || (!(SF_GuardLocking_S_GuardLock))))){
		goto loc52;
	}else{
		goto loc54;
	}

	loc52:
	SF_GuardLocking_DiagCode = 49156;
	goto loc53;

	loc53:
	goto loc59;

	loc54:
	if (((SF_GuardLocking_S_SafetyActive && SF_GuardLocking_UnlockRequest) || (!(SF_GuardLocking_S_GuardMonitoring)))){
		goto loc55;
	}else{
		goto loc57;
	}

	loc55:
	SF_GuardLocking_DiagCode = 32786;
	goto loc56;

	loc56:
	goto loc59;

	loc57:
	if ((SF_GuardLocking_S_GuardMonitoring && SF_GuardLocking_S_GuardLock)){
		goto loc58;
	}else{
		goto loc59;
	}

	loc58:
	SF_GuardLocking_DiagCode = 32771;
	goto loc59;

	loc59:
	goto loc100;

	loc60:
	if ((SF_GuardLocking___TEMP0 == 32786)){
		goto loc61;
	}else{
		goto loc67;
	}

	loc61:
	if (SF_GuardLocking_S_GuardMonitoring){
		goto loc62;
	}else{
		goto loc64;
	}

	loc62:
	SF_GuardLocking_DiagCode = 32787;
	goto loc63;

	loc63:
	goto loc66;

	loc64:
	if (((!(SF_GuardLocking_S_SafetyActive)) && (!(SF_GuardLocking_S_GuardMonitoring)))){
		goto loc65;
	}else{
		goto loc66;
	}

	loc65:
	SF_GuardLocking_DiagCode = 49156;
	goto loc66;

	loc66:
	goto loc100;

	loc67:
	if ((SF_GuardLocking___TEMP0 == 32787)){
		goto loc68;
	}else{
		goto loc74;
	}

	loc68:
	if ((!(SF_GuardLocking_S_GuardMonitoring))){
		goto loc69;
	}else{
		goto loc71;
	}

	loc69:
	SF_GuardLocking_DiagCode = 32786;
	goto loc70;

	loc70:
	goto loc73;

	loc71:
	if ((!(SF_GuardLocking_UnlockRequest))){
		goto loc72;
	}else{
		goto loc73;
	}

	loc72:
	SF_GuardLocking_DiagCode = 32785;
	goto loc73;

	loc73:
	goto loc100;

	loc74:
	if ((SF_GuardLocking___TEMP0 == 32788)){
		goto loc75;
	}else{
		goto loc84;
	}

	loc75:
	if ((SF_GuardLocking_Reset && (!(SF_GuardLocking_R_TRIGatReset_Q)))){
		goto loc76;
	}else{
		goto loc78;
	}

	loc76:
	SF_GuardLocking_DiagCode = 49154;
	goto loc77;

	loc77:
	goto loc83;

	loc78:
	if ((!(SF_GuardLocking_S_SafetyActive))){
		goto loc79;
	}else{
		goto loc81;
	}

	loc79:
	SF_GuardLocking_DiagCode = 49156;
	goto loc80;

	loc80:
	goto loc83;

	loc81:
	if (SF_GuardLocking_R_TRIGatReset_Q){
		goto loc82;
	}else{
		goto loc83;
	}

	loc82:
	SF_GuardLocking_DiagCode = 32785;
	goto loc83;

	loc83:
	goto loc100;

	loc84:
	if ((SF_GuardLocking___TEMP0 == 49153)){
		goto loc85;
	}else{
		goto loc88;
	}

	loc85:
	if ((!(SF_GuardLocking_Reset))){
		goto loc86;
	}else{
		goto loc87;
	}

	loc86:
	SF_GuardLocking_DiagCode = 32769;
	goto loc87;

	loc87:
	goto loc100;

	loc88:
	if ((SF_GuardLocking___TEMP0 == 49154)){
		goto loc89;
	}else{
		goto loc92;
	}

	loc89:
	if ((!(SF_GuardLocking_Reset))){
		goto loc90;
	}else{
		goto loc91;
	}

	loc90:
	SF_GuardLocking_DiagCode = 32788;
	goto loc91;

	loc91:
	goto loc100;

	loc92:
	if ((SF_GuardLocking___TEMP0 == 49155)){
		goto loc93;
	}else{
		goto loc96;
	}

	loc93:
	if ((!(SF_GuardLocking_Reset))){
		goto loc94;
	}else{
		goto loc95;
	}

	loc94:
	SF_GuardLocking_DiagCode = 32771;
	goto loc95;

	loc95:
	goto loc100;

	loc96:
	if ((SF_GuardLocking___TEMP0 == 49156)){
		goto loc97;
	}else{
		goto loc100;
	}

	loc97:
	if (SF_GuardLocking_S_SafetyActive){
		goto loc98;
	}else{
		goto loc99;
	}

	loc98:
	SF_GuardLocking_DiagCode = 32788;
	goto loc99;

	loc99:
	goto loc100;

	loc100:
	SF_GuardLocking___TEMP1 = SF_GuardLocking_DiagCode;
	goto loc101;

	loc101:
	if ((SF_GuardLocking___TEMP1 == 0)){
		goto loc102;
	}else{
		goto loc107;
	}

	loc102:
	SF_GuardLocking_Ready = 0;
	goto loc103;

	loc103:
	SF_GuardLocking_S_GuardLocked = 0;
	goto loc104;

	loc104:
	SF_GuardLocking_S_UnlockGuard = 0;
	goto loc105;

	loc105:
	SF_GuardLocking_Error = 0;
	goto loc106;

	loc106:
	goto loc131;

	loc107:
	if ((SF_GuardLocking___TEMP1 == 32768)){
		goto loc108;
	}else{
		goto loc113;
	}

	loc108:
	SF_GuardLocking_Ready = 1;
	goto loc109;

	loc109:
	SF_GuardLocking_S_GuardLocked = 1;
	goto loc110;

	loc110:
	SF_GuardLocking_S_UnlockGuard = 0;
	goto loc111;

	loc111:
	SF_GuardLocking_Error = 0;
	goto loc112;

	loc112:
	goto loc131;

	loc113:
	if (((SF_GuardLocking___TEMP1 == 32769) || ((SF_GuardLocking___TEMP1 == 32771) || ((SF_GuardLocking___TEMP1 == 32785) || (SF_GuardLocking___TEMP1 == 32788))))){
		goto loc114;
	}else{
		goto loc119;
	}

	loc114:
	SF_GuardLocking_Ready = 1;
	goto loc115;

	loc115:
	SF_GuardLocking_S_GuardLocked = 0;
	goto loc116;

	loc116:
	SF_GuardLocking_S_UnlockGuard = 0;
	goto loc117;

	loc117:
	SF_GuardLocking_Error = 0;
	goto loc118;

	loc118:
	goto loc131;

	loc119:
	if (((SF_GuardLocking___TEMP1 == 32786) || (SF_GuardLocking___TEMP1 == 32787))){
		goto loc120;
	}else{
		goto loc125;
	}

	loc120:
	SF_GuardLocking_Ready = 1;
	goto loc121;

	loc121:
	SF_GuardLocking_S_GuardLocked = 0;
	goto loc122;

	loc122:
	SF_GuardLocking_S_UnlockGuard = 1;
	goto loc123;

	loc123:
	SF_GuardLocking_Error = 0;
	goto loc124;

	loc124:
	goto loc131;

	loc125:
	if (((SF_GuardLocking___TEMP1 == 49153) || ((SF_GuardLocking___TEMP1 == 49154) || ((SF_GuardLocking___TEMP1 == 49155) || (SF_GuardLocking___TEMP1 == 49156))))){
		goto loc126;
	}else{
		goto loc131;
	}

	loc126:
	SF_GuardLocking_Ready = 1;
	goto loc127;

	loc127:
	SF_GuardLocking_S_GuardLocked = 0;
	goto loc128;

	loc128:
	SF_GuardLocking_S_UnlockGuard = 0;
	goto loc129;

	loc129:
	SF_GuardLocking_Error = 1;
	goto loc130;

	loc130:
	goto loc131;

	loc131:
	__VERIFIER_assert((!(((!((SF_GuardLocking_S_GuardLocked == (0 != 0)))) && (!((SF_GuardLocking_S_UnlockGuard == (0 != 0))))))));

	SF_GuardLocking_Activate = __VERIFIER_nondet_bool();
	SF_GuardLocking_S_GuardMonitoring = __VERIFIER_nondet_bool();
	SF_GuardLocking_S_SafetyActive = __VERIFIER_nondet_bool();
	SF_GuardLocking_S_GuardLock = __VERIFIER_nondet_bool();
	SF_GuardLocking_UnlockRequest = __VERIFIER_nondet_bool();
	SF_GuardLocking_S_StartReset = __VERIFIER_nondet_bool();
	SF_GuardLocking_S_AutoReset = __VERIFIER_nondet_bool();
	SF_GuardLocking_Reset = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>37){return 0;}
	goto loc12;

	loc132:
	SF_GuardLocking_R_TRIGatReset_Q = (SF_GuardLocking_R_TRIGatReset_CLK && (!(SF_GuardLocking_R_TRIGatReset_M)));
	goto loc133;

	loc133:
	SF_GuardLocking_R_TRIGatReset_M = SF_GuardLocking_R_TRIGatReset_CLK;
	goto loc134;

	loc134:
	goto loc137;

	loc135:
	SF_GuardLocking_R_TRIGatReset_CLK = SF_GuardLocking_Reset;
	goto loc136;

	loc136:
	goto loc132;

	loc137:
	goto loc15;

	loc138:
	SF_GuardLocking_R_TRIGatUnlockRequest_Q = (SF_GuardLocking_R_TRIGatUnlockRequest_CLK && (!(SF_GuardLocking_R_TRIGatUnlockRequest_M)));
	goto loc139;

	loc139:
	SF_GuardLocking_R_TRIGatUnlockRequest_M = SF_GuardLocking_R_TRIGatUnlockRequest_CLK;
	goto loc140;

	loc140:
	goto loc143;

	loc141:
	SF_GuardLocking_R_TRIGatUnlockRequest_CLK = SF_GuardLocking_UnlockRequest;
	goto loc142;

	loc142:
	goto loc138;

	loc143:
	goto loc16;


}
