// FORMULA: EF (Error & !Activate)
// BOUND: 25

extern int __VERIFIER_nondet_int();
extern int __VERIFIER_nondet_bool();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_SafelyLimitSpeed_Activate = 0;
	int SF_SafelyLimitSpeed_S_OpMode = 0;
	int SF_SafelyLimitSpeed_S_Enabled = 0;
	int SF_SafelyLimitSpeed_AxisID = 0;
	int SF_SafelyLimitSpeed_MonitoringTime = 0;
	int SF_SafelyLimitSpeed_Reset = 0;
	int SF_SafelyLimitSpeed_Acknowledge = 0;
	int SF_SafelyLimitSpeed_Ready = 0;
	int SF_SafelyLimitSpeed_S_SafetyActive = 0;
	int SF_SafelyLimitSpeed_Error = 0;
	int SF_SafelyLimitSpeed_DiagCode = 0;
	int SF_SafelyLimitSpeed_R_TRIGatReset_CLK = 0;
	int SF_SafelyLimitSpeed_R_TRIGatReset_Q = 0;
	int SF_SafelyLimitSpeed_R_TRIGatReset_M = 0;
	int SF_SafelyLimitSpeed_T_1_IN = 0;
	int SF_SafelyLimitSpeed_T_1_PT = 0;
	int SF_SafelyLimitSpeed_T_1_Q = 0;
	int SF_SafelyLimitSpeed_T_1___TEMP0 = 0;
	int SF_SafelyLimitSpeed___TEMP0 = 0;
	int SF_SafelyLimitSpeed___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc128;

	loc9:
	SF_SafelyLimitSpeed___TEMP1 = 0;
	goto loc10;

	loc10:
	SF_SafelyLimitSpeed___TEMP0 = 0;
	goto loc11;

	loc11:
	goto loc132;

	loc12:
	if ((!(SF_SafelyLimitSpeed_Activate))){
		goto loc13;
	}else{
		goto loc14;
	}

	loc13:
	SF_SafelyLimitSpeed_DiagCode = 0;
	goto loc14;

	loc14:
	goto loc148;

	loc15:
	SF_SafelyLimitSpeed___TEMP0 = SF_SafelyLimitSpeed_DiagCode;
	goto loc16;

	loc16:
	if ((SF_SafelyLimitSpeed___TEMP0 == 0)){
		goto loc17;
	}else{
		goto loc20;
	}

	loc17:
	if (SF_SafelyLimitSpeed_Activate){
		goto loc18;
	}else{
		goto loc19;
	}

	loc18:
	SF_SafelyLimitSpeed_DiagCode = 32769;
	goto loc19;

	loc19:
	goto loc107;

	loc20:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32768)){
		goto loc21;
	}else{
		goto loc30;
	}

	loc21:
	if ((!(SF_SafelyLimitSpeed_Acknowledge))){
		goto loc22;
	}else{
		goto loc24;
	}

	loc22:
	SF_SafelyLimitSpeed_DiagCode = 49154;
	goto loc23;

	loc23:
	goto loc29;

	loc24:
	if (SF_SafelyLimitSpeed_S_OpMode){
		goto loc25;
	}else{
		goto loc27;
	}

	loc25:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc26;

	loc26:
	goto loc29;

	loc27:
	if (SF_SafelyLimitSpeed_S_Enabled){
		goto loc28;
	}else{
		goto loc29;
	}

	loc28:
	SF_SafelyLimitSpeed_DiagCode = 32772;
	goto loc29;

	loc29:
	goto loc107;

	loc30:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32769)){
		goto loc31;
	}else{
		goto loc40;
	}

	loc31:
	if ((SF_SafelyLimitSpeed_Reset && (!(SF_SafelyLimitSpeed_R_TRIGatReset_Q)))){
		goto loc32;
	}else{
		goto loc34;
	}

	loc32:
	SF_SafelyLimitSpeed_DiagCode = 49153;
	goto loc33;

	loc33:
	goto loc39;

	loc34:
	if ((SF_SafelyLimitSpeed_R_TRIGatReset_Q && (!(SF_SafelyLimitSpeed_Acknowledge)))){
		goto loc35;
	}else{
		goto loc37;
	}

	loc35:
	SF_SafelyLimitSpeed_DiagCode = 32770;
	goto loc36;

	loc36:
	goto loc39;

	loc37:
	if ((SF_SafelyLimitSpeed_R_TRIGatReset_Q && SF_SafelyLimitSpeed_Acknowledge)){
		goto loc38;
	}else{
		goto loc39;
	}

	loc38:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc39;

	loc39:
	goto loc107;

	loc40:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32770)){
		goto loc41;
	}else{
		goto loc47;
	}

	loc41:
	if ((!(SF_SafelyLimitSpeed_S_OpMode))){
		goto loc42;
	}else{
		goto loc44;
	}

	loc42:
	SF_SafelyLimitSpeed_DiagCode = 32771;
	goto loc43;

	loc43:
	goto loc46;

	loc44:
	if (SF_SafelyLimitSpeed_Acknowledge){
		goto loc45;
	}else{
		goto loc46;
	}

	loc45:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc46;

	loc46:
	goto loc107;

	loc47:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32771)){
		goto loc48;
	}else{
		goto loc60;
	}

	loc48:
	if (SF_SafelyLimitSpeed_T_1_Q){
		goto loc49;
	}else{
		goto loc51;
	}

	loc49:
	SF_SafelyLimitSpeed_DiagCode = 49155;
	goto loc50;

	loc50:
	goto loc59;

	loc51:
	if (SF_SafelyLimitSpeed_S_OpMode){
		goto loc52;
	}else{
		goto loc54;
	}

	loc52:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc53;

	loc53:
	goto loc59;

	loc54:
	if ((SF_SafelyLimitSpeed_Acknowledge && (!(SF_SafelyLimitSpeed_S_Enabled)))){
		goto loc55;
	}else{
		goto loc57;
	}

	loc55:
	SF_SafelyLimitSpeed_DiagCode = 32768;
	goto loc56;

	loc56:
	goto loc59;

	loc57:
	if ((SF_SafelyLimitSpeed_Acknowledge && SF_SafelyLimitSpeed_S_Enabled)){
		goto loc58;
	}else{
		goto loc59;
	}

	loc58:
	SF_SafelyLimitSpeed_DiagCode = 32772;
	goto loc59;

	loc59:
	goto loc107;

	loc60:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32772)){
		goto loc61;
	}else{
		goto loc70;
	}

	loc61:
	if ((!(SF_SafelyLimitSpeed_Acknowledge))){
		goto loc62;
	}else{
		goto loc64;
	}

	loc62:
	SF_SafelyLimitSpeed_DiagCode = 49154;
	goto loc63;

	loc63:
	goto loc69;

	loc64:
	if (SF_SafelyLimitSpeed_S_OpMode){
		goto loc65;
	}else{
		goto loc67;
	}

	loc65:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc66;

	loc66:
	goto loc69;

	loc67:
	if ((!(SF_SafelyLimitSpeed_S_Enabled))){
		goto loc68;
	}else{
		goto loc69;
	}

	loc68:
	SF_SafelyLimitSpeed_DiagCode = 32768;
	goto loc69;

	loc69:
	goto loc107;

	loc70:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32773)){
		goto loc71;
	}else{
		goto loc74;
	}

	loc71:
	if (SF_SafelyLimitSpeed_S_OpMode){
		goto loc72;
	}else{
		goto loc73;
	}

	loc72:
	SF_SafelyLimitSpeed_DiagCode = 32786;
	goto loc73;

	loc73:
	goto loc107;

	loc74:
	if ((SF_SafelyLimitSpeed___TEMP0 == 32786)){
		goto loc75;
	}else{
		goto loc81;
	}

	loc75:
	if ((!(SF_SafelyLimitSpeed_Acknowledge))){
		goto loc76;
	}else{
		goto loc78;
	}

	loc76:
	SF_SafelyLimitSpeed_DiagCode = 32770;
	goto loc77;

	loc77:
	goto loc80;

	loc78:
	if ((!(SF_SafelyLimitSpeed_S_OpMode))){
		goto loc79;
	}else{
		goto loc80;
	}

	loc79:
	SF_SafelyLimitSpeed_DiagCode = 32771;
	goto loc80;

	loc80:
	goto loc107;

	loc81:
	if ((SF_SafelyLimitSpeed___TEMP0 == 49153)){
		goto loc82;
	}else{
		goto loc85;
	}

	loc82:
	if ((!(SF_SafelyLimitSpeed_Reset))){
		goto loc83;
	}else{
		goto loc84;
	}

	loc83:
	SF_SafelyLimitSpeed_DiagCode = 32769;
	goto loc84;

	loc84:
	goto loc107;

	loc85:
	if ((SF_SafelyLimitSpeed___TEMP0 == 49154)){
		goto loc86;
	}else{
		goto loc92;
	}

	loc86:
	if ((SF_SafelyLimitSpeed_Reset && (!(SF_SafelyLimitSpeed_R_TRIGatReset_Q)))){
		goto loc87;
	}else{
		goto loc89;
	}

	loc87:
	SF_SafelyLimitSpeed_DiagCode = 49156;
	goto loc88;

	loc88:
	goto loc91;

	loc89:
	if (SF_SafelyLimitSpeed_R_TRIGatReset_Q){
		goto loc90;
	}else{
		goto loc91;
	}

	loc90:
	SF_SafelyLimitSpeed_DiagCode = 32773;
	goto loc91;

	loc91:
	goto loc107;

	loc92:
	if ((SF_SafelyLimitSpeed___TEMP0 == 49155)){
		goto loc93;
	}else{
		goto loc99;
	}

	loc93:
	if ((SF_SafelyLimitSpeed_Reset && (!(SF_SafelyLimitSpeed_R_TRIGatReset_Q)))){
		goto loc94;
	}else{
		goto loc96;
	}

	loc94:
	SF_SafelyLimitSpeed_DiagCode = 49157;
	goto loc95;

	loc95:
	goto loc98;

	loc96:
	if (SF_SafelyLimitSpeed_R_TRIGatReset_Q){
		goto loc97;
	}else{
		goto loc98;
	}

	loc97:
	SF_SafelyLimitSpeed_DiagCode = 32773;
	goto loc98;

	loc98:
	goto loc107;

	loc99:
	if ((SF_SafelyLimitSpeed___TEMP0 == 49156)){
		goto loc100;
	}else{
		goto loc103;
	}

	loc100:
	if ((!(SF_SafelyLimitSpeed_Reset))){
		goto loc101;
	}else{
		goto loc102;
	}

	loc101:
	SF_SafelyLimitSpeed_DiagCode = 49154;
	goto loc102;

	loc102:
	goto loc107;

	loc103:
	if ((SF_SafelyLimitSpeed___TEMP0 == 49157)){
		goto loc104;
	}else{
		goto loc107;
	}

	loc104:
	if ((!(SF_SafelyLimitSpeed_Reset))){
		goto loc105;
	}else{
		goto loc106;
	}

	loc105:
	SF_SafelyLimitSpeed_DiagCode = 49155;
	goto loc106;

	loc106:
	goto loc107;

	loc107:
	SF_SafelyLimitSpeed___TEMP1 = SF_SafelyLimitSpeed_DiagCode;
	goto loc108;

	loc108:
	if ((SF_SafelyLimitSpeed___TEMP1 == 0)){
		goto loc109;
	}else{
		goto loc113;
	}

	loc109:
	SF_SafelyLimitSpeed_Ready = 0;
	goto loc110;

	loc110:
	SF_SafelyLimitSpeed_S_SafetyActive = 0;
	goto loc111;

	loc111:
	SF_SafelyLimitSpeed_Error = 0;
	goto loc112;

	loc112:
	goto loc128;

	loc113:
	if (((SF_SafelyLimitSpeed___TEMP1 == 32768) || (SF_SafelyLimitSpeed___TEMP1 == 32772))){
		goto loc114;
	}else{
		goto loc118;
	}

	loc114:
	SF_SafelyLimitSpeed_Ready = 1;
	goto loc115;

	loc115:
	SF_SafelyLimitSpeed_S_SafetyActive = 1;
	goto loc116;

	loc116:
	SF_SafelyLimitSpeed_Error = 0;
	goto loc117;

	loc117:
	goto loc128;

	loc118:
	if (((SF_SafelyLimitSpeed___TEMP1 == 32769) || ((SF_SafelyLimitSpeed___TEMP1 == 32770) || ((SF_SafelyLimitSpeed___TEMP1 == 32771) || ((SF_SafelyLimitSpeed___TEMP1 == 32773) || (SF_SafelyLimitSpeed___TEMP1 == 32786)))))){
		goto loc119;
	}else{
		goto loc123;
	}

	loc119:
	SF_SafelyLimitSpeed_Ready = 1;
	goto loc120;

	loc120:
	SF_SafelyLimitSpeed_S_SafetyActive = 0;
	goto loc121;

	loc121:
	SF_SafelyLimitSpeed_Error = 0;
	goto loc122;

	loc122:
	goto loc128;

	loc123:
	if (((SF_SafelyLimitSpeed___TEMP1 == 49153) || ((SF_SafelyLimitSpeed___TEMP1 == 49154) || ((SF_SafelyLimitSpeed___TEMP1 == 49155) || ((SF_SafelyLimitSpeed___TEMP1 == 49156) || (SF_SafelyLimitSpeed___TEMP1 == 49157)))))){
		goto loc124;
	}else{
		goto loc128;
	}

	loc124:
	SF_SafelyLimitSpeed_Ready = 1;
	goto loc125;

	loc125:
	SF_SafelyLimitSpeed_S_SafetyActive = 0;
	goto loc126;

	loc126:
	SF_SafelyLimitSpeed_Error = 1;
	goto loc127;

	loc127:
	goto loc128;

	loc128:
	__VERIFIER_assert((!(((!((SF_SafelyLimitSpeed_Error == (0 != 0)))) && (SF_SafelyLimitSpeed_Activate == (0 != 0))))));

	SF_SafelyLimitSpeed_Activate = __VERIFIER_nondet_bool();
	SF_SafelyLimitSpeed_S_OpMode = __VERIFIER_nondet_bool();
	SF_SafelyLimitSpeed_S_Enabled = __VERIFIER_nondet_bool();
	SF_SafelyLimitSpeed_AxisID = __VERIFIER_nondet_int();
	SF_SafelyLimitSpeed_MonitoringTime = __VERIFIER_nondet_int();
	SF_SafelyLimitSpeed_Reset = __VERIFIER_nondet_bool();
	SF_SafelyLimitSpeed_Acknowledge = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>25){return 0;}
	goto loc9;

	loc129:
	SF_SafelyLimitSpeed_R_TRIGatReset_Q = (SF_SafelyLimitSpeed_R_TRIGatReset_CLK && (!(SF_SafelyLimitSpeed_R_TRIGatReset_M)));
	goto loc130;

	loc130:
	SF_SafelyLimitSpeed_R_TRIGatReset_M = SF_SafelyLimitSpeed_R_TRIGatReset_CLK;
	goto loc131;

	loc131:
	goto loc134;

	loc132:
	SF_SafelyLimitSpeed_R_TRIGatReset_CLK = SF_SafelyLimitSpeed_Reset;
	goto loc133;

	loc133:
	goto loc129;

	loc134:
	goto loc12;

	loc135:
	SF_SafelyLimitSpeed_T_1___TEMP0 = 0;
	goto loc136;

	loc136:
	if ((!(SF_SafelyLimitSpeed_T_1_IN))){
		goto loc137;
	}else{
		goto loc139;
	}

	loc137:
	SF_SafelyLimitSpeed_T_1_Q = 0;
	goto loc138;

	loc138:
	goto loc143;

	loc139:
	if ((!(SF_SafelyLimitSpeed_T_1_Q))){
		goto loc140;
	}else{
		goto loc143;
	}

	loc140:
	goto loc146;

	loc141:
	SF_SafelyLimitSpeed_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc142;

	loc142:
	SF_SafelyLimitSpeed_T_1_Q = SF_SafelyLimitSpeed_T_1___TEMP0;
	goto loc143;

	loc143:
	goto loc151;

	loc144:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc145;

	loc145:
	goto loc147;

	loc146:
	goto loc144;

	loc147:
	goto loc141;

	loc148:
	SF_SafelyLimitSpeed_T_1_IN = (SF_SafelyLimitSpeed_Activate && (!(SF_SafelyLimitSpeed_S_OpMode)));
	goto loc149;

	loc149:
	SF_SafelyLimitSpeed_T_1_PT = SF_SafelyLimitSpeed_MonitoringTime;
	goto loc150;

	loc150:
	goto loc135;

	loc151:
	goto loc15;


}
