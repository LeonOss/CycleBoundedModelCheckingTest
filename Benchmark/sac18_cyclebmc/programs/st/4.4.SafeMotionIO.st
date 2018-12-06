PROGRAM SafeMotionIO
USING PLCopenX;

  VAR_INPUT
	S1_S_EStopIn : SAFEBOOL;
    S2_S_AutoMode : SAFEBOOL;
    S2_S_SetupMode : SAFEBOOL;
    S4_S_EnableSwitchCh1 : SAFEBOOL;
    S4_S_EnableSwitchCh2 : SAFEBOOL;
    S5_S_GuardSwitch : SAFEBOOL;
    S7_S_GuardLock : SAFEBOOL;
    S0_Reset : BOOL;
    S8_UnlockGuard : BOOL;
    M1_S_AcknowledgeSS1 : SAFEBOOL;
    M1_S_AcknowledgeSafeMotion : SAFEBOOL;
  END_VAR
  VAR_OUTPUT
    S_SafeStop_M1 : SAFEBOOL;
    S_SafeMotion_M1 : SAFEBOOL;
    S_Enable_M1 : SAFEBOOL;
    S_UnlockGuard_K1 : SAFEBOOL;
  END_VAR
  VAR
    S_SetupMode : SAFEBOOL;
    S_AutoMode : SAFEBOOL;
    S_SafeStandstill : SAFEBOOL;
    S_SafeMotionActive : SAFEBOOL;
    SF_EmergencyStop_1 : SF_EmergencyStopX;
  	SF_SafetyRequest_1 : SF_SafetyRequestX;
  	SF_SafetyRequest_2 : SF_SafetyRequestX;
  	SF_ModeSelector_1 : SF_ModeSelectorX;
  	SF_GuardLocking_1 : SF_GuardLockingX;
  	SF_EnableSwitch_1 : SF_EnableSwitchX;  
  END_VAR
  
  SF_EmergencyStop_1(TRUE, S1_S_EStopIn, FALSE, FALSE, S0_Reset);
  SF_SafetyRequest_1(TRUE, SF_EmergencyStop_1.S_EstopOut, M1_S_AcknowledgeSS1, T#100ms, S0_Reset);
  SF_SafetyRequest_2(TRUE, S_AutoMode, M1_S_AcknowledgeSafeMotion, T#100ms, S0_Reset);
  SF_ModeSelector_1(TRUE, S2_S_AutoMode, S2_S_SetupMode, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, FALSE, TRUE, T#50ms, S0_Reset);
  SF_GuardLocking_1(TRUE, S5_S_GuardSwitch, S_SafeStandstill OR S_SafeMotionActive, S7_S_GuardLock, S8_UnlockGuard, FALSE, FALSE, S0_Reset);
  SF_EnableSwitch_1(TRUE, S_SafeMotionActive AND S_SetupMode, S4_S_EnableSwitchCh1, S4_S_EnableSwitchCh2, FALSE, S0_Reset);
  
  S_SafeStandstill := SF_SafetyRequest_1.S_SafetyActive;
  S_SafeStop_M1 := SF_SafetyRequest_1.S_SafetyRequest;
  S_SafeMotionActive := SF_SafetyRequest_2.S_SafetyActive;
  S_SafeMotion_M1 := SF_SafetyRequest_2.S_SafetyRequest;
  S_SetupMode := SF_ModeSelector_1.S_Mode1Sel;
  S_AutoMode := SF_ModeSelector_1.S_Mode0Sel AND SF_GuardLocking_1.S_GuardLocked;
  S_UnlockGuard_K1 := SF_GuardLocking_1.S_UnlockGuard;
  S_Enable_M1 := SF_EnableSwitch_1.S_EnableSwitchOut;
   
END_PROGRAM