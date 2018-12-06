// FORMULA: AG (DiagCode=0xC003 => !S_MutingLamp)
// BOUND: 35

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_MutingSeq_Activate = 0;
	int SF_MutingSeq_S_AOPD_In = 0;
	int SF_MutingSeq_MutingSwitch11 = 0;
	int SF_MutingSeq_MutingSwitch12 = 0;
	int SF_MutingSeq_MutingSwitch21 = 0;
	int SF_MutingSeq_MutingSwitch22 = 0;
	int SF_MutingSeq_S_MutingLamp = 0;
	int SF_MutingSeq_DiscTime11_12 = 0;
	int SF_MutingSeq_DiscTime21_22 = 0;
	int SF_MutingSeq_MaxMutingTime = 0;
	int SF_MutingSeq_MutingEnable = 0;
	int SF_MutingSeq_S_StartReset = 0;
	int SF_MutingSeq_Reset = 0;
	int SF_MutingSeq_Ready = 0;
	int SF_MutingSeq_S_AOPD_Out = 0;
	int SF_MutingSeq_S_MutingActive = 0;
	int SF_MutingSeq_Error = 0;
	int SF_MutingSeq_DiagCode = 0;
	int SF_MutingSeq_R_TRIGatReset_CLK = 0;
	int SF_MutingSeq_R_TRIGatReset_Q = 0;
	int SF_MutingSeq_R_TRIGatReset_M = 0;
	int SF_MutingSeq_R_TRIGatMS_11_CLK = 0;
	int SF_MutingSeq_R_TRIGatMS_11_Q = 0;
	int SF_MutingSeq_R_TRIGatMS_11_M = 0;
	int SF_MutingSeq_R_TRIGatMS_12_CLK = 0;
	int SF_MutingSeq_R_TRIGatMS_12_Q = 0;
	int SF_MutingSeq_R_TRIGatMS_12_M = 0;
	int SF_MutingSeq_R_TRIGatMS_21_CLK = 0;
	int SF_MutingSeq_R_TRIGatMS_21_Q = 0;
	int SF_MutingSeq_R_TRIGatMS_21_M = 0;
	int SF_MutingSeq_R_TRIGatMS_22_CLK = 0;
	int SF_MutingSeq_R_TRIGatMS_22_Q = 0;
	int SF_MutingSeq_R_TRIGatMS_22_M = 0;
	int SF_MutingSeq_F_TRIGatMS_11_CLK = 0;
	int SF_MutingSeq_F_TRIGatMS_11_Q = 0;
	int SF_MutingSeq_F_TRIGatMS_11_M = 0;
	int SF_MutingSeq_F_TRIGatMS_12_CLK = 0;
	int SF_MutingSeq_F_TRIGatMS_12_Q = 0;
	int SF_MutingSeq_F_TRIGatMS_12_M = 0;
	int SF_MutingSeq_F_TRIGatMS_21_CLK = 0;
	int SF_MutingSeq_F_TRIGatMS_21_Q = 0;
	int SF_MutingSeq_F_TRIGatMS_21_M = 0;
	int SF_MutingSeq_F_TRIGatMS_22_CLK = 0;
	int SF_MutingSeq_F_TRIGatMS_22_Q = 0;
	int SF_MutingSeq_F_TRIGatMS_22_M = 0;
	int SF_MutingSeq_MutingTimer_IN = 0;
	int SF_MutingSeq_MutingTimer_PT = 0;
	int SF_MutingSeq_MutingTimer_Q = 0;
	int SF_MutingSeq_MutingTimer___TEMP0 = 0;
	int SF_MutingSeq___TEMP0 = 0;
	int SF_MutingSeq___TEMP1 = 0;
	int SF_MutingSeq___TEMP2 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc208;

	loc32:
	SF_MutingSeq___TEMP2 = 0;
	goto loc33;

	loc33:
	SF_MutingSeq___TEMP1 = 0;
	goto loc34;

	loc34:
	SF_MutingSeq___TEMP0 = 0;
	goto loc35;

	loc35:
	goto loc322;

	loc36:
	goto loc212;

	loc37:
	goto loc265;

	loc38:
	goto loc218;

	loc39:
	goto loc328;

	loc40:
	goto loc224;

	loc41:
	goto loc259;

	loc42:
	goto loc230;

	loc43:
	goto loc236;

	loc44:
	if ((!(SF_MutingSeq_Activate))){
		goto loc45;
	}else{
		goto loc47;
	}

	loc45:
	SF_MutingSeq_DiagCode = 0;
	goto loc46;

	loc46:
	goto loc179;

	loc47:
	SF_MutingSeq___TEMP0 = SF_MutingSeq_DiagCode;
	goto loc48;

	loc48:
	if ((SF_MutingSeq___TEMP0 == 0)){
		goto loc49;
	}else{
		goto loc52;
	}

	loc49:
	if (SF_MutingSeq_Activate){
		goto loc50;
	}else{
		goto loc51;
	}

	loc50:
	SF_MutingSeq_DiagCode = 32769;
	goto loc51;

	loc51:
	goto loc179;

	loc52:
	if ((SF_MutingSeq___TEMP0 == 32768)){
		goto loc53;
	}else{
		goto loc70;
	}

	loc53:
	if ((((((!(SF_MutingSeq_MutingEnable)) && SF_MutingSeq_R_TRIGatMS_11_Q) || ((!(SF_MutingSeq_MutingEnable)) && SF_MutingSeq_R_TRIGatMS_22_Q)) || (SF_MutingSeq_MutingSwitch12 || SF_MutingSeq_MutingSwitch21)) || (SF_MutingSeq_MutingSwitch11 && SF_MutingSeq_MutingSwitch22))){
		goto loc54;
	}else{
		goto loc56;
	}

	loc54:
	SF_MutingSeq_DiagCode = 49156;
	goto loc55;

	loc55:
	goto loc69;

	loc56:
	if ((!(SF_MutingSeq_S_AOPD_In))){
		goto loc57;
	}else{
		goto loc59;
	}

	loc57:
	SF_MutingSeq_DiagCode = 32770;
	goto loc58;

	loc58:
	goto loc69;

	loc59:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc60;
	}else{
		goto loc62;
	}

	loc60:
	SF_MutingSeq_DiagCode = 49155;
	goto loc61;

	loc61:
	goto loc69;

	loc62:
	if ((SF_MutingSeq_MutingEnable && (((SF_MutingSeq_R_TRIGatMS_11_Q && (!(SF_MutingSeq_MutingSwitch12))) && (!(SF_MutingSeq_MutingSwitch21))) && (!(SF_MutingSeq_MutingSwitch22))))){
		goto loc63;
	}else{
		goto loc66;
	}

	loc63:
	SF_MutingSeq_DiagCode = 32785;
	goto loc64;

	loc64:
	goto loc252;

	loc65:
	goto loc69;

	loc66:
	if ((SF_MutingSeq_MutingEnable && ((((!(SF_MutingSeq_MutingSwitch11)) && (!(SF_MutingSeq_MutingSwitch12))) && (!(SF_MutingSeq_MutingSwitch21))) && SF_MutingSeq_R_TRIGatMS_22_Q))){
		goto loc67;
	}else{
		goto loc69;
	}

	loc67:
	SF_MutingSeq_DiagCode = 33058;
	goto loc68;

	loc68:
	goto loc315;

	loc69:
	goto loc179;

	loc70:
	if ((SF_MutingSeq___TEMP0 == 32769)){
		goto loc71;
	}else{
		goto loc77;
	}

	loc71:
	if (((SF_MutingSeq_Reset && (!(SF_MutingSeq_R_TRIGatReset_Q))) && (!(SF_MutingSeq_S_StartReset)))){
		goto loc72;
	}else{
		goto loc74;
	}

	loc72:
	SF_MutingSeq_DiagCode = 49153;
	goto loc73;

	loc73:
	goto loc76;

	loc74:
	if ((SF_MutingSeq_R_TRIGatReset_Q || SF_MutingSeq_S_StartReset)){
		goto loc75;
	}else{
		goto loc76;
	}

	loc75:
	SF_MutingSeq_DiagCode = 32773;
	goto loc76;

	loc76:
	goto loc179;

	loc77:
	if ((SF_MutingSeq___TEMP0 == 32770)){
		goto loc78;
	}else{
		goto loc81;
	}

	loc78:
	if (SF_MutingSeq_S_AOPD_In){
		goto loc79;
	}else{
		goto loc80;
	}

	loc79:
	SF_MutingSeq_DiagCode = 32771;
	goto loc80;

	loc80:
	goto loc179;

	loc81:
	if ((SF_MutingSeq___TEMP0 == 32771)){
		goto loc82;
	}else{
		goto loc88;
	}

	loc82:
	if ((SF_MutingSeq_Reset && (!(SF_MutingSeq_R_TRIGatReset_Q)))){
		goto loc83;
	}else{
		goto loc85;
	}

	loc83:
	SF_MutingSeq_DiagCode = 49154;
	goto loc84;

	loc84:
	goto loc87;

	loc85:
	if (SF_MutingSeq_R_TRIGatReset_Q){
		goto loc86;
	}else{
		goto loc87;
	}

	loc86:
	SF_MutingSeq_DiagCode = 32773;
	goto loc87;

	loc87:
	goto loc179;

	loc88:
	if ((SF_MutingSeq___TEMP0 == 32773)){
		goto loc89;
	}else{
		goto loc98;
	}

	loc89:
	if ((!(SF_MutingSeq_S_AOPD_In))){
		goto loc90;
	}else{
		goto loc92;
	}

	loc90:
	SF_MutingSeq_DiagCode = 32770;
	goto loc91;

	loc91:
	goto loc97;

	loc92:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc93;
	}else{
		goto loc95;
	}

	loc93:
	SF_MutingSeq_DiagCode = 49155;
	goto loc94;

	loc94:
	goto loc97;

	loc95:
	if (SF_MutingSeq_S_AOPD_In){
		goto loc96;
	}else{
		goto loc97;
	}

	loc96:
	SF_MutingSeq_DiagCode = 32768;
	goto loc97;

	loc97:
	goto loc179;

	loc98:
	if ((SF_MutingSeq___TEMP0 == 49153)){
		goto loc99;
	}else{
		goto loc102;
	}

	loc99:
	if ((!(SF_MutingSeq_Reset))){
		goto loc100;
	}else{
		goto loc101;
	}

	loc100:
	SF_MutingSeq_DiagCode = 32769;
	goto loc101;

	loc101:
	goto loc179;

	loc102:
	if ((SF_MutingSeq___TEMP0 == 49154)){
		goto loc103;
	}else{
		goto loc106;
	}

	loc103:
	if ((!(SF_MutingSeq_Reset))){
		goto loc104;
	}else{
		goto loc105;
	}

	loc104:
	SF_MutingSeq_DiagCode = 32771;
	goto loc105;

	loc105:
	goto loc179;

	loc106:
	if ((SF_MutingSeq___TEMP0 == 49155)){
		goto loc107;
	}else{
		goto loc110;
	}

	loc107:
	if (SF_MutingSeq_S_MutingLamp){
		goto loc108;
	}else{
		goto loc109;
	}

	loc108:
	SF_MutingSeq_DiagCode = 32771;
	goto loc109;

	loc109:
	goto loc179;

	loc110:
	if (((SF_MutingSeq___TEMP0 == 49158) || ((SF_MutingSeq___TEMP0 == 49159) || (SF_MutingSeq___TEMP0 == 49160)))){
		goto loc111;
	}else{
		goto loc114;
	}

	loc111:
	if ((!((((SF_MutingSeq_MutingSwitch11 || SF_MutingSeq_MutingSwitch12) || SF_MutingSeq_MutingSwitch21) || SF_MutingSeq_MutingSwitch22)))){
		goto loc112;
	}else{
		goto loc113;
	}

	loc112:
	SF_MutingSeq_DiagCode = 32771;
	goto loc113;

	loc113:
	goto loc179;

	loc114:
	if ((SF_MutingSeq_DiagCode >= 49152)){
		goto loc115;
	}else{
		goto loc118;
	}

	loc115:
	if ((!((((SF_MutingSeq_MutingSwitch11 || SF_MutingSeq_MutingSwitch12) || SF_MutingSeq_MutingSwitch21) || SF_MutingSeq_MutingSwitch22)))){
		goto loc116;
	}else{
		goto loc117;
	}

	loc116:
	SF_MutingSeq_DiagCode = 32771;
	goto loc117;

	loc117:
	goto loc179;

	loc118:
	SF_MutingSeq___TEMP1 = SF_MutingSeq_DiagCode;
	goto loc119;

	loc119:
	if ((SF_MutingSeq___TEMP1 == 32785)){
		goto loc120;
	}else{
		goto loc135;
	}

	loc120:
	if (((((!(SF_MutingSeq_MutingEnable)) || (!(SF_MutingSeq_MutingSwitch11))) || SF_MutingSeq_MutingSwitch21) || SF_MutingSeq_MutingSwitch22)){
		goto loc121;
	}else{
		goto loc123;
	}

	loc121:
	SF_MutingSeq_DiagCode = 49412;
	goto loc122;

	loc122:
	goto loc134;

	loc123:
	if (SF_MutingSeq_MutingTimer_Q){
		goto loc124;
	}else{
		goto loc126;
	}

	loc124:
	SF_MutingSeq_DiagCode = 49158;
	goto loc125;

	loc125:
	goto loc134;

	loc126:
	if ((!(SF_MutingSeq_S_AOPD_In))){
		goto loc127;
	}else{
		goto loc129;
	}

	loc127:
	SF_MutingSeq_DiagCode = 32770;
	goto loc128;

	loc128:
	goto loc134;

	loc129:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc130;
	}else{
		goto loc132;
	}

	loc130:
	SF_MutingSeq_DiagCode = 49155;
	goto loc131;

	loc131:
	goto loc134;

	loc132:
	if ((SF_MutingSeq_MutingEnable && (((SF_MutingSeq_MutingSwitch11 && SF_MutingSeq_R_TRIGatMS_12_Q) && (!(SF_MutingSeq_MutingSwitch21))) && (!(SF_MutingSeq_MutingSwitch22))))){
		goto loc133;
	}else{
		goto loc134;
	}

	loc133:
	SF_MutingSeq_DiagCode = 32786;
	goto loc134;

	loc134:
	goto loc179;

	loc135:
	if ((SF_MutingSeq___TEMP1 == 32786)){
		goto loc136;
	}else{
		goto loc149;
	}

	loc136:
	if (((SF_MutingSeq_R_TRIGatMS_11_Q || SF_MutingSeq_R_TRIGatMS_12_Q) || SF_MutingSeq_F_TRIGatMS_22_Q)){
		goto loc137;
	}else{
		goto loc139;
	}

	loc137:
	SF_MutingSeq_DiagCode = 49412;
	goto loc138;

	loc138:
	goto loc148;

	loc139:
	if (SF_MutingSeq_MutingTimer_Q){
		goto loc140;
	}else{
		goto loc142;
	}

	loc140:
	SF_MutingSeq_DiagCode = 49158;
	goto loc141;

	loc141:
	goto loc148;

	loc142:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc143;
	}else{
		goto loc145;
	}

	loc143:
	SF_MutingSeq_DiagCode = 49155;
	goto loc144;

	loc144:
	goto loc148;

	loc145:
	if (((((!(SF_MutingSeq_MutingSwitch11)) && (!(SF_MutingSeq_MutingSwitch12))) && SF_MutingSeq_F_TRIGatMS_21_Q) && SF_MutingSeq_MutingSwitch22)){
		goto loc146;
	}else{
		goto loc148;
	}

	loc146:
	goto loc298;

	loc147:
	SF_MutingSeq_DiagCode = 32768;
	goto loc148;

	loc148:
	goto loc179;

	loc149:
	if ((SF_MutingSeq___TEMP1 == 33058)){
		goto loc150;
	}else{
		goto loc165;
	}

	loc150:
	if (((((!(SF_MutingSeq_MutingEnable)) || SF_MutingSeq_MutingSwitch11) || SF_MutingSeq_MutingSwitch12) || (!(SF_MutingSeq_MutingSwitch22)))){
		goto loc151;
	}else{
		goto loc153;
	}

	loc151:
	SF_MutingSeq_DiagCode = 49412;
	goto loc152;

	loc152:
	goto loc164;

	loc153:
	if (SF_MutingSeq_MutingTimer_Q){
		goto loc154;
	}else{
		goto loc156;
	}

	loc154:
	SF_MutingSeq_DiagCode = 49158;
	goto loc155;

	loc155:
	goto loc164;

	loc156:
	if ((!(SF_MutingSeq_S_AOPD_In))){
		goto loc157;
	}else{
		goto loc159;
	}

	loc157:
	SF_MutingSeq_DiagCode = 32770;
	goto loc158;

	loc158:
	goto loc164;

	loc159:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc160;
	}else{
		goto loc162;
	}

	loc160:
	SF_MutingSeq_DiagCode = 49155;
	goto loc161;

	loc161:
	goto loc164;

	loc162:
	if ((SF_MutingSeq_MutingEnable && ((((!(SF_MutingSeq_MutingSwitch11)) && (!(SF_MutingSeq_MutingSwitch12))) && SF_MutingSeq_R_TRIGatMS_21_Q) && SF_MutingSeq_MutingSwitch22))){
		goto loc163;
	}else{
		goto loc164;
	}

	loc163:
	SF_MutingSeq_DiagCode = 33042;
	goto loc164;

	loc164:
	goto loc179;

	loc165:
	if ((SF_MutingSeq___TEMP1 == 33042)){
		goto loc166;
	}else{
		goto loc179;
	}

	loc166:
	if (((SF_MutingSeq_F_TRIGatMS_11_Q || SF_MutingSeq_R_TRIGatMS_21_Q) || SF_MutingSeq_R_TRIGatMS_22_Q)){
		goto loc167;
	}else{
		goto loc169;
	}

	loc167:
	SF_MutingSeq_DiagCode = 49412;
	goto loc168;

	loc168:
	goto loc178;

	loc169:
	if (SF_MutingSeq_MutingTimer_Q){
		goto loc170;
	}else{
		goto loc172;
	}

	loc170:
	SF_MutingSeq_DiagCode = 49158;
	goto loc171;

	loc171:
	goto loc178;

	loc172:
	if ((!(SF_MutingSeq_S_MutingLamp))){
		goto loc173;
	}else{
		goto loc175;
	}

	loc173:
	SF_MutingSeq_DiagCode = 49155;
	goto loc174;

	loc174:
	goto loc178;

	loc175:
	if ((((SF_MutingSeq_MutingSwitch11 && SF_MutingSeq_F_TRIGatMS_12_Q) && (!(SF_MutingSeq_MutingSwitch21))) && (!(SF_MutingSeq_MutingSwitch22)))){
		goto loc176;
	}else{
		goto loc178;
	}

	loc176:
	SF_MutingSeq_DiagCode = 32768;
	goto loc177;

	loc177:
	goto loc281;

	loc178:
	goto loc179;

	loc179:
	SF_MutingSeq___TEMP2 = SF_MutingSeq_DiagCode;
	goto loc180;

	loc180:
	if ((SF_MutingSeq___TEMP2 == 0)){
		goto loc181;
	}else{
		goto loc186;
	}

	loc181:
	SF_MutingSeq_Ready = 0;
	goto loc182;

	loc182:
	SF_MutingSeq_S_AOPD_Out = 0;
	goto loc183;

	loc183:
	SF_MutingSeq_S_MutingActive = 0;
	goto loc184;

	loc184:
	SF_MutingSeq_Error = 0;
	goto loc185;

	loc185:
	goto loc208;

	loc186:
	if (((SF_MutingSeq___TEMP2 == 32768) || ((SF_MutingSeq___TEMP2 == 32785) || (SF_MutingSeq___TEMP2 == 33058)))){
		goto loc187;
	}else{
		goto loc192;
	}

	loc187:
	SF_MutingSeq_Ready = 1;
	goto loc188;

	loc188:
	SF_MutingSeq_S_AOPD_Out = 1;
	goto loc189;

	loc189:
	SF_MutingSeq_S_MutingActive = 0;
	goto loc190;

	loc190:
	SF_MutingSeq_Error = 0;
	goto loc191;

	loc191:
	goto loc208;

	loc192:
	if (((SF_MutingSeq___TEMP2 == 32769) || ((SF_MutingSeq___TEMP2 == 32770) || ((SF_MutingSeq___TEMP2 == 32771) || (SF_MutingSeq___TEMP2 == 32773))))){
		goto loc193;
	}else{
		goto loc198;
	}

	loc193:
	SF_MutingSeq_Ready = 1;
	goto loc194;

	loc194:
	SF_MutingSeq_S_AOPD_Out = 0;
	goto loc195;

	loc195:
	SF_MutingSeq_S_MutingActive = 0;
	goto loc196;

	loc196:
	SF_MutingSeq_Error = 0;
	goto loc197;

	loc197:
	goto loc208;

	loc198:
	if (((SF_MutingSeq___TEMP2 == 32786) || (SF_MutingSeq___TEMP2 == 33042))){
		goto loc199;
	}else{
		goto loc204;
	}

	loc199:
	SF_MutingSeq_Ready = 1;
	goto loc200;

	loc200:
	SF_MutingSeq_S_AOPD_Out = 1;
	goto loc201;

	loc201:
	SF_MutingSeq_S_MutingActive = 1;
	goto loc202;

	loc202:
	SF_MutingSeq_Error = 0;
	goto loc203;

	loc203:
	goto loc208;

	loc204:
	SF_MutingSeq_Ready = 1;
	goto loc205;

	loc205:
	SF_MutingSeq_S_AOPD_Out = 0;
	goto loc206;

	loc206:
	SF_MutingSeq_S_MutingActive = 0;
	goto loc207;

	loc207:
	SF_MutingSeq_Error = 1;
	goto loc208;

	loc208:
	__VERIFIER_assert((!(((SF_MutingSeq_DiagCode == 49155) && (!((SF_MutingSeq_S_MutingLamp == (0 != 0))))))));

	SF_MutingSeq_Activate = __VERIFIER_nondet_bool();
	SF_MutingSeq_S_AOPD_In = __VERIFIER_nondet_bool();
	SF_MutingSeq_MutingSwitch11 = __VERIFIER_nondet_bool();
	SF_MutingSeq_MutingSwitch12 = __VERIFIER_nondet_bool();
	SF_MutingSeq_MutingSwitch21 = __VERIFIER_nondet_bool();
	SF_MutingSeq_MutingSwitch22 = __VERIFIER_nondet_bool();
	SF_MutingSeq_S_MutingLamp = __VERIFIER_nondet_bool();
	SF_MutingSeq_DiscTime11_12 = __VERIFIER_nondet_int();
	SF_MutingSeq_DiscTime21_22 = __VERIFIER_nondet_int();
	SF_MutingSeq_MaxMutingTime = __VERIFIER_nondet_int();
	SF_MutingSeq_MutingEnable = __VERIFIER_nondet_bool();
	SF_MutingSeq_S_StartReset = __VERIFIER_nondet_bool();
	SF_MutingSeq_Reset = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>35){return 0;}
	goto loc32;

	loc209:
	SF_MutingSeq_R_TRIGatMS_11_Q = (SF_MutingSeq_R_TRIGatMS_11_CLK && (!(SF_MutingSeq_R_TRIGatMS_11_M)));
	goto loc210;

	loc210:
	SF_MutingSeq_R_TRIGatMS_11_M = SF_MutingSeq_R_TRIGatMS_11_CLK;
	goto loc211;

	loc211:
	goto loc214;

	loc212:
	SF_MutingSeq_R_TRIGatMS_11_CLK = SF_MutingSeq_MutingSwitch11;
	goto loc213;

	loc213:
	goto loc209;

	loc214:
	goto loc37;

	loc215:
	SF_MutingSeq_R_TRIGatMS_21_Q = (SF_MutingSeq_R_TRIGatMS_21_CLK && (!(SF_MutingSeq_R_TRIGatMS_21_M)));
	goto loc216;

	loc216:
	SF_MutingSeq_R_TRIGatMS_21_M = SF_MutingSeq_R_TRIGatMS_21_CLK;
	goto loc217;

	loc217:
	goto loc220;

	loc218:
	SF_MutingSeq_R_TRIGatMS_21_CLK = SF_MutingSeq_MutingSwitch21;
	goto loc219;

	loc219:
	goto loc215;

	loc220:
	goto loc39;

	loc221:
	SF_MutingSeq_F_TRIGatMS_11_M = SF_MutingSeq_F_TRIGatMS_11_CLK;
	goto loc222;

	loc222:
	goto loc226;

	loc223:
	SF_MutingSeq_F_TRIGatMS_11_Q = ((!(SF_MutingSeq_F_TRIGatMS_11_CLK)) && SF_MutingSeq_F_TRIGatMS_11_M);
	goto loc221;

	loc224:
	SF_MutingSeq_F_TRIGatMS_11_CLK = SF_MutingSeq_MutingSwitch11;
	goto loc225;

	loc225:
	goto loc223;

	loc226:
	goto loc41;

	loc227:
	SF_MutingSeq_F_TRIGatMS_21_Q = ((!(SF_MutingSeq_F_TRIGatMS_21_CLK)) && SF_MutingSeq_F_TRIGatMS_21_M);
	goto loc228;

	loc228:
	SF_MutingSeq_F_TRIGatMS_21_M = SF_MutingSeq_F_TRIGatMS_21_CLK;
	goto loc229;

	loc229:
	goto loc232;

	loc230:
	SF_MutingSeq_F_TRIGatMS_21_CLK = SF_MutingSeq_MutingSwitch21;
	goto loc231;

	loc231:
	goto loc227;

	loc232:
	goto loc43;

	loc233:
	SF_MutingSeq_F_TRIGatMS_22_Q = ((!(SF_MutingSeq_F_TRIGatMS_22_CLK)) && SF_MutingSeq_F_TRIGatMS_22_M);
	goto loc234;

	loc234:
	SF_MutingSeq_F_TRIGatMS_22_M = SF_MutingSeq_F_TRIGatMS_22_CLK;
	goto loc235;

	loc235:
	goto loc238;

	loc236:
	SF_MutingSeq_F_TRIGatMS_22_CLK = SF_MutingSeq_MutingSwitch22;
	goto loc237;

	loc237:
	goto loc233;

	loc238:
	goto loc44;

	loc239:
	SF_MutingSeq_MutingTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc240;

	loc240:
	SF_MutingSeq_MutingTimer_Q = SF_MutingSeq_MutingTimer___TEMP0;
	goto loc241;

	loc241:
	goto loc255;

	loc242:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc243;

	loc243:
	goto loc245;

	loc244:
	goto loc242;

	loc245:
	goto loc239;

	loc246:
	SF_MutingSeq_MutingTimer___TEMP0 = 0;
	goto loc247;

	loc247:
	if ((!(SF_MutingSeq_MutingTimer_IN))){
		goto loc248;
	}else{
		goto loc250;
	}

	loc248:
	SF_MutingSeq_MutingTimer_Q = 0;
	goto loc249;

	loc249:
	goto loc241;

	loc250:
	if ((!(SF_MutingSeq_MutingTimer_Q))){
		goto loc251;
	}else{
		goto loc241;
	}

	loc251:
	goto loc244;

	loc252:
	SF_MutingSeq_MutingTimer_IN = 1;
	goto loc253;

	loc253:
	SF_MutingSeq_MutingTimer_PT = SF_MutingSeq_MaxMutingTime;
	goto loc254;

	loc254:
	goto loc246;

	loc255:
	goto loc65;

	loc256:
	SF_MutingSeq_F_TRIGatMS_12_Q = ((!(SF_MutingSeq_F_TRIGatMS_12_CLK)) && SF_MutingSeq_F_TRIGatMS_12_M);
	goto loc257;

	loc257:
	SF_MutingSeq_F_TRIGatMS_12_M = SF_MutingSeq_F_TRIGatMS_12_CLK;
	goto loc258;

	loc258:
	goto loc261;

	loc259:
	SF_MutingSeq_F_TRIGatMS_12_CLK = SF_MutingSeq_MutingSwitch12;
	goto loc260;

	loc260:
	goto loc256;

	loc261:
	goto loc42;

	loc262:
	SF_MutingSeq_R_TRIGatMS_12_Q = (SF_MutingSeq_R_TRIGatMS_12_CLK && (!(SF_MutingSeq_R_TRIGatMS_12_M)));
	goto loc263;

	loc263:
	SF_MutingSeq_R_TRIGatMS_12_M = SF_MutingSeq_R_TRIGatMS_12_CLK;
	goto loc264;

	loc264:
	goto loc267;

	loc265:
	SF_MutingSeq_R_TRIGatMS_12_CLK = SF_MutingSeq_MutingSwitch12;
	goto loc266;

	loc266:
	goto loc262;

	loc267:
	goto loc38;

	loc268:
	SF_MutingSeq_MutingTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc269;

	loc269:
	SF_MutingSeq_MutingTimer_Q = SF_MutingSeq_MutingTimer___TEMP0;
	goto loc270;

	loc270:
	goto loc284;

	loc271:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc272;

	loc272:
	goto loc274;

	loc273:
	goto loc271;

	loc274:
	goto loc268;

	loc275:
	SF_MutingSeq_MutingTimer___TEMP0 = 0;
	goto loc276;

	loc276:
	if ((!(SF_MutingSeq_MutingTimer_IN))){
		goto loc277;
	}else{
		goto loc279;
	}

	loc277:
	SF_MutingSeq_MutingTimer_Q = 0;
	goto loc278;

	loc278:
	goto loc270;

	loc279:
	if ((!(SF_MutingSeq_MutingTimer_Q))){
		goto loc280;
	}else{
		goto loc270;
	}

	loc280:
	goto loc273;

	loc281:
	SF_MutingSeq_MutingTimer_IN = 0;
	goto loc282;

	loc282:
	SF_MutingSeq_MutingTimer_PT = SF_MutingSeq_MaxMutingTime;
	goto loc283;

	loc283:
	goto loc275;

	loc284:
	goto loc178;

	loc285:
	SF_MutingSeq_MutingTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc286;

	loc286:
	SF_MutingSeq_MutingTimer_Q = SF_MutingSeq_MutingTimer___TEMP0;
	goto loc287;

	loc287:
	goto loc301;

	loc288:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc289;

	loc289:
	goto loc291;

	loc290:
	goto loc288;

	loc291:
	goto loc285;

	loc292:
	SF_MutingSeq_MutingTimer___TEMP0 = 0;
	goto loc293;

	loc293:
	if ((!(SF_MutingSeq_MutingTimer_IN))){
		goto loc294;
	}else{
		goto loc296;
	}

	loc294:
	SF_MutingSeq_MutingTimer_Q = 0;
	goto loc295;

	loc295:
	goto loc287;

	loc296:
	if ((!(SF_MutingSeq_MutingTimer_Q))){
		goto loc297;
	}else{
		goto loc287;
	}

	loc297:
	goto loc290;

	loc298:
	SF_MutingSeq_MutingTimer_IN = 0;
	goto loc299;

	loc299:
	SF_MutingSeq_MutingTimer_PT = SF_MutingSeq_MaxMutingTime;
	goto loc300;

	loc300:
	goto loc292;

	loc301:
	goto loc147;

	loc302:
	SF_MutingSeq_MutingTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc303;

	loc303:
	SF_MutingSeq_MutingTimer_Q = SF_MutingSeq_MutingTimer___TEMP0;
	goto loc304;

	loc304:
	goto loc318;

	loc305:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc306;

	loc306:
	goto loc308;

	loc307:
	goto loc305;

	loc308:
	goto loc302;

	loc309:
	SF_MutingSeq_MutingTimer___TEMP0 = 0;
	goto loc310;

	loc310:
	if ((!(SF_MutingSeq_MutingTimer_IN))){
		goto loc311;
	}else{
		goto loc313;
	}

	loc311:
	SF_MutingSeq_MutingTimer_Q = 0;
	goto loc312;

	loc312:
	goto loc304;

	loc313:
	if ((!(SF_MutingSeq_MutingTimer_Q))){
		goto loc314;
	}else{
		goto loc304;
	}

	loc314:
	goto loc307;

	loc315:
	SF_MutingSeq_MutingTimer_IN = 1;
	goto loc316;

	loc316:
	SF_MutingSeq_MutingTimer_PT = SF_MutingSeq_MaxMutingTime;
	goto loc317;

	loc317:
	goto loc309;

	loc318:
	goto loc69;

	loc319:
	SF_MutingSeq_R_TRIGatReset_Q = (SF_MutingSeq_R_TRIGatReset_CLK && (!(SF_MutingSeq_R_TRIGatReset_M)));
	goto loc320;

	loc320:
	SF_MutingSeq_R_TRIGatReset_M = SF_MutingSeq_R_TRIGatReset_CLK;
	goto loc321;

	loc321:
	goto loc324;

	loc322:
	SF_MutingSeq_R_TRIGatReset_CLK = SF_MutingSeq_Reset;
	goto loc323;

	loc323:
	goto loc319;

	loc324:
	goto loc36;

	loc325:
	SF_MutingSeq_R_TRIGatMS_22_Q = (SF_MutingSeq_R_TRIGatMS_22_CLK && (!(SF_MutingSeq_R_TRIGatMS_22_M)));
	goto loc326;

	loc326:
	SF_MutingSeq_R_TRIGatMS_22_M = SF_MutingSeq_R_TRIGatMS_22_CLK;
	goto loc327;

	loc327:
	goto loc330;

	loc328:
	SF_MutingSeq_R_TRIGatMS_22_CLK = SF_MutingSeq_MutingSwitch22;
	goto loc329;

	loc329:
	goto loc325;

	loc330:
	goto loc40;


}
