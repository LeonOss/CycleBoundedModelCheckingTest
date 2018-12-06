// FORMULA: AG (Error => !S_AntivalentOut)
// BOUND: 27

extern int __VERIFIER_nondet_int();
extern int __VERIFIER_nondet_bool();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SF_Antivalent_Activate = 0;
	int SF_Antivalent_S_ChannelNC = 0;
	int SF_Antivalent_S_ChannelNO = 0;
	int SF_Antivalent_DiscrepancyTime = 0;
	int SF_Antivalent_Ready = 0;
	int SF_Antivalent_S_AntivalentOut = 0;
	int SF_Antivalent_Error = 0;
	int SF_Antivalent_DiagCode = 0;
	int SF_Antivalent_T_1_IN = 0;
	int SF_Antivalent_T_1_PT = 0;
	int SF_Antivalent_T_1_Q = 0;
	int SF_Antivalent_T_1___TEMP0 = 0;
	int SF_Antivalent___TEMP0 = 0;
	int SF_Antivalent___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc101;

	loc6:
	SF_Antivalent___TEMP1 = 0;
	goto loc7;

	loc7:
	SF_Antivalent___TEMP0 = 0;
	goto loc8;

	loc8:
	if ((!(SF_Antivalent_Activate))){
		goto loc9;
	}else{
		goto loc11;
	}

	loc9:
	SF_Antivalent_DiagCode = 0;
	goto loc10;

	loc10:
	goto loc71;

	loc11:
	SF_Antivalent___TEMP0 = SF_Antivalent_DiagCode;
	goto loc12;

	loc12:
	if ((SF_Antivalent___TEMP0 == 0)){
		goto loc13;
	}else{
		goto loc16;
	}

	loc13:
	if (SF_Antivalent_Activate){
		goto loc14;
	}else{
		goto loc15;
	}

	loc14:
	SF_Antivalent_DiagCode = 32769;
	goto loc15;

	loc15:
	goto loc71;

	loc16:
	if ((SF_Antivalent___TEMP0 == 32769)){
		goto loc17;
	}else{
		goto loc28;
	}

	loc17:
	if ((SF_Antivalent_S_ChannelNC && SF_Antivalent_S_ChannelNO)){
		goto loc18;
	}else{
		goto loc21;
	}

	loc18:
	SF_Antivalent_DiagCode = 32772;
	goto loc19;

	loc19:
	goto loc217;

	loc20:
	goto loc27;

	loc21:
	if (((!(SF_Antivalent_S_ChannelNC)) && (!(SF_Antivalent_S_ChannelNO)))){
		goto loc22;
	}else{
		goto loc25;
	}

	loc22:
	SF_Antivalent_DiagCode = 32788;
	goto loc23;

	loc23:
	goto loc132;

	loc24:
	goto loc27;

	loc25:
	if ((SF_Antivalent_S_ChannelNC && (!(SF_Antivalent_S_ChannelNO)))){
		goto loc26;
	}else{
		goto loc27;
	}

	loc26:
	SF_Antivalent_DiagCode = 32768;
	goto loc27;

	loc27:
	goto loc71;

	loc28:
	if ((SF_Antivalent___TEMP0 == 32772)){
		goto loc29;
	}else{
		goto loc38;
	}

	loc29:
	if (SF_Antivalent_T_1_Q){
		goto loc30;
	}else{
		goto loc32;
	}

	loc30:
	SF_Antivalent_DiagCode = 49153;
	goto loc31;

	loc31:
	goto loc37;

	loc32:
	if ((!(SF_Antivalent_S_ChannelNC))){
		goto loc33;
	}else{
		goto loc35;
	}

	loc33:
	SF_Antivalent_DiagCode = 32769;
	goto loc34;

	loc34:
	goto loc37;

	loc35:
	if ((!(SF_Antivalent_S_ChannelNO))){
		goto loc36;
	}else{
		goto loc37;
	}

	loc36:
	SF_Antivalent_DiagCode = 32768;
	goto loc37;

	loc37:
	goto loc71;

	loc38:
	if (((SF_Antivalent___TEMP0 == 49153) || (SF_Antivalent___TEMP0 == 49154))){
		goto loc39;
	}else{
		goto loc42;
	}

	loc39:
	if (((!(SF_Antivalent_S_ChannelNC)) && SF_Antivalent_S_ChannelNO)){
		goto loc40;
	}else{
		goto loc41;
	}

	loc40:
	SF_Antivalent_DiagCode = 32769;
	goto loc41;

	loc41:
	goto loc71;

	loc42:
	if ((SF_Antivalent___TEMP0 == 32788)){
		goto loc43;
	}else{
		goto loc52;
	}

	loc43:
	if (SF_Antivalent_T_1_Q){
		goto loc44;
	}else{
		goto loc46;
	}

	loc44:
	SF_Antivalent_DiagCode = 49154;
	goto loc45;

	loc45:
	goto loc51;

	loc46:
	if (SF_Antivalent_S_ChannelNO){
		goto loc47;
	}else{
		goto loc49;
	}

	loc47:
	SF_Antivalent_DiagCode = 32769;
	goto loc48;

	loc48:
	goto loc51;

	loc49:
	if (SF_Antivalent_S_ChannelNC){
		goto loc50;
	}else{
		goto loc51;
	}

	loc50:
	SF_Antivalent_DiagCode = 32768;
	goto loc51;

	loc51:
	goto loc71;

	loc52:
	if ((SF_Antivalent___TEMP0 == 49155)){
		goto loc53;
	}else{
		goto loc56;
	}

	loc53:
	if (((!(SF_Antivalent_S_ChannelNC)) && SF_Antivalent_S_ChannelNO)){
		goto loc54;
	}else{
		goto loc55;
	}

	loc54:
	SF_Antivalent_DiagCode = 32769;
	goto loc55;

	loc55:
	goto loc71;

	loc56:
	if ((SF_Antivalent___TEMP0 == 32773)){
		goto loc57;
	}else{
		goto loc63;
	}

	loc57:
	if (SF_Antivalent_T_1_Q){
		goto loc58;
	}else{
		goto loc60;
	}

	loc58:
	SF_Antivalent_DiagCode = 49155;
	goto loc59;

	loc59:
	goto loc62;

	loc60:
	if (((!(SF_Antivalent_S_ChannelNC)) && SF_Antivalent_S_ChannelNO)){
		goto loc61;
	}else{
		goto loc62;
	}

	loc61:
	SF_Antivalent_DiagCode = 32769;
	goto loc62;

	loc62:
	goto loc71;

	loc63:
	if ((SF_Antivalent___TEMP0 == 32768)){
		goto loc64;
	}else{
		goto loc71;
	}

	loc64:
	if (((!(SF_Antivalent_S_ChannelNC)) || SF_Antivalent_S_ChannelNO)){
		goto loc65;
	}else{
		goto loc68;
	}

	loc65:
	SF_Antivalent_DiagCode = 32773;
	goto loc66;

	loc66:
	goto loc115;

	loc67:
	goto loc70;

	loc68:
	if (((!(SF_Antivalent_S_ChannelNC)) && SF_Antivalent_S_ChannelNO)){
		goto loc69;
	}else{
		goto loc70;
	}

	loc69:
	SF_Antivalent_DiagCode = 32769;
	goto loc70;

	loc70:
	goto loc71;

	loc71:
	SF_Antivalent___TEMP1 = SF_Antivalent_DiagCode;
	goto loc72;

	loc72:
	if ((SF_Antivalent___TEMP1 == 0)){
		goto loc73;
	}else{
		goto loc78;
	}

	loc73:
	goto loc166;

	loc74:
	SF_Antivalent_Ready = 0;
	goto loc75;

	loc75:
	SF_Antivalent_Error = 0;
	goto loc76;

	loc76:
	SF_Antivalent_S_AntivalentOut = 0;
	goto loc77;

	loc77:
	goto loc101;

	loc78:
	if ((SF_Antivalent___TEMP1 == 32768)){
		goto loc79;
	}else{
		goto loc84;
	}

	loc79:
	goto loc149;

	loc80:
	SF_Antivalent_Ready = 1;
	goto loc81;

	loc81:
	SF_Antivalent_Error = 0;
	goto loc82;

	loc82:
	SF_Antivalent_S_AntivalentOut = 1;
	goto loc83;

	loc83:
	goto loc101;

	loc84:
	if ((SF_Antivalent___TEMP1 == 32769)){
		goto loc85;
	}else{
		goto loc90;
	}

	loc85:
	goto loc183;

	loc86:
	SF_Antivalent_Ready = 1;
	goto loc87;

	loc87:
	SF_Antivalent_Error = 0;
	goto loc88;

	loc88:
	SF_Antivalent_S_AntivalentOut = 0;
	goto loc89;

	loc89:
	goto loc101;

	loc90:
	if (((SF_Antivalent___TEMP1 == 32772) || ((SF_Antivalent___TEMP1 == 32788) || (SF_Antivalent___TEMP1 == 32773)))){
		goto loc91;
	}else{
		goto loc95;
	}

	loc91:
	SF_Antivalent_Ready = 1;
	goto loc92;

	loc92:
	SF_Antivalent_Error = 0;
	goto loc93;

	loc93:
	SF_Antivalent_S_AntivalentOut = 0;
	goto loc94;

	loc94:
	goto loc101;

	loc95:
	if (((SF_Antivalent___TEMP1 == 49153) || ((SF_Antivalent___TEMP1 == 49154) || (SF_Antivalent___TEMP1 == 49155)))){
		goto loc96;
	}else{
		goto loc101;
	}

	loc96:
	goto loc200;

	loc97:
	SF_Antivalent_Ready = 1;
	goto loc98;

	loc98:
	SF_Antivalent_Error = 1;
	goto loc99;

	loc99:
	SF_Antivalent_S_AntivalentOut = 0;
	goto loc100;

	loc100:
	goto loc101;

	loc101:
	__VERIFIER_assert((!(((!((SF_Antivalent_Error == (0 != 0)))) && (!((SF_Antivalent_S_AntivalentOut == (0 != 0))))))));

	SF_Antivalent_Activate = __VERIFIER_nondet_bool();
	SF_Antivalent_S_ChannelNC = __VERIFIER_nondet_bool();
	SF_Antivalent_S_ChannelNO = __VERIFIER_nondet_bool();
	SF_Antivalent_DiscrepancyTime = __VERIFIER_nondet_int();
	++cycleCount;
	if(cycleCount>27){return 0;}
	goto loc6;

	loc102:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc104;
	}else{
		goto loc106;
	}

	loc103:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc102;

	loc104:
	SF_Antivalent_T_1_Q = 0;
	goto loc105;

	loc105:
	goto loc110;

	loc106:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc107;
	}else{
		goto loc110;
	}

	loc107:
	goto loc113;

	loc108:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc109;

	loc109:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc110;

	loc110:
	goto loc118;

	loc111:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc112;

	loc112:
	goto loc114;

	loc113:
	goto loc111;

	loc114:
	goto loc108;

	loc115:
	SF_Antivalent_T_1_IN = (1 != 0);
	goto loc116;

	loc116:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc117;

	loc117:
	goto loc103;

	loc118:
	goto loc67;

	loc119:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc121;
	}else{
		goto loc123;
	}

	loc120:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc119;

	loc121:
	SF_Antivalent_T_1_Q = 0;
	goto loc122;

	loc122:
	goto loc127;

	loc123:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc124;
	}else{
		goto loc127;
	}

	loc124:
	goto loc130;

	loc125:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc126;

	loc126:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc127;

	loc127:
	goto loc135;

	loc128:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc129;

	loc129:
	goto loc131;

	loc130:
	goto loc128;

	loc131:
	goto loc125;

	loc132:
	SF_Antivalent_T_1_IN = (1 != 0);
	goto loc133;

	loc133:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc134;

	loc134:
	goto loc120;

	loc135:
	goto loc24;

	loc136:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc138;
	}else{
		goto loc140;
	}

	loc137:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc136;

	loc138:
	SF_Antivalent_T_1_Q = 0;
	goto loc139;

	loc139:
	goto loc144;

	loc140:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc141;
	}else{
		goto loc144;
	}

	loc141:
	goto loc147;

	loc142:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc143;

	loc143:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc144;

	loc144:
	goto loc152;

	loc145:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc146;

	loc146:
	goto loc148;

	loc147:
	goto loc145;

	loc148:
	goto loc142;

	loc149:
	SF_Antivalent_T_1_IN = (0 != 0);
	goto loc150;

	loc150:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc151;

	loc151:
	goto loc137;

	loc152:
	goto loc80;

	loc153:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc155;
	}else{
		goto loc157;
	}

	loc154:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc153;

	loc155:
	SF_Antivalent_T_1_Q = 0;
	goto loc156;

	loc156:
	goto loc161;

	loc157:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc158;
	}else{
		goto loc161;
	}

	loc158:
	goto loc164;

	loc159:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc160;

	loc160:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc161;

	loc161:
	goto loc169;

	loc162:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc163;

	loc163:
	goto loc165;

	loc164:
	goto loc162;

	loc165:
	goto loc159;

	loc166:
	SF_Antivalent_T_1_IN = (0 != 0);
	goto loc167;

	loc167:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc168;

	loc168:
	goto loc154;

	loc169:
	goto loc74;

	loc170:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc172;
	}else{
		goto loc174;
	}

	loc171:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc170;

	loc172:
	SF_Antivalent_T_1_Q = 0;
	goto loc173;

	loc173:
	goto loc178;

	loc174:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc175;
	}else{
		goto loc178;
	}

	loc175:
	goto loc181;

	loc176:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc177;

	loc177:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc178;

	loc178:
	goto loc186;

	loc179:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc180;

	loc180:
	goto loc182;

	loc181:
	goto loc179;

	loc182:
	goto loc176;

	loc183:
	SF_Antivalent_T_1_IN = (0 != 0);
	goto loc184;

	loc184:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc185;

	loc185:
	goto loc171;

	loc186:
	goto loc86;

	loc187:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc189;
	}else{
		goto loc191;
	}

	loc188:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc187;

	loc189:
	SF_Antivalent_T_1_Q = 0;
	goto loc190;

	loc190:
	goto loc195;

	loc191:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc192;
	}else{
		goto loc195;
	}

	loc192:
	goto loc198;

	loc193:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc194;

	loc194:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc195;

	loc195:
	goto loc203;

	loc196:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc197;

	loc197:
	goto loc199;

	loc198:
	goto loc196;

	loc199:
	goto loc193;

	loc200:
	SF_Antivalent_T_1_IN = (0 != 0);
	goto loc201;

	loc201:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc202;

	loc202:
	goto loc188;

	loc203:
	goto loc97;

	loc204:
	if ((!(SF_Antivalent_T_1_IN))){
		goto loc206;
	}else{
		goto loc208;
	}

	loc205:
	SF_Antivalent_T_1___TEMP0 = 0;
	goto loc204;

	loc206:
	SF_Antivalent_T_1_Q = 0;
	goto loc207;

	loc207:
	goto loc212;

	loc208:
	if ((!(SF_Antivalent_T_1_Q))){
		goto loc209;
	}else{
		goto loc212;
	}

	loc209:
	goto loc215;

	loc210:
	SF_Antivalent_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc211;

	loc211:
	SF_Antivalent_T_1_Q = SF_Antivalent_T_1___TEMP0;
	goto loc212;

	loc212:
	goto loc220;

	loc213:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc214;

	loc214:
	goto loc216;

	loc215:
	goto loc213;

	loc216:
	goto loc210;

	loc217:
	SF_Antivalent_T_1_IN = (1 != 0);
	goto loc218;

	loc218:
	SF_Antivalent_T_1_PT = SF_Antivalent_DiscrepancyTime;
	goto loc219;

	loc219:
	goto loc205;

	loc220:
	goto loc20;


}
