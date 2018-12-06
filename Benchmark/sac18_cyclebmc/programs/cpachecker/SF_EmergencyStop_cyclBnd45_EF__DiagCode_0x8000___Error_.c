// FORMULA: EF (DiagCode=0x8000 & Error)
// BOUND: 45

extern int __VERIFIER_nondet_int();
extern int __VERIFIER_nondet_bool();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int SF_EmergencyStop_Activate = 0;
	int SF_EmergencyStop_S_EStopIn = 0;
	int SF_EmergencyStop_S_StartReset = 0;
	int SF_EmergencyStop_S_AutoReset = 0;
	int SF_EmergencyStop_Reset = 0;
	int SF_EmergencyStop_Ready = 0;
	int SF_EmergencyStop_S_EStopOut = 0;
	int SF_EmergencyStop_Error = 0;
	int SF_EmergencyStop_DiagCode = 0;
	int SF_EmergencyStop_R_TRIGatReset_CLK = 0;
	int SF_EmergencyStop_R_TRIGatReset_Q = 0;
	int SF_EmergencyStop_R_TRIGatReset_M = 0;
	int SF_EmergencyStop___TEMP0 = 0;
	int SF_EmergencyStop___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc111;

	loc1:
	SF_EmergencyStop___TEMP1 = 0;
	goto loc2;

	loc2:
	SF_EmergencyStop___TEMP0 = 0;
	goto loc3;

	loc3:
	goto loc115;

	loc4:
	if ((!(SF_EmergencyStop_Activate))){
		goto loc5;
	}else{
		goto loc7;
	}

	loc5:
	SF_EmergencyStop_DiagCode = 0;
	goto loc6;

	loc6:
	goto loc65;

	loc7:
	SF_EmergencyStop___TEMP0 = SF_EmergencyStop_DiagCode;
	goto loc8;

	loc8:
	if ((SF_EmergencyStop___TEMP0 == 0)){
		goto loc9;
	}else{
		goto loc12;
	}

	loc9:
	if (SF_EmergencyStop_Activate){
		goto loc10;
	}else{
		goto loc11;
	}

	loc10:
	SF_EmergencyStop_DiagCode = 32769;
	goto loc11;

	loc11:
	goto loc65;

	loc12:
	if ((SF_EmergencyStop___TEMP0 == 32769)){
		goto loc13;
	}else{
		goto loc22;
	}

	loc13:
	if ((!(SF_EmergencyStop_S_StartReset))){
		goto loc14;
	}else{
		goto loc16;
	}

	loc14:
	SF_EmergencyStop_DiagCode = 32770;
	goto loc15;

	loc15:
	goto loc21;

	loc16:
	if ((SF_EmergencyStop_S_StartReset && (!(SF_EmergencyStop_S_EStopIn)))){
		goto loc17;
	}else{
		goto loc19;
	}

	loc17:
	SF_EmergencyStop_DiagCode = 32772;
	goto loc18;

	loc18:
	goto loc21;

	loc19:
	if ((SF_EmergencyStop_S_EStopIn && SF_EmergencyStop_S_StartReset)){
		goto loc20;
	}else{
		goto loc21;
	}

	loc20:
	SF_EmergencyStop_DiagCode = 32768;
	goto loc21;

	loc21:
	goto loc65;

	loc22:
	if ((SF_EmergencyStop___TEMP0 == 32770)){
		goto loc23;
	}else{
		goto loc26;
	}

	loc23:
	if (SF_EmergencyStop_S_EStopIn){
		goto loc24;
	}else{
		goto loc25;
	}

	loc24:
	SF_EmergencyStop_DiagCode = 32771;
	goto loc25;

	loc25:
	goto loc65;

	loc26:
	if ((SF_EmergencyStop___TEMP0 == 32771)){
		goto loc27;
	}else{
		goto loc36;
	}

	loc27:
	if ((SF_EmergencyStop_Reset && (!(SF_EmergencyStop_R_TRIGatReset_Q)))){
		goto loc28;
	}else{
		goto loc30;
	}

	loc28:
	SF_EmergencyStop_DiagCode = 49153;
	goto loc29;

	loc29:
	goto loc35;

	loc30:
	if ((!(SF_EmergencyStop_S_EStopIn))){
		goto loc31;
	}else{
		goto loc33;
	}

	loc31:
	SF_EmergencyStop_DiagCode = 32770;
	goto loc32;

	loc32:
	goto loc35;

	loc33:
	if (SF_EmergencyStop_R_TRIGatReset_Q){
		goto loc34;
	}else{
		goto loc35;
	}

	loc34:
	SF_EmergencyStop_DiagCode = 32768;
	goto loc35;

	loc35:
	goto loc65;

	loc36:
	if ((SF_EmergencyStop___TEMP0 == 49153)){
		goto loc37;
	}else{
		goto loc40;
	}

	loc37:
	if ((!(SF_EmergencyStop_Reset))){
		goto loc38;
	}else{
		goto loc39;
	}

	loc38:
	SF_EmergencyStop_DiagCode = 32771;
	goto loc39;

	loc39:
	goto loc65;

	loc40:
	if ((SF_EmergencyStop___TEMP0 == 32772)){
		goto loc41;
	}else{
		goto loc47;
	}

	loc41:
	if ((SF_EmergencyStop_S_EStopIn && (!(SF_EmergencyStop_S_AutoReset)))){
		goto loc42;
	}else{
		goto loc44;
	}

	loc42:
	SF_EmergencyStop_DiagCode = 32773;
	goto loc43;

	loc43:
	goto loc46;

	loc44:
	if ((SF_EmergencyStop_S_EStopIn && SF_EmergencyStop_S_AutoReset)){
		goto loc45;
	}else{
		goto loc46;
	}

	loc45:
	SF_EmergencyStop_DiagCode = 32768;
	goto loc46;

	loc46:
	goto loc65;

	loc47:
	if ((SF_EmergencyStop___TEMP0 == 32773)){
		goto loc48;
	}else{
		goto loc57;
	}

	loc48:
	if ((SF_EmergencyStop_Reset && (!(SF_EmergencyStop_R_TRIGatReset_Q)))){
		goto loc49;
	}else{
		goto loc51;
	}

	loc49:
	SF_EmergencyStop_DiagCode = 49154;
	goto loc50;

	loc50:
	goto loc56;

	loc51:
	if ((!(SF_EmergencyStop_S_EStopIn))){
		goto loc52;
	}else{
		goto loc54;
	}

	loc52:
	SF_EmergencyStop_DiagCode = 32772;
	goto loc53;

	loc53:
	goto loc56;

	loc54:
	if ((SF_EmergencyStop_R_TRIGatReset_Q || SF_EmergencyStop_S_AutoReset)){
		goto loc55;
	}else{
		goto loc56;
	}

	loc55:
	SF_EmergencyStop_DiagCode = 32768;
	goto loc56;

	loc56:
	goto loc65;

	loc57:
	if ((SF_EmergencyStop___TEMP0 == 49154)){
		goto loc58;
	}else{
		goto loc61;
	}

	loc58:
	if ((!(SF_EmergencyStop_Reset))){
		goto loc59;
	}else{
		goto loc60;
	}

	loc59:
	SF_EmergencyStop_DiagCode = 32773;
	goto loc60;

	loc60:
	goto loc65;

	loc61:
	if ((SF_EmergencyStop___TEMP0 == 32768)){
		goto loc62;
	}else{
		goto loc65;
	}

	loc62:
	if ((!(SF_EmergencyStop_S_EStopIn))){
		goto loc63;
	}else{
		goto loc64;
	}

	loc63:
	SF_EmergencyStop_DiagCode = 32772;
	goto loc64;

	loc64:
	goto loc65;

	loc65:
	SF_EmergencyStop___TEMP1 = SF_EmergencyStop_DiagCode;
	goto loc66;

	loc66:
	if ((SF_EmergencyStop___TEMP1 == 0)){
		goto loc67;
	}else{
		goto loc71;
	}

	loc67:
	SF_EmergencyStop_Ready = 0;
	goto loc68;

	loc68:
	SF_EmergencyStop_Error = 0;
	goto loc69;

	loc69:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc70;

	loc70:
	goto loc111;

	loc71:
	if ((SF_EmergencyStop___TEMP1 == 32769)){
		goto loc72;
	}else{
		goto loc76;
	}

	loc72:
	SF_EmergencyStop_Ready = 1;
	goto loc73;

	loc73:
	SF_EmergencyStop_Error = 0;
	goto loc74;

	loc74:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc75;

	loc75:
	goto loc111;

	loc76:
	if ((SF_EmergencyStop___TEMP1 == 32770)){
		goto loc77;
	}else{
		goto loc81;
	}

	loc77:
	SF_EmergencyStop_Ready = 1;
	goto loc78;

	loc78:
	SF_EmergencyStop_Error = 0;
	goto loc79;

	loc79:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc80;

	loc80:
	goto loc111;

	loc81:
	if ((SF_EmergencyStop___TEMP1 == 32771)){
		goto loc82;
	}else{
		goto loc86;
	}

	loc82:
	SF_EmergencyStop_Ready = 1;
	goto loc83;

	loc83:
	SF_EmergencyStop_Error = 0;
	goto loc84;

	loc84:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc85;

	loc85:
	goto loc111;

	loc86:
	if ((SF_EmergencyStop___TEMP1 == 49153)){
		goto loc87;
	}else{
		goto loc91;
	}

	loc87:
	SF_EmergencyStop_Ready = 1;
	goto loc88;

	loc88:
	SF_EmergencyStop_Error = 1;
	goto loc89;

	loc89:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc90;

	loc90:
	goto loc111;

	loc91:
	if ((SF_EmergencyStop___TEMP1 == 32772)){
		goto loc92;
	}else{
		goto loc96;
	}

	loc92:
	SF_EmergencyStop_Ready = 1;
	goto loc93;

	loc93:
	SF_EmergencyStop_Error = 0;
	goto loc94;

	loc94:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc95;

	loc95:
	goto loc111;

	loc96:
	if ((SF_EmergencyStop___TEMP1 == 32773)){
		goto loc97;
	}else{
		goto loc101;
	}

	loc97:
	SF_EmergencyStop_Ready = 1;
	goto loc98;

	loc98:
	SF_EmergencyStop_Error = 0;
	goto loc99;

	loc99:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc100;

	loc100:
	goto loc111;

	loc101:
	if ((SF_EmergencyStop___TEMP1 == 49154)){
		goto loc102;
	}else{
		goto loc106;
	}

	loc102:
	SF_EmergencyStop_Ready = 1;
	goto loc103;

	loc103:
	SF_EmergencyStop_Error = 1;
	goto loc104;

	loc104:
	SF_EmergencyStop_S_EStopOut = 0;
	goto loc105;

	loc105:
	goto loc111;

	loc106:
	if ((SF_EmergencyStop___TEMP1 == 32768)){
		goto loc107;
	}else{
		goto loc111;
	}

	loc107:
	SF_EmergencyStop_Ready = 1;
	goto loc108;

	loc108:
	SF_EmergencyStop_Error = 0;
	goto loc109;

	loc109:
	SF_EmergencyStop_S_EStopOut = 1;
	goto loc110;

	loc110:
	goto loc111;

	loc111:
	__VERIFIER_assert((!(((SF_EmergencyStop_DiagCode == 32768) && (!((SF_EmergencyStop_Error == (0 != 0))))))));

	SF_EmergencyStop_Activate = __VERIFIER_nondet_bool();
	SF_EmergencyStop_S_EStopIn = __VERIFIER_nondet_bool();
	SF_EmergencyStop_S_StartReset = __VERIFIER_nondet_bool();
	SF_EmergencyStop_S_AutoReset = __VERIFIER_nondet_bool();
	SF_EmergencyStop_Reset = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>45){return 0;}
	goto loc1;

	loc112:
	SF_EmergencyStop_R_TRIGatReset_Q = (SF_EmergencyStop_R_TRIGatReset_CLK && (!(SF_EmergencyStop_R_TRIGatReset_M)));
	goto loc113;

	loc113:
	SF_EmergencyStop_R_TRIGatReset_M = SF_EmergencyStop_R_TRIGatReset_CLK;
	goto loc114;

	loc114:
	goto loc117;

	loc115:
	SF_EmergencyStop_R_TRIGatReset_CLK = SF_EmergencyStop_Reset;
	goto loc116;

	loc116:
	goto loc112;

	loc117:
	goto loc4;


}
