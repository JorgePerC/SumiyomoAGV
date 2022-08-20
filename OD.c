/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-128-g85dfd8e-dirty

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY, UNLESS YOU KNOW WHAT YOU ARE DOING !!!!
*******************************************************************************/

#define OD_DEFINITION
#include "301/CO_ODinterface.h"
#include "OD.h"

#if CO_VERSION_MAJOR < 4
#error This Object dictionary is compatible with CANopenNode V4.0 and above!
#endif

/*******************************************************************************
    OD data initialization of all groups
*******************************************************************************/
OD_RAM_t OD_RAM = {
    .x1000_deviceType = 0xFF7A0192,
    .x1003_pre_definedErrorField_sub0 = 0x00,
    .x1003_pre_definedErrorField = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x1005_COB_ID_SYNC = 0x00000080,
    .x100C_guardTime = 0x0000,
    .x100D_lifeTimeFactor = 0x00,
    .x1010_storeParameterField_sub0 = 0x05,
    .x1011_restoreDefaultParameters_sub0 = 0x05,
    .x1014_COB_ID_EMCY = 0x00000080,
    .x1017_producerHeartbeatTime = 0x00C8,
    .x1018_identityObject = {
        .numberOfEntries = 0x04,
        .vendorId = 0x000001FB,
        .productCode = 0x00000000
    },
    .x1029_errorBehaviour_sub0 = 0x01,
    .x1029_errorBehaviour = {0x00},
    .x1200_serverSDO_Parameter_1 = {
        .numberOfEntries = 0x02,
        .COB_ID_Client_Server = 0x00000600,
        .COB_ID_Server_Client = 0x00000580
    },
    .x1280_clientSDO_Parameter_1 = {
        .numberOfEntries = 0x03,
        .COB_ID_Client_Server = 0x800006E0,
        .COB_ID_Server_Client = 0x800006E0,
        .nodeIDOfTheSDO_Server = 0x01
    },
    .x1400_receivePDO_CommunicationParameter_1 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000200,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1401_receivePDO_CommunicationParameter_2 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000300,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1402_receivePDO_CommunicationParameter_3 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000400,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1403_receivePDO_CommunicationParameter_4 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000500,
        .transmissionType = 0xFE,
        .inhibitTime = 0x0000,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1600_receivePDO_MappingParameter_1 = {
        .numberOfEntries = 0x03,
        .mappingEntry_1 = 0x60400010,
        .mappingEntry_2 = 0x60600008,
        .mappingEntry_3 = 0x60FE0120,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1601_receivePDO_MappingParameter_2 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60400010,
        .mappingEntry_2 = 0x607A0020,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1602_receivePDO_MappingParameter_3 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60400010,
        .mappingEntry_2 = 0x60FF0020,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1603_receivePDO_MappingParameter_4 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60400010,
        .mappingEntry_2 = 0x60710010,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1800_transmitPDO_CommunicationParameter_1 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000180,
        .transmissionType = 0xFF,
        .inhibitTime = 0x0005,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1801_transmitPDO_CommunicationParameter_2 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000280,
        .transmissionType = 0xFD,
        .inhibitTime = 0x0005,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1802_transmitPDO_CommunicationParameter_3 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000380,
        .transmissionType = 0xFD,
        .inhibitTime = 0x0005,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1803_transmitPDO_CommunicationParameter_4 = {
        .numberOfEntries = 0x05,
        .COB_ID = 0x00000480,
        .transmissionType = 0xFD,
        .inhibitTime = 0x0005,
        .compatibilityEntry = 0x00,
        .eventTimer = 0x0000
    },
    .x1A00_transmitPDO_MappingParameter_1 = {
        .numberOfEntries = 0x03,
        .mappingEntry_1 = 0x60410010,
        .mappingEntry_2 = 0x60610008,
        .mappingEntry_3 = 0x60FD0020,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1A01_transmitPDO_MappingParameter_2 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60410010,
        .mappingEntry_2 = 0x60640020,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1A02_transmitPDO_MappingParameter_3 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60410010,
        .mappingEntry_2 = 0x606C0020,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x1A03_transmitPDO_MappingParameter_4 = {
        .numberOfEntries = 0x02,
        .mappingEntry_1 = 0x60410010,
        .mappingEntry_2 = 0x60770010,
        .mappingEntry_3 = 0x00000000,
        .mappingEntry_4 = 0x00000000,
        .mappingEntry_5 = 0x00000000,
        .mappingEntry_6 = 0x00000000,
        .mappingEntry_7 = 0x00000000,
        .mappingEntry_8 = 0x00000000
    },
    .x2000_canNodeID = 0x01,
    .x2001_CAN_BaudRate = 0x03E8,
    .x2002_driveControlState = 0,
    .x2003_warning = 0x00000000,
    .x2004_stateLafertServoDriveMachine = 0,
    .x2005_info = {
        .numOfEntries = 0x09
    },
    .x2006_protocolSettings_sub0 = 0x05,
    .x2006_protocolSettings = {0, 0, 0, 0, 0},
    .x2030_temperatureDrive = 0,
    .x2031_temperatureMotor = 0,
    .x2032_temperatureHeatSink = 0,
    .x2040_voltageBrake = 0,
    .x2041_voltageBus = 0,
    .x2042_voltageLogicBoard = 0,
    .x2043_voltageReference = 0,
    .x2050_torqueCurrent = 0,
    .x2051_powerDrive = 0,
    .x2052_powerMotor = 0,
    .x2053_velocityFiltered = 0,
    .x2054_energyI2t = 0x0000,
    .x2060_impulse = 0,
    .x2061_thetaE = 0x0000,
    .x2062_thetaM = 0,
    .x3001_absoluteLimitsParameters_sub0 = 0x08,
    .x3001_absoluteLimitsParameters = {0x00007FFF, 0x00007FFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
    .x3002_brakeParameters_sub0 = 0x07,
    .x3002_brakeParameters = {1, 0, 0, 0, 0, 0, 0},
    .x3003_driveSizeParameters_sub0 = 0x07,
    .x3003_driveSizeParameters = {0, 0, 0, 0, 0, 0, 0},
    .x3004_feedBackParameters_sub0 = 0x0F,
    .x3004_feedBackParameters = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x3005_filterParameters_sub0 = 0x0F,
    .x3005_filterParameters = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x3006_motorSpecificSettings_sub0 = 0x06,
    .x3006_motorSpecificSettings = {0, 0, 0, 0, 0, 0},
    .x3007_dynamicBrakeParameters_sub0 = 0x07,
    .x3007_dynamicBrakeParameters = {0, 0, 0, 0, 0, 0, 0},
    .x3008_emergencyEnableParameters_sub0 = 0x07,
    .x3008_emergencyEnableParameters = {1, 0, 0, 0, 0, 0, 0},
    .x3010_alarmDisable_sub0 = 0x04,
    .x3010_alarmDisable = {0, 0, 0, 0},
    .x3011_alarmMask_sub0 = 0x04,
    .x3011_alarmMask = {0, 0, 0, 0},
    .x3020_functionDigitalInput_sub0 = 0x06,
    .x3020_functionDigitalInput = {0, 0, 0, 0, 0, 0},
    .x3021_digitalInput_1_sub0 = 0x05,
    .x3021_digitalInput_1 = {0, 0, 0, 0, 0},
    .x3022_digitalInput_2_sub0 = 0x05,
    .x3022_digitalInput_2 = {0, 0, 0, 0, 0},
    .x3023_digitalInput_3_sub0 = 0x05,
    .x3023_digitalInput_3 = {0, 0, 0, 0, 0},
    .x3024_digitalInput_4_sub0 = 0x05,
    .x3024_digitalInput_4 = {0, 0, 0, 0, 0},
    .x3030_functionDigitalOutput_sub0 = 0x06,
    .x3030_functionDigitalOutput = {0, 0, 0, 0, 0, 0},
    .x3031_digitalOutput_1_sub0 = 0x05,
    .x3031_digitalOutput_1 = {0, 0, 0, 0, 0},
    .x3032_digitalOutput_2_sub0 = 0x05,
    .x3032_digitalOutput_2 = {0, 0, 0, 0, 0},
    .x3033_digitalOutput_3_sub0 = 0x05,
    .x3033_digitalOutput_3 = {0, 0, 0, 0, 0},
    .x3034_digitalOutput_4_sub0 = 0x05,
    .x3034_digitalOutput_4 = {0, 0, 0, 0, 0},
    .x3040_analogInput_sub0 = 0x05,
    .x3040_analogInput = {0, 0, 0, 0, 0},
    .x3050_analogOutput_1_sub0 = 0x05,
    .x3050_analogOutput_1 = {0, 0, 0, 0, 0},
    .x3051_analogOutput_2_sub0 = 0x05,
    .x3051_analogOutput_2 = {0, 0, 0, 0, 0},
    .x3200_currentPid_sub0 = 0x06,
    .x3200_currentPid = {0, 0, 0, 0, 0, 0},
    .x3201_speedPid_sub0 = 0x06,
    .x3201_speedPid = {0, 0, 0, 0, 0, 0},
    .x3202_positionPid_sub0 = 0x0B,
    .x3202_positionPid = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x3300_velocityFullScale = 0x0000,
    .x4000_safetyState_sub0 = 0x02,
    .x4000_safetyState = {0x0000, 0x0000},
    .x4100_communicationCAN_Status_sub0 = 0x05,
    .x4100_communicationCAN_Status = {0, 0, 0, 0, 0},
    .x4101_communicationCAN_Counter_sub0 = 0x05,
    .x4101_communicationCAN_Counter = {0, 0, 0, 0, 0},
    .x4102_communicationCAN_Settings_sub0 = 0x05,
    .x4102_communicationCAN_Settings = {0, 0, 0, 0, 0},
    .x4103_communicationError_sub0 = 0x05,
    .x4103_communicationError = {0, 0, 0, 0, 0},
    .x4200_alarmMonitoring_sub0 = 0x03,
    .x4200_alarmMonitoring = {0, 0, 0},
    .x4500_dummy_sub0 = 0x11,
    .x4500_dummy = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x4501_dummyTell_sub0 = 0x09,
    .x4501_dummyTell = {0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x4502_dummyTellLong_sub0 = 0x06,
    .x4502_dummyTellLong = {0, 0, 0, 0, 0, 0},
    .x4503_dummyCANopen_sub0 = 0x0E,
    .x4503_dummyCANopen = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x6007_abortConnectionOptionCode = 1,
    .x605A_quickStopOptionCode = 2,
    .x605B_shutdownOptionCode = 0,
    .x605C_disableOperationOptionCode = 1,
    .x605D_haltOptionCode = 1,
    .x605E_faultReactionOptionCode = 2,
    .x6060_modesOfOperation = 0,
    .x6065_followingErrorWindow = 0x00000000,
    .x6066_followingErrorTimeOut = 0x0000,
    .x6067_positionWindow = 0x00000000,
    .x6068_positionWindowTime = 0x0000,
    .x606D_velocityWindow = 0x0000,
    .x606E_velocityWindowTime = 0x0000,
    .x606F_velocityThreshold = 0x0000,
    .x6070_velocityThresholdTime = 0x0000,
    .x6071_targetTorque = 0,
    .x6072_maxTorque = 0x0BB8,
    .x6073_maxCurrent = 0x0138,
    .x6075_motorRatedCurrent = 0x00000000,
    .x6076_motorRatedTorque = 0x00000000,
    .x607A_targetPosition = 0,
    .x607B_positionRangeLimit_sub0 = 0x02,
    .x607B_positionRangeLimit = {-2147483648, 2147483647},
    .x607C_homeOffset = 0,
    .x607D_softwarePositionLimit_sub0 = 0x02,
    .x607D_softwarePositionLimit = {-2147483648, 2147483647},
    .x607E_polarity = 0x00,
    .x607F_maxProfileVelocity = 0x0000125C,
    .x6081_profileVelocityInPp_mode = 0x000003E8,
    .x6082_endVelocity = 0x00000000,
    .x6083_profileAcceleration = 0x00042AAA,
    .x6084_profileDeceleration = 0x00042AAA,
    .x6085_quickStopDeceleration = 0x000000C8,
    .x6086_motionProfileType = 0,
    .x6087_torqueSlope = 0x00000000,
    .x6088_torqueProfileType = 0,
    .x6096_velocityFactor_sub0 = 0x02,
    .x6096_velocityFactor = {0x00000001, 0x00000001},
    .x6097_accelerationFactor_sub0 = 0x02,
    .x6097_accelerationFactor = {0x00000001, 0x00000001},
    .x6098_homingMethod = 0,
    .x6099_homingSpeeds_sub0 = 0x02,
    .x6099_homingSpeeds = {0x00000000, 0x00000000},
    .x609A_homingAcceleration = 0x00000000,
    .x60C5_maxAcceleration = 0x00085555,
    .x60E0_positiveTorqueLimitValue = 0x0000,
    .x60E1_negativeTorqueLimitValue = 0x0000,
    .x60E3_supportedHomingMethods_sub0 = 0x14,
    .x60E3_supportedHomingMethods = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    .x60F2_positioningOptionCode = 0x0000,
    .x60FA_controlEffort = 0,
    .x60FE_digitalOutputs_sub0 = 0x02,
    .x60FE_digitalOutputs = {0x00000000, 0x00000000},
    .x60FF_targetVelocity = 0,
    .x6402_motorType = 0x0000,
    .x6403_motorCatalogueNumber = {'0', 0},
    .x6404_motorManufacturer = {'0', 'x', '0', 0}
};



/*******************************************************************************
    All OD objects (constant definitions)
*******************************************************************************/
typedef struct {
    OD_obj_var_t o_1000_deviceType;
    OD_obj_var_t o_1001_errorRegister;
    OD_obj_var_t o_1002_manufacturerStatusRegister;
    OD_obj_array_t o_1003_pre_definedErrorField;
    OD_obj_var_t o_1005_COB_ID_SYNC;
    OD_obj_var_t o_1008_manufacturerDeviceName;
    OD_obj_var_t o_1009_manufacturerHardwareVersion;
    OD_obj_var_t o_100A_manufacturerSoftwareVersion;
    OD_obj_var_t o_100C_guardTime;
    OD_obj_var_t o_100D_lifeTimeFactor;
    OD_obj_array_t o_1010_storeParameterField;
    OD_obj_array_t o_1011_restoreDefaultParameters;
    OD_obj_var_t o_1014_COB_ID_EMCY;
    OD_obj_var_t o_1017_producerHeartbeatTime;
    OD_obj_record_t o_1018_identityObject[5];
    OD_obj_array_t o_1029_errorBehaviour;
    OD_obj_record_t o_1200_serverSDO_Parameter_1[3];
    OD_obj_record_t o_1280_clientSDO_Parameter_1[4];
    OD_obj_record_t o_1400_receivePDO_CommunicationParameter_1[6];
    OD_obj_record_t o_1401_receivePDO_CommunicationParameter_2[6];
    OD_obj_record_t o_1402_receivePDO_CommunicationParameter_3[6];
    OD_obj_record_t o_1403_receivePDO_CommunicationParameter_4[6];
    OD_obj_record_t o_1600_receivePDO_MappingParameter_1[9];
    OD_obj_record_t o_1601_receivePDO_MappingParameter_2[9];
    OD_obj_record_t o_1602_receivePDO_MappingParameter_3[9];
    OD_obj_record_t o_1603_receivePDO_MappingParameter_4[9];
    OD_obj_record_t o_1800_transmitPDO_CommunicationParameter_1[6];
    OD_obj_record_t o_1801_transmitPDO_CommunicationParameter_2[6];
    OD_obj_record_t o_1802_transmitPDO_CommunicationParameter_3[6];
    OD_obj_record_t o_1803_transmitPDO_CommunicationParameter_4[6];
    OD_obj_record_t o_1A00_transmitPDO_MappingParameter_1[9];
    OD_obj_record_t o_1A01_transmitPDO_MappingParameter_2[9];
    OD_obj_record_t o_1A02_transmitPDO_MappingParameter_3[9];
    OD_obj_record_t o_1A03_transmitPDO_MappingParameter_4[9];
    OD_obj_var_t o_2000_canNodeID;
    OD_obj_var_t o_2001_CAN_BaudRate;
    OD_obj_var_t o_2002_driveControlState;
    OD_obj_var_t o_2003_warning;
    OD_obj_var_t o_2004_stateLafertServoDriveMachine;
    OD_obj_record_t o_2005_info[10];
    OD_obj_array_t o_2006_protocolSettings;
    OD_obj_var_t o_2030_temperatureDrive;
    OD_obj_var_t o_2031_temperatureMotor;
    OD_obj_var_t o_2032_temperatureHeatSink;
    OD_obj_var_t o_2040_voltageBrake;
    OD_obj_var_t o_2041_voltageBus;
    OD_obj_var_t o_2042_voltageLogicBoard;
    OD_obj_var_t o_2043_voltageReference;
    OD_obj_var_t o_2050_torqueCurrent;
    OD_obj_var_t o_2051_powerDrive;
    OD_obj_var_t o_2052_powerMotor;
    OD_obj_var_t o_2053_velocityFiltered;
    OD_obj_var_t o_2054_energyI2t;
    OD_obj_var_t o_2060_impulse;
    OD_obj_var_t o_2061_thetaE;
    OD_obj_var_t o_2062_thetaM;
    OD_obj_array_t o_3001_absoluteLimitsParameters;
    OD_obj_array_t o_3002_brakeParameters;
    OD_obj_array_t o_3003_driveSizeParameters;
    OD_obj_array_t o_3004_feedBackParameters;
    OD_obj_array_t o_3005_filterParameters;
    OD_obj_array_t o_3006_motorSpecificSettings;
    OD_obj_array_t o_3007_dynamicBrakeParameters;
    OD_obj_array_t o_3008_emergencyEnableParameters;
    OD_obj_array_t o_3010_alarmDisable;
    OD_obj_array_t o_3011_alarmMask;
    OD_obj_array_t o_3020_functionDigitalInput;
    OD_obj_array_t o_3021_digitalInput_1;
    OD_obj_array_t o_3022_digitalInput_2;
    OD_obj_array_t o_3023_digitalInput_3;
    OD_obj_array_t o_3024_digitalInput_4;
    OD_obj_array_t o_3030_functionDigitalOutput;
    OD_obj_array_t o_3031_digitalOutput_1;
    OD_obj_array_t o_3032_digitalOutput_2;
    OD_obj_array_t o_3033_digitalOutput_3;
    OD_obj_array_t o_3034_digitalOutput_4;
    OD_obj_array_t o_3040_analogInput;
    OD_obj_array_t o_3050_analogOutput_1;
    OD_obj_array_t o_3051_analogOutput_2;
    OD_obj_array_t o_3200_currentPid;
    OD_obj_array_t o_3201_speedPid;
    OD_obj_array_t o_3202_positionPid;
    OD_obj_var_t o_3300_velocityFullScale;
    OD_obj_array_t o_4000_safetyState;
    OD_obj_array_t o_4100_communicationCAN_Status;
    OD_obj_array_t o_4101_communicationCAN_Counter;
    OD_obj_array_t o_4102_communicationCAN_Settings;
    OD_obj_array_t o_4103_communicationError;
    OD_obj_array_t o_4200_alarmMonitoring;
    OD_obj_array_t o_4500_dummy;
    OD_obj_array_t o_4501_dummyTell;
    OD_obj_array_t o_4502_dummyTellLong;
    OD_obj_array_t o_4503_dummyCANopen;
    OD_obj_var_t o_6007_abortConnectionOptionCode;
    OD_obj_var_t o_603F_errorCode;
    OD_obj_var_t o_6040_controlword;
    OD_obj_var_t o_6041_statusword;
    OD_obj_var_t o_605A_quickStopOptionCode;
    OD_obj_var_t o_605B_shutdownOptionCode;
    OD_obj_var_t o_605C_disableOperationOptionCode;
    OD_obj_var_t o_605D_haltOptionCode;
    OD_obj_var_t o_605E_faultReactionOptionCode;
    OD_obj_var_t o_6060_modesOfOperation;
    OD_obj_var_t o_6061_modesOfOperationDisplay;
    OD_obj_var_t o_6062_positionDemandValue;
    OD_obj_var_t o_6063_positionActualInternalValue;
    OD_obj_var_t o_6064_positionActualValue;
    OD_obj_var_t o_6065_followingErrorWindow;
    OD_obj_var_t o_6066_followingErrorTimeOut;
    OD_obj_var_t o_6067_positionWindow;
    OD_obj_var_t o_6068_positionWindowTime;
    OD_obj_var_t o_606B_velocityDemandValue;
    OD_obj_var_t o_606C_velocityActualValue;
    OD_obj_var_t o_606D_velocityWindow;
    OD_obj_var_t o_606E_velocityWindowTime;
    OD_obj_var_t o_606F_velocityThreshold;
    OD_obj_var_t o_6070_velocityThresholdTime;
    OD_obj_var_t o_6071_targetTorque;
    OD_obj_var_t o_6072_maxTorque;
    OD_obj_var_t o_6073_maxCurrent;
    OD_obj_var_t o_6074_torqueDemandValue;
    OD_obj_var_t o_6075_motorRatedCurrent;
    OD_obj_var_t o_6076_motorRatedTorque;
    OD_obj_var_t o_6077_torqueActualValue;
    OD_obj_var_t o_6078_currentActualValue;
    OD_obj_var_t o_6079_DC_LinkCircuitVoltage;
    OD_obj_var_t o_607A_targetPosition;
    OD_obj_array_t o_607B_positionRangeLimit;
    OD_obj_var_t o_607C_homeOffset;
    OD_obj_array_t o_607D_softwarePositionLimit;
    OD_obj_var_t o_607E_polarity;
    OD_obj_var_t o_607F_maxProfileVelocity;
    OD_obj_var_t o_6081_profileVelocityInPp_mode;
    OD_obj_var_t o_6082_endVelocity;
    OD_obj_var_t o_6083_profileAcceleration;
    OD_obj_var_t o_6084_profileDeceleration;
    OD_obj_var_t o_6085_quickStopDeceleration;
    OD_obj_var_t o_6086_motionProfileType;
    OD_obj_var_t o_6087_torqueSlope;
    OD_obj_var_t o_6088_torqueProfileType;
    OD_obj_array_t o_6096_velocityFactor;
    OD_obj_array_t o_6097_accelerationFactor;
    OD_obj_var_t o_6098_homingMethod;
    OD_obj_array_t o_6099_homingSpeeds;
    OD_obj_var_t o_609A_homingAcceleration;
    OD_obj_var_t o_60C5_maxAcceleration;
    OD_obj_var_t o_60C6_maxDeceleration;
    OD_obj_var_t o_60E0_positiveTorqueLimitValue;
    OD_obj_var_t o_60E1_negativeTorqueLimitValue;
    OD_obj_array_t o_60E3_supportedHomingMethods;
    OD_obj_var_t o_60F2_positioningOptionCode;
    OD_obj_var_t o_60F4_followingErrorActualValue;
    OD_obj_var_t o_60FA_controlEffort;
    OD_obj_var_t o_60FC_positionDemandInternalValue;
    OD_obj_var_t o_60FD_digitalInputs;
    OD_obj_array_t o_60FE_digitalOutputs;
    OD_obj_var_t o_60FF_targetVelocity;
    OD_obj_var_t o_6402_motorType;
    OD_obj_var_t o_6403_motorCatalogueNumber;
    OD_obj_var_t o_6404_motorManufacturer;
    OD_obj_var_t o_6502_supportedDriveModes;
} ODObjs_t;

static CO_PROGMEM ODObjs_t ODObjs = {
    .o_1000_deviceType = {
        .dataOrig = &OD_RAM.x1000_deviceType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1001_errorRegister = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R,
        .dataLength = 1
    },
    .o_1002_manufacturerStatusRegister = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1003_pre_definedErrorField = {
        .dataOrig0 = &OD_RAM.x1003_pre_definedErrorField_sub0,
        .dataOrig = &OD_RAM.x1003_pre_definedErrorField[0],
        .attribute0 = ODA_SDO_RW,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_1005_COB_ID_SYNC = {
        .dataOrig = &OD_RAM.x1005_COB_ID_SYNC,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_1008_manufacturerDeviceName = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 0
    },
    .o_1009_manufacturerHardwareVersion = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 0
    },
    .o_100A_manufacturerSoftwareVersion = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 0
    },
    .o_100C_guardTime = {
        .dataOrig = &OD_RAM.x100C_guardTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_100D_lifeTimeFactor = {
        .dataOrig = &OD_RAM.x100D_lifeTimeFactor,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_1010_storeParameterField = {
        .dataOrig0 = &OD_RAM.x1010_storeParameterField_sub0,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(not specified)
    },
    .o_1011_restoreDefaultParameters = {
        .dataOrig0 = &OD_RAM.x1011_restoreDefaultParameters_sub0,
        .dataOrig = NULL,
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(not specified)
    },
    .o_1014_COB_ID_EMCY = {
        .dataOrig = &OD_RAM.x1014_COB_ID_EMCY,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_1017_producerHeartbeatTime = {
        .dataOrig = &OD_RAM.x1017_producerHeartbeatTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_1018_identityObject = {
        {
            .dataOrig = &OD_RAM.x1018_identityObject.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1018_identityObject.vendorId,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1018_identityObject.productCode,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = NULL,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = NULL,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1029_errorBehaviour = {
        .dataOrig0 = &OD_RAM.x1029_errorBehaviour_sub0,
        .dataOrig = &OD_RAM.x1029_errorBehaviour[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(uint8_t)
    },
    .o_1200_serverSDO_Parameter_1 = {
        {
            .dataOrig = &OD_RAM.x1200_serverSDO_Parameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1200_serverSDO_Parameter_1.COB_ID_Client_Server,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1200_serverSDO_Parameter_1.COB_ID_Server_Client,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1280_clientSDO_Parameter_1 = {
        {
            .dataOrig = &OD_RAM.x1280_clientSDO_Parameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1280_clientSDO_Parameter_1.COB_ID_Client_Server,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_clientSDO_Parameter_1.COB_ID_Server_Client,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1280_clientSDO_Parameter_1.nodeIDOfTheSDO_Server,
            .subIndex = 3,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        }
    },
    .o_1400_receivePDO_CommunicationParameter_1 = {
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1400_receivePDO_CommunicationParameter_1.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1401_receivePDO_CommunicationParameter_2 = {
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1401_receivePDO_CommunicationParameter_2.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1402_receivePDO_CommunicationParameter_3 = {
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1402_receivePDO_CommunicationParameter_3.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1403_receivePDO_CommunicationParameter_4 = {
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1403_receivePDO_CommunicationParameter_4.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1600_receivePDO_MappingParameter_1 = {
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1600_receivePDO_MappingParameter_1.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1601_receivePDO_MappingParameter_2 = {
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1601_receivePDO_MappingParameter_2.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1602_receivePDO_MappingParameter_3 = {
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1602_receivePDO_MappingParameter_3.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1603_receivePDO_MappingParameter_4 = {
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1603_receivePDO_MappingParameter_4.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1800_transmitPDO_CommunicationParameter_1 = {
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1800_transmitPDO_CommunicationParameter_1.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1801_transmitPDO_CommunicationParameter_2 = {
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1801_transmitPDO_CommunicationParameter_2.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1802_transmitPDO_CommunicationParameter_3 = {
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1802_transmitPDO_CommunicationParameter_3.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1803_transmitPDO_CommunicationParameter_4 = {
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.COB_ID,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.transmissionType,
            .subIndex = 2,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.inhibitTime,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        },
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.compatibilityEntry,
            .subIndex = 4,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1803_transmitPDO_CommunicationParameter_4.eventTimer,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 2
        }
    },
    .o_1A00_transmitPDO_MappingParameter_1 = {
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A00_transmitPDO_MappingParameter_1.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A01_transmitPDO_MappingParameter_2 = {
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A01_transmitPDO_MappingParameter_2.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A02_transmitPDO_MappingParameter_3 = {
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A02_transmitPDO_MappingParameter_3.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_1A03_transmitPDO_MappingParameter_4 = {
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.numberOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_RW,
            .dataLength = 1
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_1,
            .subIndex = 1,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_2,
            .subIndex = 2,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_3,
            .subIndex = 3,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_4,
            .subIndex = 4,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_5,
            .subIndex = 5,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_6,
            .subIndex = 6,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_7,
            .subIndex = 7,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        },
        {
            .dataOrig = &OD_RAM.x1A03_transmitPDO_MappingParameter_4.mappingEntry_8,
            .subIndex = 8,
            .attribute = ODA_SDO_RW | ODA_MB,
            .dataLength = 4
        }
    },
    .o_2000_canNodeID = {
        .dataOrig = &OD_RAM.x2000_canNodeID,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_2001_CAN_BaudRate = {
        .dataOrig = &OD_RAM.x2001_CAN_BaudRate,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_2002_driveControlState = {
        .dataOrig = &OD_RAM.x2002_driveControlState,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2003_warning = {
        .dataOrig = &OD_RAM.x2003_warning,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_2004_stateLafertServoDriveMachine = {
        .dataOrig = &OD_RAM.x2004_stateLafertServoDriveMachine,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2005_info = {
        {
            .dataOrig = &OD_RAM.x2005_info.numOfEntries,
            .subIndex = 0,
            .attribute = ODA_SDO_R,
            .dataLength = 1
        },
        {
            .dataOrig = NULL,
            .subIndex = 1,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 2,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 3,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 4,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 5,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 6,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 7,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 8,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        },
        {
            .dataOrig = NULL,
            .subIndex = 9,
            .attribute = ODA_SDO_R | ODA_STR,
            .dataLength = 0
        }
    },
    .o_2006_protocolSettings = {
        .dataOrig0 = &OD_RAM.x2006_protocolSettings_sub0,
        .dataOrig = &OD_RAM.x2006_protocolSettings[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_2030_temperatureDrive = {
        .dataOrig = &OD_RAM.x2030_temperatureDrive,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2031_temperatureMotor = {
        .dataOrig = &OD_RAM.x2031_temperatureMotor,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2032_temperatureHeatSink = {
        .dataOrig = &OD_RAM.x2032_temperatureHeatSink,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2040_voltageBrake = {
        .dataOrig = &OD_RAM.x2040_voltageBrake,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2041_voltageBus = {
        .dataOrig = &OD_RAM.x2041_voltageBus,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2042_voltageLogicBoard = {
        .dataOrig = &OD_RAM.x2042_voltageLogicBoard,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2043_voltageReference = {
        .dataOrig = &OD_RAM.x2043_voltageReference,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2050_torqueCurrent = {
        .dataOrig = &OD_RAM.x2050_torqueCurrent,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2051_powerDrive = {
        .dataOrig = &OD_RAM.x2051_powerDrive,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2052_powerMotor = {
        .dataOrig = &OD_RAM.x2052_powerMotor,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2053_velocityFiltered = {
        .dataOrig = &OD_RAM.x2053_velocityFiltered,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2054_energyI2t = {
        .dataOrig = &OD_RAM.x2054_energyI2t,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2060_impulse = {
        .dataOrig = &OD_RAM.x2060_impulse,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2061_thetaE = {
        .dataOrig = &OD_RAM.x2061_thetaE,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_2062_thetaM = {
        .dataOrig = &OD_RAM.x2062_thetaM,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 2
    },
    .o_3001_absoluteLimitsParameters = {
        .dataOrig0 = &OD_RAM.x3001_absoluteLimitsParameters_sub0,
        .dataOrig = &OD_RAM.x3001_absoluteLimitsParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_3002_brakeParameters = {
        .dataOrig0 = &OD_RAM.x3002_brakeParameters_sub0,
        .dataOrig = &OD_RAM.x3002_brakeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3003_driveSizeParameters = {
        .dataOrig0 = &OD_RAM.x3003_driveSizeParameters_sub0,
        .dataOrig = &OD_RAM.x3003_driveSizeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3004_feedBackParameters = {
        .dataOrig0 = &OD_RAM.x3004_feedBackParameters_sub0,
        .dataOrig = &OD_RAM.x3004_feedBackParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3005_filterParameters = {
        .dataOrig0 = &OD_RAM.x3005_filterParameters_sub0,
        .dataOrig = &OD_RAM.x3005_filterParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3006_motorSpecificSettings = {
        .dataOrig0 = &OD_RAM.x3006_motorSpecificSettings_sub0,
        .dataOrig = &OD_RAM.x3006_motorSpecificSettings[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3007_dynamicBrakeParameters = {
        .dataOrig0 = &OD_RAM.x3007_dynamicBrakeParameters_sub0,
        .dataOrig = &OD_RAM.x3007_dynamicBrakeParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3008_emergencyEnableParameters = {
        .dataOrig0 = &OD_RAM.x3008_emergencyEnableParameters_sub0,
        .dataOrig = &OD_RAM.x3008_emergencyEnableParameters[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3010_alarmDisable = {
        .dataOrig0 = &OD_RAM.x3010_alarmDisable_sub0,
        .dataOrig = &OD_RAM.x3010_alarmDisable[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3011_alarmMask = {
        .dataOrig0 = &OD_RAM.x3011_alarmMask_sub0,
        .dataOrig = &OD_RAM.x3011_alarmMask[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3020_functionDigitalInput = {
        .dataOrig0 = &OD_RAM.x3020_functionDigitalInput_sub0,
        .dataOrig = &OD_RAM.x3020_functionDigitalInput[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3021_digitalInput_1 = {
        .dataOrig0 = &OD_RAM.x3021_digitalInput_1_sub0,
        .dataOrig = &OD_RAM.x3021_digitalInput_1[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3022_digitalInput_2 = {
        .dataOrig0 = &OD_RAM.x3022_digitalInput_2_sub0,
        .dataOrig = &OD_RAM.x3022_digitalInput_2[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3023_digitalInput_3 = {
        .dataOrig0 = &OD_RAM.x3023_digitalInput_3_sub0,
        .dataOrig = &OD_RAM.x3023_digitalInput_3[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3024_digitalInput_4 = {
        .dataOrig0 = &OD_RAM.x3024_digitalInput_4_sub0,
        .dataOrig = &OD_RAM.x3024_digitalInput_4[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3030_functionDigitalOutput = {
        .dataOrig0 = &OD_RAM.x3030_functionDigitalOutput_sub0,
        .dataOrig = &OD_RAM.x3030_functionDigitalOutput[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3031_digitalOutput_1 = {
        .dataOrig0 = &OD_RAM.x3031_digitalOutput_1_sub0,
        .dataOrig = &OD_RAM.x3031_digitalOutput_1[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3032_digitalOutput_2 = {
        .dataOrig0 = &OD_RAM.x3032_digitalOutput_2_sub0,
        .dataOrig = &OD_RAM.x3032_digitalOutput_2[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3033_digitalOutput_3 = {
        .dataOrig0 = &OD_RAM.x3033_digitalOutput_3_sub0,
        .dataOrig = &OD_RAM.x3033_digitalOutput_3[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3034_digitalOutput_4 = {
        .dataOrig0 = &OD_RAM.x3034_digitalOutput_4_sub0,
        .dataOrig = &OD_RAM.x3034_digitalOutput_4[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3040_analogInput = {
        .dataOrig0 = &OD_RAM.x3040_analogInput_sub0,
        .dataOrig = &OD_RAM.x3040_analogInput[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3050_analogOutput_1 = {
        .dataOrig0 = &OD_RAM.x3050_analogOutput_1_sub0,
        .dataOrig = &OD_RAM.x3050_analogOutput_1[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3051_analogOutput_2 = {
        .dataOrig0 = &OD_RAM.x3051_analogOutput_2_sub0,
        .dataOrig = &OD_RAM.x3051_analogOutput_2[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3200_currentPid = {
        .dataOrig0 = &OD_RAM.x3200_currentPid_sub0,
        .dataOrig = &OD_RAM.x3200_currentPid[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3201_speedPid = {
        .dataOrig0 = &OD_RAM.x3201_speedPid_sub0,
        .dataOrig = &OD_RAM.x3201_speedPid[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3202_positionPid = {
        .dataOrig0 = &OD_RAM.x3202_positionPid_sub0,
        .dataOrig = &OD_RAM.x3202_positionPid[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_3300_velocityFullScale = {
        .dataOrig = &OD_RAM.x3300_velocityFullScale,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_4000_safetyState = {
        .dataOrig0 = &OD_RAM.x4000_safetyState_sub0,
        .dataOrig = &OD_RAM.x4000_safetyState[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(uint16_t)
    },
    .o_4100_communicationCAN_Status = {
        .dataOrig0 = &OD_RAM.x4100_communicationCAN_Status_sub0,
        .dataOrig = &OD_RAM.x4100_communicationCAN_Status[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4101_communicationCAN_Counter = {
        .dataOrig0 = &OD_RAM.x4101_communicationCAN_Counter_sub0,
        .dataOrig = &OD_RAM.x4101_communicationCAN_Counter[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4102_communicationCAN_Settings = {
        .dataOrig0 = &OD_RAM.x4102_communicationCAN_Settings_sub0,
        .dataOrig = &OD_RAM.x4102_communicationCAN_Settings[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4103_communicationError = {
        .dataOrig0 = &OD_RAM.x4103_communicationError_sub0,
        .dataOrig = &OD_RAM.x4103_communicationError[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4200_alarmMonitoring = {
        .dataOrig0 = &OD_RAM.x4200_alarmMonitoring_sub0,
        .dataOrig = &OD_RAM.x4200_alarmMonitoring[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4500_dummy = {
        .dataOrig0 = &OD_RAM.x4500_dummy_sub0,
        .dataOrig = &OD_RAM.x4500_dummy[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4501_dummyTell = {
        .dataOrig0 = &OD_RAM.x4501_dummyTell_sub0,
        .dataOrig = &OD_RAM.x4501_dummyTell[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 2,
        .dataElementSizeof = sizeof(int16_t)
    },
    .o_4502_dummyTellLong = {
        .dataOrig0 = &OD_RAM.x4502_dummyTellLong_sub0,
        .dataOrig = &OD_RAM.x4502_dummyTellLong[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_4503_dummyCANopen = {
        .dataOrig0 = &OD_RAM.x4503_dummyCANopen_sub0,
        .dataOrig = &OD_RAM.x4503_dummyCANopen[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_6007_abortConnectionOptionCode = {
        .dataOrig = &OD_RAM.x6007_abortConnectionOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_603F_errorCode = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6040_controlword = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6041_statusword = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_605A_quickStopOptionCode = {
        .dataOrig = &OD_RAM.x605A_quickStopOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_605B_shutdownOptionCode = {
        .dataOrig = &OD_RAM.x605B_shutdownOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_605C_disableOperationOptionCode = {
        .dataOrig = &OD_RAM.x605C_disableOperationOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_605D_haltOptionCode = {
        .dataOrig = &OD_RAM.x605D_haltOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_605E_faultReactionOptionCode = {
        .dataOrig = &OD_RAM.x605E_faultReactionOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6060_modesOfOperation = {
        .dataOrig = &OD_RAM.x6060_modesOfOperation,
        .attribute = ODA_SDO_RW | ODA_TPDO,
        .dataLength = 1
    },
    .o_6061_modesOfOperationDisplay = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO,
        .dataLength = 1
    },
    .o_6062_positionDemandValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6063_positionActualInternalValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6064_positionActualValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6065_followingErrorWindow = {
        .dataOrig = &OD_RAM.x6065_followingErrorWindow,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6066_followingErrorTimeOut = {
        .dataOrig = &OD_RAM.x6066_followingErrorTimeOut,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6067_positionWindow = {
        .dataOrig = &OD_RAM.x6067_positionWindow,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6068_positionWindowTime = {
        .dataOrig = &OD_RAM.x6068_positionWindowTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_606B_velocityDemandValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_606C_velocityActualValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_606D_velocityWindow = {
        .dataOrig = &OD_RAM.x606D_velocityWindow,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_606E_velocityWindowTime = {
        .dataOrig = &OD_RAM.x606E_velocityWindowTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_606F_velocityThreshold = {
        .dataOrig = &OD_RAM.x606F_velocityThreshold,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6070_velocityThresholdTime = {
        .dataOrig = &OD_RAM.x6070_velocityThresholdTime,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6071_targetTorque = {
        .dataOrig = &OD_RAM.x6071_targetTorque,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6072_maxTorque = {
        .dataOrig = &OD_RAM.x6072_maxTorque,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6073_maxCurrent = {
        .dataOrig = &OD_RAM.x6073_maxCurrent,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6074_torqueDemandValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 2
    },
    .o_6075_motorRatedCurrent = {
        .dataOrig = &OD_RAM.x6075_motorRatedCurrent,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6076_motorRatedTorque = {
        .dataOrig = &OD_RAM.x6076_motorRatedTorque,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6077_torqueActualValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6078_currentActualValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 2
    },
    .o_6079_DC_LinkCircuitVoltage = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_607A_targetPosition = {
        .dataOrig = &OD_RAM.x607A_targetPosition,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 4
    },
    .o_607B_positionRangeLimit = {
        .dataOrig0 = &OD_RAM.x607B_positionRangeLimit_sub0,
        .dataOrig = &OD_RAM.x607B_positionRangeLimit[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_607C_homeOffset = {
        .dataOrig = &OD_RAM.x607C_homeOffset,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_607D_softwarePositionLimit = {
        .dataOrig0 = &OD_RAM.x607D_softwarePositionLimit_sub0,
        .dataOrig = &OD_RAM.x607D_softwarePositionLimit[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(int32_t)
    },
    .o_607E_polarity = {
        .dataOrig = &OD_RAM.x607E_polarity,
        .attribute = ODA_SDO_RW | ODA_TRPDO,
        .dataLength = 1
    },
    .o_607F_maxProfileVelocity = {
        .dataOrig = &OD_RAM.x607F_maxProfileVelocity,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6081_profileVelocityInPp_mode = {
        .dataOrig = &OD_RAM.x6081_profileVelocityInPp_mode,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6082_endVelocity = {
        .dataOrig = &OD_RAM.x6082_endVelocity,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6083_profileAcceleration = {
        .dataOrig = &OD_RAM.x6083_profileAcceleration,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6084_profileDeceleration = {
        .dataOrig = &OD_RAM.x6084_profileDeceleration,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6085_quickStopDeceleration = {
        .dataOrig = &OD_RAM.x6085_quickStopDeceleration,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_6086_motionProfileType = {
        .dataOrig = &OD_RAM.x6086_motionProfileType,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6087_torqueSlope = {
        .dataOrig = &OD_RAM.x6087_torqueSlope,
        .attribute = ODA_SDO_RW | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6088_torqueProfileType = {
        .dataOrig = &OD_RAM.x6088_torqueProfileType,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_6096_velocityFactor = {
        .dataOrig0 = &OD_RAM.x6096_velocityFactor_sub0,
        .dataOrig = &OD_RAM.x6096_velocityFactor[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_6097_accelerationFactor = {
        .dataOrig0 = &OD_RAM.x6097_accelerationFactor_sub0,
        .dataOrig = &OD_RAM.x6097_accelerationFactor[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_6098_homingMethod = {
        .dataOrig = &OD_RAM.x6098_homingMethod,
        .attribute = ODA_SDO_RW,
        .dataLength = 1
    },
    .o_6099_homingSpeeds = {
        .dataOrig0 = &OD_RAM.x6099_homingSpeeds_sub0,
        .dataOrig = &OD_RAM.x6099_homingSpeeds[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_609A_homingAcceleration = {
        .dataOrig = &OD_RAM.x609A_homingAcceleration,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_60C5_maxAcceleration = {
        .dataOrig = &OD_RAM.x60C5_maxAcceleration,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_60C6_maxDeceleration = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 4
    },
    .o_60E0_positiveTorqueLimitValue = {
        .dataOrig = &OD_RAM.x60E0_positiveTorqueLimitValue,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_60E1_negativeTorqueLimitValue = {
        .dataOrig = &OD_RAM.x60E1_negativeTorqueLimitValue,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_60E3_supportedHomingMethods = {
        .dataOrig0 = &OD_RAM.x60E3_supportedHomingMethods_sub0,
        .dataOrig = &OD_RAM.x60E3_supportedHomingMethods[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_R,
        .dataElementLength = 1,
        .dataElementSizeof = sizeof(int8_t)
    },
    .o_60F2_positioningOptionCode = {
        .dataOrig = &OD_RAM.x60F2_positioningOptionCode,
        .attribute = ODA_SDO_RW | ODA_MB,
        .dataLength = 2
    },
    .o_60F4_followingErrorActualValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_60FA_controlEffort = {
        .dataOrig = &OD_RAM.x60FA_controlEffort,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_60FC_positionDemandInternalValue = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    },
    .o_60FD_digitalInputs = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_TRPDO | ODA_MB,
        .dataLength = 4
    },
    .o_60FE_digitalOutputs = {
        .dataOrig0 = &OD_RAM.x60FE_digitalOutputs_sub0,
        .dataOrig = &OD_RAM.x60FE_digitalOutputs[0],
        .attribute0 = ODA_SDO_R,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataElementLength = 4,
        .dataElementSizeof = sizeof(uint32_t)
    },
    .o_60FF_targetVelocity = {
        .dataOrig = &OD_RAM.x60FF_targetVelocity,
        .attribute = ODA_SDO_RW | ODA_TPDO | ODA_MB,
        .dataLength = 4
    },
    .o_6402_motorType = {
        .dataOrig = &OD_RAM.x6402_motorType,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 2
    },
    .o_6403_motorCatalogueNumber = {
        .dataOrig = &OD_RAM.x6403_motorCatalogueNumber[0],
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 1
    },
    .o_6404_motorManufacturer = {
        .dataOrig = &OD_RAM.x6404_motorManufacturer[0],
        .attribute = ODA_SDO_R | ODA_STR,
        .dataLength = 3
    },
    .o_6502_supportedDriveModes = {
        .dataOrig = NULL,
        .attribute = ODA_SDO_R | ODA_MB,
        .dataLength = 4
    }
};


/*******************************************************************************
    Object dictionary
*******************************************************************************/
static OD_entry_t ODList[] = {
    {0x1000, 0x01, ODT_VAR, &ODObjs.o_1000_deviceType, NULL},
    {0x1001, 0x01, ODT_VAR, &ODObjs.o_1001_errorRegister, NULL},
    {0x1002, 0x01, ODT_VAR, &ODObjs.o_1002_manufacturerStatusRegister, NULL},
    {0x1003, 0x10, ODT_ARR, &ODObjs.o_1003_pre_definedErrorField, NULL},
    {0x1005, 0x01, ODT_VAR, &ODObjs.o_1005_COB_ID_SYNC, NULL},
    {0x1008, 0x01, ODT_VAR, &ODObjs.o_1008_manufacturerDeviceName, NULL},
    {0x1009, 0x01, ODT_VAR, &ODObjs.o_1009_manufacturerHardwareVersion, NULL},
    {0x100A, 0x01, ODT_VAR, &ODObjs.o_100A_manufacturerSoftwareVersion, NULL},
    {0x100C, 0x01, ODT_VAR, &ODObjs.o_100C_guardTime, NULL},
    {0x100D, 0x01, ODT_VAR, &ODObjs.o_100D_lifeTimeFactor, NULL},
    {0x1010, 0x06, ODT_ARR, &ODObjs.o_1010_storeParameterField, NULL},
    {0x1011, 0x06, ODT_ARR, &ODObjs.o_1011_restoreDefaultParameters, NULL},
    {0x1014, 0x01, ODT_VAR, &ODObjs.o_1014_COB_ID_EMCY, NULL},
    {0x1017, 0x01, ODT_VAR, &ODObjs.o_1017_producerHeartbeatTime, NULL},
    {0x1018, 0x05, ODT_REC, &ODObjs.o_1018_identityObject, NULL},
    {0x1029, 0x02, ODT_ARR, &ODObjs.o_1029_errorBehaviour, NULL},
    {0x1200, 0x03, ODT_REC, &ODObjs.o_1200_serverSDO_Parameter_1, NULL},
    {0x1280, 0x04, ODT_REC, &ODObjs.o_1280_clientSDO_Parameter_1, NULL},
    {0x1400, 0x06, ODT_REC, &ODObjs.o_1400_receivePDO_CommunicationParameter_1, NULL},
    {0x1401, 0x06, ODT_REC, &ODObjs.o_1401_receivePDO_CommunicationParameter_2, NULL},
    {0x1402, 0x06, ODT_REC, &ODObjs.o_1402_receivePDO_CommunicationParameter_3, NULL},
    {0x1403, 0x06, ODT_REC, &ODObjs.o_1403_receivePDO_CommunicationParameter_4, NULL},
    {0x1600, 0x09, ODT_REC, &ODObjs.o_1600_receivePDO_MappingParameter_1, NULL},
    {0x1601, 0x09, ODT_REC, &ODObjs.o_1601_receivePDO_MappingParameter_2, NULL},
    {0x1602, 0x09, ODT_REC, &ODObjs.o_1602_receivePDO_MappingParameter_3, NULL},
    {0x1603, 0x09, ODT_REC, &ODObjs.o_1603_receivePDO_MappingParameter_4, NULL},
    {0x1800, 0x06, ODT_REC, &ODObjs.o_1800_transmitPDO_CommunicationParameter_1, NULL},
    {0x1801, 0x06, ODT_REC, &ODObjs.o_1801_transmitPDO_CommunicationParameter_2, NULL},
    {0x1802, 0x06, ODT_REC, &ODObjs.o_1802_transmitPDO_CommunicationParameter_3, NULL},
    {0x1803, 0x06, ODT_REC, &ODObjs.o_1803_transmitPDO_CommunicationParameter_4, NULL},
    {0x1A00, 0x09, ODT_REC, &ODObjs.o_1A00_transmitPDO_MappingParameter_1, NULL},
    {0x1A01, 0x09, ODT_REC, &ODObjs.o_1A01_transmitPDO_MappingParameter_2, NULL},
    {0x1A02, 0x09, ODT_REC, &ODObjs.o_1A02_transmitPDO_MappingParameter_3, NULL},
    {0x1A03, 0x09, ODT_REC, &ODObjs.o_1A03_transmitPDO_MappingParameter_4, NULL},
    {0x2000, 0x01, ODT_VAR, &ODObjs.o_2000_canNodeID, NULL},
    {0x2001, 0x01, ODT_VAR, &ODObjs.o_2001_CAN_BaudRate, NULL},
    {0x2002, 0x01, ODT_VAR, &ODObjs.o_2002_driveControlState, NULL},
    {0x2003, 0x01, ODT_VAR, &ODObjs.o_2003_warning, NULL},
    {0x2004, 0x01, ODT_VAR, &ODObjs.o_2004_stateLafertServoDriveMachine, NULL},
    {0x2005, 0x0A, ODT_REC, &ODObjs.o_2005_info, NULL},
    {0x2006, 0x06, ODT_ARR, &ODObjs.o_2006_protocolSettings, NULL},
    {0x2030, 0x01, ODT_VAR, &ODObjs.o_2030_temperatureDrive, NULL},
    {0x2031, 0x01, ODT_VAR, &ODObjs.o_2031_temperatureMotor, NULL},
    {0x2032, 0x01, ODT_VAR, &ODObjs.o_2032_temperatureHeatSink, NULL},
    {0x2040, 0x01, ODT_VAR, &ODObjs.o_2040_voltageBrake, NULL},
    {0x2041, 0x01, ODT_VAR, &ODObjs.o_2041_voltageBus, NULL},
    {0x2042, 0x01, ODT_VAR, &ODObjs.o_2042_voltageLogicBoard, NULL},
    {0x2043, 0x01, ODT_VAR, &ODObjs.o_2043_voltageReference, NULL},
    {0x2050, 0x01, ODT_VAR, &ODObjs.o_2050_torqueCurrent, NULL},
    {0x2051, 0x01, ODT_VAR, &ODObjs.o_2051_powerDrive, NULL},
    {0x2052, 0x01, ODT_VAR, &ODObjs.o_2052_powerMotor, NULL},
    {0x2053, 0x01, ODT_VAR, &ODObjs.o_2053_velocityFiltered, NULL},
    {0x2054, 0x01, ODT_VAR, &ODObjs.o_2054_energyI2t, NULL},
    {0x2060, 0x01, ODT_VAR, &ODObjs.o_2060_impulse, NULL},
    {0x2061, 0x01, ODT_VAR, &ODObjs.o_2061_thetaE, NULL},
    {0x2062, 0x01, ODT_VAR, &ODObjs.o_2062_thetaM, NULL},
    {0x3001, 0x09, ODT_ARR, &ODObjs.o_3001_absoluteLimitsParameters, NULL},
    {0x3002, 0x08, ODT_ARR, &ODObjs.o_3002_brakeParameters, NULL},
    {0x3003, 0x08, ODT_ARR, &ODObjs.o_3003_driveSizeParameters, NULL},
    {0x3004, 0x10, ODT_ARR, &ODObjs.o_3004_feedBackParameters, NULL},
    {0x3005, 0x10, ODT_ARR, &ODObjs.o_3005_filterParameters, NULL},
    {0x3006, 0x07, ODT_ARR, &ODObjs.o_3006_motorSpecificSettings, NULL},
    {0x3007, 0x08, ODT_ARR, &ODObjs.o_3007_dynamicBrakeParameters, NULL},
    {0x3008, 0x08, ODT_ARR, &ODObjs.o_3008_emergencyEnableParameters, NULL},
    {0x3010, 0x05, ODT_ARR, &ODObjs.o_3010_alarmDisable, NULL},
    {0x3011, 0x05, ODT_ARR, &ODObjs.o_3011_alarmMask, NULL},
    {0x3020, 0x07, ODT_ARR, &ODObjs.o_3020_functionDigitalInput, NULL},
    {0x3021, 0x06, ODT_ARR, &ODObjs.o_3021_digitalInput_1, NULL},
    {0x3022, 0x06, ODT_ARR, &ODObjs.o_3022_digitalInput_2, NULL},
    {0x3023, 0x06, ODT_ARR, &ODObjs.o_3023_digitalInput_3, NULL},
    {0x3024, 0x06, ODT_ARR, &ODObjs.o_3024_digitalInput_4, NULL},
    {0x3030, 0x07, ODT_ARR, &ODObjs.o_3030_functionDigitalOutput, NULL},
    {0x3031, 0x06, ODT_ARR, &ODObjs.o_3031_digitalOutput_1, NULL},
    {0x3032, 0x06, ODT_ARR, &ODObjs.o_3032_digitalOutput_2, NULL},
    {0x3033, 0x06, ODT_ARR, &ODObjs.o_3033_digitalOutput_3, NULL},
    {0x3034, 0x06, ODT_ARR, &ODObjs.o_3034_digitalOutput_4, NULL},
    {0x3040, 0x06, ODT_ARR, &ODObjs.o_3040_analogInput, NULL},
    {0x3050, 0x06, ODT_ARR, &ODObjs.o_3050_analogOutput_1, NULL},
    {0x3051, 0x06, ODT_ARR, &ODObjs.o_3051_analogOutput_2, NULL},
    {0x3200, 0x07, ODT_ARR, &ODObjs.o_3200_currentPid, NULL},
    {0x3201, 0x07, ODT_ARR, &ODObjs.o_3201_speedPid, NULL},
    {0x3202, 0x0C, ODT_ARR, &ODObjs.o_3202_positionPid, NULL},
    {0x3300, 0x01, ODT_VAR, &ODObjs.o_3300_velocityFullScale, NULL},
    {0x4000, 0x03, ODT_ARR, &ODObjs.o_4000_safetyState, NULL},
    {0x4100, 0x06, ODT_ARR, &ODObjs.o_4100_communicationCAN_Status, NULL},
    {0x4101, 0x06, ODT_ARR, &ODObjs.o_4101_communicationCAN_Counter, NULL},
    {0x4102, 0x06, ODT_ARR, &ODObjs.o_4102_communicationCAN_Settings, NULL},
    {0x4103, 0x06, ODT_ARR, &ODObjs.o_4103_communicationError, NULL},
    {0x4200, 0x04, ODT_ARR, &ODObjs.o_4200_alarmMonitoring, NULL},
    {0x4500, 0x12, ODT_ARR, &ODObjs.o_4500_dummy, NULL},
    {0x4501, 0x0A, ODT_ARR, &ODObjs.o_4501_dummyTell, NULL},
    {0x4502, 0x07, ODT_ARR, &ODObjs.o_4502_dummyTellLong, NULL},
    {0x4503, 0x0F, ODT_ARR, &ODObjs.o_4503_dummyCANopen, NULL},
    {0x6007, 0x01, ODT_VAR, &ODObjs.o_6007_abortConnectionOptionCode, NULL},
    {0x603F, 0x01, ODT_VAR, &ODObjs.o_603F_errorCode, NULL},
    {0x6040, 0x01, ODT_VAR, &ODObjs.o_6040_controlword, NULL},
    {0x6041, 0x01, ODT_VAR, &ODObjs.o_6041_statusword, NULL},
    {0x605A, 0x01, ODT_VAR, &ODObjs.o_605A_quickStopOptionCode, NULL},
    {0x605B, 0x01, ODT_VAR, &ODObjs.o_605B_shutdownOptionCode, NULL},
    {0x605C, 0x01, ODT_VAR, &ODObjs.o_605C_disableOperationOptionCode, NULL},
    {0x605D, 0x01, ODT_VAR, &ODObjs.o_605D_haltOptionCode, NULL},
    {0x605E, 0x01, ODT_VAR, &ODObjs.o_605E_faultReactionOptionCode, NULL},
    {0x6060, 0x01, ODT_VAR, &ODObjs.o_6060_modesOfOperation, NULL},
    {0x6061, 0x01, ODT_VAR, &ODObjs.o_6061_modesOfOperationDisplay, NULL},
    {0x6062, 0x01, ODT_VAR, &ODObjs.o_6062_positionDemandValue, NULL},
    {0x6063, 0x01, ODT_VAR, &ODObjs.o_6063_positionActualInternalValue, NULL},
    {0x6064, 0x01, ODT_VAR, &ODObjs.o_6064_positionActualValue, NULL},
    {0x6065, 0x01, ODT_VAR, &ODObjs.o_6065_followingErrorWindow, NULL},
    {0x6066, 0x01, ODT_VAR, &ODObjs.o_6066_followingErrorTimeOut, NULL},
    {0x6067, 0x01, ODT_VAR, &ODObjs.o_6067_positionWindow, NULL},
    {0x6068, 0x01, ODT_VAR, &ODObjs.o_6068_positionWindowTime, NULL},
    {0x606B, 0x01, ODT_VAR, &ODObjs.o_606B_velocityDemandValue, NULL},
    {0x606C, 0x01, ODT_VAR, &ODObjs.o_606C_velocityActualValue, NULL},
    {0x606D, 0x01, ODT_VAR, &ODObjs.o_606D_velocityWindow, NULL},
    {0x606E, 0x01, ODT_VAR, &ODObjs.o_606E_velocityWindowTime, NULL},
    {0x606F, 0x01, ODT_VAR, &ODObjs.o_606F_velocityThreshold, NULL},
    {0x6070, 0x01, ODT_VAR, &ODObjs.o_6070_velocityThresholdTime, NULL},
    {0x6071, 0x01, ODT_VAR, &ODObjs.o_6071_targetTorque, NULL},
    {0x6072, 0x01, ODT_VAR, &ODObjs.o_6072_maxTorque, NULL},
    {0x6073, 0x01, ODT_VAR, &ODObjs.o_6073_maxCurrent, NULL},
    {0x6074, 0x01, ODT_VAR, &ODObjs.o_6074_torqueDemandValue, NULL},
    {0x6075, 0x01, ODT_VAR, &ODObjs.o_6075_motorRatedCurrent, NULL},
    {0x6076, 0x01, ODT_VAR, &ODObjs.o_6076_motorRatedTorque, NULL},
    {0x6077, 0x01, ODT_VAR, &ODObjs.o_6077_torqueActualValue, NULL},
    {0x6078, 0x01, ODT_VAR, &ODObjs.o_6078_currentActualValue, NULL},
    {0x6079, 0x01, ODT_VAR, &ODObjs.o_6079_DC_LinkCircuitVoltage, NULL},
    {0x607A, 0x01, ODT_VAR, &ODObjs.o_607A_targetPosition, NULL},
    {0x607B, 0x03, ODT_ARR, &ODObjs.o_607B_positionRangeLimit, NULL},
    {0x607C, 0x01, ODT_VAR, &ODObjs.o_607C_homeOffset, NULL},
    {0x607D, 0x03, ODT_ARR, &ODObjs.o_607D_softwarePositionLimit, NULL},
    {0x607E, 0x01, ODT_VAR, &ODObjs.o_607E_polarity, NULL},
    {0x607F, 0x01, ODT_VAR, &ODObjs.o_607F_maxProfileVelocity, NULL},
    {0x6081, 0x01, ODT_VAR, &ODObjs.o_6081_profileVelocityInPp_mode, NULL},
    {0x6082, 0x01, ODT_VAR, &ODObjs.o_6082_endVelocity, NULL},
    {0x6083, 0x01, ODT_VAR, &ODObjs.o_6083_profileAcceleration, NULL},
    {0x6084, 0x01, ODT_VAR, &ODObjs.o_6084_profileDeceleration, NULL},
    {0x6085, 0x01, ODT_VAR, &ODObjs.o_6085_quickStopDeceleration, NULL},
    {0x6086, 0x01, ODT_VAR, &ODObjs.o_6086_motionProfileType, NULL},
    {0x6087, 0x01, ODT_VAR, &ODObjs.o_6087_torqueSlope, NULL},
    {0x6088, 0x01, ODT_VAR, &ODObjs.o_6088_torqueProfileType, NULL},
    {0x6096, 0x03, ODT_ARR, &ODObjs.o_6096_velocityFactor, NULL},
    {0x6097, 0x03, ODT_ARR, &ODObjs.o_6097_accelerationFactor, NULL},
    {0x6098, 0x01, ODT_VAR, &ODObjs.o_6098_homingMethod, NULL},
    {0x6099, 0x03, ODT_ARR, &ODObjs.o_6099_homingSpeeds, NULL},
    {0x609A, 0x01, ODT_VAR, &ODObjs.o_609A_homingAcceleration, NULL},
    {0x60C5, 0x01, ODT_VAR, &ODObjs.o_60C5_maxAcceleration, NULL},
    {0x60C6, 0x01, ODT_VAR, &ODObjs.o_60C6_maxDeceleration, NULL},
    {0x60E0, 0x01, ODT_VAR, &ODObjs.o_60E0_positiveTorqueLimitValue, NULL},
    {0x60E1, 0x01, ODT_VAR, &ODObjs.o_60E1_negativeTorqueLimitValue, NULL},
    {0x60E3, 0x15, ODT_ARR, &ODObjs.o_60E3_supportedHomingMethods, NULL},
    {0x60F2, 0x01, ODT_VAR, &ODObjs.o_60F2_positioningOptionCode, NULL},
    {0x60F4, 0x01, ODT_VAR, &ODObjs.o_60F4_followingErrorActualValue, NULL},
    {0x60FA, 0x01, ODT_VAR, &ODObjs.o_60FA_controlEffort, NULL},
    {0x60FC, 0x01, ODT_VAR, &ODObjs.o_60FC_positionDemandInternalValue, NULL},
    {0x60FD, 0x01, ODT_VAR, &ODObjs.o_60FD_digitalInputs, NULL},
    {0x60FE, 0x03, ODT_ARR, &ODObjs.o_60FE_digitalOutputs, NULL},
    {0x60FF, 0x01, ODT_VAR, &ODObjs.o_60FF_targetVelocity, NULL},
    {0x6402, 0x01, ODT_VAR, &ODObjs.o_6402_motorType, NULL},
    {0x6403, 0x01, ODT_VAR, &ODObjs.o_6403_motorCatalogueNumber, NULL},
    {0x6404, 0x01, ODT_VAR, &ODObjs.o_6404_motorManufacturer, NULL},
    {0x6502, 0x01, ODT_VAR, &ODObjs.o_6502_supportedDriveModes, NULL},
    {0x0000, 0x00, 0, NULL, NULL}
};

static OD_t _OD = {
    (sizeof(ODList) / sizeof(ODList[0])) - 1,
    &ODList[0]
};

OD_t *OD = &_OD;
