#include "qr_codeData.h"
#include "DataDisplay.h"

/*
QrParameterValue const Inspection_general_status_values[] =
{
	{ "Pass",			"1", nullptr },
	{ "Fail",			"2", nullptr },
	{ "Checked",		"3", nullptr },
	{ "Empty",			"4", nullptr },
	{ nullptr,		nullptr, nullptr }
};
*/

QrParameterValue const parametersAndLimits_predefined_customValues[] =
{
	{ "Off",	QR_OFF, nullptr },
	{ nullptr, 	nullptr, nullptr }
};

// enako kot v xml dokumentih
QrParameterValue const measurement_general_status_values[] =
{
	{ "0",		"0",		nullptr },	//None
	{ "1",		"1",		nullptr },	//Pass
	{ "2",		"2",		nullptr },	//Fail
	{ "3",		"3",		nullptr },	//Cancel
	{ "4",		"4",		nullptr },	//Abort
	{ "5",		"5",		nullptr },	//Empty
	{ nullptr,	nullptr,	nullptr }
};

QrParameterValue const Riso_ALL_EE_Uiso_Inst_values[] =
{
	{ "250 V",			"1", nullptr },
	{ "500 V",			"2", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrParameterValue const Riso_ALL_EE_test_time_2_values[] =
{
	{ "Off",			"1", nullptr },
	{ "2 s",			"2", nullptr },
	{ "3 s",			"3", nullptr },
	{ "5 s",			"4", nullptr },
	{ "10 s",			"5", nullptr },
	{ "30 s",			"6", nullptr },
	{ "60 s",			"7", nullptr },
	{ "90 s",			"8", nullptr },
	{ "120 s",			"9", nullptr },
	{ "180 s",			"A", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrParameterValue const Riso_ALL_EE_LIMIT_L_Riso_S_48_values[] =
{
	{ "Off",			"1", nullptr },
	{ "0.10 MOhm",		"2", nullptr },
	{ "0.30 MOhm",		"3", nullptr },
	{ "0.50 MOhm",		"4", nullptr },
	{ "1.00 MOhm",		"5", nullptr },
	{ "2.00 MOhm",		"6", nullptr },
	{ "4.0 MOhm",		"7", nullptr },
	{ "7.0 MOhm",		"8", nullptr },
	{ "10.0 MOhm",		"9", nullptr },
	{ "0.25 MOhm",		"A", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrParameterValue const Riso_ALL_EE_LIMIT_H_Riso_S_47_values[] =
{
	{ "Off",			"1", nullptr },
	{ "0.01 MOhm",		"2", nullptr },
	{ "0.10 MOhm",		"3", nullptr },
	{ "0.25 MOhm",		"4", nullptr },
	{ "0.30 MOhm",		"5", nullptr },
	{ "0.50 MOhm",		"6", nullptr },
	{ "1.00 MOhm",		"7", nullptr },
	{ "2.00 MOhm",		"8", nullptr },
	{ "4.0 MOhm",		"9", nullptr },
	{ "7.0 MOhm",		"A", nullptr },
	{ "10.0 MOhm",		"B", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrParameterValue const Riso_ALL_EE_LIMIT_L_Riso_values[] =
{
	{ "Off",			"1", nullptr },
	{ "0.01 MOhm",		"2", nullptr },
	{ "0.10 MOhm",		"3", nullptr },
	{ "0.30 MOhm",		"4", nullptr },
	{ "0.50 MOhm",		"5", nullptr },
	{ "1.00 MOhm",		"6", nullptr },
	{ "2.00 MOhm",		"7", nullptr },
	{ "4.0 MOhm",		"8", nullptr },
	{ "7.0 MOhm",		"9", nullptr },
	{ "10.0 MOhm",		"A", nullptr },
	{ "0.25 MOhm",		"B", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrParameterValue const Riso_ALL_EE_LIMIT_H_Riso_values[] =
{
	{ "Off",			"1", nullptr },
	{ "0.01 MOhm",		"2", nullptr },
	{ "0.10 MOhm",		"3", nullptr },
	{ "0.25 MOhm",		"4", nullptr },
	{ "0.30 MOhm",		"5", nullptr },
	{ "0.50 MOhm",		"6", nullptr },
	{ "1.00 MOhm",		"7", nullptr },
	{ "2.00 MOhm",		"8", nullptr },
	{ "4.0 MOhm",		"9", nullptr },
	{ "7.0 MOhm",		"A", nullptr },
	{ "10.0 MOhm",		"B", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrElement const Riso_ALL_EE_Riso[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_L_Riso_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_S[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_L_Riso_S_48_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_and_Riso_S[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_L_Riso_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_L_Riso_S_48_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const Riso_ALL_EE_Type_Values[] = 
{
	{ "Riso",			"1",		Riso_ALL_EE_Riso },
	{ "Riso-S",			"2",		Riso_ALL_EE_Riso_S },
	{ "Riso, Riso-S",	"3",		Riso_ALL_EE_Riso_and_Riso_S },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_func_v1[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_RISO_EE,	nullptr, Riso_ALL_EE_Type_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const Riso_ALL_EE_Riso_v2[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_L_Riso_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_H_Riso_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_S_v2[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_L_Riso_S_48_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_H_Riso_S_47_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_and_Riso_S_v2[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_L_Riso_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_L_Riso_S_48_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_EE,	nullptr,	Riso_ALL_EE_LIMIT_H_Riso_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_S_EE, nullptr,	Riso_ALL_EE_LIMIT_H_Riso_S_47_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const Riso_ALL_EE_Type_Values_v2[] =
{
	{ "Riso",			"1",		Riso_ALL_EE_Riso_v2 },
	{ "Riso-S",			"2",		Riso_ALL_EE_Riso_S_v2 },
	{ "Riso, Riso-S",	"3",		Riso_ALL_EE_Riso_and_Riso_S_v2 },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_func_v2[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_RISO_EE,	nullptr, Riso_ALL_EE_Type_Values_v2 },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const Riso_ALL_EE_Riso_v3[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_EE,	"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_S_v3[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, "Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_S_EE, "Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_Riso_and_Riso_S_v3[] =
{
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_RISO_S_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_EE,	"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_S_EE, "Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_EE,	"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_RISO_S_EE, "Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,		nullptr,	Riso_ALL_EE_Uiso_Inst_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const Riso_ALL_EE_Type_Values_v3[] =
{
	{ "Riso",			"1",		Riso_ALL_EE_Riso_v3 },
	{ "Riso-S",			"2",		Riso_ALL_EE_Riso_S_v3 },
	{ "Riso, Riso-S",	"3",		Riso_ALL_EE_Riso_and_Riso_S_v3 },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const Riso_ALL_EE_func_v3[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_RISO_EE,	nullptr, Riso_ALL_EE_Type_Values_v3 },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const RCD_NEWPAT_PRCD_IDN_values[] =
{
	{ "10 mA",		"1",	nullptr },
	{ "15 mA",		"2",	nullptr },
	{ "30 mA",		"3",	nullptr },
	{ "100 mA",		"4",	nullptr },
	{ "300 mA",		"5",	nullptr },
	{ nullptr,	nullptr,	nullptr }
};

QrParameterValue const RCD_NEWPAT_PRCD_MULT_values[] =
{
	{ "0.5",		"1",	nullptr },
	{ "1",			"2",	nullptr },
	{ "5",			"3",	nullptr },
	{ nullptr,	nullptr,	nullptr }
};


QrParameterValue const RCD_NEWPAT_PHASE_RANDOM_values[] =
{
	{ "Yes",		"1",	nullptr },
	{ "No",			"2",	nullptr },
	{ nullptr,	nullptr,	nullptr }
};

QrElement const RCD_NEW_PAT_Standard_AS_NZ_3017[] = 
{
	{ QrElementType::Parameter,			DBMEASP_PHASE_RANDOM,		nullptr,	RCD_NEWPAT_PHASE_RANDOM_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const RCD_NEWPAT_RCD_Standard_values[] =
{
	{ "EN 61008 / EN 61009",	"1",	nullptr },
	{ "EN 60364-4-41 TN/IT",	"2",	nullptr },
	{ "EN 60364-4-41 TT",		"3",	nullptr },
	{ "BS 7671",				"4",	nullptr },
	{ "AS/NZS 3017",			"5",	RCD_NEW_PAT_Standard_AS_NZ_3017 },
	{ "PRCD",					"6",	nullptr },
	{ nullptr,				nullptr,	nullptr }
};

QrElement const RCD_NEWPAT_singlePhase_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_T_DN,				"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const RCD_NEWPAT_singlePhase_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_ID,					"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const RCD_NEWPAT_singlePhase_Type_values[] =
{
	{ "A",		"1",	RCD_NEWPAT_singlePhase_Type_AACF },
	{ "AC",		"2",	RCD_NEWPAT_singlePhase_Type_AACF },
	{ "B",		"3",	RCD_NEWPAT_singlePhase_Type_BBp },
	{ "B+",		"4",	RCD_NEWPAT_singlePhase_Type_BBp },
	{ "F",		"5",	RCD_NEWPAT_singlePhase_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_phase_plusOrMinus[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, RCD_NEWPAT_singlePhase_Type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_singlePhase_PAM_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_T_DN_P,				"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_T_DN_M,				"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const RCD_NEWPAT_singlePhase_PAM_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_ID_P,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_M,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};


QrParameterValue const RCD_NEWPAT_singlePhase_plusAndMinus_Type_values[] =
{
	{ "A",		"1",	RCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ "AC",		"2",	RCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ "B",		"3",	RCD_NEWPAT_singlePhase_PAM_Type_BBp },
	{ "B+",		"4",	RCD_NEWPAT_singlePhase_PAM_Type_BBp },
	{ "F",		"5",	RCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_phase_plusAndMinus[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, RCD_NEWPAT_singlePhase_plusAndMinus_Type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const RCD_NEWPAT_single_phase_values[] =
{
	{ "(+)",		"1",	RCD_NEWPAT_phase_plusOrMinus },
	{ "(-)",		"2",	RCD_NEWPAT_phase_plusOrMinus },
	{ "(+,-)",		"3",	RCD_NEWPAT_phase_plusAndMinus },
	{ nullptr,		nullptr, nullptr }
};

QrElement const RCD_NEWPAT_single[] =
{
	{ QrElementType::Parameter,		DBMEASP_PHASE,			nullptr, RCD_NEWPAT_single_phase_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_auto_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_TIDN_X1_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X1_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_P,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_M,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const RCD_NEWPAT_auto_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_TIDN_X1_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X1_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_P,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_M,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_P,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_M,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_UC,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_RCD_STANDARD,		nullptr,	RCD_NEWPAT_RCD_Standard_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const RCD_NEWPAT_auto_type_values[] =
{
	{ "A",		"1",	RCD_NEWPAT_auto_Type_AACF },
	{ "AC",		"2",	RCD_NEWPAT_auto_Type_AACF },
	{ "B",		"3",	RCD_NEWPAT_auto_Type_BBp },
	{ "B+",		"4",	RCD_NEWPAT_auto_Type_BBp },
	{ "F",		"5",	RCD_NEWPAT_auto_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_auto[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, RCD_NEWPAT_auto_type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const RCD_MODE_Values[] =
{
	{ "single",		"1",	RCD_NEWPAT_single },
	{ "auto",		"2",	RCD_NEWPAT_auto },
	{ nullptr,		nullptr, nullptr }
};

QrElement const RCD_NEWPAT_func_v0[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_3310_RCD_MODE,	nullptr, RCD_MODE_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const RCD_NEW_PAT_UC_LIM_values[] =
{
	{ "25 V",			"1", nullptr },
	{ "50 V",			"2", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrElement const RCD_NEWPAT_func_v1[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Limit,			DBMEASRL_UC_LIM,		nullptr, RCD_NEW_PAT_UC_LIM_values },
	{ QrElementType::Parameter,		DBMEASP_3310_RCD_MODE,	nullptr, RCD_MODE_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const RCD_NEWPAT_func_v3[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Limit,			DBMEASRL_UC_LIM,		nullptr, nullptr },
	{ QrElementType::Parameter,		DBMEASP_3310_RCD_MODE,	nullptr, RCD_MODE_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const Limits_H_SubS_EE_Values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.25 mA", 	"2", nullptr },
	{ "0.50 mA", 	"3", nullptr },
	{ "0.75 mA", 	"4", nullptr },
	{ "1.00 mA", 	"5", nullptr },
	{ "1.50 mA", 	"6", nullptr },
	{ "2.00 mA", 	"7", nullptr },
	{ "2.50 mA", 	"8", nullptr },
	{ "3.00 mA", 	"9", nullptr },
	{ "3.50 mA", 	"A", nullptr },
	{ "4.00 mA", 	"B", nullptr },
	{ "4.50 mA", 	"C", nullptr },
	{ "5.00 mA", 	"D", nullptr },
	{ "5.50 mA", 	"E", nullptr },
	{ "6.00 mA", 	"F", nullptr },
	{ "7.00 mA", 	"G", nullptr },
	{ "8.00 mA", 	"H", nullptr },
	{ "9.00 mA", 	"I", nullptr },
	{ "10.0 mA", 	"J", nullptr },
	{ "15.0 mA", 	"K", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const Limits_L_SubS_EE_Values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.25 mA", 	"2", nullptr },
	{ "0.50 mA", 	"3", nullptr },
	{ "0.75 mA", 	"4", nullptr },
	{ "1.00 mA", 	"5", nullptr },
	{ "1.50 mA", 	"6", nullptr },
	{ "2.00 mA", 	"7", nullptr },
	{ "2.50 mA", 	"8", nullptr },
	{ "3.00 mA", 	"9", nullptr },
	{ "3.50 mA", 	"A", nullptr },
	{ "4.00 mA", 	"B", nullptr },
	{ "4.50 mA", 	"C", nullptr },
	{ "5.00 mA", 	"D", nullptr },
	{ "5.50 mA", 	"E", nullptr },
	{ "6.00 mA", 	"F", nullptr },
	{ "7.00 mA", 	"G", nullptr },
	{ "8.00 mA", 	"H", nullptr },
	{ "9.00 mA", 	"I", nullptr },
	{ "10.0 mA", 	"J", nullptr },
	{ "15.0 mA", 	"K", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const SubLeak_output_voltagePAT_Values[] =
{
	{ "230 V",			"1", nullptr },
	{ "40 V",			"2", nullptr },
	{ "110 V / 230 V",	"3", nullptr },
	{ nullptr, 		nullptr, nullptr }
};

QrElement const TYPE_SUBLEAK_EE_Isub[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_IsubS[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			nullptr,	Limits_H_SubS_EE_Values },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_both[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			nullptr,	Limits_H_SubS_EE_Values },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrParameterValue const SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values[] =
{
	{ "Isub",			"1",		TYPE_SUBLEAK_EE_Isub },
	{ "Isub-S",			"2",		TYPE_SUBLEAK_EE_IsubS },
	{ "Isub, Isub-S",	"3",		TYPE_SUBLEAK_EE_both },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const SUB_LEAKAGE_ALL_EE_func_v0[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,		nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_SUBLEAK_EE,	nullptr, SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,		nullptr, nullptr }
};

QrElement const TYPE_SUBLEAK_EE_Isub_v1[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUB_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_IsubS_v1[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			nullptr,	Limits_H_SubS_EE_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUBS_EE,			nullptr,	Limits_L_SubS_EE_Values },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_both_v1[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUB_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			nullptr,	Limits_H_SubS_EE_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUBS_EE,			nullptr,	Limits_L_SubS_EE_Values },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrParameterValue const SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values_v1[] =
{
	{ "Isub",			"1",		TYPE_SUBLEAK_EE_Isub_v1 },
	{ "Isub-S",			"2",		TYPE_SUBLEAK_EE_IsubS_v1 },
	{ "Isub, Isub-S",	"3",		TYPE_SUBLEAK_EE_both_v1 },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const SUB_LEAKAGE_ALL_EE_func_v1[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,		nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_SUBLEAK_EE,	nullptr, SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values_v1 },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,		nullptr, nullptr }
};

QrElement const TYPE_SUBLEAK_EE_Isub_v2[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUB_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_IsubS_v2[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUBS_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TYPE_SUBLEAK_EE_both_v2[] =
{
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_SUBLEAKAGE_S_PAT,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUB_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUB_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_SUBS_EE,			"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_SUBS_EE,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_SUBLEAK_OUTPUT_VOLTAGE_PAT,	nullptr,	SubLeak_output_voltagePAT_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrParameterValue const SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values_v2[] =
{
	{ "Isub",			"1",		TYPE_SUBLEAK_EE_Isub_v2 },
	{ "Isub-S",			"2",		TYPE_SUBLEAK_EE_IsubS_v2 },
	{ "Isub, Isub-S",	"3",		TYPE_SUBLEAK_EE_both_v2 },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const SUB_LEAKAGE_ALL_EE_func_v3[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,		nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_TYPE_SUBLEAK_EE,	nullptr, SUB_LEAKAGE_TYPE_SUBLEAK_EE_Values_v2 },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,		nullptr, nullptr }
};

QrParameterValue const Leakage_change_status_Values[] =
{
	{ "YES",	"1",		nullptr },
	{ "NO",	 	"2",		nullptr },
	{ nullptr, 	nullptr,	nullptr }
};

QrElement const DIFF_LEAKAGE_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const DIFF_LEAKAGE_EE_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_DIFF_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const i_VISUAL_VDE_0701_0702_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,																					nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,																					nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DAMAGE_OR_CONTAMINATION,																		nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CABLES_AND_CONNECTORS_ARE_APPROPRIATE,															nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CONDITION_OF_MAINS_PLUG_MAINS_CONNECTORS_AND_CONDUCTORS,										nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECT_OF_BENDING,																			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECT_OF_MAINS_LEAD_CLEAT,																	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CONDITION_OF_ANCHORAGE_CABLE_CLIP_ACCESSIBLE_FUSE_INSERT,										nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DAMAGE_OF_THE_HOUSING_AND_PROTECTIVE_COVER,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_SIGNS_OF_OVERLOAD_OVERHEATING_UNINTENDED_USE,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_SIGNS_OF_IMPROPER_CHANGE_OR_MODIFICATION,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_SIGNS_OF_IMPROPER_CONTAMINATION_CORROSION_AGEING,											nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CONTAMINATION_BLOCKAGE_OF_COOLING_INLETS,														nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CONDITION__OF_AIR_FILTER,																		nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_DENSITY_OF_CONTAINER_FOR_WATER_AIR_OR_OTHER_MEDIUM_CONDITION_OF_PRESSURE_CONTROL_VALVE,			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_USABILITY_SWITCHES_CONTROL_AND_SETUP_EQUIPMENT,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_READABILITY_OF_SAFETY_RELEVANT_MARKINGS_OR_SYMBOLS_OF_RATINGS_AND_POSITION,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ALL_FUSES_ACCESSIBLE_FROM_THE_OUTSIDE_ARE_COMPLYING_WITH_THE_DATA_GIVEN_BY_THE_MANUFACTURER_0,	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SAFETY_RELATED_MARKING_LABELS_AND_LABELLING_IS_LEGIBLE_AND_COMPLETE,							nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ASSESS_THE_RELEVANT_ACCESSORIES_TOGETHER_WITH_THE_EQUIPMENT,									nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,																					nullptr, nullptr }
};


QrElement const i_VISUAL_PAT_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,					nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,					nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_WIRING_CONNECTION_POINTS,		nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_CABLES,							nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_COVERS_HOUSING,					nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_INSCRIPTIONS_MARKINGS,			nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,					nullptr, nullptr }
};

QrElement const i_Functional_PAT_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,								nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,								nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_MECHANICAL_OPERATION,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_ELECTRICAL_OPERATION,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFE_3bits,		DBMEASI_SAFETY_RELEVANT_FUNCTIONS,					nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,								nullptr, nullptr }
};

QrElement const i_FUNCTIONAL_VDE_0701_0702_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,									nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,									nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ESSENTIAL_FUNCTIONS_ARE_WORKING_PROPERLY_0,		nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SAFETY_RELATED_PARTS,							nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,									nullptr, nullptr }
};


QrElement const i_VISUAL_IEC_EN_60974_4_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,																nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,																nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_TORCH_ELECTRODE_HOLDER_WELDING_CURRENT_RETURN_CLAMP,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_MISSING_OR_DEFECTIVE_INSULATION,											nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_CONNECTIONS,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_DAMAGED_SWITCHES,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_OTHER_DAMAGE,															nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_MAINS_SUPPLY,																nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_DAMAGED_CABLE_1,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_EFFECTIVE_CABLE_ANCHORAGE_0,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFORMED_FAULTY_PLUG,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_BROKEN_OR_THERMALLY_DAMAGED_PLUG_PINS,									nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CABLES_AND_PLUGS_SUITABLE_FOR_THE_INTENDED_USE_AND_PERFORMANCE,				nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_WELDING_CIRCUIT,															nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_DAMAGED_CABLE_2,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFORMED_FAULTY_OR_THERMALLY_DAMAGED_COUPLER_SOCKETS,					nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_EFFECTIVE_CABLE_ANCHORAGE_1,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CABLES_AND_COUPLERS_SUITABLE_FOR_THE_INTENDED_USE_AND_PERFORMANCE,			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ENCLOSURE,																	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_MISSING_OR_DAMAGED_PARTS,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_UNAUTHORIZED_MODIFICATIONS,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_BLOCKED_COOLING_OPENINGS__OR_MISSING_AIR_FILTERS,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_SIGNS_OF_OVERLOAD_AND_IMPROPER_USE,										nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_MISSING_OR_DEFECTIVE_PROTECTIVE_DEVICES_FOR_EXAMPLE_GAS_CYLINDER_HOLDER,	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_MISSING_OR_DEFECTIVE_WHEELS_LIFTING_MEANS_HOLDER,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_WIRE_REEL_MOUNTING_MEANS,										nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_CONDUCTIVE_OBJECTS_PLACED_IN_THE_ENCLOSURE,								nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CONTROLS_AND_INDICATORS,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_SWITCHES_METERS_AND_LAMPS,										nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DEFECTIVE_PRESSURE_REGULATOR_OR_FLOWMETER,								nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CORRECT_FUSES_ACCESSIBLE_FROM_OUTSIDE_THE_ENCLOSURE,						nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,																nullptr, nullptr }
};

QrElement const i_FUNCTIONAL_IEC_EN_60974_4_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,												nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,												nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_FUNCTIONS,													nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CORRECT_OPERATION_OF_EACH_SAFETY_RELATED_FUNCTION,			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SUPPLY_CIRCUIT__ONOFF_SWITCHING_DEVICE,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ALL_UNGROUNDED_MAINS_CONDUCTORS_ARE_OPEN_CLOSED,			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CLEAR_INDICATION_WHETHER_CIRCUIT_IS_OPEN_CLOSED,			nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_VOLTAGE_REDUCING_DEVICE,									nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_VOLTAGE_REDUCING_DEVICE_INDICATES_SATISFACTORY_OPERATION,	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_MAGNETIC_GAS_VALVE,											nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_EACH_MAGNETIC_GAS_VALVE_WORKS_CORRECTLY,					nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_LEAKAGES_WHEN_PRESSURIZED_SYSTEM,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SIGNAL_OR_CONTROL_LAMPS,									nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_CORRECT_OPERATION_OF_EACH_SIGNAL_OR_CONTROL_LAMP,			nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,												nullptr, nullptr }
};


QrElement const i_VISUAL_IEC_EN_62353_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,																					nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,																					nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SAFETY_RELATED_MARKING_LABELS_AND_LABELING,														nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_INTEGRITY_OF_MECHANICAL_PARTS,																	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_NO_DAMAGE_OR_CONTAMINATION_SPILLAGE,															nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ASSESS_OF_RELEVANT_ACCESSORIES_TOGETHER_WITH_ME_EQUIPMENT_SYSTEM,								nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_THE_REQUIRED_DOCUMENTATION_IS_AVAILABLE_AND_REFLECTS_THE_CURRENT_REVISION,						nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ALL_FUSES_ACCESSIBLE_FROM_THE_OUTSIDE_ARE_COMPLYING_WITH_THE_DATA_GIVEN_BY_THE_MANUFACTURER_1,	nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,																					nullptr, nullptr }
};


QrElement const i_FUNCTIONAL_IEC_EN_62353_v0[] =
{
	{ QrElementType::Status,					DBMEASP_NOT_DEFINED,									nullptr, measurement_general_status_values },
	{ QrElementType::TokenPlus_b64,				DBMEASP_NOT_DEFINED,									nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_SAFETY_RELATED_FUNCTIONS_ARE_WORKING_PROPERLY,	nullptr, nullptr },
	{ QrElementType::InspectionB_PFCE_3bits,	DBMEASI_ESSENTIAL_FUNCTIONS_ARE_WORKING_PROPERLY_1,		nullptr, nullptr },
	{ QrElementType::EtNotDefined,				DBMEASP_NOT_DEFINED,									nullptr, nullptr }
};

QrElement const IPE_LEAKAGE_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_IPE_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_IPE_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const IPE_LEAKAGE_EE_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_IPE_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_IPE_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_IPE_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const LIMIT_H_Touch_EE_57_Values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.25 mA", 	"2", nullptr },
	{ "0.50 mA", 	"3", nullptr },
	{ "0.75 mA", 	"4", nullptr },
	{ "1.00 mA", 	"5", nullptr },
	{ "1.50 mA", 	"6", nullptr },
	{ "2.00 mA", 	"7", nullptr },
	{ "2.50 mA", 	"8", nullptr },
	{ "3.00 mA", 	"9", nullptr },
	{ "3.50 mA", 	"A", nullptr },
	{ "4.00 mA", 	"B", nullptr },
	{ "4.50 mA", 	"C", nullptr },
	{ "5.00 mA", 	"D", nullptr },		
	{ "5.50 mA", 	"E", nullptr },
	{ "6.00 mA", 	"F", nullptr },
	{ "7.00 mA", 	"G", nullptr },
	{ "8.00 mA", 	"H", nullptr },
	{ "9.00 mA", 	"I", nullptr },
	{ "10.0 mA", 	"J", nullptr },
	{ "15.0 mA", 	"K", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const LIMIT_L_Touch_EE_58_Values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.25 mA", 	"2", nullptr },
	{ "0.50 mA", 	"3", nullptr },
	{ "0.75 mA", 	"4", nullptr },
	{ "1.00 mA", 	"5", nullptr },
	{ "1.50 mA", 	"6", nullptr },
	{ "2.00 mA", 	"7", nullptr },
	{ "2.50 mA", 	"8", nullptr },
	{ "3.00 mA", 	"9", nullptr },
	{ "3.50 mA", 	"A", nullptr },
	{ "4.00 mA", 	"B", nullptr },
	{ "4.50 mA", 	"C", nullptr },
	{ "5.00 mA", 	"D", nullptr },
	{ "5.50 mA", 	"E", nullptr },
	{ "6.00 mA", 	"F", nullptr },
	{ "7.00 mA", 	"G", nullptr },
	{ "8.00 mA", 	"H", nullptr },
	{ "9.00 mA", 	"I", nullptr },
	{ "10.0 mA", 	"J", nullptr },
	{ "15.0 mA", 	"K", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const TOUCH_LEAKAGE_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		nullptr,	LIMIT_H_Touch_EE_57_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const TOUCH_LEAKAGE_EE_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		nullptr,	LIMIT_H_Touch_EE_57_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_TOUCH_EE,		nullptr,	LIMIT_L_Touch_EE_58_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const TOUCH_LEAKAGE_EE_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_TOUCH_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const LEAKS__POWER_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Result,			DBMEASR_Q,						"VAr",		nullptr },
	{ QrElementType::Result,			DBMEASR_PF,						nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_THDU,					"Percent",	nullptr },
	{ QrElementType::Result,			DBMEASR_THDI,					"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_COS_PHI,				nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_PAT_VOLTAGE,			"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_ILOAD_PAT,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		nullptr,	LIMIT_H_Touch_EE_57_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const LEAKS__POWER_EE_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Result,			DBMEASR_Q,						"VAr",		nullptr },
	{ QrElementType::Result,			DBMEASR_PF,						nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_THDU,					"Percent",	nullptr },
	{ QrElementType::Result,			DBMEASR_THDI,					"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_COS_PHI,				nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_PAT_VOLTAGE,			"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_ILOAD_PAT,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_DIFF_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		nullptr,	LIMIT_H_Touch_EE_57_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_TOUCH_EE,		nullptr,	LIMIT_L_Touch_EE_58_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const LEAKS__POWER_EE_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Result,			DBMEASR_Q,						"VAr",		nullptr },
	{ QrElementType::Result,			DBMEASR_PF,						nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_THDU,					"Percent",	nullptr },
	{ QrElementType::Result,			DBMEASR_THDI,					"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_COS_PHI,				nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_PAT_VOLTAGE,			"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_ILOAD_PAT,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_DIFF_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_TOUCH_EE,		"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_TOUCH_EE,		"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,	nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const polarity_pat_values[] =
{
	{ "Pass",									"1",	nullptr },
	{ "L open",									"2",	nullptr },
	{ "N open",									"3",	nullptr },
	{ "PE open",								"4",	nullptr },
	{ "LN short",								"5",	nullptr },
	{ "LPE short",								"6",	nullptr },
	{ "NPE short",								"7",	nullptr },
	{ "LN cross",								"8",	nullptr },
	{ "LPE fault",								"9",	nullptr },
	{ "NPE fault",								"A",	nullptr },
	{ "Multiple fault",							"B",	nullptr },
	{ "L open/ LPE cross/ multiple fault",		"C",	nullptr },
	{ "LN short/ LPE short",					"D",	nullptr },
	{ "NPE cross",								"E",	nullptr },
	{ "PE open and LN cross",					"F",	nullptr },
	{ "NPE short and LN cross",					"G",	nullptr },
	{ "L1L2 short",								"H",	nullptr },
	{ "L1L3 short",								"I",	nullptr },
	{ "L2L3 short",								"J",	nullptr },
	{ "L1N short",								"K",	nullptr },
	{ "L2N short",								"L",	nullptr },
	{ "L3N short",								"M",	nullptr },
	{ "L1L2 cross",								"N",	nullptr },
	{ "L1L3 cross",								"O",	nullptr },
	{ "L2L3 cross",								"P",	nullptr },
	{ "L1N cross",								"Q",	nullptr },
	{ "L2N cross",								"R",	nullptr },
	{ "L3N cross",								"S",	nullptr },
	{ "L1 open/ L1PE short",					"T",	nullptr },
	{ "L2 open/ L2PE short",					"U",	nullptr },
	{ "L3 open/ L3PE short",					"V",	nullptr },
	{ "L1 open /L1 short",						"W",	nullptr },
	{ "L2 open/ L2 short",						"c",	nullptr },
	{ "L3 open/L3 short",						"d",	nullptr },
	{ "PE fault",								"e",	nullptr },
	{ "L open/ LPE short",						"a",	nullptr },
	{ "Fail",									"b",	nullptr },
	{ "L1 L connected",							"f",	nullptr },
	{ "L2 L connected",							"g",	nullptr },
	{ "L3 L connected",							"h",	nullptr },
	{ "N connected",							"i",	nullptr },
	{ "two phases changed",						"j",	nullptr },
	{ nullptr, 									nullptr, nullptr }
};

QrParameterValue const POLARITY_TEST_MODE_values[] =
{
	{ "normal",		"1", nullptr },
	{ "active",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const POLARITY_MEASUREMENT_STATUS_values[] =
{
	{ "On",			"1", nullptr },
	{ "Off",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const POLARITY_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_POLARITY_PAT,			nullptr,	polarity_pat_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_POLARITY_TEST_MODE,		nullptr,	POLARITY_TEST_MODE_values },
	{ QrElementType::Parameter,			DBMEASP_MEASUREMENT_STATUS,		nullptr,	POLARITY_MEASUREMENT_STATUS_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const POLARITY_LN_CROSS_values[] =
{
	{ "not allowed",	"1", nullptr },
	{ "allowed",		"2", nullptr },
	{ nullptr, 		nullptr, nullptr }
};

QrElement const POLARITY_PAT_NEW_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_POLARITY_PAT,			nullptr,	polarity_pat_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_POLARITY_TEST_MODE,		nullptr,	POLARITY_TEST_MODE_values },
	{ QrElementType::Parameter,			DBMEASP_MEASUREMENT_STATUS,		nullptr,	POLARITY_MEASUREMENT_STATUS_values },
	{ QrElementType::Parameter,			DBMEASP_LN_CROSS,				nullptr,	POLARITY_LN_CROSS_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};


QrParameterValue const CONTINUITY_EE_OUTPUT_119_Values[] =
{
	{ "P/S - PE",			"1", nullptr },
	{ "MS_PE - IEC_PE", 	"2", nullptr },
	{ "4 wire", 			"3", nullptr },
	{ nullptr, 			nullptr, nullptr }
};

QrParameterValue const CONTINUITY_IOUTPUT__PAT_EE_66_Values[] =
{
	{ "0.2 A",		"1", nullptr },
	{ "10 A", 		"2", nullptr },
	{ "25 A", 		"3", nullptr },
	{ "4 A", 		"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};


QrElement const CONTINUITY_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_R_CONT_PAT_EE,					"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT__H_CONTINUITY_EE,		"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_EE_OUTPUT,			nullptr,	CONTINUITY_EE_OUTPUT_119_Values },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_IOUTPUT__PAT_EE,		nullptr,	CONTINUITY_IOUTPUT__PAT_EE_66_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const CONTINUITY_EE_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_R_CONT_PAT_EE,					"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT__H_CONTINUITY_EE,		"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT__L_CONTINUITY_EE,		"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_EE_OUTPUT,			nullptr,	CONTINUITY_EE_OUTPUT_119_Values },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_IOUTPUT__PAT_EE,		nullptr,	CONTINUITY_IOUTPUT__PAT_EE_66_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const POWER_EE_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_P,						"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_S,						"VA",		nullptr },
	{ QrElementType::Result,			DBMEASR_Q,						"VAr",		nullptr },
	{ QrElementType::Result,			DBMEASR_PF,						nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_THDU,					"Percent",	nullptr },
	{ QrElementType::Result,			DBMEASR_THDI,					"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_COS_PHI,				nullptr,	nullptr },
	{ QrElementType::Result,			DBMEASR_PAT_VOLTAGE,			"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_ILOAD_PAT,				"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_POWER_EE,		"W",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_POWER_EE,		"W",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,			nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrElement const PRCD_TYPE_default[] =
{
	{ QrElementType::Result,			DBMEASR_R_CONT_PAT_EE,					"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT__H_CONTINUITY_EE,		"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,						nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const PE_COND_PRCD_pass_fail_values[] =
{
	{ "PASS",			"1",		nullptr },
	{ "FAIL",			"2",		nullptr },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const PRCD_TYPE_K_Di_varistor[] =
{
	{ QrElementType::Result,			DBMEASR_PE_COND_PRCD,					nullptr,	PE_COND_PRCD_pass_fail_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT__H_CONTINUITY_EE,		"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,						nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const PE_COND_PRCD_PAT_PRCD_TYPE_values[] =
{
	{ "2 pole",				"1", PRCD_TYPE_default },
	{ "3 pole",				"2", PRCD_TYPE_default },
	{ "K/ Di (varistor)",	"3", PRCD_TYPE_K_Di_varistor },
	{ "S (3 pole)",			"4", PRCD_TYPE_default },
	{ "S+",					"5", PRCD_TYPE_default },
	{ nullptr,			nullptr, nullptr }
};

QrElement const PE_COND_PRCD_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,	nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	PE_COND_PRCD_PAT_PRCD_TYPE_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrParameterValue const OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values[] =
{
	{ "2 pole",				"1", nullptr },
	{ "3 pole",				"2", nullptr },
	{ "K/ Di (varistor)",	"3", nullptr },
	{ "S (3 pole)",			"4", nullptr },
	{ "S+",					"5", nullptr },
	{ nullptr,			nullptr, nullptr }
};

QrParameterValue const L_OPEN_RESULT_pass_fail_values[] =
{
	{ "PASS",			"1",		nullptr },
	{ "FAIL",			"2",		nullptr },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const OPEN_CONDUCTOR_L[] =
{
	{ QrElementType::Result,			DBMEASR_L_OPEN_RESULT,	nullptr,	L_OPEN_RESULT_pass_fail_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,	nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrParameterValue const N_OPEN_RESULT_pass_fail_values[] =
{
	{ "PASS",			"1",		nullptr },
	{ "FAIL",			"2",		nullptr },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const OPEN_CONDUCTOR_N[] =
{
	{ QrElementType::Result,			DBMEASR_N_OPEN_RESULT,	nullptr,	N_OPEN_RESULT_pass_fail_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,	nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrElement const OPEN_CONDUCTOR_L_N[] =
{
	{ QrElementType::Result,			DBMEASR_L_OPEN_RESULT,	nullptr,	L_OPEN_RESULT_pass_fail_values },
	{ QrElementType::Result,			DBMEASR_N_OPEN_RESULT,	nullptr,	N_OPEN_RESULT_pass_fail_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,	nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrParameterValue const PE_OPEN_RESULT_pass_fail_values[] =
{
	{ "PASS",			"1",		nullptr },
	{ "FAIL",			"2",		nullptr },
	{ nullptr,			nullptr,	nullptr }
};

QrElement const OPEN_CONDUCTOR_L_N_PE[] =
{
	{ QrElementType::Result,			DBMEASR_L_OPEN_RESULT,	nullptr,	L_OPEN_RESULT_pass_fail_values },
	{ QrElementType::Result,			DBMEASR_N_OPEN_RESULT,	nullptr,	N_OPEN_RESULT_pass_fail_values },
	{ QrElementType::Result,			DBMEASR_PE_OPEN_RESULT,	nullptr,	PE_OPEN_RESULT_pass_fail_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,	nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrElement const OPEN_CONDUCTOR_PE[] =
{
	{ QrElementType::Result,			DBMEASR_PE_OPEN_RESULT,	nullptr,	PE_OPEN_RESULT_pass_fail_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,	nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,		nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrParameterValue const CO_PRCD_param_OPEN_CONDUCTOR_values[] =
{
	{ "L",				"1", OPEN_CONDUCTOR_L },
	{ "N",				"2", OPEN_CONDUCTOR_N },
	{ "auto L,N",		"3", OPEN_CONDUCTOR_L_N },
	{ "auto L,N,PE",	"4", OPEN_CONDUCTOR_L_N_PE },
	{ "PE",				"5", OPEN_CONDUCTOR_PE },
	{ nullptr,		nullptr, nullptr }
};

QrElement const COND_OPEN_PRCD_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,	nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,			DBMEASP_OPEN_CONDUCTOR,	nullptr,	CO_PRCD_param_OPEN_CONDUCTOR_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrParameterValue const MI3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT_values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.25 mA", 	"2", nullptr },
	{ "0.50 mA", 	"3", nullptr },
	{ "0.75 mA", 	"4", nullptr },
	{ "1.00 mA", 	"5", nullptr },
	{ "1.50 mA", 	"6", nullptr },
	{ "2.00 mA", 	"7", nullptr },
	{ "2.50 mA", 	"8", nullptr },
	{ "3.00 mA", 	"9", nullptr },
	{ "3.50 mA", 	"A", nullptr },
	{ "4.00 mA", 	"B", nullptr },
	{ "4.50 mA", 	"C", nullptr },
	{ "5.00 mA", 	"D", nullptr },
	{ "5.50 mA", 	"E", nullptr },
	{ "6.00 mA", 	"F", nullptr },
	{ "7.00 mA", 	"G", nullptr },
	{ "8.00 mA", 	"H", nullptr },
	{ "9.00 mA", 	"I", nullptr },
	{ "10.0 mA", 	"J", nullptr },
	{ "15.0 mA", 	"K", nullptr },
	{ "2.25 mA", 	"L", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const CLAMP_TEST_Ch1_clamp_type_values[] =
{
	{ "A1283",		"1", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const CLAMP_TEST_Differential_leakage_func[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,							"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	nullptr,	MI3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrElement const CLAMP_TEST_PE_leakage_func[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_IPE_LEAKAGE,							"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	nullptr,	MI3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrElement const CLAMP_TEST_Current_func[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_ICLAMP_PAT,								"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	nullptr,	MI3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrParameterValue const CLAMP_TEST_values[] =
{
	{ "Differential leakage",		"1",	CLAMP_TEST_Differential_leakage_func },
	{ "PE leakage", 				"2",	CLAMP_TEST_PE_leakage_func },
	{ "Current", 					"3",	CLAMP_TEST_Current_func },
	{ nullptr, 					nullptr,	nullptr }
};

QrElement const CLAMP_CURRENT_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,	nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,			DBMEASP_CLAMP_TEST,		nullptr,	CLAMP_TEST_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};

QrElement const CLAMP_TEST_Differential_leakage_func1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,							"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrElement const CLAMP_TEST_PE_leakage_func1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_IPE_LEAKAGE,							"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrElement const CLAMP_TEST_Current_func1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_ICLAMP_PAT,								"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_3309_LIMIT_SUB_SUBS_DIFF_TOUCH_PAT,	"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,							nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_CH1_CLAMP_TYPE,							nullptr,	CLAMP_TEST_Ch1_clamp_type_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrParameterValue const CLAMP_TEST_v1_values[] =
{
	{ "Differential leakage",		"1",	CLAMP_TEST_Differential_leakage_func1 },
	{ "PE leakage", 				"2",	CLAMP_TEST_PE_leakage_func1 },
	{ "Current", 					"3",	CLAMP_TEST_Current_func1 },
	{ nullptr, 					nullptr,	nullptr }
};

QrElement const CLAMP_CURRENT_PAT_NEW_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,	nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,			DBMEASP_CLAMP_TEST,		nullptr,	CLAMP_TEST_v1_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,	nullptr,	nullptr }
};


QrParameterValue const LIMIT_WELD_CIRCUIT_LEAKAGE_values[] =
{
	{ "Off",		"1", nullptr },
	{ "3.50 mA",	"2", nullptr },
	{ "5.00 mA",	"3", nullptr },
	{ "10.00 mA",	"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const I_LEAK_WELD_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_I_LEAK_W,						"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_WELD_CIRCUIT_LEAKAGE,	nullptr,	LIMIT_WELD_CIRCUIT_LEAKAGE_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,			nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const I_LEAK_WELD_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_I_LEAK_W,						"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_WELD_CIRCUIT_LEAKAGE,	"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,			nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const LIMIT_L_RISO_WELD_values[] =
{
	{ "Off",		"1", nullptr },
	{ "2.5 MOhm",	"2", nullptr },
	{ "5.0 MOhm",	"3", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const TEST_RISO_WELD_ME_values[] =
{
	{ "LN-W",				"1", nullptr },
	{ "W-PE",				"2", nullptr },
	{ "LN-PE",				"3", nullptr },
	{ "LN (Class II) - P",	"4", nullptr },
	{ nullptr, 	nullptr,		 nullptr }
};

QrParameterValue const UISO_WELD_values[] =
{
	{ "500 V",		"1", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const RISO_WELD_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,		nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_WELD,	nullptr,	LIMIT_L_RISO_WELD_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_RISO_WELD_ME,	nullptr,	TEST_RISO_WELD_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_UISO_WELD,			nullptr,	UISO_WELD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const RISO_WELD_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,		nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_RISO_PAT,			"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,					"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_WELD,	"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_RISO_WELD_ME,	nullptr,	TEST_RISO_WELD_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,		nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_UISO_WELD,			nullptr,	UISO_WELD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};


QrParameterValue const LIMIT_UNOLOAD_AC_RMS_values[] =
{
	{ "Off",		"1", nullptr },
	{ "48 V",		"2", nullptr },
	{ "80 V",		"3", nullptr },
	{ "100 V",		"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const LIMIT_UNOLOAD_AC_DC_PEAK_values[] =
{
	{ "Off",		"1", nullptr },
	{ "68 V",		"2", nullptr },
	{ "113 V",		"3", nullptr },
	{ "141 V",		"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const WELDING_OUTPUT_values[] =
{
	{ "a.c.",		"1", nullptr },
	{ "d.c.",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const U_NOLOAD_WELD_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_U_NO_LOAD_URMS,			"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_U_NO_LOAD_UPAC,			"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_AC_RMS,	nullptr,	LIMIT_UNOLOAD_AC_RMS_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_AC_PEAK,	nullptr,	LIMIT_UNOLOAD_AC_DC_PEAK_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_DC_PEAK,	nullptr,	LIMIT_UNOLOAD_AC_DC_PEAK_values },
	{ QrElementType::Parameter,			DBMEASP_WELDING_OUTPUT,			nullptr,	WELDING_OUTPUT_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const HILIM_U0_RATED_values[] =
{
	{ "U0p +/- 15%",	"1", nullptr },
	{ nullptr, 		nullptr, nullptr }
};

QrElement const U_NOLOAD_WELD_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,							nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_U_NO_LOAD_URMS,							"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_U_NO_LOAD_UPAC,							"V",		nullptr },
	{ QrElementType::Parameter,			DBMEASP_U0_RATED_NO_LOAD_VOLTAGE_WELD,			"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,							nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_AC_RMS,					nullptr,	LIMIT_UNOLOAD_AC_RMS_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_AC_PEAK,					nullptr,	LIMIT_UNOLOAD_AC_DC_PEAK_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_UNOLOAD_DC_PEAK,					nullptr,	LIMIT_UNOLOAD_AC_DC_PEAK_values },
	{ QrElementType::Limit,				DBMEASRL_HILIM_U0_RATED_NO_LOAD_VOLTAGE_WELD,	nullptr,	HILIM_U0_RATED_values },
	{ QrElementType::Parameter,			DBMEASP_WELDING_OUTPUT,							nullptr,	WELDING_OUTPUT_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,							nullptr,	nullptr }
};

QrParameterValue const LIMIT_CONTINUITY_ME_values[] =
{
	{ "Off",		"1", nullptr },
	{ "0.1 Ohm", 	"2", nullptr },
	{ "0.2 Ohm", 	"3", nullptr },
	{ "0.3 Ohm", 	"4", nullptr },
	{ "0.5 Ohm", 	"5", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const CONTINUITY_EE_OUTPUT_119_ProtEarth_ME_Values[] =
{
	{ "P/S - PE",			"1", nullptr },
	{ nullptr, 			nullptr, nullptr }
};

QrElement const PROT_EARTH_RES_ME_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_R_CONT_PAT_EE,					"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_CONTINUITY_ME,			nullptr,	LIMIT_CONTINUITY_ME_values },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_EE_OUTPUT,			nullptr,	CONTINUITY_EE_OUTPUT_119_ProtEarth_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_IOUTPUT__PAT_EE,		nullptr,	CONTINUITY_IOUTPUT__PAT_EE_66_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const PROT_EARTH_RES_ME_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_R_CONT_PAT_EE,					"Ohm",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_CONTINUITY_ME,			"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_EE_OUTPUT,			nullptr,	CONTINUITY_EE_OUTPUT_119_ProtEarth_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_CONTINUITY_IOUTPUT__PAT_EE,		nullptr,	CONTINUITY_IOUTPUT__PAT_EE_66_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const LIMIT_L_RISO_ME_values[] =
{
	{ "Off",		"1", nullptr },
	{ "2 MOhm", 	"2", nullptr },
	{ "7 MOhm", 	"3", nullptr },
	{ "70 MOhm", 	"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const TEST_RISO_ME_Values[] =
{
	{ "LN - PE",	"1", nullptr },
	{ "LN - P/S", 	"2", nullptr },
	{ "LN - AP", 	"3", nullptr },
	{ "PE - AP", 	"4", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const RISO_ME_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_RISO_PAT,						"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,								"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_ME,				nullptr,	LIMIT_L_RISO_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_RISO_ME,					nullptr,	TEST_RISO_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_UISO_WELD,						nullptr,	UISO_WELD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const UISO_INST_EE_MEDICAL_values[] =
{
	{ "500 V",		"1", nullptr },
	{ "250 V",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const RISO_ME_func_v1[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_RISO_PAT,						"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,								"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_ME,				nullptr,	LIMIT_L_RISO_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_RISO_ME,					nullptr,	TEST_RISO_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,					nullptr,	UISO_INST_EE_MEDICAL_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const RISO_ME_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_RISO_PAT,						"Ohm",		nullptr },
	{ QrElementType::Result,			DBMEASR_UM,								"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_L_RISO_ME,				"Ohm",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_RISO_ME,					nullptr,	TEST_RISO_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_UISO_INST_EE,					nullptr,	UISO_INST_EE_MEDICAL_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const LIMIT_EQ_LEAK_ALT_ME_values[] =
{
	{ "Off",		"1", nullptr },
	{ "500 uA", 	"2", nullptr },
	{ "1000 uA", 	"3", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const LIMIT_EQ_LEAK_DIR_DIFF_ME_values[] =
{
	{ "Off",		"1", nullptr },
	{ "100 uA", 	"2", nullptr },
	{ "500 uA", 	"3", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const U_NOMINAL_ME_Values[] =
{
	{ "100 V",		"1", nullptr },
	{ "110 V",		"2", nullptr },
	{ "120 V",		"3", nullptr },
	{ "220 V",		"4", nullptr },
	{ "230 V",		"5", nullptr },
	{ "240 V",		"6", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const EQUIPMENT_LEAKAGE_ME_Alternative[] =
{
	{ QrElementType::Result,			DBMEASR_I_EQUIPMENT_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_ULPE,							"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_EQ_LEAK_ALT_ME,			nullptr,	LIMIT_EQ_LEAK_ALT_ME_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_EQ_LEAK_DIR_DIFF_ME,		nullptr,	LIMIT_EQ_LEAK_DIR_DIFF_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,					nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const EQUIPMENT_LEAKAGE_ME_Direct_and_Diff[] =
{
	{ QrElementType::Result,			DBMEASR_I_EQUIPMENT_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_ULPE,							"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,								"W",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,			nullptr,	Leakage_change_status_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_EQ_LEAK_ALT_ME,			nullptr,	LIMIT_EQ_LEAK_ALT_ME_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_EQ_LEAK_DIR_DIFF_ME,		nullptr,	LIMIT_EQ_LEAK_DIR_DIFF_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,					nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const ME_LEAKAGE_TEST_METHOD_Values[] =
{
	{ "Alternative",	"1",		EQUIPMENT_LEAKAGE_ME_Alternative },
	{ "Direct",			"2",		EQUIPMENT_LEAKAGE_ME_Direct_and_Diff },
	{ "Differential",	"3",		EQUIPMENT_LEAKAGE_ME_Direct_and_Diff },
	{ nullptr,		nullptr,		nullptr }
};

QrElement const EQUIPMENT_LEAKAGE_ME_func_v0[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_ME_LEAKAGE_TEST_METHOD,	nullptr,	ME_LEAKAGE_TEST_METHOD_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const LIMIT_AP_LEAK_ALT_and_DIR_ME_values[] =
{
	{ "Off",		"1", nullptr },
	{ "50 uA", 		"2", nullptr },
	{ "5000 uA", 	"3", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const AP_LEAKAGE_ME_Alternative[] =
{
	{ QrElementType::Result,			DBMEASR_I_APPLIED_PART_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_UAP_PE,							"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_AP_LEAK_ALT_ME,			nullptr,	LIMIT_AP_LEAK_ALT_and_DIR_ME_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_AP_LEAK_DIR_ME,			nullptr,	LIMIT_AP_LEAK_ALT_and_DIR_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,					nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const AP_LEAKAGE_ME_Direct_and_Diff[] =
{
	{ QrElementType::Result,			DBMEASR_I_APPLIED_PART_LEAKAGE,			"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_UAP_PE,							"V",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,								"W",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,			nullptr,	Leakage_change_status_Values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_AP_LEAK_ALT_ME,			nullptr,	LIMIT_AP_LEAK_ALT_and_DIR_ME_values },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_AP_LEAK_DIR_ME,			nullptr,	LIMIT_AP_LEAK_ALT_and_DIR_ME_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,					nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const ME_AP_LEAK_TEST_METHOD_Values[] =
{
	{ "alternative",	"1",		AP_LEAKAGE_ME_Alternative },
	{ "direct",			"2",		AP_LEAKAGE_ME_Direct_and_Diff },
	{ nullptr,		nullptr,		nullptr }
};

QrElement const AP_LEAKAGE_ME_func_v0[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,			nullptr,	measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_ME_AP_LEAK_TEST_METHOD,	nullptr,	ME_AP_LEAK_TEST_METHOD_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,			nullptr,	nullptr }
};

QrParameterValue const TOUCH_LEAK_ME_limit_values[] =
{
	{ "Off",		"1", nullptr },
	{ "100 uA",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const TOUCH_LEAKAGE_ME_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,				nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,							"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_ULPE,						"V",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_TOUCH_LEAK_ME,				nullptr,	TOUCH_LEAK_ME_limit_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,				nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,		nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrElement const TOUCH_LEAKAGE_ME_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,				nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_TOUCHLEAKAGE_I,				"A",		nullptr },
	{ QrElementType::Result,			DBMEASR_P,							"W",		nullptr },
	{ QrElementType::Result,			DBMEASR_ULPE,						"V",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_TOUCH_LEAK_ME,				"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,				nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,				nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_U_NOMINAL_ME,				nullptr,	U_NOMINAL_ME_Values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,		nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,				nullptr,	nullptr }
};

QrParameterValue const PRCD_STANDARD_values[] =
{
	{ "General",		"1", nullptr },
	{ "AS/NZS 3017",	"2", nullptr },
	{ "EN 61540",		"3", nullptr },
	{ nullptr, 		nullptr, nullptr }
};

QrParameterValue const PRCD_NEWPAT_TYPE_values[] =
{
	{ "2 pole",				"1", nullptr },
	{ "3 pole",				"2", nullptr },
	{ "K/ Di (varistor)",	"3", nullptr },
	{ "S (3 pole)",			"4", nullptr },
	{ "S+",					"5", nullptr },
	{ nullptr,			nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_singlePhase_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_T_DN,				"s",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const PRCD_NEWPAT_singlePhase_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_ID,					"mA",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const PRCD_NEWPAT_singlePhase_Type_values[] =
{
	{ "A",		"1",	PRCD_NEWPAT_singlePhase_Type_AACF },
	{ "AC",		"2",	PRCD_NEWPAT_singlePhase_Type_AACF },
	{ "B",		"3",	PRCD_NEWPAT_singlePhase_Type_BBp },
	{ "B+",		"4",	PRCD_NEWPAT_singlePhase_Type_BBp },
	{ "F",		"5",	PRCD_NEWPAT_singlePhase_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_phase_plusOrMinus[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, PRCD_NEWPAT_singlePhase_Type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_singlePhase_PAM_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_T_DN_P,				"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_T_DN_M,				"s",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const PRCD_NEWPAT_singlePhase_PAM_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_ID_P,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_M,				"mA",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_MULT,			nullptr,	RCD_NEWPAT_PRCD_MULT_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};


QrParameterValue const PRCD_NEWPAT_singlePhase_plusAndMinus_Type_values[] =
{
	{ "A",		"1",	PRCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ "AC",		"2",	PRCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ "B",		"3",	PRCD_NEWPAT_singlePhase_PAM_Type_BBp },
	{ "B+",		"4",	PRCD_NEWPAT_singlePhase_PAM_Type_BBp },
	{ "F",		"5",	PRCD_NEWPAT_singlePhase_PAM_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_phase_plusAndMinus[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, PRCD_NEWPAT_singlePhase_plusAndMinus_Type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const PRCD_NEWPAT_single_phase_values[] =
{
	{ "(+)",		"1",	PRCD_NEWPAT_phase_plusOrMinus },
	{ "(-)",		"2",	PRCD_NEWPAT_phase_plusOrMinus },
	{ "(+,-)",		"3",	PRCD_NEWPAT_phase_plusAndMinus },
	{ nullptr,		nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_single[] =
{
	{ QrElementType::Parameter,		DBMEASP_PHASE,			nullptr, PRCD_NEWPAT_single_phase_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_auto_Type_AACF[] =
{
	{ QrElementType::Result,			DBMEASR_TIDN_X1_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X1_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_P,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_M,		"s",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrElement const PRCD_NEWPAT_auto_Type_BBp[] =
{
	{ QrElementType::Result,			DBMEASR_TIDN_X1_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X1_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_P,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X5_M,			"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_P,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_TIDN_X_0_P_5_M,		"s",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_P,				"mA",		nullptr },
	{ QrElementType::Result,			DBMEASR_ID_M,				"mA",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,		nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_IDN,			nullptr,	RCD_NEWPAT_PRCD_IDN_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,			nullptr,	PRCD_NEWPAT_TYPE_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_STANDARD,		nullptr,	PRCD_STANDARD_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,		nullptr,	nullptr }
};

QrParameterValue const PRCD_NEWPAT_auto_type_values[] =
{
	{ "A",		"1",	PRCD_NEWPAT_auto_Type_AACF },
	{ "AC",		"2",	PRCD_NEWPAT_auto_Type_AACF },
	{ "B",		"3",	PRCD_NEWPAT_auto_Type_BBp },
	{ "B+",		"4",	PRCD_NEWPAT_auto_Type_BBp },
	{ "F",		"5",	PRCD_NEWPAT_auto_Type_AACF },
	{ nullptr,	nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_auto[] =
{
	{ QrElementType::Parameter,		DBMEASP_TYPE_RCD,		nullptr, PRCD_NEWPAT_auto_type_values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const PRCD_MODE_PRCD_Values[] =
{
	{ "single",		"1",	PRCD_NEWPAT_single },
	{ "auto",		"2",	PRCD_NEWPAT_auto },
	{ nullptr,		nullptr, nullptr }
};

QrElement const PRCD_NEWPAT_func_v0[] =
{
	{ QrElementType::Status,		DBMEASP_NOT_DEFINED,	nullptr, measurement_general_status_values },
	{ QrElementType::Parameter,		DBMEASP_3310_RCD_MODE,	nullptr, PRCD_MODE_PRCD_Values },
	{ QrElementType::EtNotDefined,	DBMEASP_NOT_DEFINED,	nullptr, nullptr }
};

QrParameterValue const LIMIT_I_FLASH_HIGH_values[] =
{
	{ "0.50 mA",	"1", nullptr },
	{ "0.75 mA",	"2", nullptr },
	{ "1.00 mA",	"3", nullptr },
	{ "1.25 mA",	"4", nullptr },
	{ "1.50 mA",	"5", nullptr },
	{ "1.75 mA",	"6", nullptr },
	{ "2.00 mA",	"7", nullptr },
	{ "2.25 mA",	"8", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrParameterValue const FLASH_AC_TEST_Values[] =
{
	{ "1500 V",		"1", nullptr },
	{ "3000 V",		"2", nullptr },
	{ nullptr, 	nullptr, nullptr }
};

QrElement const FLASH_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_I_WITH_AC,						"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_I_FLASH_HIGH,			nullptr,	LIMIT_I_FLASH_HIGH_values },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_FLASH_AC_TEST,					nullptr,	FLASH_AC_TEST_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const FLASH_PAT_NEW_func_v3[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_I_WITH_AC,						"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_I_FLASH_HIGH,			"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_FLASH_AC_TEST,					nullptr,	FLASH_AC_TEST_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrElement const PRIMARY_LEAK_WELD_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_DIFFLEAKAGE_I,					"A",		nullptr },
	{ QrElementType::Limit,				DBMEASRL_LIMIT_H_DIFF_EE,				"A",		nullptr },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_TEST_TIME_2,					nullptr,	Riso_ALL_EE_test_time_2_values },
	{ QrElementType::Parameter,			DBMEASP_LEAKAGE_CHANGE_STATUS,			nullptr,	Leakage_change_status_Values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrParameterValue const PRCD_PE_PROBE_RESULT_values[] =
{
	{ "PASS",		"1",		nullptr },
	{ "FAIL",		"2",		nullptr },
	{ nullptr, 		nullptr,	nullptr }
};

QrParameterValue const PRCD_PE_PROBE_TEST_values[] =
{
	{ "manual",			"1", nullptr },
	{ "auto",			"2", nullptr },
	{ nullptr,		nullptr, nullptr }
};

QrElement const PRCD_PE_PROBE_PAT_NEW_func_v0[] =
{
	{ QrElementType::Status,			DBMEASP_NOT_DEFINED,					nullptr,	measurement_general_status_values },
	{ QrElementType::Result,			DBMEASR_PRCD_PE_PROBE_RESULT,			nullptr,	PRCD_PE_PROBE_RESULT_values },
	{ QrElementType::TokenPlus_1B1P,	DBMEASP_NOT_DEFINED,					nullptr,	nullptr },
	{ QrElementType::Parameter,			DBMEASP_PRCD_PE_PROBE_TEST,				nullptr,	PRCD_PE_PROBE_TEST_values },
	{ QrElementType::Parameter,			DBMEASP_PRCD_TYPE,						nullptr,	OPEN_CONDUCT_PRCD_TYPE_emptyLinks_values },
	{ QrElementType::EtNotDefined,		DBMEASP_NOT_DEFINED,					nullptr,	nullptr }
};

QrTestRecord const Riso_ALL_EE_func[] =
{
	{ Riso_ALL_EE_func_v1,	 0 },
	{ Riso_ALL_EE_func_v1,   1 },
	{ Riso_ALL_EE_func_v2,   2 },
	{ Riso_ALL_EE_func_v3,   V3 },
	{ nullptr,				-1 },
};

QrTestRecord const RCD_NEWPAT_func[] =
{
	{ RCD_NEWPAT_func_v0,	 0 },
	{ RCD_NEWPAT_func_v1,	 1 },
	{ RCD_NEWPAT_func_v3,	 V3 },
	{ nullptr,				-1 },
};

QrTestRecord const SUB_LEAKAGE_ALL_EE_func[] =
{
	{ SUB_LEAKAGE_ALL_EE_func_v0,	 0 },
	{ SUB_LEAKAGE_ALL_EE_func_v1,	 1 },
	{ SUB_LEAKAGE_ALL_EE_func_v3,	 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const DIFF_LEAKAGE_EE_func[] =
{
	{ DIFF_LEAKAGE_EE_func_v0,		 0 },
	{ DIFF_LEAKAGE_EE_func_v1,		 1 },
	{ nullptr,						-1 },
};

QrTestRecord const IPE_LEAKAGE_EE_func[] =
{
	{ IPE_LEAKAGE_EE_func_v0,		 0 },
	{ IPE_LEAKAGE_EE_func_v1,		 1 },
	{ nullptr,						-1 },
};

QrTestRecord const TOUCH_LEAKAGE_EE_func[] =
{
	{ TOUCH_LEAKAGE_EE_func_v0,		 0 },
	{ TOUCH_LEAKAGE_EE_func_v1,		 1 },
	{ TOUCH_LEAKAGE_EE_func_v3,		 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const LEAKS__POWER_EE_func[] =
{
	{ LEAKS__POWER_EE_func_v0,		 0 },
	{ LEAKS__POWER_EE_func_v1,		 1 },
	{ LEAKS__POWER_EE_func_v3,		 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const POLARITY_PAT_NEW_func[] =
{
	{ POLARITY_PAT_NEW_func_v0,		 0 },
	{ POLARITY_PAT_NEW_func_v1,		 1 },
	{ nullptr,						-1 },
};

QrTestRecord const CONTINUITY_EE_func[] =
{
	{ CONTINUITY_EE_func_v0,		 0 },
	{ CONTINUITY_EE_func_v1,		 1 },
	{ nullptr,						-1 },
};

QrTestRecord const POWER_EE_func[] =
{
	{ POWER_EE_func_v0,				 0 },
	{ nullptr,						-1 },
};

QrTestRecord const PE_COND_PRCD_PAT_NEW_func[] =
{
	{ PE_COND_PRCD_PAT_NEW_func_v0,		 0 },
	{ nullptr,							-1 },
};

QrTestRecord const COND_OPEN_PRCD_PAT_NEW_func[] =
{
	{ COND_OPEN_PRCD_PAT_NEW_func_v0,	 0 },
	{ nullptr,							-1 },
};

QrTestRecord const CLAMP_CURRENT_PAT_NEW_func[] =
{
	{ CLAMP_CURRENT_PAT_NEW_func_v0,		 0 },
	{ CLAMP_CURRENT_PAT_NEW_func_v3,		 V3 },
	{ nullptr,								-1 },
};

QrTestRecord const I_LEAK_WELD_func[] =
{
	{ I_LEAK_WELD_func_v0,			 0 },
	{ I_LEAK_WELD_func_v3,			 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const RISO_WELD_func[] =
{
	{ RISO_WELD_func_v0,			 0 },
	{ RISO_WELD_func_v3,			 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const U_NOLOAD_WELD_func[] =
{
	{ U_NOLOAD_WELD_func_v0,		 0 },
	{ U_NOLOAD_WELD_func_v3,		 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const PROT_EARTH_RES_ME_func[] =
{
	{ PROT_EARTH_RES_ME_func_v0,	 0 },
	{ PROT_EARTH_RES_ME_func_v3,	 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const RISO_ME_func[] =
{
	{ RISO_ME_func_v0,				 0 },
	{ RISO_ME_func_v1,				 1 },
	{ RISO_ME_func_v3,				 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const EQUIPMENT_LEAKAGE_ME_func[] =
{
	{ EQUIPMENT_LEAKAGE_ME_func_v0,		 0 },
	{ nullptr,							-1 },
};

QrTestRecord const AP_LEAKAGE_ME_func[] =
{
	{ AP_LEAKAGE_ME_func_v0,		 0 },
	{ nullptr,						-1 },
};

QrTestRecord const TOUCH_LEAKAGE_ME_func[] =
{
	{ TOUCH_LEAKAGE_ME_func_v0,		 0 },
	{ TOUCH_LEAKAGE_ME_func_v3,		 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const PRCD_NEWPAT_func[] =
{
	{ PRCD_NEWPAT_func_v0,			 0 },
	{ nullptr,						-1 },
};

QrTestRecord const FLASH_PAT_NEW_func[] =
{
	{ FLASH_PAT_NEW_func_v0,		 0 },
	{ FLASH_PAT_NEW_func_v3,		 V3 },
	{ nullptr,						-1 },
};

QrTestRecord const PRIMARY_LEAK_WELD_func[] =
{
	{ PRIMARY_LEAK_WELD_func_v0,		 0 },
	{ nullptr,							-1 },
};

QrTestRecord const PRCD_PE_PROBE_PAT_NEW_func[] =
{
	{ PRCD_PE_PROBE_PAT_NEW_func_v0,		 0 },
	{ nullptr,								-1 },
};

QrTestRecord const i_VISUAL_VDE_0701_0702[] =
{
	{ i_VISUAL_VDE_0701_0702_v0,		 0 },
	{ nullptr,							-1 },
};

QrTestRecord const i_VISUAL_PAT[] =
{
	{ i_VISUAL_PAT_v0,					 0 },
	{ nullptr,							-1 },
};

QrTestRecord const i_Functional_PAT[] =
{
	{ i_Functional_PAT_v0,			 0 },
	{ nullptr,						-1 },
};

QrTestRecord const i_FUNCTIONAL_VDE_0701_0702[] =
{
	{ i_FUNCTIONAL_VDE_0701_0702_v0,		 0 },
	{ nullptr,								-1 },
};

QrTestRecord const i_VISUAL_IEC_EN_60974_4[] =
{
	{ i_VISUAL_IEC_EN_60974_4_v0,		 0 },
	{ nullptr,							-1 },
};

QrTestRecord const i_FUNCTIONAL_IEC_EN_60974_4[] =
{
	{ i_FUNCTIONAL_IEC_EN_60974_4_v0,		 0 },
	{ nullptr,								-1 },
};

QrTestRecord const i_VISUAL_IEC_EN_62353[] =
{
	{ i_VISUAL_IEC_EN_62353_v0,		 0 },
	{ nullptr,						-1 },
};

QrTestRecord const i_FUNCTIONAL_IEC_EN_62353[] =
{
	{ i_FUNCTIONAL_IEC_EN_62353_v0,		 0 },
	{ nullptr,							-1 },
};

QrTest const qrTests[] = 
{
	{ QTT_SingleTest, DBMEAS_RISO_ALL_EE,					"20",		Riso_ALL_EE_func			},
	{ QTT_SingleTest, DBMEAS_RCD_NEWPAT,					"21",		RCD_NEWPAT_func				},
	{ QTT_SingleTest, DBMEAS_SUB_LEAKAGE_ALL_EE,			"22",		SUB_LEAKAGE_ALL_EE_func		},
	{ QTT_SingleTest, DBMEAS_DIFF_LEAKAGE_EE,				"23",		DIFF_LEAKAGE_EE_func		},
	{ QTT_SingleTest, DBMEAS_IPE_LEAKAGE_EE,				"24",		IPE_LEAKAGE_EE_func			},
	{ QTT_SingleTest, DBMEAS_TOUCH_LEAKAGE_EE,				"25",		TOUCH_LEAKAGE_EE_func		},
	{ QTT_SingleTest, DBMEAS_LEAKS__POWER_EE,				"27",		LEAKS__POWER_EE_func		},
	{ QTT_SingleTest, DBMEAS_POLARITY_PAT_NEW,				"29",		POLARITY_PAT_NEW_func		},
	{ QTT_SingleTest, DBMEAS_CONTINUITY_EE,					"28",		CONTINUITY_EE_func			},
	{ QTT_SingleTest, DBMEAS_POWER_EE,						"26",		POWER_EE_func				},
	{ QTT_SingleTest, DBMEAS_PE_COND_PRCD_PAT_NEW,			"30",		PE_COND_PRCD_PAT_NEW_func	},
	{ QTT_SingleTest, DBMEAS_COND_OPEN_PRCD_PAT_NEW,		"31",		COND_OPEN_PRCD_PAT_NEW_func },
	{ QTT_SingleTest, DBMEAS_CLAMP_CURRENT_PAT_NEW,			"32",		CLAMP_CURRENT_PAT_NEW_func	},
	{ QTT_SingleTest, DBMEAS_I_LEAK_WELD,					"33",		I_LEAK_WELD_func			},
	{ QTT_SingleTest, DBMEAS_RISO_WELD,						"34",		RISO_WELD_func				},
	{ QTT_SingleTest, DBMEAS_U_NOLOAD_WELD,					"35",		U_NOLOAD_WELD_func			},
	{ QTT_SingleTest, DBMEAS_PROT_EARTH_RES_ME,				"36",		PROT_EARTH_RES_ME_func		},
	{ QTT_SingleTest, DBMEAS_RISO_ME,						"37",		RISO_ME_func				},
	{ QTT_SingleTest, DBMEAS_EQUIPMENT_LEAKAGE_ME,			"38",		EQUIPMENT_LEAKAGE_ME_func	},
	{ QTT_SingleTest, DBMEAS_AP_LEAKAGE_ME,					"39",		AP_LEAKAGE_ME_func			},
	{ QTT_SingleTest, DBMEAS_TOUCH_LEAKAGE_ME,				"40",		TOUCH_LEAKAGE_ME_func		},
	{ QTT_SingleTest, DBMEAS_PRCD_NEWPAT,					"41",		PRCD_NEWPAT_func			},
	{ QTT_SingleTest, DBMEAS_FLASH_PAT_NEW,					"43",		FLASH_PAT_NEW_func			},
	{ QTT_SingleTest, DBMEAS_PRIMARY_LEAK_WELD,				"44",		PRIMARY_LEAK_WELD_func		},
	{ QTT_SingleTest, DBMEAS_PRCD_PE_PROBE_PAT_NEW,			"45",		PRCD_PE_PROBE_PAT_NEW_func	},
	{ QTT_Inspection, DBMEASI_VISUAL_VDE_0701_0702,			"1",		i_VISUAL_VDE_0701_0702		},
	{ QTT_Inspection, DBMEASI_VISUAL_PAT,					"2",		i_VISUAL_PAT				},
	{ QTT_Inspection, DBMEASI_FUNCTIONAL_PAT,				"3",		i_Functional_PAT			},
	{ QTT_Inspection, DBMEASI_FUNCTIONAL_VDE_0701_0702,		"4",		i_FUNCTIONAL_VDE_0701_0702	},
	{ QTT_Inspection, DBMEASI_VISUAL_IEC_EN_60974_4,		"5",		i_VISUAL_IEC_EN_60974_4		},
	{ QTT_Inspection, DBMEASI_FUNCTIONAL_IEC_EN_60974_4,	"6",		i_FUNCTIONAL_IEC_EN_60974_4 },
	{ QTT_Inspection, DBMEASI_VISUAL_IEC_EN_62353,			"7",		i_VISUAL_IEC_EN_62353		},
	{ QTT_Inspection, DBMEASI_FUNCTIONAL_IEC_EN_62353,		"8",		i_FUNCTIONAL_IEC_EN_62353	},
	{ QTT_NotDefined, DBMEAS_NOT_DEFINED,					nullptr,	nullptr						}
};
