/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated with
    libedssharp Object Dictionary Editor v0.8-128-g85dfd8e-dirty

    https://github.com/CANopenNode/CANopenNode
    https://github.com/robincornelius/libedssharp

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: Smartris_eds_fw_226.eds
        File Version: 1

        Created:      15/10/2019 09:56:00 a. m.
        Created By:   Administrator
        Modified:     29/10/2021 02:51:00 p. m.
        Modified By:  Lafert Servo Drives

    Device Info:
        Vendor Name:  Lafert Drives
        Vendor ID:    0x0
        Product Name: CANopen device
        Product ID:   0x0

        Description:  CANopen device using port's CANopen library
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/


/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1000_deviceType;
    uint8_t x1003_pre_definedErrorField_sub0;
    uint32_t x1003_pre_definedErrorField[15];
    uint32_t x1005_COB_ID_SYNC;
    uint16_t x100C_guardTime;
    uint8_t x100D_lifeTimeFactor;
    uint8_t x1010_storeParameterField_sub0;
    uint8_t x1011_restoreDefaultParameters_sub0;
    uint32_t x1014_COB_ID_EMCY;
    uint16_t x1017_producerHeartbeatTime;
    struct {
        uint8_t numberOfEntries;
        uint32_t vendorId;
        uint32_t productCode;
    } x1018_identityObject;
    uint8_t x1029_errorBehaviour_sub0;
    uint8_t x1029_errorBehaviour[1];
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID_Client_Server;
        uint32_t COB_ID_Server_Client;
    } x1200_serverSDO_Parameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID_Client_Server;
        uint32_t COB_ID_Server_Client;
        uint8_t nodeIDOfTheSDO_Server;
    } x1280_clientSDO_Parameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1400_receivePDO_CommunicationParameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1401_receivePDO_CommunicationParameter_2;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1402_receivePDO_CommunicationParameter_3;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1403_receivePDO_CommunicationParameter_4;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1600_receivePDO_MappingParameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1601_receivePDO_MappingParameter_2;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1602_receivePDO_MappingParameter_3;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1603_receivePDO_MappingParameter_4;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1800_transmitPDO_CommunicationParameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1801_transmitPDO_CommunicationParameter_2;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1802_transmitPDO_CommunicationParameter_3;
    struct {
        uint8_t numberOfEntries;
        uint32_t COB_ID;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
    } x1803_transmitPDO_CommunicationParameter_4;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1A00_transmitPDO_MappingParameter_1;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1A01_transmitPDO_MappingParameter_2;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1A02_transmitPDO_MappingParameter_3;
    struct {
        uint8_t numberOfEntries;
        uint32_t mappingEntry_1;
        uint32_t mappingEntry_2;
        uint32_t mappingEntry_3;
        uint32_t mappingEntry_4;
        uint32_t mappingEntry_5;
        uint32_t mappingEntry_6;
        uint32_t mappingEntry_7;
        uint32_t mappingEntry_8;
    } x1A03_transmitPDO_MappingParameter_4;
    uint8_t x2000_canNodeID;
    uint16_t x2001_CAN_BaudRate;
    int16_t x2002_driveControlState;
    uint32_t x2003_warning;
    int16_t x2004_stateLafertServoDriveMachine;
    struct {
        uint8_t numOfEntries;
    } x2005_info;
    uint8_t x2006_protocolSettings_sub0;
    int16_t x2006_protocolSettings[5];
    int16_t x2030_temperatureDrive;
    int16_t x2031_temperatureMotor;
    int16_t x2032_temperatureHeatSink;
    int16_t x2040_voltageBrake;
    int16_t x2041_voltageBus;
    int16_t x2042_voltageLogicBoard;
    int16_t x2043_voltageReference;
    int16_t x2050_torqueCurrent;
    int16_t x2051_powerDrive;
    int16_t x2052_powerMotor;
    int16_t x2053_velocityFiltered;
    uint16_t x2054_energyI2t;
    int16_t x2060_impulse;
    uint16_t x2061_thetaE;
    int16_t x2062_thetaM;
    uint8_t x3001_absoluteLimitsParameters_sub0;
    uint32_t x3001_absoluteLimitsParameters[8];
    uint8_t x3002_brakeParameters_sub0;
    int16_t x3002_brakeParameters[7];
    uint8_t x3003_driveSizeParameters_sub0;
    int16_t x3003_driveSizeParameters[7];
    uint8_t x3004_feedBackParameters_sub0;
    int16_t x3004_feedBackParameters[15];
    uint8_t x3005_filterParameters_sub0;
    int16_t x3005_filterParameters[15];
    uint8_t x3006_motorSpecificSettings_sub0;
    int16_t x3006_motorSpecificSettings[6];
    uint8_t x3007_dynamicBrakeParameters_sub0;
    int16_t x3007_dynamicBrakeParameters[7];
    uint8_t x3008_emergencyEnableParameters_sub0;
    int16_t x3008_emergencyEnableParameters[7];
    uint8_t x3010_alarmDisable_sub0;
    int16_t x3010_alarmDisable[4];
    uint8_t x3011_alarmMask_sub0;
    int16_t x3011_alarmMask[4];
    uint8_t x3020_functionDigitalInput_sub0;
    int16_t x3020_functionDigitalInput[6];
    uint8_t x3021_digitalInput_1_sub0;
    int16_t x3021_digitalInput_1[5];
    uint8_t x3022_digitalInput_2_sub0;
    int16_t x3022_digitalInput_2[5];
    uint8_t x3023_digitalInput_3_sub0;
    int16_t x3023_digitalInput_3[5];
    uint8_t x3024_digitalInput_4_sub0;
    int16_t x3024_digitalInput_4[5];
    uint8_t x3030_functionDigitalOutput_sub0;
    int16_t x3030_functionDigitalOutput[6];
    uint8_t x3031_digitalOutput_1_sub0;
    int16_t x3031_digitalOutput_1[5];
    uint8_t x3032_digitalOutput_2_sub0;
    int16_t x3032_digitalOutput_2[5];
    uint8_t x3033_digitalOutput_3_sub0;
    int16_t x3033_digitalOutput_3[5];
    uint8_t x3034_digitalOutput_4_sub0;
    int16_t x3034_digitalOutput_4[5];
    uint8_t x3040_analogInput_sub0;
    int16_t x3040_analogInput[5];
    uint8_t x3050_analogOutput_1_sub0;
    int16_t x3050_analogOutput_1[5];
    uint8_t x3051_analogOutput_2_sub0;
    int16_t x3051_analogOutput_2[5];
    uint8_t x3200_currentPid_sub0;
    int16_t x3200_currentPid[6];
    uint8_t x3201_speedPid_sub0;
    int16_t x3201_speedPid[6];
    uint8_t x3202_positionPid_sub0;
    int16_t x3202_positionPid[11];
    uint16_t x3300_velocityFullScale;
    uint8_t x4000_safetyState_sub0;
    uint16_t x4000_safetyState[2];
    uint8_t x4100_communicationCAN_Status_sub0;
    int16_t x4100_communicationCAN_Status[5];
    uint8_t x4101_communicationCAN_Counter_sub0;
    int16_t x4101_communicationCAN_Counter[5];
    uint8_t x4102_communicationCAN_Settings_sub0;
    int16_t x4102_communicationCAN_Settings[5];
    uint8_t x4103_communicationError_sub0;
    int16_t x4103_communicationError[5];
    uint8_t x4200_alarmMonitoring_sub0;
    int16_t x4200_alarmMonitoring[3];
    uint8_t x4500_dummy_sub0;
    int16_t x4500_dummy[17];
    uint8_t x4501_dummyTell_sub0;
    int16_t x4501_dummyTell[9];
    uint8_t x4502_dummyTellLong_sub0;
    int32_t x4502_dummyTellLong[6];
    uint8_t x4503_dummyCANopen_sub0;
    int32_t x4503_dummyCANopen[14];
    int16_t x6007_abortConnectionOptionCode;
    int16_t x605A_quickStopOptionCode;
    int16_t x605B_shutdownOptionCode;
    int16_t x605C_disableOperationOptionCode;
    int16_t x605D_haltOptionCode;
    int16_t x605E_faultReactionOptionCode;
    int8_t x6060_modesOfOperation;
    uint32_t x6065_followingErrorWindow;
    uint16_t x6066_followingErrorTimeOut;
    uint32_t x6067_positionWindow;
    uint16_t x6068_positionWindowTime;
    uint16_t x606D_velocityWindow;
    uint16_t x606E_velocityWindowTime;
    uint16_t x606F_velocityThreshold;
    uint16_t x6070_velocityThresholdTime;
    int16_t x6071_targetTorque;
    uint16_t x6072_maxTorque;
    uint16_t x6073_maxCurrent;
    uint32_t x6075_motorRatedCurrent;
    uint32_t x6076_motorRatedTorque;
    int32_t x607A_targetPosition;
    uint8_t x607B_positionRangeLimit_sub0;
    int32_t x607B_positionRangeLimit[2];
    int32_t x607C_homeOffset;
    uint8_t x607D_softwarePositionLimit_sub0;
    int32_t x607D_softwarePositionLimit[2];
    uint8_t x607E_polarity;
    uint32_t x607F_maxProfileVelocity;
    uint32_t x6081_profileVelocityInPp_mode;
    uint32_t x6082_endVelocity;
    uint32_t x6083_profileAcceleration;
    uint32_t x6084_profileDeceleration;
    uint32_t x6085_quickStopDeceleration;
    int16_t x6086_motionProfileType;
    uint32_t x6087_torqueSlope;
    int16_t x6088_torqueProfileType;
    uint8_t x6096_velocityFactor_sub0;
    uint32_t x6096_velocityFactor[2];
    uint8_t x6097_accelerationFactor_sub0;
    uint32_t x6097_accelerationFactor[2];
    int8_t x6098_homingMethod;
    uint8_t x6099_homingSpeeds_sub0;
    uint32_t x6099_homingSpeeds[2];
    uint32_t x609A_homingAcceleration;
    uint32_t x60C5_maxAcceleration;
    uint16_t x60E0_positiveTorqueLimitValue;
    uint16_t x60E1_negativeTorqueLimitValue;
    uint8_t x60E3_supportedHomingMethods_sub0;
    int8_t x60E3_supportedHomingMethods[20];
    uint16_t x60F2_positioningOptionCode;
    int32_t x60FA_controlEffort;
    uint8_t x60FE_digitalOutputs_sub0;
    uint32_t x60FE_digitalOutputs[2];
    int32_t x60FF_targetVelocity;
    uint16_t x6402_motorType;
    char x6403_motorCatalogueNumber[2];
    char x6404_motorManufacturer[4];
} OD_RAM_t;

extern OD_RAM_t OD_RAM;
extern OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1002 &OD->list[2]
#define OD_ENTRY_H1003 &OD->list[3]
#define OD_ENTRY_H1005 &OD->list[4]
#define OD_ENTRY_H1008 &OD->list[5]
#define OD_ENTRY_H1009 &OD->list[6]
#define OD_ENTRY_H100A &OD->list[7]
#define OD_ENTRY_H100C &OD->list[8]
#define OD_ENTRY_H100D &OD->list[9]
#define OD_ENTRY_H1010 &OD->list[10]
#define OD_ENTRY_H1011 &OD->list[11]
#define OD_ENTRY_H1014 &OD->list[12]
#define OD_ENTRY_H1017 &OD->list[13]
#define OD_ENTRY_H1018 &OD->list[14]
#define OD_ENTRY_H1029 &OD->list[15]
#define OD_ENTRY_H1200 &OD->list[16]
#define OD_ENTRY_H1280 &OD->list[17]
#define OD_ENTRY_H1400 &OD->list[18]
#define OD_ENTRY_H1401 &OD->list[19]
#define OD_ENTRY_H1402 &OD->list[20]
#define OD_ENTRY_H1403 &OD->list[21]
#define OD_ENTRY_H1600 &OD->list[22]
#define OD_ENTRY_H1601 &OD->list[23]
#define OD_ENTRY_H1602 &OD->list[24]
#define OD_ENTRY_H1603 &OD->list[25]
#define OD_ENTRY_H1800 &OD->list[26]
#define OD_ENTRY_H1801 &OD->list[27]
#define OD_ENTRY_H1802 &OD->list[28]
#define OD_ENTRY_H1803 &OD->list[29]
#define OD_ENTRY_H1A00 &OD->list[30]
#define OD_ENTRY_H1A01 &OD->list[31]
#define OD_ENTRY_H1A02 &OD->list[32]
#define OD_ENTRY_H1A03 &OD->list[33]
#define OD_ENTRY_H2000 &OD->list[34]
#define OD_ENTRY_H2001 &OD->list[35]
#define OD_ENTRY_H2002 &OD->list[36]
#define OD_ENTRY_H2003 &OD->list[37]
#define OD_ENTRY_H2004 &OD->list[38]
#define OD_ENTRY_H2005 &OD->list[39]
#define OD_ENTRY_H2006 &OD->list[40]
#define OD_ENTRY_H2030 &OD->list[41]
#define OD_ENTRY_H2031 &OD->list[42]
#define OD_ENTRY_H2032 &OD->list[43]
#define OD_ENTRY_H2040 &OD->list[44]
#define OD_ENTRY_H2041 &OD->list[45]
#define OD_ENTRY_H2042 &OD->list[46]
#define OD_ENTRY_H2043 &OD->list[47]
#define OD_ENTRY_H2050 &OD->list[48]
#define OD_ENTRY_H2051 &OD->list[49]
#define OD_ENTRY_H2052 &OD->list[50]
#define OD_ENTRY_H2053 &OD->list[51]
#define OD_ENTRY_H2054 &OD->list[52]
#define OD_ENTRY_H2060 &OD->list[53]
#define OD_ENTRY_H2061 &OD->list[54]
#define OD_ENTRY_H2062 &OD->list[55]
#define OD_ENTRY_H3001 &OD->list[56]
#define OD_ENTRY_H3002 &OD->list[57]
#define OD_ENTRY_H3003 &OD->list[58]
#define OD_ENTRY_H3004 &OD->list[59]
#define OD_ENTRY_H3005 &OD->list[60]
#define OD_ENTRY_H3006 &OD->list[61]
#define OD_ENTRY_H3007 &OD->list[62]
#define OD_ENTRY_H3008 &OD->list[63]
#define OD_ENTRY_H3010 &OD->list[64]
#define OD_ENTRY_H3011 &OD->list[65]
#define OD_ENTRY_H3020 &OD->list[66]
#define OD_ENTRY_H3021 &OD->list[67]
#define OD_ENTRY_H3022 &OD->list[68]
#define OD_ENTRY_H3023 &OD->list[69]
#define OD_ENTRY_H3024 &OD->list[70]
#define OD_ENTRY_H3030 &OD->list[71]
#define OD_ENTRY_H3031 &OD->list[72]
#define OD_ENTRY_H3032 &OD->list[73]
#define OD_ENTRY_H3033 &OD->list[74]
#define OD_ENTRY_H3034 &OD->list[75]
#define OD_ENTRY_H3040 &OD->list[76]
#define OD_ENTRY_H3050 &OD->list[77]
#define OD_ENTRY_H3051 &OD->list[78]
#define OD_ENTRY_H3200 &OD->list[79]
#define OD_ENTRY_H3201 &OD->list[80]
#define OD_ENTRY_H3202 &OD->list[81]
#define OD_ENTRY_H3300 &OD->list[82]
#define OD_ENTRY_H4000 &OD->list[83]
#define OD_ENTRY_H4100 &OD->list[84]
#define OD_ENTRY_H4101 &OD->list[85]
#define OD_ENTRY_H4102 &OD->list[86]
#define OD_ENTRY_H4103 &OD->list[87]
#define OD_ENTRY_H4200 &OD->list[88]
#define OD_ENTRY_H4500 &OD->list[89]
#define OD_ENTRY_H4501 &OD->list[90]
#define OD_ENTRY_H4502 &OD->list[91]
#define OD_ENTRY_H4503 &OD->list[92]
#define OD_ENTRY_H6007 &OD->list[93]
#define OD_ENTRY_H603F &OD->list[94]
#define OD_ENTRY_H6040 &OD->list[95]
#define OD_ENTRY_H6041 &OD->list[96]
#define OD_ENTRY_H605A &OD->list[97]
#define OD_ENTRY_H605B &OD->list[98]
#define OD_ENTRY_H605C &OD->list[99]
#define OD_ENTRY_H605D &OD->list[100]
#define OD_ENTRY_H605E &OD->list[101]
#define OD_ENTRY_H6060 &OD->list[102]
#define OD_ENTRY_H6061 &OD->list[103]
#define OD_ENTRY_H6062 &OD->list[104]
#define OD_ENTRY_H6063 &OD->list[105]
#define OD_ENTRY_H6064 &OD->list[106]
#define OD_ENTRY_H6065 &OD->list[107]
#define OD_ENTRY_H6066 &OD->list[108]
#define OD_ENTRY_H6067 &OD->list[109]
#define OD_ENTRY_H6068 &OD->list[110]
#define OD_ENTRY_H606B &OD->list[111]
#define OD_ENTRY_H606C &OD->list[112]
#define OD_ENTRY_H606D &OD->list[113]
#define OD_ENTRY_H606E &OD->list[114]
#define OD_ENTRY_H606F &OD->list[115]
#define OD_ENTRY_H6070 &OD->list[116]
#define OD_ENTRY_H6071 &OD->list[117]
#define OD_ENTRY_H6072 &OD->list[118]
#define OD_ENTRY_H6073 &OD->list[119]
#define OD_ENTRY_H6074 &OD->list[120]
#define OD_ENTRY_H6075 &OD->list[121]
#define OD_ENTRY_H6076 &OD->list[122]
#define OD_ENTRY_H6077 &OD->list[123]
#define OD_ENTRY_H6078 &OD->list[124]
#define OD_ENTRY_H6079 &OD->list[125]
#define OD_ENTRY_H607A &OD->list[126]
#define OD_ENTRY_H607B &OD->list[127]
#define OD_ENTRY_H607C &OD->list[128]
#define OD_ENTRY_H607D &OD->list[129]
#define OD_ENTRY_H607E &OD->list[130]
#define OD_ENTRY_H607F &OD->list[131]
#define OD_ENTRY_H6081 &OD->list[132]
#define OD_ENTRY_H6082 &OD->list[133]
#define OD_ENTRY_H6083 &OD->list[134]
#define OD_ENTRY_H6084 &OD->list[135]
#define OD_ENTRY_H6085 &OD->list[136]
#define OD_ENTRY_H6086 &OD->list[137]
#define OD_ENTRY_H6087 &OD->list[138]
#define OD_ENTRY_H6088 &OD->list[139]
#define OD_ENTRY_H6096 &OD->list[140]
#define OD_ENTRY_H6097 &OD->list[141]
#define OD_ENTRY_H6098 &OD->list[142]
#define OD_ENTRY_H6099 &OD->list[143]
#define OD_ENTRY_H609A &OD->list[144]
#define OD_ENTRY_H60C5 &OD->list[145]
#define OD_ENTRY_H60C6 &OD->list[146]
#define OD_ENTRY_H60E0 &OD->list[147]
#define OD_ENTRY_H60E1 &OD->list[148]
#define OD_ENTRY_H60E3 &OD->list[149]
#define OD_ENTRY_H60F2 &OD->list[150]
#define OD_ENTRY_H60F4 &OD->list[151]
#define OD_ENTRY_H60FA &OD->list[152]
#define OD_ENTRY_H60FC &OD->list[153]
#define OD_ENTRY_H60FD &OD->list[154]
#define OD_ENTRY_H60FE &OD->list[155]
#define OD_ENTRY_H60FF &OD->list[156]
#define OD_ENTRY_H6402 &OD->list[157]
#define OD_ENTRY_H6403 &OD->list[158]
#define OD_ENTRY_H6404 &OD->list[159]
#define OD_ENTRY_H6502 &OD->list[160]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1000_deviceType &OD->list[0]
#define OD_ENTRY_H1001_errorRegister &OD->list[1]
#define OD_ENTRY_H1002_manufacturerStatusRegister &OD->list[2]
#define OD_ENTRY_H1003_pre_definedErrorField &OD->list[3]
#define OD_ENTRY_H1005_COB_ID_SYNC &OD->list[4]
#define OD_ENTRY_H1008_manufacturerDeviceName &OD->list[5]
#define OD_ENTRY_H1009_manufacturerHardwareVersion &OD->list[6]
#define OD_ENTRY_H100A_manufacturerSoftwareVersion &OD->list[7]
#define OD_ENTRY_H100C_guardTime &OD->list[8]
#define OD_ENTRY_H100D_lifeTimeFactor &OD->list[9]
#define OD_ENTRY_H1010_storeParameterField &OD->list[10]
#define OD_ENTRY_H1011_restoreDefaultParameters &OD->list[11]
#define OD_ENTRY_H1014_COB_ID_EMCY &OD->list[12]
#define OD_ENTRY_H1017_producerHeartbeatTime &OD->list[13]
#define OD_ENTRY_H1018_identityObject &OD->list[14]
#define OD_ENTRY_H1029_errorBehaviour &OD->list[15]
#define OD_ENTRY_H1200_serverSDO_Parameter_1 &OD->list[16]
#define OD_ENTRY_H1280_clientSDO_Parameter_1 &OD->list[17]
#define OD_ENTRY_H1400_receivePDO_CommunicationParameter_1 &OD->list[18]
#define OD_ENTRY_H1401_receivePDO_CommunicationParameter_2 &OD->list[19]
#define OD_ENTRY_H1402_receivePDO_CommunicationParameter_3 &OD->list[20]
#define OD_ENTRY_H1403_receivePDO_CommunicationParameter_4 &OD->list[21]
#define OD_ENTRY_H1600_receivePDO_MappingParameter_1 &OD->list[22]
#define OD_ENTRY_H1601_receivePDO_MappingParameter_2 &OD->list[23]
#define OD_ENTRY_H1602_receivePDO_MappingParameter_3 &OD->list[24]
#define OD_ENTRY_H1603_receivePDO_MappingParameter_4 &OD->list[25]
#define OD_ENTRY_H1800_transmitPDO_CommunicationParameter_1 &OD->list[26]
#define OD_ENTRY_H1801_transmitPDO_CommunicationParameter_2 &OD->list[27]
#define OD_ENTRY_H1802_transmitPDO_CommunicationParameter_3 &OD->list[28]
#define OD_ENTRY_H1803_transmitPDO_CommunicationParameter_4 &OD->list[29]
#define OD_ENTRY_H1A00_transmitPDO_MappingParameter_1 &OD->list[30]
#define OD_ENTRY_H1A01_transmitPDO_MappingParameter_2 &OD->list[31]
#define OD_ENTRY_H1A02_transmitPDO_MappingParameter_3 &OD->list[32]
#define OD_ENTRY_H1A03_transmitPDO_MappingParameter_4 &OD->list[33]
#define OD_ENTRY_H2000_canNodeID &OD->list[34]
#define OD_ENTRY_H2001_CAN_BaudRate &OD->list[35]
#define OD_ENTRY_H2002_driveControlState &OD->list[36]
#define OD_ENTRY_H2003_warning &OD->list[37]
#define OD_ENTRY_H2004_stateLafertServoDriveMachine &OD->list[38]
#define OD_ENTRY_H2005_info &OD->list[39]
#define OD_ENTRY_H2006_protocolSettings &OD->list[40]
#define OD_ENTRY_H2030_temperatureDrive &OD->list[41]
#define OD_ENTRY_H2031_temperatureMotor &OD->list[42]
#define OD_ENTRY_H2032_temperatureHeatSink &OD->list[43]
#define OD_ENTRY_H2040_voltageBrake &OD->list[44]
#define OD_ENTRY_H2041_voltageBus &OD->list[45]
#define OD_ENTRY_H2042_voltageLogicBoard &OD->list[46]
#define OD_ENTRY_H2043_voltageReference &OD->list[47]
#define OD_ENTRY_H2050_torqueCurrent &OD->list[48]
#define OD_ENTRY_H2051_powerDrive &OD->list[49]
#define OD_ENTRY_H2052_powerMotor &OD->list[50]
#define OD_ENTRY_H2053_velocityFiltered &OD->list[51]
#define OD_ENTRY_H2054_energyI2t &OD->list[52]
#define OD_ENTRY_H2060_impulse &OD->list[53]
#define OD_ENTRY_H2061_thetaE &OD->list[54]
#define OD_ENTRY_H2062_thetaM &OD->list[55]
#define OD_ENTRY_H3001_absoluteLimitsParameters &OD->list[56]
#define OD_ENTRY_H3002_brakeParameters &OD->list[57]
#define OD_ENTRY_H3003_driveSizeParameters &OD->list[58]
#define OD_ENTRY_H3004_feedBackParameters &OD->list[59]
#define OD_ENTRY_H3005_filterParameters &OD->list[60]
#define OD_ENTRY_H3006_motorSpecificSettings &OD->list[61]
#define OD_ENTRY_H3007_dynamicBrakeParameters &OD->list[62]
#define OD_ENTRY_H3008_emergencyEnableParameters &OD->list[63]
#define OD_ENTRY_H3010_alarmDisable &OD->list[64]
#define OD_ENTRY_H3011_alarmMask &OD->list[65]
#define OD_ENTRY_H3020_functionDigitalInput &OD->list[66]
#define OD_ENTRY_H3021_digitalInput_1 &OD->list[67]
#define OD_ENTRY_H3022_digitalInput_2 &OD->list[68]
#define OD_ENTRY_H3023_digitalInput_3 &OD->list[69]
#define OD_ENTRY_H3024_digitalInput_4 &OD->list[70]
#define OD_ENTRY_H3030_functionDigitalOutput &OD->list[71]
#define OD_ENTRY_H3031_digitalOutput_1 &OD->list[72]
#define OD_ENTRY_H3032_digitalOutput_2 &OD->list[73]
#define OD_ENTRY_H3033_digitalOutput_3 &OD->list[74]
#define OD_ENTRY_H3034_digitalOutput_4 &OD->list[75]
#define OD_ENTRY_H3040_analogInput &OD->list[76]
#define OD_ENTRY_H3050_analogOutput_1 &OD->list[77]
#define OD_ENTRY_H3051_analogOutput_2 &OD->list[78]
#define OD_ENTRY_H3200_currentPid &OD->list[79]
#define OD_ENTRY_H3201_speedPid &OD->list[80]
#define OD_ENTRY_H3202_positionPid &OD->list[81]
#define OD_ENTRY_H3300_velocityFullScale &OD->list[82]
#define OD_ENTRY_H4000_safetyState &OD->list[83]
#define OD_ENTRY_H4100_communicationCAN_Status &OD->list[84]
#define OD_ENTRY_H4101_communicationCAN_Counter &OD->list[85]
#define OD_ENTRY_H4102_communicationCAN_Settings &OD->list[86]
#define OD_ENTRY_H4103_communicationError &OD->list[87]
#define OD_ENTRY_H4200_alarmMonitoring &OD->list[88]
#define OD_ENTRY_H4500_dummy &OD->list[89]
#define OD_ENTRY_H4501_dummyTell &OD->list[90]
#define OD_ENTRY_H4502_dummyTellLong &OD->list[91]
#define OD_ENTRY_H4503_dummyCANopen &OD->list[92]
#define OD_ENTRY_H6007_abortConnectionOptionCode &OD->list[93]
#define OD_ENTRY_H603F_errorCode &OD->list[94]
#define OD_ENTRY_H6040_controlword &OD->list[95]
#define OD_ENTRY_H6041_statusword &OD->list[96]
#define OD_ENTRY_H605A_quickStopOptionCode &OD->list[97]
#define OD_ENTRY_H605B_shutdownOptionCode &OD->list[98]
#define OD_ENTRY_H605C_disableOperationOptionCode &OD->list[99]
#define OD_ENTRY_H605D_haltOptionCode &OD->list[100]
#define OD_ENTRY_H605E_faultReactionOptionCode &OD->list[101]
#define OD_ENTRY_H6060_modesOfOperation &OD->list[102]
#define OD_ENTRY_H6061_modesOfOperationDisplay &OD->list[103]
#define OD_ENTRY_H6062_positionDemandValue &OD->list[104]
#define OD_ENTRY_H6063_positionActualInternalValue &OD->list[105]
#define OD_ENTRY_H6064_positionActualValue &OD->list[106]
#define OD_ENTRY_H6065_followingErrorWindow &OD->list[107]
#define OD_ENTRY_H6066_followingErrorTimeOut &OD->list[108]
#define OD_ENTRY_H6067_positionWindow &OD->list[109]
#define OD_ENTRY_H6068_positionWindowTime &OD->list[110]
#define OD_ENTRY_H606B_velocityDemandValue &OD->list[111]
#define OD_ENTRY_H606C_velocityActualValue &OD->list[112]
#define OD_ENTRY_H606D_velocityWindow &OD->list[113]
#define OD_ENTRY_H606E_velocityWindowTime &OD->list[114]
#define OD_ENTRY_H606F_velocityThreshold &OD->list[115]
#define OD_ENTRY_H6070_velocityThresholdTime &OD->list[116]
#define OD_ENTRY_H6071_targetTorque &OD->list[117]
#define OD_ENTRY_H6072_maxTorque &OD->list[118]
#define OD_ENTRY_H6073_maxCurrent &OD->list[119]
#define OD_ENTRY_H6074_torqueDemandValue &OD->list[120]
#define OD_ENTRY_H6075_motorRatedCurrent &OD->list[121]
#define OD_ENTRY_H6076_motorRatedTorque &OD->list[122]
#define OD_ENTRY_H6077_torqueActualValue &OD->list[123]
#define OD_ENTRY_H6078_currentActualValue &OD->list[124]
#define OD_ENTRY_H6079_DC_LinkCircuitVoltage &OD->list[125]
#define OD_ENTRY_H607A_targetPosition &OD->list[126]
#define OD_ENTRY_H607B_positionRangeLimit &OD->list[127]
#define OD_ENTRY_H607C_homeOffset &OD->list[128]
#define OD_ENTRY_H607D_softwarePositionLimit &OD->list[129]
#define OD_ENTRY_H607E_polarity &OD->list[130]
#define OD_ENTRY_H607F_maxProfileVelocity &OD->list[131]
#define OD_ENTRY_H6081_profileVelocityInPp_mode &OD->list[132]
#define OD_ENTRY_H6082_endVelocity &OD->list[133]
#define OD_ENTRY_H6083_profileAcceleration &OD->list[134]
#define OD_ENTRY_H6084_profileDeceleration &OD->list[135]
#define OD_ENTRY_H6085_quickStopDeceleration &OD->list[136]
#define OD_ENTRY_H6086_motionProfileType &OD->list[137]
#define OD_ENTRY_H6087_torqueSlope &OD->list[138]
#define OD_ENTRY_H6088_torqueProfileType &OD->list[139]
#define OD_ENTRY_H6096_velocityFactor &OD->list[140]
#define OD_ENTRY_H6097_accelerationFactor &OD->list[141]
#define OD_ENTRY_H6098_homingMethod &OD->list[142]
#define OD_ENTRY_H6099_homingSpeeds &OD->list[143]
#define OD_ENTRY_H609A_homingAcceleration &OD->list[144]
#define OD_ENTRY_H60C5_maxAcceleration &OD->list[145]
#define OD_ENTRY_H60C6_maxDeceleration &OD->list[146]
#define OD_ENTRY_H60E0_positiveTorqueLimitValue &OD->list[147]
#define OD_ENTRY_H60E1_negativeTorqueLimitValue &OD->list[148]
#define OD_ENTRY_H60E3_supportedHomingMethods &OD->list[149]
#define OD_ENTRY_H60F2_positioningOptionCode &OD->list[150]
#define OD_ENTRY_H60F4_followingErrorActualValue &OD->list[151]
#define OD_ENTRY_H60FA_controlEffort &OD->list[152]
#define OD_ENTRY_H60FC_positionDemandInternalValue &OD->list[153]
#define OD_ENTRY_H60FD_digitalInputs &OD->list[154]
#define OD_ENTRY_H60FE_digitalOutputs &OD->list[155]
#define OD_ENTRY_H60FF_targetVelocity &OD->list[156]
#define OD_ENTRY_H6402_motorType &OD->list[157]
#define OD_ENTRY_H6403_motorCatalogueNumber &OD->list[158]
#define OD_ENTRY_H6404_motorManufacturer &OD->list[159]
#define OD_ENTRY_H6502_supportedDriveModes &OD->list[160]

#endif /* OD_H */
