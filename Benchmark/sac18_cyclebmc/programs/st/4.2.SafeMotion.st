PROGRAM SafeMotion
USING PLCopenX;

  VAR_INPUT
	S1_S_EStopIn : SAFEBOOL;
    S2_S_Mode0 : SAFEBOOL;
    S2_S_Mode1 : SAFEBOOL;
    S4_S_EnableSwitchCh1 : SAFEBOOL;
    S4_S_EnableSwitchCh2 : SAFEBOOL;
    S5_S_GuardSwitch1 : SAFEBOOL;
    S6_S_GuardSwitch2 : SAFEBOOL;
    S7_S_GuardLock : SAFEBOOL;
    S0_Reset : BOOL;
    S8_UnlockGuard : BOOL;
	SF_SafeStop1_1ACK: BOOL;
	SF_SafeStop1_2ACK: BOOL;
	SF_SLS1_ACK: BOOL;
	SF_SLS2_ACK: BOOL;
  END_VAR
  VAR_OUTPUT
    S_UnlockGuard_K1 : SAFEBOOL;
  END_VAR
  VAR
    S_SafeStopAxis1 : SAFEBOOL;
    S_SafeStopAxis2 : SAFEBOOL;
    S_SafeMoveAxis1 : SAFEBOOL;
    S_SafeMoveAxis2 : SAFEBOOL;
    S_SafetyActive : SAFEBOOL;
    S_ModeAutoActive : SAFEBOOL;
    S_ModeSetSel : SAFEBOOL;
    S_SLS_Enable : SAFEBOOL;
    S_GuardLocked : SAFEBOOL;
    SF_EmergencyStop_1 : SF_EmergencyStopX;
	SF_SafeStop1_1 : SF_SafeStop1X;
	SF_SafeStop1_2 : SF_SafeStop1X;
	SF_ModeSelector_1 : SF_ModeSelectorX;
	SF_GuardMonitoring_1 : SF_GuardMonitoringX;
	SF_GuardLocking_1 : SF_GuardLockingX;
	SF_EnableSwitch_1 : SF_EnableSwitchX;
	SF_SafelyLimitedSpeed_1 : SF_SafelyLimitSpeedX;
	SF_SafelyLimitedSpeed_2 : SF_SafelyLimitSpeedX;
  END_VAR
  
  SF_EmergencyStop_1(TRUE, S1_S_EStopIn, FALSE, FALSE, S0_Reset);
  SF_SafeStop1_1(TRUE, SF_EmergencyStop_1.S_EStopOut, 1, T#1s, S0_Reset, SF_SafeStop1_1ACK);
  S_SafeStopAxis1 := SF_SafeStop1_1.S_Stopped;
  SF_SafeStop1_2(TRUE, SF_EmergencyStop_1.S_EStopOut, 2, T#1s, S0_Reset, SF_SafeStop1_2ACK);
  S_SafeStopAxis2 := SF_SafeStop1_2.S_Stopped;
  
  SF_ModeSelector_1(TRUE, S2_S_Mode0, S2_S_Mode1, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, TRUE, T#50ms, S0_Reset);
  S_ModeSetSel := SF_ModeSelector_1.S_Mode1Sel;
  S_ModeAutoActive := SF_ModeSelector_1.S_Mode0Sel AND S_GuardLocked;
  
  SF_GuardMonitoring_1(TRUE, S5_S_GuardSwitch1, S6_S_GuardSwitch2, T#50ms, FALSE, FALSE, S0_Reset);
  S_SafetyActive := (S_SafeStopAxis1 AND S_SafeStopAxis2) OR (SF_SafelyLimitedSpeed_1.S_SafetyActive AND SF_SafelyLimitedSpeed_2.S_SafetyActive);
  SF_GuardLocking_1(TRUE, SF_GuardMonitoring_1.S_GuardMonitoring, S_SafetyActive, S7_S_GuardLock, S8_UnlockGuard, FALSE, FALSE, S0_Reset);
  S_GuardLocked := SF_GuardLocking_1.S_GuardLocked;
  S_UnlockGuard_K1 := SF_GuardLocking_1.S_UnlockGuard;

  SF_EnableSwitch_1(TRUE, S_SafetyActive AND S_ModeSetSel, S4_S_EnableSwitchCh1, S4_S_EnableSwitchCh2, FALSE, S0_Reset);
  S_SLS_Enable := SF_EnableSwitch_1.S_EnableSwitchOut;
  
  SF_SafelyLimitedSpeed_1(TRUE, SF_ModeSelector_1.S_Mode0Sel AND S_GuardLocked, S_SLS_Enable, 1, T#1s, S0_Reset, SF_SLS1_ACK);
  S_SafeMoveAxis1 := SF_SafelyLimitedSpeed_1.S_SafetyActive;
  SF_SafelyLimitedSpeed_2(TRUE, SF_ModeSelector_1.S_Mode0Sel AND S_GuardLocked, S_SLS_Enable, 2, T#1s, S0_Reset, SF_SLS2_ACK);
  S_SafeMoveAxis2 := SF_SafelyLimitedSpeed_2.S_SafetyActive;
END_PROGRAM