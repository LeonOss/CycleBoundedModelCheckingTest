// FORMULA: AG (!S_SafeStandstill | !S_SafeStop_M1)
// BOUND: 10

extern int __VERIFIER_nondet_bool();
extern int __VERIFIER_nondet_int();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int SafeMotionIO_S1_S_EStopIn = 0;
	int SafeMotionIO_S2_S_AutoMode = 0;
	int SafeMotionIO_S2_S_SetupMode = 0;
	int SafeMotionIO_S4_S_EnableSwitchCh1 = 0;
	int SafeMotionIO_S4_S_EnableSwitchCh2 = 0;
	int SafeMotionIO_S5_S_GuardSwitch = 0;
	int SafeMotionIO_S7_S_GuardLock = 0;
	int SafeMotionIO_S0_Reset = 0;
	int SafeMotionIO_S8_UnlockGuard = 0;
	int SafeMotionIO_M1_S_AcknowledgeSS1 = 0;
	int SafeMotionIO_M1_S_AcknowledgeSafeMotion = 0;
	int SafeMotionIO_S_SafeStop_M1 = 0;
	int SafeMotionIO_S_SafeMotion_M1 = 0;
	int SafeMotionIO_S_Enable_M1 = 0;
	int SafeMotionIO_S_UnlockGuard_K1 = 0;
	int SafeMotionIO_S_SetupMode = 0;
	int SafeMotionIO_S_AutoMode = 0;
	int SafeMotionIO_S_SafeStandstill = 0;
	int SafeMotionIO_S_SafeMotionActive = 0;
	int SafeMotionIO_SF_EmergencyStop_1_Activate = 0;
	int SafeMotionIO_SF_EmergencyStop_1_S_EStopIn = 0;
	int SafeMotionIO_SF_EmergencyStop_1_S_StartReset = 0;
	int SafeMotionIO_SF_EmergencyStop_1_S_AutoReset = 0;
	int SafeMotionIO_SF_EmergencyStop_1_Reset = 0;
	int SafeMotionIO_SF_EmergencyStop_1_Ready = 0;
	int SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	int SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	int SafeMotionIO_SF_EmergencyStop_1_DiagCode = 0;
	int SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_EmergencyStop_1___TEMP0 = 0;
	int SafeMotionIO_SF_EmergencyStop_1___TEMP1 = 0;
	int SafeMotionIO_SF_SafetyRequest_1_Activate = 0;
	int SafeMotionIO_SF_SafetyRequest_1_S_OpMode = 0;
	int SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge = 0;
	int SafeMotionIO_SF_SafetyRequest_1_MonitoringTime = 0;
	int SafeMotionIO_SF_SafetyRequest_1_Reset = 0;
	int SafeMotionIO_SF_SafetyRequest_1_Ready = 0;
	int SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	int SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	int SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	int SafeMotionIO_SF_SafetyRequest_1_DiagCode = 0;
	int SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_SafetyRequest_1_T1_IN = 0;
	int SafeMotionIO_SF_SafetyRequest_1_T1_PT = 0;
	int SafeMotionIO_SF_SafetyRequest_1_T1_Q = 0;
	int SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = 0;
	int SafeMotionIO_SF_SafetyRequest_1___TEMP0 = 0;
	int SafeMotionIO_SF_SafetyRequest_1___TEMP1 = 0;
	int SafeMotionIO_SF_SafetyRequest_2_Activate = 0;
	int SafeMotionIO_SF_SafetyRequest_2_S_OpMode = 0;
	int SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge = 0;
	int SafeMotionIO_SF_SafetyRequest_2_MonitoringTime = 0;
	int SafeMotionIO_SF_SafetyRequest_2_Reset = 0;
	int SafeMotionIO_SF_SafetyRequest_2_Ready = 0;
	int SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	int SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	int SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	int SafeMotionIO_SF_SafetyRequest_2_DiagCode = 0;
	int SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_SafetyRequest_2_T1_IN = 0;
	int SafeMotionIO_SF_SafetyRequest_2_T1_PT = 0;
	int SafeMotionIO_SF_SafetyRequest_2_T1_Q = 0;
	int SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = 0;
	int SafeMotionIO_SF_SafetyRequest_2___TEMP0 = 0;
	int SafeMotionIO_SF_SafetyRequest_2___TEMP1 = 0;
	int SafeMotionIO_SF_ModeSelector_1_Activate = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode0 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode1 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode2 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode3 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode4 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode5 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode6 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode7 = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Unlock = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_SetMode = 0;
	int SafeMotionIO_SF_ModeSelector_1_AutoSetMode = 0;
	int SafeMotionIO_SF_ModeSelector_1_ModeMonitorTime = 0;
	int SafeMotionIO_SF_ModeSelector_1_Reset = 0;
	int SafeMotionIO_SF_ModeSelector_1_Ready = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel = 0;
	int SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 0;
	int SafeMotionIO_SF_ModeSelector_1_Error = 0;
	int SafeMotionIO_SF_ModeSelector_1_DiagCode = 0;
	int SafeMotionIO_SF_ModeSelector_1_T_1_IN = 0;
	int SafeMotionIO_SF_ModeSelector_1_T_1_PT = 0;
	int SafeMotionIO_SF_ModeSelector_1_T_1_Q = 0;
	int SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_CLK = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_Q = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_M = 0;
	int SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK = 0;
	int SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_Q = 0;
	int SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_M = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_Q = 0;
	int SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_M = 0;
	int SafeMotionIO_SF_ModeSelector_1_Error1 = 0;
	int SafeMotionIO_SF_ModeSelector_1_Error2 = 0;
	int SafeMotionIO_SF_ModeSelector_1___TEMP0 = 0;
	int SafeMotionIO_SF_ModeSelector_1___TEMP1 = 0;
	int SafeMotionIO_SF_GuardLocking_1_Activate = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_SafetyActive = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_GuardLock = 0;
	int SafeMotionIO_SF_GuardLocking_1_UnlockRequest = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_StartReset = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_AutoReset = 0;
	int SafeMotionIO_SF_GuardLocking_1_Reset = 0;
	int SafeMotionIO_SF_GuardLocking_1_Ready = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 0;
	int SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 0;
	int SafeMotionIO_SF_GuardLocking_1_Error = 0;
	int SafeMotionIO_SF_GuardLocking_1_DiagCode = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_CLK = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_Q = 0;
	int SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_M = 0;
	int SafeMotionIO_SF_GuardLocking_1_T1_IN = 0;
	int SafeMotionIO_SF_GuardLocking_1_T1_PT = 0;
	int SafeMotionIO_SF_GuardLocking_1_T1_Q = 0;
	int SafeMotionIO_SF_GuardLocking_1_T1___TEMP0 = 0;
	int SafeMotionIO_SF_GuardLocking_1___TEMP0 = 0;
	int SafeMotionIO_SF_GuardLocking_1___TEMP1 = 0;
	int SafeMotionIO_SF_EnableSwitch_1_Activate = 0;
	int SafeMotionIO_SF_EnableSwitch_1_S_SafetyActive = 0;
	int SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 = 0;
	int SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2 = 0;
	int SafeMotionIO_SF_EnableSwitch_1_S_AutoReset = 0;
	int SafeMotionIO_SF_EnableSwitch_1_Reset = 0;
	int SafeMotionIO_SF_EnableSwitch_1_Ready = 0;
	int SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut = 0;
	int SafeMotionIO_SF_EnableSwitch_1_Error = 0;
	int SafeMotionIO_SF_EnableSwitch_1_DiagCode = 0;
	int SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_CLK = 0;
	int SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q = 0;
	int SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_M = 0;
	int SafeMotionIO_SF_EnableSwitch_1___TEMP0 = 0;
	int SafeMotionIO_SF_EnableSwitch_1___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc828;

	loc814:
	goto loc1299;

	loc815:
	goto loc1033;

	loc816:
	goto loc1510;

	loc817:
	goto loc1859;

	loc818:
	goto loc1172;

	loc819:
	goto loc1627;

	loc820:
	SafeMotionIO_S_SafeStandstill = SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive;
	goto loc821;

	loc821:
	SafeMotionIO_S_SafeStop_M1 = SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest;
	goto loc822;

	loc822:
	SafeMotionIO_S_SafeMotionActive = SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive;
	goto loc823;

	loc823:
	SafeMotionIO_S_SafeMotion_M1 = SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest;
	goto loc824;

	loc824:
	SafeMotionIO_S_SetupMode = SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel;
	goto loc825;

	loc825:
	SafeMotionIO_S_AutoMode = (SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel && SafeMotionIO_SF_GuardLocking_1_S_GuardLocked);
	goto loc826;

	loc826:
	SafeMotionIO_S_UnlockGuard_K1 = SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard;
	goto loc827;

	loc827:
	SafeMotionIO_S_Enable_M1 = SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut;
	goto loc828;

	loc828:
	__VERIFIER_assert((!(((!((SafeMotionIO_S_SafeStandstill == (0 != 0)))) && (!((SafeMotionIO_S_SafeStop_M1 == (0 != 0))))))));

	SafeMotionIO_S1_S_EStopIn = __VERIFIER_nondet_bool();
	SafeMotionIO_S2_S_AutoMode = __VERIFIER_nondet_bool();
	SafeMotionIO_S2_S_SetupMode = __VERIFIER_nondet_bool();
	SafeMotionIO_S4_S_EnableSwitchCh1 = __VERIFIER_nondet_bool();
	SafeMotionIO_S4_S_EnableSwitchCh2 = __VERIFIER_nondet_bool();
	SafeMotionIO_S5_S_GuardSwitch = __VERIFIER_nondet_bool();
	SafeMotionIO_S7_S_GuardLock = __VERIFIER_nondet_bool();
	SafeMotionIO_S0_Reset = __VERIFIER_nondet_bool();
	SafeMotionIO_S8_UnlockGuard = __VERIFIER_nondet_bool();
	SafeMotionIO_M1_S_AcknowledgeSS1 = __VERIFIER_nondet_bool();
	SafeMotionIO_M1_S_AcknowledgeSafeMotion = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>10){return 0;}
	goto loc814;

	loc829:
	SafeMotionIO_SF_SafetyRequest_1___TEMP1 = 0;
	goto loc830;

	loc830:
	SafeMotionIO_SF_SafetyRequest_1___TEMP0 = 0;
	goto loc831;

	loc831:
	goto loc1030;

	loc832:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_Activate))){
		goto loc833;
	}else{
		goto loc835;
	}

	loc833:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 0;
	goto loc834;

	loc834:
	goto loc906;

	loc835:
	SafeMotionIO_SF_SafetyRequest_1___TEMP0 = SafeMotionIO_SF_SafetyRequest_1_DiagCode;
	goto loc836;

	loc836:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 0)){
		goto loc837;
	}else{
		goto loc840;
	}

	loc837:
	if (SafeMotionIO_SF_SafetyRequest_1_Activate){
		goto loc838;
	}else{
		goto loc839;
	}

	loc838:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32769;
	goto loc839;

	loc839:
	goto loc906;

	loc840:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32768)){
		goto loc841;
	}else{
		goto loc847;
	}

	loc841:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge))){
		goto loc842;
	}else{
		goto loc844;
	}

	loc842:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49154;
	goto loc843;

	loc843:
	goto loc846;

	loc844:
	if (SafeMotionIO_SF_SafetyRequest_1_S_OpMode){
		goto loc845;
	}else{
		goto loc846;
	}

	loc845:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32786;
	goto loc846;

	loc846:
	goto loc906;

	loc847:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32769)){
		goto loc848;
	}else{
		goto loc854;
	}

	loc848:
	if ((SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q && (!(SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge)))){
		goto loc849;
	}else{
		goto loc851;
	}

	loc849:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32770;
	goto loc850;

	loc850:
	goto loc853;

	loc851:
	if ((SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q && SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge)){
		goto loc852;
	}else{
		goto loc853;
	}

	loc852:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32786;
	goto loc853;

	loc853:
	goto loc906;

	loc854:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32770)){
		goto loc855;
	}else{
		goto loc862;
	}

	loc855:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_S_OpMode))){
		goto loc856;
	}else{
		goto loc859;
	}

	loc856:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32771;
	goto loc857;

	loc857:
	goto loc989;

	loc858:
	goto loc861;

	loc859:
	if (SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge){
		goto loc860;
	}else{
		goto loc861;
	}

	loc860:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32786;
	goto loc861;

	loc861:
	goto loc906;

	loc862:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32771)){
		goto loc863;
	}else{
		goto loc872;
	}

	loc863:
	if (SafeMotionIO_SF_SafetyRequest_1_T1_Q){
		goto loc864;
	}else{
		goto loc866;
	}

	loc864:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49155;
	goto loc865;

	loc865:
	goto loc871;

	loc866:
	if (SafeMotionIO_SF_SafetyRequest_1_S_OpMode){
		goto loc867;
	}else{
		goto loc869;
	}

	loc867:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32786;
	goto loc868;

	loc868:
	goto loc871;

	loc869:
	if (SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge){
		goto loc870;
	}else{
		goto loc871;
	}

	loc870:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32768;
	goto loc871;

	loc871:
	goto loc906;

	loc872:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32773)){
		goto loc873;
	}else{
		goto loc876;
	}

	loc873:
	if (SafeMotionIO_SF_SafetyRequest_1_S_OpMode){
		goto loc874;
	}else{
		goto loc875;
	}

	loc874:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32786;
	goto loc875;

	loc875:
	goto loc906;

	loc876:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 32786)){
		goto loc877;
	}else{
		goto loc884;
	}

	loc877:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge))){
		goto loc878;
	}else{
		goto loc880;
	}

	loc878:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32770;
	goto loc879;

	loc879:
	goto loc883;

	loc880:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_S_OpMode))){
		goto loc881;
	}else{
		goto loc883;
	}

	loc881:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32771;
	goto loc882;

	loc882:
	goto loc1023;

	loc883:
	goto loc906;

	loc884:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 49154)){
		goto loc885;
	}else{
		goto loc891;
	}

	loc885:
	if ((SafeMotionIO_SF_SafetyRequest_1_Reset && (!(SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q)))){
		goto loc886;
	}else{
		goto loc888;
	}

	loc886:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49156;
	goto loc887;

	loc887:
	goto loc890;

	loc888:
	if (SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q){
		goto loc889;
	}else{
		goto loc890;
	}

	loc889:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32773;
	goto loc890;

	loc890:
	goto loc906;

	loc891:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 49155)){
		goto loc892;
	}else{
		goto loc898;
	}

	loc892:
	if ((SafeMotionIO_SF_SafetyRequest_1_Reset && (!(SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q)))){
		goto loc893;
	}else{
		goto loc895;
	}

	loc893:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49157;
	goto loc894;

	loc894:
	goto loc897;

	loc895:
	if (SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q){
		goto loc896;
	}else{
		goto loc897;
	}

	loc896:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 32773;
	goto loc897;

	loc897:
	goto loc906;

	loc898:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 49156)){
		goto loc899;
	}else{
		goto loc902;
	}

	loc899:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_Reset))){
		goto loc900;
	}else{
		goto loc901;
	}

	loc900:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49154;
	goto loc901;

	loc901:
	goto loc906;

	loc902:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP0 == 49157)){
		goto loc903;
	}else{
		goto loc906;
	}

	loc903:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_Reset))){
		goto loc904;
	}else{
		goto loc905;
	}

	loc904:
	SafeMotionIO_SF_SafetyRequest_1_DiagCode = 49155;
	goto loc905;

	loc905:
	goto loc906;

	loc906:
	if ((!((SafeMotionIO_SF_SafetyRequest_1_DiagCode == 32771)))){
		goto loc907;
	}else{
		goto loc908;
	}

	loc907:
	goto loc1006;

	loc908:
	SafeMotionIO_SF_SafetyRequest_1___TEMP1 = SafeMotionIO_SF_SafetyRequest_1_DiagCode;
	goto loc909;

	loc909:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 0)){
		goto loc910;
	}else{
		goto loc915;
	}

	loc910:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 0;
	goto loc911;

	loc911:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc912;

	loc912:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc913;

	loc913:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc914;

	loc914:
	goto loc975;

	loc915:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32768)){
		goto loc916;
	}else{
		goto loc921;
	}

	loc916:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc917;

	loc917:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 1;
	goto loc918;

	loc918:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc919;

	loc919:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc920;

	loc920:
	goto loc975;

	loc921:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32769)){
		goto loc922;
	}else{
		goto loc927;
	}

	loc922:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc923;

	loc923:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc924;

	loc924:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc925;

	loc925:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc926;

	loc926:
	goto loc975;

	loc927:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32770)){
		goto loc928;
	}else{
		goto loc933;
	}

	loc928:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc929;

	loc929:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc930;

	loc930:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 1;
	goto loc931;

	loc931:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc932;

	loc932:
	goto loc975;

	loc933:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32771)){
		goto loc934;
	}else{
		goto loc939;
	}

	loc934:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc935;

	loc935:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc936;

	loc936:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc937;

	loc937:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc938;

	loc938:
	goto loc975;

	loc939:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32773)){
		goto loc940;
	}else{
		goto loc945;
	}

	loc940:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc941;

	loc941:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc942;

	loc942:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc943;

	loc943:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc944;

	loc944:
	goto loc975;

	loc945:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 32786)){
		goto loc946;
	}else{
		goto loc951;
	}

	loc946:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc947;

	loc947:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc948;

	loc948:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 1;
	goto loc949;

	loc949:
	SafeMotionIO_SF_SafetyRequest_1_Error = 0;
	goto loc950;

	loc950:
	goto loc975;

	loc951:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 49154)){
		goto loc952;
	}else{
		goto loc957;
	}

	loc952:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc953;

	loc953:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc954;

	loc954:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc955;

	loc955:
	SafeMotionIO_SF_SafetyRequest_1_Error = 1;
	goto loc956;

	loc956:
	goto loc975;

	loc957:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 49155)){
		goto loc958;
	}else{
		goto loc963;
	}

	loc958:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc959;

	loc959:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc960;

	loc960:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc961;

	loc961:
	SafeMotionIO_SF_SafetyRequest_1_Error = 1;
	goto loc962;

	loc962:
	goto loc975;

	loc963:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 49156)){
		goto loc964;
	}else{
		goto loc969;
	}

	loc964:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc965;

	loc965:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc966;

	loc966:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc967;

	loc967:
	SafeMotionIO_SF_SafetyRequest_1_Error = 1;
	goto loc968;

	loc968:
	goto loc975;

	loc969:
	if ((SafeMotionIO_SF_SafetyRequest_1___TEMP1 == 49157)){
		goto loc970;
	}else{
		goto loc975;
	}

	loc970:
	SafeMotionIO_SF_SafetyRequest_1_Ready = 1;
	goto loc971;

	loc971:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyActive = 0;
	goto loc972;

	loc972:
	SafeMotionIO_SF_SafetyRequest_1_S_SafetyRequest = 0;
	goto loc973;

	loc973:
	SafeMotionIO_SF_SafetyRequest_1_Error = 1;
	goto loc974;

	loc974:
	goto loc975;

	loc975:
	goto loc1039;

	loc976:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = 0;
	goto loc977;

	loc977:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_IN))){
		goto loc978;
	}else{
		goto loc980;
	}

	loc978:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = 0;
	goto loc979;

	loc979:
	goto loc984;

	loc980:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_Q))){
		goto loc981;
	}else{
		goto loc984;
	}

	loc981:
	goto loc987;

	loc982:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc983;

	loc983:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0;
	goto loc984;

	loc984:
	goto loc992;

	loc985:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc986;

	loc986:
	goto loc988;

	loc987:
	goto loc985;

	loc988:
	goto loc982;

	loc989:
	SafeMotionIO_SF_SafetyRequest_1_T1_IN = 1;
	goto loc990;

	loc990:
	SafeMotionIO_SF_SafetyRequest_1_T1_PT = SafeMotionIO_SF_SafetyRequest_1_MonitoringTime;
	goto loc991;

	loc991:
	goto loc976;

	loc992:
	goto loc858;

	loc993:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = 0;
	goto loc994;

	loc994:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_IN))){
		goto loc995;
	}else{
		goto loc997;
	}

	loc995:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = 0;
	goto loc996;

	loc996:
	goto loc1001;

	loc997:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_Q))){
		goto loc998;
	}else{
		goto loc1001;
	}

	loc998:
	goto loc1004;

	loc999:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1000;

	loc1000:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0;
	goto loc1001;

	loc1001:
	goto loc1009;

	loc1002:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1003;

	loc1003:
	goto loc1005;

	loc1004:
	goto loc1002;

	loc1005:
	goto loc999;

	loc1006:
	SafeMotionIO_SF_SafetyRequest_1_T1_IN = 0;
	goto loc1007;

	loc1007:
	SafeMotionIO_SF_SafetyRequest_1_T1_PT = SafeMotionIO_SF_SafetyRequest_1_MonitoringTime;
	goto loc1008;

	loc1008:
	goto loc993;

	loc1009:
	goto loc908;

	loc1010:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = 0;
	goto loc1011;

	loc1011:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_IN))){
		goto loc1012;
	}else{
		goto loc1014;
	}

	loc1012:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = 0;
	goto loc1013;

	loc1013:
	goto loc1018;

	loc1014:
	if ((!(SafeMotionIO_SF_SafetyRequest_1_T1_Q))){
		goto loc1015;
	}else{
		goto loc1018;
	}

	loc1015:
	goto loc1021;

	loc1016:
	SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1017;

	loc1017:
	SafeMotionIO_SF_SafetyRequest_1_T1_Q = SafeMotionIO_SF_SafetyRequest_1_T1___TEMP0;
	goto loc1018;

	loc1018:
	goto loc1026;

	loc1019:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1020;

	loc1020:
	goto loc1022;

	loc1021:
	goto loc1019;

	loc1022:
	goto loc1016;

	loc1023:
	SafeMotionIO_SF_SafetyRequest_1_T1_IN = 1;
	goto loc1024;

	loc1024:
	SafeMotionIO_SF_SafetyRequest_1_T1_PT = SafeMotionIO_SF_SafetyRequest_1_MonitoringTime;
	goto loc1025;

	loc1025:
	goto loc1010;

	loc1026:
	goto loc883;

	loc1027:
	SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_Q = (SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_M)));
	goto loc1028;

	loc1028:
	SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_M = SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_CLK;
	goto loc1029;

	loc1029:
	goto loc1032;

	loc1030:
	SafeMotionIO_SF_SafetyRequest_1_R_TRIGatReset_CLK = SafeMotionIO_SF_SafetyRequest_1_Reset;
	goto loc1031;

	loc1031:
	goto loc1027;

	loc1032:
	goto loc832;

	loc1033:
	SafeMotionIO_SF_SafetyRequest_1_Activate = 1;
	goto loc1034;

	loc1034:
	SafeMotionIO_SF_SafetyRequest_1_S_OpMode = SafeMotionIO_SF_EmergencyStop_1_S_EStopOut;
	goto loc1035;

	loc1035:
	SafeMotionIO_SF_SafetyRequest_1_S_Acknowledge = SafeMotionIO_M1_S_AcknowledgeSS1;
	goto loc1036;

	loc1036:
	SafeMotionIO_SF_SafetyRequest_1_MonitoringTime = 100;
	goto loc1037;

	loc1037:
	SafeMotionIO_SF_SafetyRequest_1_Reset = SafeMotionIO_S0_Reset;
	goto loc1038;

	loc1038:
	goto loc829;

	loc1039:
	goto loc816;

	loc1040:
	SafeMotionIO_SF_GuardLocking_1___TEMP1 = 0;
	goto loc1041;

	loc1041:
	SafeMotionIO_SF_GuardLocking_1___TEMP0 = 0;
	goto loc1042;

	loc1042:
	goto loc1169;

	loc1043:
	goto loc1163;

	loc1044:
	if ((!(SafeMotionIO_SF_GuardLocking_1_Activate))){
		goto loc1045;
	}else{
		goto loc1046;
	}

	loc1045:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 0;
	goto loc1046;

	loc1046:
	SafeMotionIO_SF_GuardLocking_1___TEMP0 = SafeMotionIO_SF_GuardLocking_1_DiagCode;
	goto loc1047;

	loc1047:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 0)){
		goto loc1048;
	}else{
		goto loc1051;
	}

	loc1048:
	if (SafeMotionIO_SF_GuardLocking_1_Activate){
		goto loc1049;
	}else{
		goto loc1050;
	}

	loc1049:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32769;
	goto loc1050;

	loc1050:
	goto loc1128;

	loc1051:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32768)){
		goto loc1052;
	}else{
		goto loc1058;
	}

	loc1052:
	if (((!(SafeMotionIO_SF_GuardLocking_1_S_GuardLock)) || (!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)))){
		goto loc1053;
	}else{
		goto loc1055;
	}

	loc1053:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49156;
	goto loc1054;

	loc1054:
	goto loc1057;

	loc1055:
	if ((SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_Q && SafeMotionIO_SF_GuardLocking_1_S_SafetyActive)){
		goto loc1056;
	}else{
		goto loc1057;
	}

	loc1056:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32787;
	goto loc1057;

	loc1057:
	goto loc1128;

	loc1058:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32769)){
		goto loc1059;
	}else{
		goto loc1068;
	}

	loc1059:
	if (((SafeMotionIO_SF_GuardLocking_1_Reset && (!(SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q))) && (!(SafeMotionIO_SF_GuardLocking_1_S_StartReset)))){
		goto loc1060;
	}else{
		goto loc1062;
	}

	loc1060:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49153;
	goto loc1061;

	loc1061:
	goto loc1067;

	loc1062:
	if (((!(SafeMotionIO_SF_GuardLocking_1_S_GuardLock)) || (!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)))){
		goto loc1063;
	}else{
		goto loc1065;
	}

	loc1063:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32785;
	goto loc1064;

	loc1064:
	goto loc1067;

	loc1065:
	if ((((SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q || SafeMotionIO_SF_GuardLocking_1_S_StartReset) && SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring) && SafeMotionIO_SF_GuardLocking_1_S_GuardLock)){
		goto loc1066;
	}else{
		goto loc1067;
	}

	loc1066:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32768;
	goto loc1067;

	loc1067:
	goto loc1128;

	loc1068:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32771)){
		goto loc1069;
	}else{
		goto loc1078;
	}

	loc1069:
	if (((SafeMotionIO_SF_GuardLocking_1_Reset && (!(SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q))) && (!(SafeMotionIO_SF_GuardLocking_1_S_AutoReset)))){
		goto loc1070;
	}else{
		goto loc1072;
	}

	loc1070:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49155;
	goto loc1071;

	loc1071:
	goto loc1077;

	loc1072:
	if (((!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)) || (!(SafeMotionIO_SF_GuardLocking_1_S_GuardLock)))){
		goto loc1073;
	}else{
		goto loc1075;
	}

	loc1073:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32785;
	goto loc1074;

	loc1074:
	goto loc1077;

	loc1075:
	if ((SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q || SafeMotionIO_SF_GuardLocking_1_S_AutoReset)){
		goto loc1076;
	}else{
		goto loc1077;
	}

	loc1076:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32768;
	goto loc1077;

	loc1077:
	goto loc1128;

	loc1078:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32785)){
		goto loc1079;
	}else{
		goto loc1088;
	}

	loc1079:
	if (((!(SafeMotionIO_SF_GuardLocking_1_S_SafetyActive)) && ((!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)) || (!(SafeMotionIO_SF_GuardLocking_1_S_GuardLock))))){
		goto loc1080;
	}else{
		goto loc1082;
	}

	loc1080:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49156;
	goto loc1081;

	loc1081:
	goto loc1087;

	loc1082:
	if (((SafeMotionIO_SF_GuardLocking_1_S_SafetyActive && SafeMotionIO_SF_GuardLocking_1_UnlockRequest) || (!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)))){
		goto loc1083;
	}else{
		goto loc1085;
	}

	loc1083:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32786;
	goto loc1084;

	loc1084:
	goto loc1087;

	loc1085:
	if ((SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring && SafeMotionIO_SF_GuardLocking_1_S_GuardLock)){
		goto loc1086;
	}else{
		goto loc1087;
	}

	loc1086:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32771;
	goto loc1087;

	loc1087:
	goto loc1128;

	loc1088:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32786)){
		goto loc1089;
	}else{
		goto loc1095;
	}

	loc1089:
	if (SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring){
		goto loc1090;
	}else{
		goto loc1092;
	}

	loc1090:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32787;
	goto loc1091;

	loc1091:
	goto loc1094;

	loc1092:
	if (((!(SafeMotionIO_SF_GuardLocking_1_S_SafetyActive)) && (!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring)))){
		goto loc1093;
	}else{
		goto loc1094;
	}

	loc1093:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49156;
	goto loc1094;

	loc1094:
	goto loc1128;

	loc1095:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32787)){
		goto loc1096;
	}else{
		goto loc1102;
	}

	loc1096:
	if ((!(SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring))){
		goto loc1097;
	}else{
		goto loc1099;
	}

	loc1097:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32786;
	goto loc1098;

	loc1098:
	goto loc1101;

	loc1099:
	if ((!(SafeMotionIO_SF_GuardLocking_1_UnlockRequest))){
		goto loc1100;
	}else{
		goto loc1101;
	}

	loc1100:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32785;
	goto loc1101;

	loc1101:
	goto loc1128;

	loc1102:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 32788)){
		goto loc1103;
	}else{
		goto loc1112;
	}

	loc1103:
	if ((SafeMotionIO_SF_GuardLocking_1_Reset && (!(SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q)))){
		goto loc1104;
	}else{
		goto loc1106;
	}

	loc1104:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49154;
	goto loc1105;

	loc1105:
	goto loc1111;

	loc1106:
	if ((!(SafeMotionIO_SF_GuardLocking_1_S_SafetyActive))){
		goto loc1107;
	}else{
		goto loc1109;
	}

	loc1107:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 49156;
	goto loc1108;

	loc1108:
	goto loc1111;

	loc1109:
	if (SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q){
		goto loc1110;
	}else{
		goto loc1111;
	}

	loc1110:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32785;
	goto loc1111;

	loc1111:
	goto loc1128;

	loc1112:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 49153)){
		goto loc1113;
	}else{
		goto loc1116;
	}

	loc1113:
	if ((!(SafeMotionIO_SF_GuardLocking_1_Reset))){
		goto loc1114;
	}else{
		goto loc1115;
	}

	loc1114:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32769;
	goto loc1115;

	loc1115:
	goto loc1128;

	loc1116:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 49154)){
		goto loc1117;
	}else{
		goto loc1120;
	}

	loc1117:
	if ((!(SafeMotionIO_SF_GuardLocking_1_Reset))){
		goto loc1118;
	}else{
		goto loc1119;
	}

	loc1118:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32788;
	goto loc1119;

	loc1119:
	goto loc1128;

	loc1120:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 49155)){
		goto loc1121;
	}else{
		goto loc1124;
	}

	loc1121:
	if ((!(SafeMotionIO_SF_GuardLocking_1_Reset))){
		goto loc1122;
	}else{
		goto loc1123;
	}

	loc1122:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32771;
	goto loc1123;

	loc1123:
	goto loc1128;

	loc1124:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP0 == 49156)){
		goto loc1125;
	}else{
		goto loc1128;
	}

	loc1125:
	if (SafeMotionIO_SF_GuardLocking_1_S_SafetyActive){
		goto loc1126;
	}else{
		goto loc1127;
	}

	loc1126:
	SafeMotionIO_SF_GuardLocking_1_DiagCode = 32788;
	goto loc1127;

	loc1127:
	goto loc1128;

	loc1128:
	SafeMotionIO_SF_GuardLocking_1___TEMP1 = SafeMotionIO_SF_GuardLocking_1_DiagCode;
	goto loc1129;

	loc1129:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 0)){
		goto loc1130;
	}else{
		goto loc1135;
	}

	loc1130:
	SafeMotionIO_SF_GuardLocking_1_Ready = 0;
	goto loc1131;

	loc1131:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 0;
	goto loc1132;

	loc1132:
	SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 0;
	goto loc1133;

	loc1133:
	SafeMotionIO_SF_GuardLocking_1_Error = 0;
	goto loc1134;

	loc1134:
	goto loc1159;

	loc1135:
	if ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32768)){
		goto loc1136;
	}else{
		goto loc1141;
	}

	loc1136:
	SafeMotionIO_SF_GuardLocking_1_Ready = 1;
	goto loc1137;

	loc1137:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 1;
	goto loc1138;

	loc1138:
	SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 0;
	goto loc1139;

	loc1139:
	SafeMotionIO_SF_GuardLocking_1_Error = 0;
	goto loc1140;

	loc1140:
	goto loc1159;

	loc1141:
	if (((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32769) || ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32771) || ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32785) || (SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32788))))){
		goto loc1142;
	}else{
		goto loc1147;
	}

	loc1142:
	SafeMotionIO_SF_GuardLocking_1_Ready = 1;
	goto loc1143;

	loc1143:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 0;
	goto loc1144;

	loc1144:
	SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 0;
	goto loc1145;

	loc1145:
	SafeMotionIO_SF_GuardLocking_1_Error = 0;
	goto loc1146;

	loc1146:
	goto loc1159;

	loc1147:
	if (((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32786) || (SafeMotionIO_SF_GuardLocking_1___TEMP1 == 32787))){
		goto loc1148;
	}else{
		goto loc1153;
	}

	loc1148:
	SafeMotionIO_SF_GuardLocking_1_Ready = 1;
	goto loc1149;

	loc1149:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 0;
	goto loc1150;

	loc1150:
	SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 1;
	goto loc1151;

	loc1151:
	SafeMotionIO_SF_GuardLocking_1_Error = 0;
	goto loc1152;

	loc1152:
	goto loc1159;

	loc1153:
	if (((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 49153) || ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 49154) || ((SafeMotionIO_SF_GuardLocking_1___TEMP1 == 49155) || (SafeMotionIO_SF_GuardLocking_1___TEMP1 == 49156))))){
		goto loc1154;
	}else{
		goto loc1159;
	}

	loc1154:
	SafeMotionIO_SF_GuardLocking_1_Ready = 1;
	goto loc1155;

	loc1155:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLocked = 0;
	goto loc1156;

	loc1156:
	SafeMotionIO_SF_GuardLocking_1_S_UnlockGuard = 0;
	goto loc1157;

	loc1157:
	SafeMotionIO_SF_GuardLocking_1_Error = 1;
	goto loc1158;

	loc1158:
	goto loc1159;

	loc1159:
	goto loc1181;

	loc1160:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_Q = (SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_CLK && (!(SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_M)));
	goto loc1161;

	loc1161:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_M = SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_CLK;
	goto loc1162;

	loc1162:
	goto loc1165;

	loc1163:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatUnlockRequest_CLK = SafeMotionIO_SF_GuardLocking_1_UnlockRequest;
	goto loc1164;

	loc1164:
	goto loc1160;

	loc1165:
	goto loc1044;

	loc1166:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_Q = (SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_M)));
	goto loc1167;

	loc1167:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_M = SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_CLK;
	goto loc1168;

	loc1168:
	goto loc1171;

	loc1169:
	SafeMotionIO_SF_GuardLocking_1_R_TRIGatReset_CLK = SafeMotionIO_SF_GuardLocking_1_Reset;
	goto loc1170;

	loc1170:
	goto loc1166;

	loc1171:
	goto loc1043;

	loc1172:
	SafeMotionIO_SF_GuardLocking_1_Activate = 1;
	goto loc1173;

	loc1173:
	SafeMotionIO_SF_GuardLocking_1_S_GuardMonitoring = SafeMotionIO_S5_S_GuardSwitch;
	goto loc1174;

	loc1174:
	SafeMotionIO_SF_GuardLocking_1_S_SafetyActive = (SafeMotionIO_S_SafeStandstill || SafeMotionIO_S_SafeMotionActive);
	goto loc1175;

	loc1175:
	SafeMotionIO_SF_GuardLocking_1_S_GuardLock = SafeMotionIO_S7_S_GuardLock;
	goto loc1176;

	loc1176:
	SafeMotionIO_SF_GuardLocking_1_UnlockRequest = SafeMotionIO_S8_UnlockGuard;
	goto loc1177;

	loc1177:
	SafeMotionIO_SF_GuardLocking_1_S_StartReset = 0;
	goto loc1178;

	loc1178:
	SafeMotionIO_SF_GuardLocking_1_S_AutoReset = 0;
	goto loc1179;

	loc1179:
	SafeMotionIO_SF_GuardLocking_1_Reset = SafeMotionIO_S0_Reset;
	goto loc1180;

	loc1180:
	goto loc1040;

	loc1181:
	goto loc819;

	loc1182:
	SafeMotionIO_SF_EmergencyStop_1___TEMP1 = 0;
	goto loc1183;

	loc1183:
	SafeMotionIO_SF_EmergencyStop_1___TEMP0 = 0;
	goto loc1184;

	loc1184:
	goto loc1296;

	loc1185:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_Activate))){
		goto loc1186;
	}else{
		goto loc1188;
	}

	loc1186:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 0;
	goto loc1187;

	loc1187:
	goto loc1246;

	loc1188:
	SafeMotionIO_SF_EmergencyStop_1___TEMP0 = SafeMotionIO_SF_EmergencyStop_1_DiagCode;
	goto loc1189;

	loc1189:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 0)){
		goto loc1190;
	}else{
		goto loc1193;
	}

	loc1190:
	if (SafeMotionIO_SF_EmergencyStop_1_Activate){
		goto loc1191;
	}else{
		goto loc1192;
	}

	loc1191:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32769;
	goto loc1192;

	loc1192:
	goto loc1246;

	loc1193:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32769)){
		goto loc1194;
	}else{
		goto loc1203;
	}

	loc1194:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_S_StartReset))){
		goto loc1195;
	}else{
		goto loc1197;
	}

	loc1195:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32770;
	goto loc1196;

	loc1196:
	goto loc1202;

	loc1197:
	if ((SafeMotionIO_SF_EmergencyStop_1_S_StartReset && (!(SafeMotionIO_SF_EmergencyStop_1_S_EStopIn)))){
		goto loc1198;
	}else{
		goto loc1200;
	}

	loc1198:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc1199;

	loc1199:
	goto loc1202;

	loc1200:
	if ((SafeMotionIO_SF_EmergencyStop_1_S_EStopIn && SafeMotionIO_SF_EmergencyStop_1_S_StartReset)){
		goto loc1201;
	}else{
		goto loc1202;
	}

	loc1201:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc1202;

	loc1202:
	goto loc1246;

	loc1203:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32770)){
		goto loc1204;
	}else{
		goto loc1207;
	}

	loc1204:
	if (SafeMotionIO_SF_EmergencyStop_1_S_EStopIn){
		goto loc1205;
	}else{
		goto loc1206;
	}

	loc1205:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32771;
	goto loc1206;

	loc1206:
	goto loc1246;

	loc1207:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32771)){
		goto loc1208;
	}else{
		goto loc1217;
	}

	loc1208:
	if ((SafeMotionIO_SF_EmergencyStop_1_Reset && (!(SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q)))){
		goto loc1209;
	}else{
		goto loc1211;
	}

	loc1209:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 49153;
	goto loc1210;

	loc1210:
	goto loc1216;

	loc1211:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_S_EStopIn))){
		goto loc1212;
	}else{
		goto loc1214;
	}

	loc1212:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32770;
	goto loc1213;

	loc1213:
	goto loc1216;

	loc1214:
	if (SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q){
		goto loc1215;
	}else{
		goto loc1216;
	}

	loc1215:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc1216;

	loc1216:
	goto loc1246;

	loc1217:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 49153)){
		goto loc1218;
	}else{
		goto loc1221;
	}

	loc1218:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_Reset))){
		goto loc1219;
	}else{
		goto loc1220;
	}

	loc1219:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32771;
	goto loc1220;

	loc1220:
	goto loc1246;

	loc1221:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32772)){
		goto loc1222;
	}else{
		goto loc1228;
	}

	loc1222:
	if ((SafeMotionIO_SF_EmergencyStop_1_S_EStopIn && (!(SafeMotionIO_SF_EmergencyStop_1_S_AutoReset)))){
		goto loc1223;
	}else{
		goto loc1225;
	}

	loc1223:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32773;
	goto loc1224;

	loc1224:
	goto loc1227;

	loc1225:
	if ((SafeMotionIO_SF_EmergencyStop_1_S_EStopIn && SafeMotionIO_SF_EmergencyStop_1_S_AutoReset)){
		goto loc1226;
	}else{
		goto loc1227;
	}

	loc1226:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc1227;

	loc1227:
	goto loc1246;

	loc1228:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32773)){
		goto loc1229;
	}else{
		goto loc1238;
	}

	loc1229:
	if ((SafeMotionIO_SF_EmergencyStop_1_Reset && (!(SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q)))){
		goto loc1230;
	}else{
		goto loc1232;
	}

	loc1230:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 49154;
	goto loc1231;

	loc1231:
	goto loc1237;

	loc1232:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_S_EStopIn))){
		goto loc1233;
	}else{
		goto loc1235;
	}

	loc1233:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc1234;

	loc1234:
	goto loc1237;

	loc1235:
	if ((SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q || SafeMotionIO_SF_EmergencyStop_1_S_AutoReset)){
		goto loc1236;
	}else{
		goto loc1237;
	}

	loc1236:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc1237;

	loc1237:
	goto loc1246;

	loc1238:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 49154)){
		goto loc1239;
	}else{
		goto loc1242;
	}

	loc1239:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_Reset))){
		goto loc1240;
	}else{
		goto loc1241;
	}

	loc1240:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32773;
	goto loc1241;

	loc1241:
	goto loc1246;

	loc1242:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP0 == 32768)){
		goto loc1243;
	}else{
		goto loc1246;
	}

	loc1243:
	if ((!(SafeMotionIO_SF_EmergencyStop_1_S_EStopIn))){
		goto loc1244;
	}else{
		goto loc1245;
	}

	loc1244:
	SafeMotionIO_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc1245;

	loc1245:
	goto loc1246;

	loc1246:
	SafeMotionIO_SF_EmergencyStop_1___TEMP1 = SafeMotionIO_SF_EmergencyStop_1_DiagCode;
	goto loc1247;

	loc1247:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 0)){
		goto loc1248;
	}else{
		goto loc1252;
	}

	loc1248:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 0;
	goto loc1249;

	loc1249:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1250;

	loc1250:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1251;

	loc1251:
	goto loc1292;

	loc1252:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32769)){
		goto loc1253;
	}else{
		goto loc1257;
	}

	loc1253:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1254;

	loc1254:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1255;

	loc1255:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1256;

	loc1256:
	goto loc1292;

	loc1257:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32770)){
		goto loc1258;
	}else{
		goto loc1262;
	}

	loc1258:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1259;

	loc1259:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1260;

	loc1260:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1261;

	loc1261:
	goto loc1292;

	loc1262:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32771)){
		goto loc1263;
	}else{
		goto loc1267;
	}

	loc1263:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1264;

	loc1264:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1265;

	loc1265:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1266;

	loc1266:
	goto loc1292;

	loc1267:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 49153)){
		goto loc1268;
	}else{
		goto loc1272;
	}

	loc1268:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1269;

	loc1269:
	SafeMotionIO_SF_EmergencyStop_1_Error = 1;
	goto loc1270;

	loc1270:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1271;

	loc1271:
	goto loc1292;

	loc1272:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32772)){
		goto loc1273;
	}else{
		goto loc1277;
	}

	loc1273:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1274;

	loc1274:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1275;

	loc1275:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1276;

	loc1276:
	goto loc1292;

	loc1277:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32773)){
		goto loc1278;
	}else{
		goto loc1282;
	}

	loc1278:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1279;

	loc1279:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1280;

	loc1280:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1281;

	loc1281:
	goto loc1292;

	loc1282:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 49154)){
		goto loc1283;
	}else{
		goto loc1287;
	}

	loc1283:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1284;

	loc1284:
	SafeMotionIO_SF_EmergencyStop_1_Error = 1;
	goto loc1285;

	loc1285:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc1286;

	loc1286:
	goto loc1292;

	loc1287:
	if ((SafeMotionIO_SF_EmergencyStop_1___TEMP1 == 32768)){
		goto loc1288;
	}else{
		goto loc1292;
	}

	loc1288:
	SafeMotionIO_SF_EmergencyStop_1_Ready = 1;
	goto loc1289;

	loc1289:
	SafeMotionIO_SF_EmergencyStop_1_Error = 0;
	goto loc1290;

	loc1290:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopOut = 1;
	goto loc1291;

	loc1291:
	goto loc1292;

	loc1292:
	goto loc1305;

	loc1293:
	SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_Q = (SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_M)));
	goto loc1294;

	loc1294:
	SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_M = SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_CLK;
	goto loc1295;

	loc1295:
	goto loc1298;

	loc1296:
	SafeMotionIO_SF_EmergencyStop_1_R_TRIGatReset_CLK = SafeMotionIO_SF_EmergencyStop_1_Reset;
	goto loc1297;

	loc1297:
	goto loc1293;

	loc1298:
	goto loc1185;

	loc1299:
	SafeMotionIO_SF_EmergencyStop_1_Activate = 1;
	goto loc1300;

	loc1300:
	SafeMotionIO_SF_EmergencyStop_1_S_EStopIn = SafeMotionIO_S1_S_EStopIn;
	goto loc1301;

	loc1301:
	SafeMotionIO_SF_EmergencyStop_1_S_StartReset = 0;
	goto loc1302;

	loc1302:
	SafeMotionIO_SF_EmergencyStop_1_S_AutoReset = 0;
	goto loc1303;

	loc1303:
	SafeMotionIO_SF_EmergencyStop_1_Reset = SafeMotionIO_S0_Reset;
	goto loc1304;

	loc1304:
	goto loc1182;

	loc1305:
	goto loc815;

	loc1306:
	SafeMotionIO_SF_SafetyRequest_2___TEMP1 = 0;
	goto loc1307;

	loc1307:
	SafeMotionIO_SF_SafetyRequest_2___TEMP0 = 0;
	goto loc1308;

	loc1308:
	goto loc1456;

	loc1309:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_Activate))){
		goto loc1310;
	}else{
		goto loc1312;
	}

	loc1310:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 0;
	goto loc1311;

	loc1311:
	goto loc1383;

	loc1312:
	SafeMotionIO_SF_SafetyRequest_2___TEMP0 = SafeMotionIO_SF_SafetyRequest_2_DiagCode;
	goto loc1313;

	loc1313:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 0)){
		goto loc1314;
	}else{
		goto loc1317;
	}

	loc1314:
	if (SafeMotionIO_SF_SafetyRequest_2_Activate){
		goto loc1315;
	}else{
		goto loc1316;
	}

	loc1315:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32769;
	goto loc1316;

	loc1316:
	goto loc1383;

	loc1317:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32768)){
		goto loc1318;
	}else{
		goto loc1324;
	}

	loc1318:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge))){
		goto loc1319;
	}else{
		goto loc1321;
	}

	loc1319:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49154;
	goto loc1320;

	loc1320:
	goto loc1323;

	loc1321:
	if (SafeMotionIO_SF_SafetyRequest_2_S_OpMode){
		goto loc1322;
	}else{
		goto loc1323;
	}

	loc1322:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32786;
	goto loc1323;

	loc1323:
	goto loc1383;

	loc1324:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32769)){
		goto loc1325;
	}else{
		goto loc1331;
	}

	loc1325:
	if ((SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q && (!(SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge)))){
		goto loc1326;
	}else{
		goto loc1328;
	}

	loc1326:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32770;
	goto loc1327;

	loc1327:
	goto loc1330;

	loc1328:
	if ((SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q && SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge)){
		goto loc1329;
	}else{
		goto loc1330;
	}

	loc1329:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32786;
	goto loc1330;

	loc1330:
	goto loc1383;

	loc1331:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32770)){
		goto loc1332;
	}else{
		goto loc1339;
	}

	loc1332:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_S_OpMode))){
		goto loc1333;
	}else{
		goto loc1336;
	}

	loc1333:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32771;
	goto loc1334;

	loc1334:
	goto loc1472;

	loc1335:
	goto loc1338;

	loc1336:
	if (SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge){
		goto loc1337;
	}else{
		goto loc1338;
	}

	loc1337:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32786;
	goto loc1338;

	loc1338:
	goto loc1383;

	loc1339:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32771)){
		goto loc1340;
	}else{
		goto loc1349;
	}

	loc1340:
	if (SafeMotionIO_SF_SafetyRequest_2_T1_Q){
		goto loc1341;
	}else{
		goto loc1343;
	}

	loc1341:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49155;
	goto loc1342;

	loc1342:
	goto loc1348;

	loc1343:
	if (SafeMotionIO_SF_SafetyRequest_2_S_OpMode){
		goto loc1344;
	}else{
		goto loc1346;
	}

	loc1344:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32786;
	goto loc1345;

	loc1345:
	goto loc1348;

	loc1346:
	if (SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge){
		goto loc1347;
	}else{
		goto loc1348;
	}

	loc1347:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32768;
	goto loc1348;

	loc1348:
	goto loc1383;

	loc1349:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32773)){
		goto loc1350;
	}else{
		goto loc1353;
	}

	loc1350:
	if (SafeMotionIO_SF_SafetyRequest_2_S_OpMode){
		goto loc1351;
	}else{
		goto loc1352;
	}

	loc1351:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32786;
	goto loc1352;

	loc1352:
	goto loc1383;

	loc1353:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 32786)){
		goto loc1354;
	}else{
		goto loc1361;
	}

	loc1354:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge))){
		goto loc1355;
	}else{
		goto loc1357;
	}

	loc1355:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32770;
	goto loc1356;

	loc1356:
	goto loc1360;

	loc1357:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_S_OpMode))){
		goto loc1358;
	}else{
		goto loc1360;
	}

	loc1358:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32771;
	goto loc1359;

	loc1359:
	goto loc1489;

	loc1360:
	goto loc1383;

	loc1361:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 49154)){
		goto loc1362;
	}else{
		goto loc1368;
	}

	loc1362:
	if ((SafeMotionIO_SF_SafetyRequest_2_Reset && (!(SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q)))){
		goto loc1363;
	}else{
		goto loc1365;
	}

	loc1363:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49156;
	goto loc1364;

	loc1364:
	goto loc1367;

	loc1365:
	if (SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q){
		goto loc1366;
	}else{
		goto loc1367;
	}

	loc1366:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32773;
	goto loc1367;

	loc1367:
	goto loc1383;

	loc1368:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 49155)){
		goto loc1369;
	}else{
		goto loc1375;
	}

	loc1369:
	if ((SafeMotionIO_SF_SafetyRequest_2_Reset && (!(SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q)))){
		goto loc1370;
	}else{
		goto loc1372;
	}

	loc1370:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49157;
	goto loc1371;

	loc1371:
	goto loc1374;

	loc1372:
	if (SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q){
		goto loc1373;
	}else{
		goto loc1374;
	}

	loc1373:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 32773;
	goto loc1374;

	loc1374:
	goto loc1383;

	loc1375:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 49156)){
		goto loc1376;
	}else{
		goto loc1379;
	}

	loc1376:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_Reset))){
		goto loc1377;
	}else{
		goto loc1378;
	}

	loc1377:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49154;
	goto loc1378;

	loc1378:
	goto loc1383;

	loc1379:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP0 == 49157)){
		goto loc1380;
	}else{
		goto loc1383;
	}

	loc1380:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_Reset))){
		goto loc1381;
	}else{
		goto loc1382;
	}

	loc1381:
	SafeMotionIO_SF_SafetyRequest_2_DiagCode = 49155;
	goto loc1382;

	loc1382:
	goto loc1383;

	loc1383:
	if ((!((SafeMotionIO_SF_SafetyRequest_2_DiagCode == 32771)))){
		goto loc1384;
	}else{
		goto loc1385;
	}

	loc1384:
	goto loc1506;

	loc1385:
	SafeMotionIO_SF_SafetyRequest_2___TEMP1 = SafeMotionIO_SF_SafetyRequest_2_DiagCode;
	goto loc1386;

	loc1386:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 0)){
		goto loc1387;
	}else{
		goto loc1392;
	}

	loc1387:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 0;
	goto loc1388;

	loc1388:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1389;

	loc1389:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1390;

	loc1390:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1391;

	loc1391:
	goto loc1452;

	loc1392:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32768)){
		goto loc1393;
	}else{
		goto loc1398;
	}

	loc1393:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1394;

	loc1394:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 1;
	goto loc1395;

	loc1395:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1396;

	loc1396:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1397;

	loc1397:
	goto loc1452;

	loc1398:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32769)){
		goto loc1399;
	}else{
		goto loc1404;
	}

	loc1399:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1400;

	loc1400:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1401;

	loc1401:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1402;

	loc1402:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1403;

	loc1403:
	goto loc1452;

	loc1404:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32770)){
		goto loc1405;
	}else{
		goto loc1410;
	}

	loc1405:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1406;

	loc1406:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1407;

	loc1407:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 1;
	goto loc1408;

	loc1408:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1409;

	loc1409:
	goto loc1452;

	loc1410:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32771)){
		goto loc1411;
	}else{
		goto loc1416;
	}

	loc1411:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1412;

	loc1412:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1413;

	loc1413:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1414;

	loc1414:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1415;

	loc1415:
	goto loc1452;

	loc1416:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32773)){
		goto loc1417;
	}else{
		goto loc1422;
	}

	loc1417:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1418;

	loc1418:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1419;

	loc1419:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1420;

	loc1420:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1421;

	loc1421:
	goto loc1452;

	loc1422:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 32786)){
		goto loc1423;
	}else{
		goto loc1428;
	}

	loc1423:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1424;

	loc1424:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1425;

	loc1425:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 1;
	goto loc1426;

	loc1426:
	SafeMotionIO_SF_SafetyRequest_2_Error = 0;
	goto loc1427;

	loc1427:
	goto loc1452;

	loc1428:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 49154)){
		goto loc1429;
	}else{
		goto loc1434;
	}

	loc1429:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1430;

	loc1430:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1431;

	loc1431:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1432;

	loc1432:
	SafeMotionIO_SF_SafetyRequest_2_Error = 1;
	goto loc1433;

	loc1433:
	goto loc1452;

	loc1434:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 49155)){
		goto loc1435;
	}else{
		goto loc1440;
	}

	loc1435:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1436;

	loc1436:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1437;

	loc1437:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1438;

	loc1438:
	SafeMotionIO_SF_SafetyRequest_2_Error = 1;
	goto loc1439;

	loc1439:
	goto loc1452;

	loc1440:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 49156)){
		goto loc1441;
	}else{
		goto loc1446;
	}

	loc1441:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1442;

	loc1442:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1443;

	loc1443:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1444;

	loc1444:
	SafeMotionIO_SF_SafetyRequest_2_Error = 1;
	goto loc1445;

	loc1445:
	goto loc1452;

	loc1446:
	if ((SafeMotionIO_SF_SafetyRequest_2___TEMP1 == 49157)){
		goto loc1447;
	}else{
		goto loc1452;
	}

	loc1447:
	SafeMotionIO_SF_SafetyRequest_2_Ready = 1;
	goto loc1448;

	loc1448:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyActive = 0;
	goto loc1449;

	loc1449:
	SafeMotionIO_SF_SafetyRequest_2_S_SafetyRequest = 0;
	goto loc1450;

	loc1450:
	SafeMotionIO_SF_SafetyRequest_2_Error = 1;
	goto loc1451;

	loc1451:
	goto loc1452;

	loc1452:
	goto loc1516;

	loc1453:
	SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_Q = (SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_M)));
	goto loc1454;

	loc1454:
	SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_M = SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_CLK;
	goto loc1455;

	loc1455:
	goto loc1458;

	loc1456:
	SafeMotionIO_SF_SafetyRequest_2_R_TRIGatReset_CLK = SafeMotionIO_SF_SafetyRequest_2_Reset;
	goto loc1457;

	loc1457:
	goto loc1453;

	loc1458:
	goto loc1309;

	loc1459:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = 0;
	goto loc1460;

	loc1460:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_IN))){
		goto loc1461;
	}else{
		goto loc1463;
	}

	loc1461:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = 0;
	goto loc1462;

	loc1462:
	goto loc1467;

	loc1463:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_Q))){
		goto loc1464;
	}else{
		goto loc1467;
	}

	loc1464:
	goto loc1470;

	loc1465:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1466;

	loc1466:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0;
	goto loc1467;

	loc1467:
	goto loc1475;

	loc1468:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1469;

	loc1469:
	goto loc1471;

	loc1470:
	goto loc1468;

	loc1471:
	goto loc1465;

	loc1472:
	SafeMotionIO_SF_SafetyRequest_2_T1_IN = 1;
	goto loc1473;

	loc1473:
	SafeMotionIO_SF_SafetyRequest_2_T1_PT = SafeMotionIO_SF_SafetyRequest_2_MonitoringTime;
	goto loc1474;

	loc1474:
	goto loc1459;

	loc1475:
	goto loc1335;

	loc1476:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = 0;
	goto loc1477;

	loc1477:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_IN))){
		goto loc1478;
	}else{
		goto loc1480;
	}

	loc1478:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = 0;
	goto loc1479;

	loc1479:
	goto loc1484;

	loc1480:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_Q))){
		goto loc1481;
	}else{
		goto loc1484;
	}

	loc1481:
	goto loc1487;

	loc1482:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1483;

	loc1483:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0;
	goto loc1484;

	loc1484:
	goto loc1492;

	loc1485:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1486;

	loc1486:
	goto loc1488;

	loc1487:
	goto loc1485;

	loc1488:
	goto loc1482;

	loc1489:
	SafeMotionIO_SF_SafetyRequest_2_T1_IN = 1;
	goto loc1490;

	loc1490:
	SafeMotionIO_SF_SafetyRequest_2_T1_PT = SafeMotionIO_SF_SafetyRequest_2_MonitoringTime;
	goto loc1491;

	loc1491:
	goto loc1476;

	loc1492:
	goto loc1360;

	loc1493:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = 0;
	goto loc1494;

	loc1494:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_IN))){
		goto loc1495;
	}else{
		goto loc1497;
	}

	loc1495:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = 0;
	goto loc1496;

	loc1496:
	goto loc1501;

	loc1497:
	if ((!(SafeMotionIO_SF_SafetyRequest_2_T1_Q))){
		goto loc1498;
	}else{
		goto loc1501;
	}

	loc1498:
	goto loc1504;

	loc1499:
	SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1500;

	loc1500:
	SafeMotionIO_SF_SafetyRequest_2_T1_Q = SafeMotionIO_SF_SafetyRequest_2_T1___TEMP0;
	goto loc1501;

	loc1501:
	goto loc1509;

	loc1502:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1503;

	loc1503:
	goto loc1505;

	loc1504:
	goto loc1502;

	loc1505:
	goto loc1499;

	loc1506:
	SafeMotionIO_SF_SafetyRequest_2_T1_IN = 0;
	goto loc1507;

	loc1507:
	SafeMotionIO_SF_SafetyRequest_2_T1_PT = SafeMotionIO_SF_SafetyRequest_2_MonitoringTime;
	goto loc1508;

	loc1508:
	goto loc1493;

	loc1509:
	goto loc1385;

	loc1510:
	SafeMotionIO_SF_SafetyRequest_2_Activate = 1;
	goto loc1511;

	loc1511:
	SafeMotionIO_SF_SafetyRequest_2_S_OpMode = SafeMotionIO_S_AutoMode;
	goto loc1512;

	loc1512:
	SafeMotionIO_SF_SafetyRequest_2_S_Acknowledge = SafeMotionIO_M1_S_AcknowledgeSafeMotion;
	goto loc1513;

	loc1513:
	SafeMotionIO_SF_SafetyRequest_2_MonitoringTime = 100;
	goto loc1514;

	loc1514:
	SafeMotionIO_SF_SafetyRequest_2_Reset = SafeMotionIO_S0_Reset;
	goto loc1515;

	loc1515:
	goto loc1306;

	loc1516:
	goto loc817;

	loc1517:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49184)){
		goto loc1518;
	}else{
		goto loc1527;
	}

	loc1518:
	if ((!(((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)))){
		goto loc1519;
	}else{
		goto loc1521;
	}

	loc1519:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49168;
	goto loc1520;

	loc1520:
	goto loc1526;

	loc1521:
	if (((SafeMotionIO_SF_EnableSwitch_1_Reset && (!(SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q))) && (!(SafeMotionIO_SF_EnableSwitch_1_S_AutoReset)))){
		goto loc1522;
	}else{
		goto loc1524;
	}

	loc1522:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49153;
	goto loc1523;

	loc1523:
	goto loc1526;

	loc1524:
	if ((SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q || SafeMotionIO_SF_EnableSwitch_1_S_AutoReset)){
		goto loc1525;
	}else{
		goto loc1526;
	}

	loc1525:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32774;
	goto loc1526;

	loc1526:
	goto loc1541;

	loc1527:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49200)){
		goto loc1528;
	}else{
		goto loc1531;
	}

	loc1528:
	if ((!((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)))){
		goto loc1529;
	}else{
		goto loc1530;
	}

	loc1529:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49216;
	goto loc1530;

	loc1530:
	goto loc1541;

	loc1531:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49216)){
		goto loc1532;
	}else{
		goto loc1541;
	}

	loc1532:
	if ((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1533;
	}else{
		goto loc1535;
	}

	loc1533:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49200;
	goto loc1534;

	loc1534:
	goto loc1540;

	loc1535:
	if (((SafeMotionIO_SF_EnableSwitch_1_Reset && SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q) && (!(SafeMotionIO_SF_EnableSwitch_1_S_AutoReset)))){
		goto loc1536;
	}else{
		goto loc1538;
	}

	loc1536:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49154;
	goto loc1537;

	loc1537:
	goto loc1540;

	loc1538:
	if ((SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q || SafeMotionIO_SF_EnableSwitch_1_S_AutoReset)){
		goto loc1539;
	}else{
		goto loc1540;
	}

	loc1539:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32775;
	goto loc1540;

	loc1540:
	goto loc1541;

	loc1541:
	SafeMotionIO_SF_EnableSwitch_1___TEMP1 = SafeMotionIO_SF_EnableSwitch_1_DiagCode;
	goto loc1542;

	loc1542:
	if (((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49153) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49154) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49168) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49184) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49200) || (SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 49216))))))){
		goto loc1543;
	}else{
		goto loc1547;
	}

	loc1543:
	SafeMotionIO_SF_EnableSwitch_1_Ready = 1;
	goto loc1544;

	loc1544:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut = 0;
	goto loc1545;

	loc1545:
	SafeMotionIO_SF_EnableSwitch_1_Error = 1;
	goto loc1546;

	loc1546:
	goto loc1562;

	loc1547:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 0)){
		goto loc1548;
	}else{
		goto loc1552;
	}

	loc1548:
	SafeMotionIO_SF_EnableSwitch_1_Ready = 0;
	goto loc1549;

	loc1549:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut = 0;
	goto loc1550;

	loc1550:
	SafeMotionIO_SF_EnableSwitch_1_Error = 0;
	goto loc1551;

	loc1551:
	goto loc1562;

	loc1552:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 32768)){
		goto loc1553;
	}else{
		goto loc1557;
	}

	loc1553:
	SafeMotionIO_SF_EnableSwitch_1_Ready = 1;
	goto loc1554;

	loc1554:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut = 1;
	goto loc1555;

	loc1555:
	SafeMotionIO_SF_EnableSwitch_1_Error = 0;
	goto loc1556;

	loc1556:
	goto loc1562;

	loc1557:
	if (((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 32772) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 32773) || ((SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 32774) || (SafeMotionIO_SF_EnableSwitch_1___TEMP1 == 32775))))){
		goto loc1558;
	}else{
		goto loc1562;
	}

	loc1558:
	SafeMotionIO_SF_EnableSwitch_1_Ready = 1;
	goto loc1559;

	loc1559:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchOut = 0;
	goto loc1560;

	loc1560:
	SafeMotionIO_SF_EnableSwitch_1_Error = 0;
	goto loc1561;

	loc1561:
	goto loc1562;

	loc1562:
	goto loc1634;

	loc1563:
	SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_Q = (SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_M)));
	goto loc1564;

	loc1564:
	SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_M = SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_CLK;
	goto loc1565;

	loc1565:
	goto loc1568;

	loc1566:
	SafeMotionIO_SF_EnableSwitch_1_R_TRIGatReset_CLK = SafeMotionIO_SF_EnableSwitch_1_Reset;
	goto loc1567;

	loc1567:
	goto loc1563;

	loc1568:
	goto loc1572;

	loc1569:
	SafeMotionIO_SF_EnableSwitch_1___TEMP1 = 0;
	goto loc1570;

	loc1570:
	SafeMotionIO_SF_EnableSwitch_1___TEMP0 = 0;
	goto loc1571;

	loc1571:
	goto loc1566;

	loc1572:
	if ((!(SafeMotionIO_SF_EnableSwitch_1_Activate))){
		goto loc1573;
	}else{
		goto loc1575;
	}

	loc1573:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 0;
	goto loc1574;

	loc1574:
	goto loc1541;

	loc1575:
	if ((!(SafeMotionIO_SF_EnableSwitch_1_S_SafetyActive))){
		goto loc1576;
	}else{
		goto loc1578;
	}

	loc1576:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32772;
	goto loc1577;

	loc1577:
	goto loc1541;

	loc1578:
	SafeMotionIO_SF_EnableSwitch_1___TEMP0 = SafeMotionIO_SF_EnableSwitch_1_DiagCode;
	goto loc1579;

	loc1579:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 0)){
		goto loc1580;
	}else{
		goto loc1583;
	}

	loc1580:
	if (SafeMotionIO_SF_EnableSwitch_1_Activate){
		goto loc1581;
	}else{
		goto loc1582;
	}

	loc1581:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32772;
	goto loc1582;

	loc1582:
	goto loc1541;

	loc1583:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 32768)){
		goto loc1584;
	}else{
		goto loc1590;
	}

	loc1584:
	if (((!((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 || SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2))) || (SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && (!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2))))){
		goto loc1585;
	}else{
		goto loc1587;
	}

	loc1585:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32775;
	goto loc1586;

	loc1586:
	goto loc1589;

	loc1587:
	if (((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1588;
	}else{
		goto loc1589;
	}

	loc1588:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32774;
	goto loc1589;

	loc1589:
	goto loc1541;

	loc1590:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 32772)){
		goto loc1591;
	}else{
		goto loc1594;
	}

	loc1591:
	if (SafeMotionIO_SF_EnableSwitch_1_S_SafetyActive){
		goto loc1592;
	}else{
		goto loc1593;
	}

	loc1592:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32773;
	goto loc1593;

	loc1593:
	goto loc1541;

	loc1594:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 32773)){
		goto loc1595;
	}else{
		goto loc1601;
	}

	loc1595:
	if ((!(((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)))){
		goto loc1596;
	}else{
		goto loc1598;
	}

	loc1596:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49168;
	goto loc1597;

	loc1597:
	goto loc1600;

	loc1598:
	if (((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1599;
	}else{
		goto loc1600;
	}

	loc1599:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32774;
	goto loc1600;

	loc1600:
	goto loc1541;

	loc1601:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 32774)){
		goto loc1602;
	}else{
		goto loc1608;
	}

	loc1602:
	if ((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1603;
	}else{
		goto loc1605;
	}

	loc1603:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32768;
	goto loc1604;

	loc1604:
	goto loc1607;

	loc1605:
	if (((!((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 || SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2))) || (SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && (!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2))))){
		goto loc1606;
	}else{
		goto loc1607;
	}

	loc1606:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32775;
	goto loc1607;

	loc1607:
	goto loc1541;

	loc1608:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 32775)){
		goto loc1609;
	}else{
		goto loc1615;
	}

	loc1609:
	if ((SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1610;
	}else{
		goto loc1612;
	}

	loc1610:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49200;
	goto loc1611;

	loc1611:
	goto loc1614;

	loc1612:
	if (((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1613;
	}else{
		goto loc1614;
	}

	loc1613:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 32774;
	goto loc1614;

	loc1614:
	goto loc1541;

	loc1615:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49153)){
		goto loc1616;
	}else{
		goto loc1619;
	}

	loc1616:
	if ((!(SafeMotionIO_SF_EnableSwitch_1_Reset))){
		goto loc1617;
	}else{
		goto loc1618;
	}

	loc1617:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49184;
	goto loc1618;

	loc1618:
	goto loc1541;

	loc1619:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49154)){
		goto loc1620;
	}else{
		goto loc1623;
	}

	loc1620:
	if ((!(SafeMotionIO_SF_EnableSwitch_1_Reset))){
		goto loc1621;
	}else{
		goto loc1622;
	}

	loc1621:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49216;
	goto loc1622;

	loc1622:
	goto loc1541;

	loc1623:
	if ((SafeMotionIO_SF_EnableSwitch_1___TEMP0 == 49168)){
		goto loc1624;
	}else{
		goto loc1517;
	}

	loc1624:
	if (((!(SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1)) && SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2)){
		goto loc1625;
	}else{
		goto loc1626;
	}

	loc1625:
	SafeMotionIO_SF_EnableSwitch_1_DiagCode = 49184;
	goto loc1626;

	loc1626:
	goto loc1541;

	loc1627:
	SafeMotionIO_SF_EnableSwitch_1_Activate = 1;
	goto loc1628;

	loc1628:
	SafeMotionIO_SF_EnableSwitch_1_S_SafetyActive = (SafeMotionIO_S_SafeMotionActive && SafeMotionIO_S_SetupMode);
	goto loc1629;

	loc1629:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh1 = SafeMotionIO_S4_S_EnableSwitchCh1;
	goto loc1630;

	loc1630:
	SafeMotionIO_SF_EnableSwitch_1_S_EnableSwitchCh2 = SafeMotionIO_S4_S_EnableSwitchCh2;
	goto loc1631;

	loc1631:
	SafeMotionIO_SF_EnableSwitch_1_S_AutoReset = 0;
	goto loc1632;

	loc1632:
	SafeMotionIO_SF_EnableSwitch_1_Reset = SafeMotionIO_S0_Reset;
	goto loc1633;

	loc1633:
	goto loc1569;

	loc1634:
	goto loc820;

	loc1635:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 49156)){
		goto loc1636;
	}else{
		goto loc1639;
	}

	loc1636:
	if ((!(SafeMotionIO_SF_ModeSelector_1_Reset))){
		goto loc1637;
	}else{
		goto loc1638;
	}

	loc1637:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49154;
	goto loc1638;

	loc1638:
	goto loc1639;

	loc1639:
	SafeMotionIO_SF_ModeSelector_1___TEMP1 = SafeMotionIO_SF_ModeSelector_1_DiagCode;
	goto loc1640;

	loc1640:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 0)){
		goto loc1641;
	}else{
		goto loc1653;
	}

	loc1641:
	SafeMotionIO_SF_ModeSelector_1_Ready = 0;
	goto loc1642;

	loc1642:
	SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel = 0;
	goto loc1643;

	loc1643:
	SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel = 0;
	goto loc1644;

	loc1644:
	SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel = 0;
	goto loc1645;

	loc1645:
	SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel = 0;
	goto loc1646;

	loc1646:
	SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel = 0;
	goto loc1647;

	loc1647:
	SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel = 0;
	goto loc1648;

	loc1648:
	SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel = 0;
	goto loc1649;

	loc1649:
	SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel = 0;
	goto loc1650;

	loc1650:
	SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 0;
	goto loc1651;

	loc1651:
	SafeMotionIO_SF_ModeSelector_1_Error = 0;
	goto loc1652;

	loc1652:
	goto loc1697;

	loc1653:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 32773)){
		goto loc1654;
	}else{
		goto loc1666;
	}

	loc1654:
	SafeMotionIO_SF_ModeSelector_1_Ready = 1;
	goto loc1655;

	loc1655:
	SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel = 0;
	goto loc1656;

	loc1656:
	SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel = 0;
	goto loc1657;

	loc1657:
	SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel = 0;
	goto loc1658;

	loc1658:
	SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel = 0;
	goto loc1659;

	loc1659:
	SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel = 0;
	goto loc1660;

	loc1660:
	SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel = 0;
	goto loc1661;

	loc1661:
	SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel = 0;
	goto loc1662;

	loc1662:
	SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel = 0;
	goto loc1663;

	loc1663:
	SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 0;
	goto loc1664;

	loc1664:
	SafeMotionIO_SF_ModeSelector_1_Error = 0;
	goto loc1665;

	loc1665:
	goto loc1697;

	loc1666:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 32768)){
		goto loc1667;
	}else{
		goto loc1679;
	}

	loc1667:
	SafeMotionIO_SF_ModeSelector_1_Ready = 1;
	goto loc1668;

	loc1668:
	SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode0;
	goto loc1669;

	loc1669:
	SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode1;
	goto loc1670;

	loc1670:
	SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode2;
	goto loc1671;

	loc1671:
	SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode3;
	goto loc1672;

	loc1672:
	SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode4;
	goto loc1673;

	loc1673:
	SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode5;
	goto loc1674;

	loc1674:
	SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode6;
	goto loc1675;

	loc1675:
	SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel = SafeMotionIO_SF_ModeSelector_1_S_Mode7;
	goto loc1676;

	loc1676:
	SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 1;
	goto loc1677;

	loc1677:
	SafeMotionIO_SF_ModeSelector_1_Error = 0;
	goto loc1678;

	loc1678:
	goto loc1697;

	loc1679:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 32772)){
		goto loc1680;
	}else{
		goto loc1684;
	}

	loc1680:
	SafeMotionIO_SF_ModeSelector_1_Ready = 1;
	goto loc1681;

	loc1681:
	SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 1;
	goto loc1682;

	loc1682:
	SafeMotionIO_SF_ModeSelector_1_Error = 0;
	goto loc1683;

	loc1683:
	goto loc1697;

	loc1684:
	if (((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 49153) || ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 49154) || ((SafeMotionIO_SF_ModeSelector_1___TEMP1 == 49155) || (SafeMotionIO_SF_ModeSelector_1___TEMP1 == 49156))))){
		goto loc1685;
	}else{
		goto loc1697;
	}

	loc1685:
	SafeMotionIO_SF_ModeSelector_1_Ready = 1;
	goto loc1686;

	loc1686:
	SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel = 0;
	goto loc1687;

	loc1687:
	SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel = 0;
	goto loc1688;

	loc1688:
	SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel = 0;
	goto loc1689;

	loc1689:
	SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel = 0;
	goto loc1690;

	loc1690:
	SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel = 0;
	goto loc1691;

	loc1691:
	SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel = 0;
	goto loc1692;

	loc1692:
	SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel = 0;
	goto loc1693;

	loc1693:
	SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel = 0;
	goto loc1694;

	loc1694:
	SafeMotionIO_SF_ModeSelector_1_S_AnyModeSel = 0;
	goto loc1695;

	loc1695:
	SafeMotionIO_SF_ModeSelector_1_Error = 1;
	goto loc1696;

	loc1696:
	goto loc1697;

	loc1697:
	if ((!((SafeMotionIO_SF_ModeSelector_1_DiagCode == 32773)))){
		goto loc1698;
	}else{
		goto loc1699;
	}

	loc1698:
	goto loc1748;

	loc1699:
	goto loc1874;

	loc1700:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = 0;
	goto loc1701;

	loc1701:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_IN))){
		goto loc1702;
	}else{
		goto loc1704;
	}

	loc1702:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = 0;
	goto loc1703;

	loc1703:
	goto loc1708;

	loc1704:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_Q))){
		goto loc1705;
	}else{
		goto loc1708;
	}

	loc1705:
	goto loc1711;

	loc1706:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1707;

	loc1707:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0;
	goto loc1708;

	loc1708:
	goto loc1716;

	loc1709:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1710;

	loc1710:
	goto loc1712;

	loc1711:
	goto loc1709;

	loc1712:
	goto loc1706;

	loc1713:
	SafeMotionIO_SF_ModeSelector_1_T_1_IN = 1;
	goto loc1714;

	loc1714:
	SafeMotionIO_SF_ModeSelector_1_T_1_PT = SafeMotionIO_SF_ModeSelector_1_ModeMonitorTime;
	goto loc1715;

	loc1715:
	goto loc1700;

	loc1716:
	goto loc1814;

	loc1717:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q = (SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_CLK && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_M)));
	goto loc1718;

	loc1718:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_M = SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_CLK;
	goto loc1719;

	loc1719:
	goto loc1722;

	loc1720:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_CLK = SafeMotionIO_SF_ModeSelector_1_Reset;
	goto loc1721;

	loc1721:
	goto loc1717;

	loc1722:
	goto loc1792;

	loc1723:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_Q = (SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_M)));
	goto loc1724;

	loc1724:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_M = SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK;
	goto loc1725;

	loc1725:
	goto loc1728;

	loc1726:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK = 1;
	goto loc1727;

	loc1727:
	goto loc1723;

	loc1728:
	goto loc1809;

	loc1729:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_Q = ((!(SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK)) && SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_M);
	goto loc1730;

	loc1730:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_M = SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK;
	goto loc1731;

	loc1731:
	goto loc1734;

	loc1732:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK = 1;
	goto loc1733;

	loc1733:
	goto loc1729;

	loc1734:
	goto loc1808;

	loc1735:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = 0;
	goto loc1736;

	loc1736:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_IN))){
		goto loc1737;
	}else{
		goto loc1739;
	}

	loc1737:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = 0;
	goto loc1738;

	loc1738:
	goto loc1743;

	loc1739:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_Q))){
		goto loc1740;
	}else{
		goto loc1743;
	}

	loc1740:
	goto loc1746;

	loc1741:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1742;

	loc1742:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0;
	goto loc1743;

	loc1743:
	goto loc1751;

	loc1744:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1745;

	loc1745:
	goto loc1747;

	loc1746:
	goto loc1744;

	loc1747:
	goto loc1741;

	loc1748:
	SafeMotionIO_SF_ModeSelector_1_T_1_IN = 0;
	goto loc1749;

	loc1749:
	SafeMotionIO_SF_ModeSelector_1_T_1_PT = SafeMotionIO_SF_ModeSelector_1_ModeMonitorTime;
	goto loc1750;

	loc1750:
	goto loc1735;

	loc1751:
	goto loc1699;

	loc1752:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_Q = (SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_CLK && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_M)));
	goto loc1753;

	loc1753:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_M = SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_CLK;
	goto loc1754;

	loc1754:
	goto loc1757;

	loc1755:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_CLK = SafeMotionIO_SF_ModeSelector_1_S_SetMode;
	goto loc1756;

	loc1756:
	goto loc1752;

	loc1757:
	goto loc1793;

	loc1758:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_Q = (SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_M)));
	goto loc1759;

	loc1759:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_M = SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK;
	goto loc1760;

	loc1760:
	goto loc1763;

	loc1761:
	SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_CLK = 0;
	goto loc1762;

	loc1762:
	goto loc1758;

	loc1763:
	goto loc1812;

	loc1764:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_Q = ((!(SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK)) && SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_M);
	goto loc1765;

	loc1765:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_M = SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK;
	goto loc1766;

	loc1766:
	goto loc1769;

	loc1767:
	SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_CLK = 0;
	goto loc1768;

	loc1768:
	goto loc1764;

	loc1769:
	goto loc1811;

	loc1770:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = 0;
	goto loc1771;

	loc1771:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_IN))){
		goto loc1772;
	}else{
		goto loc1774;
	}

	loc1772:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = 0;
	goto loc1773;

	loc1773:
	goto loc1778;

	loc1774:
	if ((!(SafeMotionIO_SF_ModeSelector_1_T_1_Q))){
		goto loc1775;
	}else{
		goto loc1778;
	}

	loc1775:
	goto loc1781;

	loc1776:
	SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc1777;

	loc1777:
	SafeMotionIO_SF_ModeSelector_1_T_1_Q = SafeMotionIO_SF_ModeSelector_1_T_1___TEMP0;
	goto loc1778;

	loc1778:
	goto loc1786;

	loc1779:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc1780;

	loc1780:
	goto loc1782;

	loc1781:
	goto loc1779;

	loc1782:
	goto loc1776;

	loc1783:
	SafeMotionIO_SF_ModeSelector_1_T_1_IN = 0;
	goto loc1784;

	loc1784:
	SafeMotionIO_SF_ModeSelector_1_T_1_PT = SafeMotionIO_SF_ModeSelector_1_ModeMonitorTime;
	goto loc1785;

	loc1785:
	goto loc1770;

	loc1786:
	goto loc1817;

	loc1787:
	SafeMotionIO_SF_ModeSelector_1___TEMP1 = 0;
	goto loc1788;

	loc1788:
	SafeMotionIO_SF_ModeSelector_1___TEMP0 = 0;
	goto loc1789;

	loc1789:
	SafeMotionIO_SF_ModeSelector_1_Error2 = 0;
	goto loc1790;

	loc1790:
	SafeMotionIO_SF_ModeSelector_1_Error1 = 0;
	goto loc1791;

	loc1791:
	goto loc1720;

	loc1792:
	goto loc1755;

	loc1793:
	if ((!(SafeMotionIO_SF_ModeSelector_1_Activate))){
		goto loc1794;
	}else{
		goto loc1796;
	}

	loc1794:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 0;
	goto loc1795;

	loc1795:
	goto loc1639;

	loc1796:
	if (((((((((((SafeMotionIO_SF_ModeSelector_1_S_Mode0!=0)?1:0) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode1!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode2!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode3!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode4!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode5!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode6!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode7!=0)?1:0)) > 1)){
		goto loc1797;
	}else{
		goto loc1799;
	}

	loc1797:
	SafeMotionIO_SF_ModeSelector_1_Error1 = 1;
	goto loc1798;

	loc1798:
	goto loc1800;

	loc1799:
	SafeMotionIO_SF_ModeSelector_1_Error1 = 0;
	goto loc1800;

	loc1800:
	SafeMotionIO_SF_ModeSelector_1___TEMP0 = SafeMotionIO_SF_ModeSelector_1_DiagCode;
	goto loc1801;

	loc1801:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 0)){
		goto loc1802;
	}else{
		goto loc1805;
	}

	loc1802:
	if (SafeMotionIO_SF_ModeSelector_1_Activate){
		goto loc1803;
	}else{
		goto loc1804;
	}

	loc1803:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32773;
	goto loc1804;

	loc1804:
	goto loc1639;

	loc1805:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 32773)){
		goto loc1806;
	}else{
		goto loc1827;
	}

	loc1806:
	if (((((((((!(SafeMotionIO_SF_ModeSelector_1_S_Mode0)) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode1))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode2))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode3))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode4))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode5))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode6))) && (!(SafeMotionIO_SF_ModeSelector_1_S_Mode7)))){
		goto loc1807;
	}else{
		goto loc1810;
	}

	loc1807:
	goto loc1732;

	loc1808:
	goto loc1726;

	loc1809:
	goto loc1812;

	loc1810:
	goto loc1767;

	loc1811:
	goto loc1761;

	loc1812:
	if (SafeMotionIO_SF_ModeSelector_1_F_TRIGatModeSel0_Q){
		goto loc1813;
	}else{
		goto loc1815;
	}

	loc1813:
	goto loc1713;

	loc1814:
	goto loc1817;

	loc1815:
	if (SafeMotionIO_SF_ModeSelector_1_R_TRIGatModeSel0_Q){
		goto loc1816;
	}else{
		goto loc1817;
	}

	loc1816:
	goto loc1783;

	loc1817:
	SafeMotionIO_SF_ModeSelector_1_Error2 = SafeMotionIO_SF_ModeSelector_1_T_1_Q;
	goto loc1818;

	loc1818:
	if (SafeMotionIO_SF_ModeSelector_1_Error1){
		goto loc1819;
	}else{
		goto loc1821;
	}

	loc1819:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49153;
	goto loc1820;

	loc1820:
	goto loc1826;

	loc1821:
	if (SafeMotionIO_SF_ModeSelector_1_Error2){
		goto loc1822;
	}else{
		goto loc1824;
	}

	loc1822:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49154;
	goto loc1823;

	loc1823:
	goto loc1826;

	loc1824:
	if ((((SafeMotionIO_SF_ModeSelector_1_AutoSetMode || SafeMotionIO_SF_ModeSelector_1_R_TRIGatSetMode_Q) && SafeMotionIO_SF_ModeSelector_1_S_Unlock) && ((((((((((SafeMotionIO_SF_ModeSelector_1_S_Mode0!=0)?1:0) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode1!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode2!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode3!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode4!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode5!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode6!=0)?1:0)) + ((SafeMotionIO_SF_ModeSelector_1_S_Mode7!=0)?1:0)) == 1))){
		goto loc1825;
	}else{
		goto loc1826;
	}

	loc1825:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32768;
	goto loc1826;

	loc1826:
	goto loc1639;

	loc1827:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 32768)){
		goto loc1828;
	}else{
		goto loc1837;
	}

	loc1828:
	if (SafeMotionIO_SF_ModeSelector_1_Error1){
		goto loc1829;
	}else{
		goto loc1831;
	}

	loc1829:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49153;
	goto loc1830;

	loc1830:
	goto loc1836;

	loc1831:
	if (((((((((!((SafeMotionIO_SF_ModeSelector_1_S_Mode0 == SafeMotionIO_SF_ModeSelector_1_S_Mode0Sel))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode1 == SafeMotionIO_SF_ModeSelector_1_S_Mode1Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode2 == SafeMotionIO_SF_ModeSelector_1_S_Mode2Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode3 == SafeMotionIO_SF_ModeSelector_1_S_Mode3Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode4 == SafeMotionIO_SF_ModeSelector_1_S_Mode4Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode5 == SafeMotionIO_SF_ModeSelector_1_S_Mode5Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode6 == SafeMotionIO_SF_ModeSelector_1_S_Mode6Sel)))) || (!((SafeMotionIO_SF_ModeSelector_1_S_Mode7 == SafeMotionIO_SF_ModeSelector_1_S_Mode7Sel))))){
		goto loc1832;
	}else{
		goto loc1834;
	}

	loc1832:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32773;
	goto loc1833;

	loc1833:
	goto loc1836;

	loc1834:
	if ((!(SafeMotionIO_SF_ModeSelector_1_S_Unlock))){
		goto loc1835;
	}else{
		goto loc1836;
	}

	loc1835:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32772;
	goto loc1836;

	loc1836:
	goto loc1639;

	loc1837:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 32772)){
		goto loc1838;
	}else{
		goto loc1841;
	}

	loc1838:
	if (SafeMotionIO_SF_ModeSelector_1_S_Unlock){
		goto loc1839;
	}else{
		goto loc1840;
	}

	loc1839:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32768;
	goto loc1840;

	loc1840:
	goto loc1639;

	loc1841:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 49153)){
		goto loc1842;
	}else{
		goto loc1848;
	}

	loc1842:
	if ((SafeMotionIO_SF_ModeSelector_1_Reset && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q)))){
		goto loc1843;
	}else{
		goto loc1845;
	}

	loc1843:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49155;
	goto loc1844;

	loc1844:
	goto loc1847;

	loc1845:
	if (SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q){
		goto loc1846;
	}else{
		goto loc1847;
	}

	loc1846:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32773;
	goto loc1847;

	loc1847:
	goto loc1639;

	loc1848:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 49154)){
		goto loc1849;
	}else{
		goto loc1855;
	}

	loc1849:
	if ((SafeMotionIO_SF_ModeSelector_1_Reset && (!(SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q)))){
		goto loc1850;
	}else{
		goto loc1852;
	}

	loc1850:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49156;
	goto loc1851;

	loc1851:
	goto loc1854;

	loc1852:
	if (SafeMotionIO_SF_ModeSelector_1_R_TRIGatReset_Q){
		goto loc1853;
	}else{
		goto loc1854;
	}

	loc1853:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 32773;
	goto loc1854;

	loc1854:
	goto loc1639;

	loc1855:
	if ((SafeMotionIO_SF_ModeSelector_1___TEMP0 == 49155)){
		goto loc1856;
	}else{
		goto loc1635;
	}

	loc1856:
	if ((!(SafeMotionIO_SF_ModeSelector_1_Reset))){
		goto loc1857;
	}else{
		goto loc1858;
	}

	loc1857:
	SafeMotionIO_SF_ModeSelector_1_DiagCode = 49153;
	goto loc1858;

	loc1858:
	goto loc1639;

	loc1859:
	SafeMotionIO_SF_ModeSelector_1_Activate = 1;
	goto loc1860;

	loc1860:
	SafeMotionIO_SF_ModeSelector_1_S_Mode0 = SafeMotionIO_S2_S_AutoMode;
	goto loc1861;

	loc1861:
	SafeMotionIO_SF_ModeSelector_1_S_Mode1 = SafeMotionIO_S2_S_SetupMode;
	goto loc1862;

	loc1862:
	SafeMotionIO_SF_ModeSelector_1_S_Mode2 = 0;
	goto loc1863;

	loc1863:
	SafeMotionIO_SF_ModeSelector_1_S_Mode3 = 0;
	goto loc1864;

	loc1864:
	SafeMotionIO_SF_ModeSelector_1_S_Mode4 = 0;
	goto loc1865;

	loc1865:
	SafeMotionIO_SF_ModeSelector_1_S_Mode5 = 0;
	goto loc1866;

	loc1866:
	SafeMotionIO_SF_ModeSelector_1_S_Mode6 = 0;
	goto loc1867;

	loc1867:
	SafeMotionIO_SF_ModeSelector_1_S_Mode7 = 0;
	goto loc1868;

	loc1868:
	SafeMotionIO_SF_ModeSelector_1_S_Unlock = 1;
	goto loc1869;

	loc1869:
	SafeMotionIO_SF_ModeSelector_1_S_SetMode = 0;
	goto loc1870;

	loc1870:
	SafeMotionIO_SF_ModeSelector_1_AutoSetMode = 1;
	goto loc1871;

	loc1871:
	SafeMotionIO_SF_ModeSelector_1_ModeMonitorTime = 50;
	goto loc1872;

	loc1872:
	SafeMotionIO_SF_ModeSelector_1_Reset = SafeMotionIO_S0_Reset;
	goto loc1873;

	loc1873:
	goto loc1787;

	loc1874:
	goto loc818;


}
