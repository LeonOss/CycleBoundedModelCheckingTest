// FORMULA: EF (Error_ESPE1 & S3_Drive_Reset & S_Stopped)
// BOUND: 12

extern int __VERIFIER_nondet_bool();
extern int __VERIFIER_nondet_int();
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(){
	int UNKNOWN_BOOL_UNKNOWN_BOOL = 0;
	int DiagnosticsConcept_S1_S_EStopIn_1 = 0;
	int DiagnosticsConcept_S1_S_EStopIn_2 = 0;
	int DiagnosticsConcept_S2_S_ESPE_In = 0;
	int DiagnosticsConcept_S0_Reset = 0;
	int DiagnosticsConcept_S3_Drive_Reset = 0;
	int DiagnosticsConcept_AxisD_1 = 0;
	int DiagnosticsConcept_InputDevice1_active = 0;
	int DiagnosticsConcept_InputDevice2_active = 0;
	int DiagnosticsConcept_Internal_Acknowledge = 0;
	int DiagnosticsConcept_Error_Equiv1 = 0;
	int DiagnosticsConcept_Diag_Equiv1 = 0;
	int DiagnosticsConcept_Error_EStop1 = 0;
	int DiagnosticsConcept_Diag_EStop1 = 0;
	int DiagnosticsConcept_Error_ESPE1 = 0;
	int DiagnosticsConcept_Diag_ESPE1 = 0;
	int DiagnosticsConcept_Error_SafeStop1 = 0;
	int DiagnosticsConcept_Diag_SafeStop1 = 0;
	int DiagnosticsConcept_S_Stopped = 0;
	int DiagnosticsConcept_S_EStopOut = 0;
	int DiagnosticsConcept_SF_Equivalent_1_Activate = 0;
	int DiagnosticsConcept_SF_Equivalent_1_S_ChannelA = 0;
	int DiagnosticsConcept_SF_Equivalent_1_S_ChannelB = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime = 0;
	int DiagnosticsConcept_SF_Equivalent_1_Ready = 0;
	int DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 0;
	int DiagnosticsConcept_SF_Equivalent_1_Error = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiagCode = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	int DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	int DiagnosticsConcept_SF_Equivalent_1___TEMP0 = 0;
	int DiagnosticsConcept_SF_Equivalent_1___TEMP1 = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_Activate = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_S_StartReset = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_S_AutoReset = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_Reset = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_Ready = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_CLK = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_M = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 = 0;
	int DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 = 0;
	int DiagnosticsConcept_SF_ESPE_1_Activate = 0;
	int DiagnosticsConcept_SF_ESPE_1_S_ESPE_In = 0;
	int DiagnosticsConcept_SF_ESPE_1_S_StartReset = 0;
	int DiagnosticsConcept_SF_ESPE_1_S_AutoReset = 0;
	int DiagnosticsConcept_SF_ESPE_1_Reset = 0;
	int DiagnosticsConcept_SF_ESPE_1_Ready = 0;
	int DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	int DiagnosticsConcept_SF_ESPE_1_Error = 0;
	int DiagnosticsConcept_SF_ESPE_1_DiagCode = 0;
	int DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_CLK = 0;
	int DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q = 0;
	int DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_M = 0;
	int DiagnosticsConcept_SF_ESPE_1___TEMP0 = 0;
	int DiagnosticsConcept_SF_ESPE_1___TEMP1 = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_Activate = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_S_StopIn = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_AxisID = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_MonitoringTime = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_Reset = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_Acknowledge = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_Ready = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_S_Stopped = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_Error = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_CLK = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_M = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_T_1_IN = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_T_1_PT = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_T_1_Q = 0;
	int DiagnosticsConcept_SF_SafeStop1_1_T_1___TEMP0 = 0;
	int DiagnosticsConcept_SF_SafeStop1_1___TEMP0 = 0;
	int DiagnosticsConcept_SF_SafeStop1_1___TEMP1 = 0;
	int cycleCount = 0;

	locEntry:
	goto loc448;

	loc434:
	goto loc628;

	loc435:
	goto loc1007;

	loc436:
	goto loc751;

	loc437:
	goto loc882;

	loc438:
	DiagnosticsConcept_S_EStopOut = DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut;
	goto loc439;

	loc439:
	DiagnosticsConcept_Error_Equiv1 = DiagnosticsConcept_SF_Equivalent_1_Error;
	goto loc440;

	loc440:
	DiagnosticsConcept_Diag_Equiv1 = DiagnosticsConcept_SF_Equivalent_1_DiagCode;
	goto loc441;

	loc441:
	DiagnosticsConcept_Error_EStop1 = DiagnosticsConcept_SF_EmergencyStop_1_Error;
	goto loc442;

	loc442:
	DiagnosticsConcept_Diag_EStop1 = DiagnosticsConcept_SF_EmergencyStop_1_DiagCode;
	goto loc443;

	loc443:
	DiagnosticsConcept_Error_ESPE1 = DiagnosticsConcept_SF_ESPE_1_Error;
	goto loc444;

	loc444:
	DiagnosticsConcept_Diag_ESPE1 = DiagnosticsConcept_SF_ESPE_1_DiagCode;
	goto loc445;

	loc445:
	DiagnosticsConcept_Error_SafeStop1 = DiagnosticsConcept_SF_SafeStop1_1_Error;
	goto loc446;

	loc446:
	DiagnosticsConcept_Diag_SafeStop1 = DiagnosticsConcept_SF_SafeStop1_1_DiagCode;
	goto loc447;

	loc447:
	DiagnosticsConcept_S_Stopped = DiagnosticsConcept_SF_SafeStop1_1_S_Stopped;
	goto loc448;

	loc448:
	__VERIFIER_assert((!((((!((DiagnosticsConcept_Error_ESPE1 == (0 != 0)))) && (!((DiagnosticsConcept_S3_Drive_Reset == (0 != 0))))) && (!((DiagnosticsConcept_S_Stopped == (0 != 0))))))));

	DiagnosticsConcept_S1_S_EStopIn_1 = __VERIFIER_nondet_bool();
	DiagnosticsConcept_S1_S_EStopIn_2 = __VERIFIER_nondet_bool();
	DiagnosticsConcept_S2_S_ESPE_In = __VERIFIER_nondet_bool();
	DiagnosticsConcept_S0_Reset = __VERIFIER_nondet_bool();
	DiagnosticsConcept_S3_Drive_Reset = __VERIFIER_nondet_bool();
	DiagnosticsConcept_AxisD_1 = __VERIFIER_nondet_int();
	DiagnosticsConcept_InputDevice1_active = __VERIFIER_nondet_bool();
	DiagnosticsConcept_InputDevice2_active = __VERIFIER_nondet_bool();
	DiagnosticsConcept_Internal_Acknowledge = __VERIFIER_nondet_bool();
	++cycleCount;
	if(cycleCount>12){return 0;}
	goto loc434;

	loc449:
	DiagnosticsConcept_SF_Equivalent_1___TEMP1 = 0;
	goto loc450;

	loc450:
	DiagnosticsConcept_SF_Equivalent_1___TEMP0 = 0;
	goto loc451;

	loc451:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_Activate))){
		goto loc452;
	}else{
		goto loc454;
	}

	loc452:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 0;
	goto loc453;

	loc453:
	goto loc511;

	loc454:
	DiagnosticsConcept_SF_Equivalent_1___TEMP0 = DiagnosticsConcept_SF_Equivalent_1_DiagCode;
	goto loc455;

	loc455:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 0)){
		goto loc456;
	}else{
		goto loc459;
	}

	loc456:
	if (DiagnosticsConcept_SF_Equivalent_1_Activate){
		goto loc457;
	}else{
		goto loc458;
	}

	loc457:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc458;

	loc458:
	goto loc511;

	loc459:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 32769)){
		goto loc460;
	}else{
		goto loc469;
	}

	loc460:
	if ((DiagnosticsConcept_SF_Equivalent_1_S_ChannelA && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)))){
		goto loc461;
	}else{
		goto loc463;
	}

	loc461:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32772;
	goto loc462;

	loc462:
	goto loc468;

	loc463:
	if ((DiagnosticsConcept_SF_Equivalent_1_S_ChannelB && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA)))){
		goto loc464;
	}else{
		goto loc466;
	}

	loc464:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32788;
	goto loc465;

	loc465:
	goto loc468;

	loc466:
	if ((DiagnosticsConcept_SF_Equivalent_1_S_ChannelA && DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)){
		goto loc467;
	}else{
		goto loc468;
	}

	loc467:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32768;
	goto loc468;

	loc468:
	goto loc511;

	loc469:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 32772)){
		goto loc470;
	}else{
		goto loc479;
	}

	loc470:
	if (DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q){
		goto loc471;
	}else{
		goto loc473;
	}

	loc471:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 49153;
	goto loc472;

	loc472:
	goto loc478;

	loc473:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA))){
		goto loc474;
	}else{
		goto loc476;
	}

	loc474:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc475;

	loc475:
	goto loc478;

	loc476:
	if (DiagnosticsConcept_SF_Equivalent_1_S_ChannelB){
		goto loc477;
	}else{
		goto loc478;
	}

	loc477:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32768;
	goto loc478;

	loc478:
	goto loc511;

	loc479:
	if (((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 49153) || (DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 49154))){
		goto loc480;
	}else{
		goto loc483;
	}

	loc480:
	if (((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA)) && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)))){
		goto loc481;
	}else{
		goto loc482;
	}

	loc481:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc482;

	loc482:
	goto loc511;

	loc483:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 32788)){
		goto loc484;
	}else{
		goto loc493;
	}

	loc484:
	if (DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q){
		goto loc485;
	}else{
		goto loc487;
	}

	loc485:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 49154;
	goto loc486;

	loc486:
	goto loc492;

	loc487:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB))){
		goto loc488;
	}else{
		goto loc490;
	}

	loc488:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc489;

	loc489:
	goto loc492;

	loc490:
	if (DiagnosticsConcept_SF_Equivalent_1_S_ChannelA){
		goto loc491;
	}else{
		goto loc492;
	}

	loc491:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32768;
	goto loc492;

	loc492:
	goto loc511;

	loc493:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 49155)){
		goto loc494;
	}else{
		goto loc497;
	}

	loc494:
	if (((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA)) && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)))){
		goto loc495;
	}else{
		goto loc496;
	}

	loc495:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc496;

	loc496:
	goto loc511;

	loc497:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 32773)){
		goto loc498;
	}else{
		goto loc504;
	}

	loc498:
	if (DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q){
		goto loc499;
	}else{
		goto loc501;
	}

	loc499:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 49155;
	goto loc500;

	loc500:
	goto loc503;

	loc501:
	if (((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA)) && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)))){
		goto loc502;
	}else{
		goto loc503;
	}

	loc502:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc503;

	loc503:
	goto loc511;

	loc504:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP0 == 32768)){
		goto loc505;
	}else{
		goto loc511;
	}

	loc505:
	if (((!DiagnosticsConcept_SF_Equivalent_1_S_ChannelA) != (!DiagnosticsConcept_SF_Equivalent_1_S_ChannelB))){
		goto loc506;
	}else{
		goto loc508;
	}

	loc506:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32773;
	goto loc507;

	loc507:
	goto loc510;

	loc508:
	if (((!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelA)) && (!(DiagnosticsConcept_SF_Equivalent_1_S_ChannelB)))){
		goto loc509;
	}else{
		goto loc510;
	}

	loc509:
	DiagnosticsConcept_SF_Equivalent_1_DiagCode = 32769;
	goto loc510;

	loc510:
	goto loc511;

	loc511:
	DiagnosticsConcept_SF_Equivalent_1___TEMP1 = DiagnosticsConcept_SF_Equivalent_1_DiagCode;
	goto loc512;

	loc512:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 0)){
		goto loc513;
	}else{
		goto loc518;
	}

	loc513:
	goto loc590;

	loc514:
	DiagnosticsConcept_SF_Equivalent_1_Ready = 0;
	goto loc515;

	loc515:
	DiagnosticsConcept_SF_Equivalent_1_Error = 0;
	goto loc516;

	loc516:
	DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 0;
	goto loc517;

	loc517:
	goto loc542;

	loc518:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 32768)){
		goto loc519;
	}else{
		goto loc524;
	}

	loc519:
	goto loc607;

	loc520:
	DiagnosticsConcept_SF_Equivalent_1_Ready = 1;
	goto loc521;

	loc521:
	DiagnosticsConcept_SF_Equivalent_1_Error = 0;
	goto loc522;

	loc522:
	DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 1;
	goto loc523;

	loc523:
	goto loc542;

	loc524:
	if ((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 32769)){
		goto loc525;
	}else{
		goto loc530;
	}

	loc525:
	goto loc573;

	loc526:
	DiagnosticsConcept_SF_Equivalent_1_Ready = 1;
	goto loc527;

	loc527:
	DiagnosticsConcept_SF_Equivalent_1_Error = 0;
	goto loc528;

	loc528:
	DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 0;
	goto loc529;

	loc529:
	goto loc542;

	loc530:
	if (((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 32772) || ((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 32788) || (DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 32773)))){
		goto loc531;
	}else{
		goto loc536;
	}

	loc531:
	goto loc556;

	loc532:
	DiagnosticsConcept_SF_Equivalent_1_Ready = 1;
	goto loc533;

	loc533:
	DiagnosticsConcept_SF_Equivalent_1_Error = 0;
	goto loc534;

	loc534:
	DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 0;
	goto loc535;

	loc535:
	goto loc542;

	loc536:
	if (((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 49153) || ((DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 49154) || (DiagnosticsConcept_SF_Equivalent_1___TEMP1 == 49155)))){
		goto loc537;
	}else{
		goto loc542;
	}

	loc537:
	goto loc624;

	loc538:
	DiagnosticsConcept_SF_Equivalent_1_Ready = 1;
	goto loc539;

	loc539:
	DiagnosticsConcept_SF_Equivalent_1_Error = 1;
	goto loc540;

	loc540:
	DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut = 0;
	goto loc541;

	loc541:
	goto loc542;

	loc542:
	goto loc633;

	loc543:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN))){
		goto loc545;
	}else{
		goto loc547;
	}

	loc544:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	goto loc543;

	loc545:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	goto loc546;

	loc546:
	goto loc551;

	loc547:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q))){
		goto loc548;
	}else{
		goto loc551;
	}

	loc548:
	goto loc554;

	loc549:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc550;

	loc550:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0;
	goto loc551;

	loc551:
	goto loc559;

	loc552:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc553;

	loc553:
	goto loc555;

	loc554:
	goto loc552;

	loc555:
	goto loc549;

	loc556:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = (1 != 0);
	goto loc557;

	loc557:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime;
	goto loc558;

	loc558:
	goto loc544;

	loc559:
	goto loc532;

	loc560:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN))){
		goto loc562;
	}else{
		goto loc564;
	}

	loc561:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	goto loc560;

	loc562:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	goto loc563;

	loc563:
	goto loc568;

	loc564:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q))){
		goto loc565;
	}else{
		goto loc568;
	}

	loc565:
	goto loc571;

	loc566:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc567;

	loc567:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0;
	goto loc568;

	loc568:
	goto loc576;

	loc569:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc570;

	loc570:
	goto loc572;

	loc571:
	goto loc569;

	loc572:
	goto loc566;

	loc573:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = (0 != 0);
	goto loc574;

	loc574:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime;
	goto loc575;

	loc575:
	goto loc561;

	loc576:
	goto loc526;

	loc577:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN))){
		goto loc579;
	}else{
		goto loc581;
	}

	loc578:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	goto loc577;

	loc579:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	goto loc580;

	loc580:
	goto loc585;

	loc581:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q))){
		goto loc582;
	}else{
		goto loc585;
	}

	loc582:
	goto loc588;

	loc583:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc584;

	loc584:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0;
	goto loc585;

	loc585:
	goto loc593;

	loc586:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc587;

	loc587:
	goto loc589;

	loc588:
	goto loc586;

	loc589:
	goto loc583;

	loc590:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = (0 != 0);
	goto loc591;

	loc591:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime;
	goto loc592;

	loc592:
	goto loc578;

	loc593:
	goto loc514;

	loc594:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN))){
		goto loc596;
	}else{
		goto loc598;
	}

	loc595:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	goto loc594;

	loc596:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	goto loc597;

	loc597:
	goto loc602;

	loc598:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q))){
		goto loc599;
	}else{
		goto loc602;
	}

	loc599:
	goto loc605;

	loc600:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc601;

	loc601:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0;
	goto loc602;

	loc602:
	goto loc610;

	loc603:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc604;

	loc604:
	goto loc606;

	loc605:
	goto loc603;

	loc606:
	goto loc600;

	loc607:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = (0 != 0);
	goto loc608;

	loc608:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime;
	goto loc609;

	loc609:
	goto loc595;

	loc610:
	goto loc520;

	loc611:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN))){
		goto loc613;
	}else{
		goto loc615;
	}

	loc612:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = 0;
	goto loc611;

	loc613:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = 0;
	goto loc614;

	loc614:
	goto loc619;

	loc615:
	if ((!(DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q))){
		goto loc616;
	}else{
		goto loc619;
	}

	loc616:
	goto loc622;

	loc617:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc618;

	loc618:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_Q = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer___TEMP0;
	goto loc619;

	loc619:
	goto loc627;

	loc620:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc621;

	loc621:
	goto loc623;

	loc622:
	goto loc620;

	loc623:
	goto loc617;

	loc624:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_IN = (0 != 0);
	goto loc625;

	loc625:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTimer_PT = DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime;
	goto loc626;

	loc626:
	goto loc612;

	loc627:
	goto loc538;

	loc628:
	DiagnosticsConcept_SF_Equivalent_1_Activate = DiagnosticsConcept_InputDevice1_active;
	goto loc629;

	loc629:
	DiagnosticsConcept_SF_Equivalent_1_S_ChannelA = DiagnosticsConcept_S1_S_EStopIn_1;
	goto loc630;

	loc630:
	DiagnosticsConcept_SF_Equivalent_1_S_ChannelB = DiagnosticsConcept_S1_S_EStopIn_2;
	goto loc631;

	loc631:
	DiagnosticsConcept_SF_Equivalent_1_DiscrepancyTime = 10;
	goto loc632;

	loc632:
	goto loc449;

	loc633:
	goto loc435;

	loc634:
	if ((DiagnosticsConcept_SF_ESPE_1_S_ESPE_In && DiagnosticsConcept_SF_ESPE_1_S_AutoReset)){
		goto loc635;
	}else{
		goto loc636;
	}

	loc635:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32768;
	goto loc636;

	loc636:
	goto loc655;

	loc637:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32773)){
		goto loc638;
	}else{
		goto loc647;
	}

	loc638:
	if ((DiagnosticsConcept_SF_ESPE_1_Reset && (!(DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q)))){
		goto loc639;
	}else{
		goto loc641;
	}

	loc639:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 49154;
	goto loc640;

	loc640:
	goto loc646;

	loc641:
	if ((!(DiagnosticsConcept_SF_ESPE_1_S_ESPE_In))){
		goto loc642;
	}else{
		goto loc644;
	}

	loc642:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32772;
	goto loc643;

	loc643:
	goto loc646;

	loc644:
	if ((DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q || DiagnosticsConcept_SF_ESPE_1_S_AutoReset)){
		goto loc645;
	}else{
		goto loc646;
	}

	loc645:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32768;
	goto loc646;

	loc646:
	goto loc655;

	loc647:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 49154)){
		goto loc648;
	}else{
		goto loc651;
	}

	loc648:
	if ((!(DiagnosticsConcept_SF_ESPE_1_Reset))){
		goto loc649;
	}else{
		goto loc650;
	}

	loc649:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32773;
	goto loc650;

	loc650:
	goto loc655;

	loc651:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32768)){
		goto loc652;
	}else{
		goto loc655;
	}

	loc652:
	if ((!(DiagnosticsConcept_SF_ESPE_1_S_ESPE_In))){
		goto loc653;
	}else{
		goto loc654;
	}

	loc653:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32772;
	goto loc654;

	loc654:
	goto loc655;

	loc655:
	DiagnosticsConcept_SF_ESPE_1___TEMP1 = DiagnosticsConcept_SF_ESPE_1_DiagCode;
	goto loc656;

	loc656:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 0)){
		goto loc657;
	}else{
		goto loc661;
	}

	loc657:
	DiagnosticsConcept_SF_ESPE_1_Ready = 0;
	goto loc658;

	loc658:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc659;

	loc659:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc660;

	loc660:
	goto loc701;

	loc661:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32769)){
		goto loc662;
	}else{
		goto loc666;
	}

	loc662:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc663;

	loc663:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc664;

	loc664:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc665;

	loc665:
	goto loc701;

	loc666:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32770)){
		goto loc667;
	}else{
		goto loc671;
	}

	loc667:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc668;

	loc668:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc669;

	loc669:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc670;

	loc670:
	goto loc701;

	loc671:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32771)){
		goto loc672;
	}else{
		goto loc676;
	}

	loc672:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc673;

	loc673:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc674;

	loc674:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc675;

	loc675:
	goto loc701;

	loc676:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 49153)){
		goto loc677;
	}else{
		goto loc681;
	}

	loc677:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc678;

	loc678:
	DiagnosticsConcept_SF_ESPE_1_Error = 1;
	goto loc679;

	loc679:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc680;

	loc680:
	goto loc701;

	loc681:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32772)){
		goto loc682;
	}else{
		goto loc686;
	}

	loc682:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc683;

	loc683:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc684;

	loc684:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc685;

	loc685:
	goto loc701;

	loc686:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32773)){
		goto loc687;
	}else{
		goto loc691;
	}

	loc687:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc688;

	loc688:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc689;

	loc689:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc690;

	loc690:
	goto loc701;

	loc691:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 49154)){
		goto loc692;
	}else{
		goto loc696;
	}

	loc692:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc693;

	loc693:
	DiagnosticsConcept_SF_ESPE_1_Error = 1;
	goto loc694;

	loc694:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 0;
	goto loc695;

	loc695:
	goto loc701;

	loc696:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP1 == 32768)){
		goto loc697;
	}else{
		goto loc701;
	}

	loc697:
	DiagnosticsConcept_SF_ESPE_1_Ready = 1;
	goto loc698;

	loc698:
	DiagnosticsConcept_SF_ESPE_1_Error = 0;
	goto loc699;

	loc699:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out = 1;
	goto loc700;

	loc700:
	goto loc701;

	loc701:
	goto loc757;

	loc702:
	DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q = (DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_CLK && (!(DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_M)));
	goto loc703;

	loc703:
	DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_M = DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_CLK;
	goto loc704;

	loc704:
	goto loc707;

	loc705:
	DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_CLK = DiagnosticsConcept_SF_ESPE_1_Reset;
	goto loc706;

	loc706:
	goto loc702;

	loc707:
	goto loc711;

	loc708:
	DiagnosticsConcept_SF_ESPE_1___TEMP1 = 0;
	goto loc709;

	loc709:
	DiagnosticsConcept_SF_ESPE_1___TEMP0 = 0;
	goto loc710;

	loc710:
	goto loc705;

	loc711:
	if ((!(DiagnosticsConcept_SF_ESPE_1_Activate))){
		goto loc712;
	}else{
		goto loc714;
	}

	loc712:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 0;
	goto loc713;

	loc713:
	goto loc655;

	loc714:
	DiagnosticsConcept_SF_ESPE_1___TEMP0 = DiagnosticsConcept_SF_ESPE_1_DiagCode;
	goto loc715;

	loc715:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 0)){
		goto loc716;
	}else{
		goto loc719;
	}

	loc716:
	if (DiagnosticsConcept_SF_ESPE_1_Activate){
		goto loc717;
	}else{
		goto loc718;
	}

	loc717:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32769;
	goto loc718;

	loc718:
	goto loc655;

	loc719:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32769)){
		goto loc720;
	}else{
		goto loc729;
	}

	loc720:
	if ((!(DiagnosticsConcept_SF_ESPE_1_S_StartReset))){
		goto loc721;
	}else{
		goto loc723;
	}

	loc721:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32770;
	goto loc722;

	loc722:
	goto loc728;

	loc723:
	if ((DiagnosticsConcept_SF_ESPE_1_S_StartReset && (!(DiagnosticsConcept_SF_ESPE_1_S_ESPE_In)))){
		goto loc724;
	}else{
		goto loc726;
	}

	loc724:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32772;
	goto loc725;

	loc725:
	goto loc728;

	loc726:
	if ((DiagnosticsConcept_SF_ESPE_1_S_ESPE_In && DiagnosticsConcept_SF_ESPE_1_S_StartReset)){
		goto loc727;
	}else{
		goto loc728;
	}

	loc727:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32768;
	goto loc728;

	loc728:
	goto loc655;

	loc729:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32770)){
		goto loc730;
	}else{
		goto loc733;
	}

	loc730:
	if (DiagnosticsConcept_SF_ESPE_1_S_ESPE_In){
		goto loc731;
	}else{
		goto loc732;
	}

	loc731:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32771;
	goto loc732;

	loc732:
	goto loc655;

	loc733:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32771)){
		goto loc734;
	}else{
		goto loc743;
	}

	loc734:
	if ((DiagnosticsConcept_SF_ESPE_1_Reset && (!(DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q)))){
		goto loc735;
	}else{
		goto loc737;
	}

	loc735:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 49153;
	goto loc736;

	loc736:
	goto loc742;

	loc737:
	if ((!(DiagnosticsConcept_SF_ESPE_1_S_ESPE_In))){
		goto loc738;
	}else{
		goto loc740;
	}

	loc738:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32770;
	goto loc739;

	loc739:
	goto loc742;

	loc740:
	if (DiagnosticsConcept_SF_ESPE_1_R_TRIGatReset_Q){
		goto loc741;
	}else{
		goto loc742;
	}

	loc741:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32768;
	goto loc742;

	loc742:
	goto loc655;

	loc743:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 49153)){
		goto loc744;
	}else{
		goto loc747;
	}

	loc744:
	if ((!(DiagnosticsConcept_SF_ESPE_1_Reset))){
		goto loc745;
	}else{
		goto loc746;
	}

	loc745:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32771;
	goto loc746;

	loc746:
	goto loc655;

	loc747:
	if ((DiagnosticsConcept_SF_ESPE_1___TEMP0 == 32772)){
		goto loc748;
	}else{
		goto loc637;
	}

	loc748:
	if ((DiagnosticsConcept_SF_ESPE_1_S_ESPE_In && (!(DiagnosticsConcept_SF_ESPE_1_S_AutoReset)))){
		goto loc749;
	}else{
		goto loc634;
	}

	loc749:
	DiagnosticsConcept_SF_ESPE_1_DiagCode = 32773;
	goto loc750;

	loc750:
	goto loc636;

	loc751:
	DiagnosticsConcept_SF_ESPE_1_Activate = DiagnosticsConcept_InputDevice2_active;
	goto loc752;

	loc752:
	DiagnosticsConcept_SF_ESPE_1_S_ESPE_In = DiagnosticsConcept_S2_S_ESPE_In;
	goto loc753;

	loc753:
	DiagnosticsConcept_SF_ESPE_1_S_StartReset = 0;
	goto loc754;

	loc754:
	DiagnosticsConcept_SF_ESPE_1_S_AutoReset = 0;
	goto loc755;

	loc755:
	DiagnosticsConcept_SF_ESPE_1_Reset = DiagnosticsConcept_S0_Reset;
	goto loc756;

	loc756:
	goto loc708;

	loc757:
	goto loc437;

	loc758:
	DiagnosticsConcept_SF_SafeStop1_1___TEMP1 = 0;
	goto loc759;

	loc759:
	DiagnosticsConcept_SF_SafeStop1_1___TEMP0 = 0;
	goto loc760;

	loc760:
	goto loc862;

	loc761:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_Activate))){
		goto loc762;
	}else{
		goto loc764;
	}

	loc762:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 0;
	goto loc763;

	loc763:
	goto loc837;

	loc764:
	goto loc878;

	loc765:
	DiagnosticsConcept_SF_SafeStop1_1___TEMP0 = DiagnosticsConcept_SF_SafeStop1_1_DiagCode;
	goto loc766;

	loc766:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 0)){
		goto loc767;
	}else{
		goto loc770;
	}

	loc767:
	if (DiagnosticsConcept_SF_SafeStop1_1_Activate){
		goto loc768;
	}else{
		goto loc769;
	}

	loc768:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32769;
	goto loc769;

	loc769:
	goto loc837;

	loc770:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32768)){
		goto loc771;
	}else{
		goto loc777;
	}

	loc771:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_Acknowledge))){
		goto loc772;
	}else{
		goto loc774;
	}

	loc772:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49154;
	goto loc773;

	loc773:
	goto loc776;

	loc774:
	if (DiagnosticsConcept_SF_SafeStop1_1_S_StopIn){
		goto loc775;
	}else{
		goto loc776;
	}

	loc775:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32786;
	goto loc776;

	loc776:
	goto loc837;

	loc777:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32769)){
		goto loc778;
	}else{
		goto loc784;
	}

	loc778:
	if ((DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q && (!(DiagnosticsConcept_SF_SafeStop1_1_Acknowledge)))){
		goto loc779;
	}else{
		goto loc781;
	}

	loc779:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32770;
	goto loc780;

	loc780:
	goto loc783;

	loc781:
	if ((DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q && DiagnosticsConcept_SF_SafeStop1_1_Acknowledge)){
		goto loc782;
	}else{
		goto loc783;
	}

	loc782:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32786;
	goto loc783;

	loc783:
	goto loc837;

	loc784:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32770)){
		goto loc785;
	}else{
		goto loc791;
	}

	loc785:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_S_StopIn))){
		goto loc786;
	}else{
		goto loc788;
	}

	loc786:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32771;
	goto loc787;

	loc787:
	goto loc790;

	loc788:
	if (DiagnosticsConcept_SF_SafeStop1_1_Acknowledge){
		goto loc789;
	}else{
		goto loc790;
	}

	loc789:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32786;
	goto loc790;

	loc790:
	goto loc837;

	loc791:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32771)){
		goto loc792;
	}else{
		goto loc801;
	}

	loc792:
	if (DiagnosticsConcept_SF_SafeStop1_1_T_1_Q){
		goto loc793;
	}else{
		goto loc795;
	}

	loc793:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49155;
	goto loc794;

	loc794:
	goto loc800;

	loc795:
	if (DiagnosticsConcept_SF_SafeStop1_1_S_StopIn){
		goto loc796;
	}else{
		goto loc798;
	}

	loc796:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32786;
	goto loc797;

	loc797:
	goto loc800;

	loc798:
	if (DiagnosticsConcept_SF_SafeStop1_1_Acknowledge){
		goto loc799;
	}else{
		goto loc800;
	}

	loc799:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32768;
	goto loc800;

	loc800:
	goto loc837;

	loc801:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32773)){
		goto loc802;
	}else{
		goto loc805;
	}

	loc802:
	if (DiagnosticsConcept_SF_SafeStop1_1_S_StopIn){
		goto loc803;
	}else{
		goto loc804;
	}

	loc803:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32786;
	goto loc804;

	loc804:
	goto loc837;

	loc805:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 32786)){
		goto loc806;
	}else{
		goto loc815;
	}

	loc806:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_Acknowledge))){
		goto loc807;
	}else{
		goto loc809;
	}

	loc807:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32770;
	goto loc808;

	loc808:
	goto loc814;

	loc809:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_S_StopIn))){
		goto loc810;
	}else{
		goto loc812;
	}

	loc810:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32771;
	goto loc811;

	loc811:
	goto loc814;

	loc812:
	if (DiagnosticsConcept_SF_SafeStop1_1_Acknowledge){
		goto loc813;
	}else{
		goto loc814;
	}

	loc813:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32768;
	goto loc814;

	loc814:
	goto loc837;

	loc815:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 49154)){
		goto loc816;
	}else{
		goto loc822;
	}

	loc816:
	if ((DiagnosticsConcept_SF_SafeStop1_1_Reset && (!(DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q)))){
		goto loc817;
	}else{
		goto loc819;
	}

	loc817:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49156;
	goto loc818;

	loc818:
	goto loc821;

	loc819:
	if (DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q){
		goto loc820;
	}else{
		goto loc821;
	}

	loc820:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32773;
	goto loc821;

	loc821:
	goto loc837;

	loc822:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 49155)){
		goto loc823;
	}else{
		goto loc829;
	}

	loc823:
	if ((DiagnosticsConcept_SF_SafeStop1_1_Reset && (!(DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q)))){
		goto loc824;
	}else{
		goto loc826;
	}

	loc824:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49157;
	goto loc825;

	loc825:
	goto loc828;

	loc826:
	if (DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q){
		goto loc827;
	}else{
		goto loc828;
	}

	loc827:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 32773;
	goto loc828;

	loc828:
	goto loc837;

	loc829:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 49156)){
		goto loc830;
	}else{
		goto loc833;
	}

	loc830:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_Reset))){
		goto loc831;
	}else{
		goto loc832;
	}

	loc831:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49154;
	goto loc832;

	loc832:
	goto loc837;

	loc833:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP0 == 49157)){
		goto loc834;
	}else{
		goto loc837;
	}

	loc834:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_Reset))){
		goto loc835;
	}else{
		goto loc836;
	}

	loc835:
	DiagnosticsConcept_SF_SafeStop1_1_DiagCode = 49155;
	goto loc836;

	loc836:
	goto loc837;

	loc837:
	DiagnosticsConcept_SF_SafeStop1_1___TEMP1 = DiagnosticsConcept_SF_SafeStop1_1_DiagCode;
	goto loc838;

	loc838:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 0)){
		goto loc839;
	}else{
		goto loc843;
	}

	loc839:
	DiagnosticsConcept_SF_SafeStop1_1_Ready = 0;
	goto loc840;

	loc840:
	DiagnosticsConcept_SF_SafeStop1_1_S_Stopped = 0;
	goto loc841;

	loc841:
	DiagnosticsConcept_SF_SafeStop1_1_Error = 0;
	goto loc842;

	loc842:
	goto loc858;

	loc843:
	if ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32768)){
		goto loc844;
	}else{
		goto loc848;
	}

	loc844:
	DiagnosticsConcept_SF_SafeStop1_1_Ready = 1;
	goto loc845;

	loc845:
	DiagnosticsConcept_SF_SafeStop1_1_S_Stopped = 1;
	goto loc846;

	loc846:
	DiagnosticsConcept_SF_SafeStop1_1_Error = 0;
	goto loc847;

	loc847:
	goto loc858;

	loc848:
	if (((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32769) || ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32770) || ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32771) || ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32773) || (DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 32786)))))){
		goto loc849;
	}else{
		goto loc853;
	}

	loc849:
	DiagnosticsConcept_SF_SafeStop1_1_Ready = 1;
	goto loc850;

	loc850:
	DiagnosticsConcept_SF_SafeStop1_1_S_Stopped = 0;
	goto loc851;

	loc851:
	DiagnosticsConcept_SF_SafeStop1_1_Error = 0;
	goto loc852;

	loc852:
	goto loc858;

	loc853:
	if (((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 49154) || ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 49155) || ((DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 49156) || (DiagnosticsConcept_SF_SafeStop1_1___TEMP1 == 49157))))){
		goto loc854;
	}else{
		goto loc858;
	}

	loc854:
	DiagnosticsConcept_SF_SafeStop1_1_Ready = 1;
	goto loc855;

	loc855:
	DiagnosticsConcept_SF_SafeStop1_1_S_Stopped = 0;
	goto loc856;

	loc856:
	DiagnosticsConcept_SF_SafeStop1_1_Error = 1;
	goto loc857;

	loc857:
	goto loc858;

	loc858:
	goto loc889;

	loc859:
	DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_Q = (DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_CLK && (!(DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_M)));
	goto loc860;

	loc860:
	DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_M = DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_CLK;
	goto loc861;

	loc861:
	goto loc864;

	loc862:
	DiagnosticsConcept_SF_SafeStop1_1_R_TRIGatReset_CLK = DiagnosticsConcept_SF_SafeStop1_1_Reset;
	goto loc863;

	loc863:
	goto loc859;

	loc864:
	goto loc761;

	loc865:
	DiagnosticsConcept_SF_SafeStop1_1_T_1___TEMP0 = 0;
	goto loc866;

	loc866:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_T_1_IN))){
		goto loc867;
	}else{
		goto loc869;
	}

	loc867:
	DiagnosticsConcept_SF_SafeStop1_1_T_1_Q = 0;
	goto loc868;

	loc868:
	goto loc873;

	loc869:
	if ((!(DiagnosticsConcept_SF_SafeStop1_1_T_1_Q))){
		goto loc870;
	}else{
		goto loc873;
	}

	loc870:
	goto loc876;

	loc871:
	DiagnosticsConcept_SF_SafeStop1_1_T_1___TEMP0 = UNKNOWN_BOOL_UNKNOWN_BOOL;
	goto loc872;

	loc872:
	DiagnosticsConcept_SF_SafeStop1_1_T_1_Q = DiagnosticsConcept_SF_SafeStop1_1_T_1___TEMP0;
	goto loc873;

	loc873:
	goto loc881;

	loc874:
	UNKNOWN_BOOL_UNKNOWN_BOOL = __VERIFIER_nondet_bool();
	goto loc875;

	loc875:
	goto loc877;

	loc876:
	goto loc874;

	loc877:
	goto loc871;

	loc878:
	DiagnosticsConcept_SF_SafeStop1_1_T_1_IN = (DiagnosticsConcept_SF_SafeStop1_1_Activate && (!(DiagnosticsConcept_SF_SafeStop1_1_S_StopIn)));
	goto loc879;

	loc879:
	DiagnosticsConcept_SF_SafeStop1_1_T_1_PT = DiagnosticsConcept_SF_SafeStop1_1_MonitoringTime;
	goto loc880;

	loc880:
	goto loc865;

	loc881:
	goto loc765;

	loc882:
	DiagnosticsConcept_SF_SafeStop1_1_Activate = (DiagnosticsConcept_SF_EmergencyStop_1_Ready && DiagnosticsConcept_SF_ESPE_1_Ready);
	goto loc883;

	loc883:
	DiagnosticsConcept_SF_SafeStop1_1_S_StopIn = (DiagnosticsConcept_S_EStopOut && DiagnosticsConcept_SF_ESPE_1_S_ESPE_Out);
	goto loc884;

	loc884:
	DiagnosticsConcept_SF_SafeStop1_1_AxisID = DiagnosticsConcept_AxisD_1;
	goto loc885;

	loc885:
	DiagnosticsConcept_SF_SafeStop1_1_MonitoringTime = 100;
	goto loc886;

	loc886:
	DiagnosticsConcept_SF_SafeStop1_1_Reset = DiagnosticsConcept_S3_Drive_Reset;
	goto loc887;

	loc887:
	DiagnosticsConcept_SF_SafeStop1_1_Acknowledge = DiagnosticsConcept_Internal_Acknowledge;
	goto loc888;

	loc888:
	goto loc758;

	loc889:
	goto loc438;

	loc890:
	DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 = 0;
	goto loc891;

	loc891:
	DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 = 0;
	goto loc892;

	loc892:
	goto loc1004;

	loc893:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_Activate))){
		goto loc894;
	}else{
		goto loc896;
	}

	loc894:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 0;
	goto loc895;

	loc895:
	goto loc954;

	loc896:
	DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 = DiagnosticsConcept_SF_EmergencyStop_1_DiagCode;
	goto loc897;

	loc897:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 0)){
		goto loc898;
	}else{
		goto loc901;
	}

	loc898:
	if (DiagnosticsConcept_SF_EmergencyStop_1_Activate){
		goto loc899;
	}else{
		goto loc900;
	}

	loc899:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32769;
	goto loc900;

	loc900:
	goto loc954;

	loc901:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32769)){
		goto loc902;
	}else{
		goto loc911;
	}

	loc902:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_S_StartReset))){
		goto loc903;
	}else{
		goto loc905;
	}

	loc903:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32770;
	goto loc904;

	loc904:
	goto loc910;

	loc905:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_S_StartReset && (!(DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn)))){
		goto loc906;
	}else{
		goto loc908;
	}

	loc906:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc907;

	loc907:
	goto loc910;

	loc908:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn && DiagnosticsConcept_SF_EmergencyStop_1_S_StartReset)){
		goto loc909;
	}else{
		goto loc910;
	}

	loc909:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc910;

	loc910:
	goto loc954;

	loc911:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32770)){
		goto loc912;
	}else{
		goto loc915;
	}

	loc912:
	if (DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn){
		goto loc913;
	}else{
		goto loc914;
	}

	loc913:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32771;
	goto loc914;

	loc914:
	goto loc954;

	loc915:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32771)){
		goto loc916;
	}else{
		goto loc925;
	}

	loc916:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_Reset && (!(DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q)))){
		goto loc917;
	}else{
		goto loc919;
	}

	loc917:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 49153;
	goto loc918;

	loc918:
	goto loc924;

	loc919:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn))){
		goto loc920;
	}else{
		goto loc922;
	}

	loc920:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32770;
	goto loc921;

	loc921:
	goto loc924;

	loc922:
	if (DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q){
		goto loc923;
	}else{
		goto loc924;
	}

	loc923:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc924;

	loc924:
	goto loc954;

	loc925:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 49153)){
		goto loc926;
	}else{
		goto loc929;
	}

	loc926:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_Reset))){
		goto loc927;
	}else{
		goto loc928;
	}

	loc927:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32771;
	goto loc928;

	loc928:
	goto loc954;

	loc929:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32772)){
		goto loc930;
	}else{
		goto loc936;
	}

	loc930:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn && (!(DiagnosticsConcept_SF_EmergencyStop_1_S_AutoReset)))){
		goto loc931;
	}else{
		goto loc933;
	}

	loc931:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32773;
	goto loc932;

	loc932:
	goto loc935;

	loc933:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn && DiagnosticsConcept_SF_EmergencyStop_1_S_AutoReset)){
		goto loc934;
	}else{
		goto loc935;
	}

	loc934:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc935;

	loc935:
	goto loc954;

	loc936:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32773)){
		goto loc937;
	}else{
		goto loc946;
	}

	loc937:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_Reset && (!(DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q)))){
		goto loc938;
	}else{
		goto loc940;
	}

	loc938:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 49154;
	goto loc939;

	loc939:
	goto loc945;

	loc940:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn))){
		goto loc941;
	}else{
		goto loc943;
	}

	loc941:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc942;

	loc942:
	goto loc945;

	loc943:
	if ((DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q || DiagnosticsConcept_SF_EmergencyStop_1_S_AutoReset)){
		goto loc944;
	}else{
		goto loc945;
	}

	loc944:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32768;
	goto loc945;

	loc945:
	goto loc954;

	loc946:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 49154)){
		goto loc947;
	}else{
		goto loc950;
	}

	loc947:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_Reset))){
		goto loc948;
	}else{
		goto loc949;
	}

	loc948:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32773;
	goto loc949;

	loc949:
	goto loc954;

	loc950:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP0 == 32768)){
		goto loc951;
	}else{
		goto loc954;
	}

	loc951:
	if ((!(DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn))){
		goto loc952;
	}else{
		goto loc953;
	}

	loc952:
	DiagnosticsConcept_SF_EmergencyStop_1_DiagCode = 32772;
	goto loc953;

	loc953:
	goto loc954;

	loc954:
	DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 = DiagnosticsConcept_SF_EmergencyStop_1_DiagCode;
	goto loc955;

	loc955:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 0)){
		goto loc956;
	}else{
		goto loc960;
	}

	loc956:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 0;
	goto loc957;

	loc957:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc958;

	loc958:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc959;

	loc959:
	goto loc1000;

	loc960:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32769)){
		goto loc961;
	}else{
		goto loc965;
	}

	loc961:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc962;

	loc962:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc963;

	loc963:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc964;

	loc964:
	goto loc1000;

	loc965:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32770)){
		goto loc966;
	}else{
		goto loc970;
	}

	loc966:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc967;

	loc967:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc968;

	loc968:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc969;

	loc969:
	goto loc1000;

	loc970:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32771)){
		goto loc971;
	}else{
		goto loc975;
	}

	loc971:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc972;

	loc972:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc973;

	loc973:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc974;

	loc974:
	goto loc1000;

	loc975:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 49153)){
		goto loc976;
	}else{
		goto loc980;
	}

	loc976:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc977;

	loc977:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 1;
	goto loc978;

	loc978:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc979;

	loc979:
	goto loc1000;

	loc980:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32772)){
		goto loc981;
	}else{
		goto loc985;
	}

	loc981:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc982;

	loc982:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc983;

	loc983:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc984;

	loc984:
	goto loc1000;

	loc985:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32773)){
		goto loc986;
	}else{
		goto loc990;
	}

	loc986:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc987;

	loc987:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc988;

	loc988:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc989;

	loc989:
	goto loc1000;

	loc990:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 49154)){
		goto loc991;
	}else{
		goto loc995;
	}

	loc991:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc992;

	loc992:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 1;
	goto loc993;

	loc993:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 0;
	goto loc994;

	loc994:
	goto loc1000;

	loc995:
	if ((DiagnosticsConcept_SF_EmergencyStop_1___TEMP1 == 32768)){
		goto loc996;
	}else{
		goto loc1000;
	}

	loc996:
	DiagnosticsConcept_SF_EmergencyStop_1_Ready = 1;
	goto loc997;

	loc997:
	DiagnosticsConcept_SF_EmergencyStop_1_Error = 0;
	goto loc998;

	loc998:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopOut = 1;
	goto loc999;

	loc999:
	goto loc1000;

	loc1000:
	goto loc1013;

	loc1001:
	DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_Q = (DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_CLK && (!(DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_M)));
	goto loc1002;

	loc1002:
	DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_M = DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_CLK;
	goto loc1003;

	loc1003:
	goto loc1006;

	loc1004:
	DiagnosticsConcept_SF_EmergencyStop_1_R_TRIGatReset_CLK = DiagnosticsConcept_SF_EmergencyStop_1_Reset;
	goto loc1005;

	loc1005:
	goto loc1001;

	loc1006:
	goto loc893;

	loc1007:
	DiagnosticsConcept_SF_EmergencyStop_1_Activate = DiagnosticsConcept_SF_Equivalent_1_Ready;
	goto loc1008;

	loc1008:
	DiagnosticsConcept_SF_EmergencyStop_1_S_EStopIn = DiagnosticsConcept_SF_Equivalent_1_S_EquivalentOut;
	goto loc1009;

	loc1009:
	DiagnosticsConcept_SF_EmergencyStop_1_S_StartReset = 0;
	goto loc1010;

	loc1010:
	DiagnosticsConcept_SF_EmergencyStop_1_S_AutoReset = 0;
	goto loc1011;

	loc1011:
	DiagnosticsConcept_SF_EmergencyStop_1_Reset = DiagnosticsConcept_S0_Reset;
	goto loc1012;

	loc1012:
	goto loc890;

	loc1013:
	goto loc436;


}
