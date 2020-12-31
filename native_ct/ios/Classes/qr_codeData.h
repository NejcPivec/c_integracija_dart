#ifndef _qr_codeData_h_
#define _qr_codeData_h_

enum
{
	MAX_QR_CAPACITY_DEFAULT = 450,
	MAX_QR_CAPACITY_RFID_NTAG216 = 888,
};

constexpr char const* QR_PAT_version = "6";
constexpr char const* QR_generic_version = "0";

enum QrStVersion
{
    V1 = 1,
    V3 = 3,
};

//Reserved coded values:
constexpr auto QR_OFF = "X";
constexpr auto QR_NOT_AVAILABLE = "Y";
constexpr auto QR_EMPTY = "Z";

enum QrElementType
{
	Limit,
	Parameter,
	Result,
	Status,
	InspectionB_PFCE_3bits,			//Inspection Base Type: Pass_Fail_Checked_Empty (Pass=1, Fail=0, Checked=3, Empty=2)
	InspectionB_PFE_3bits,			//Inspection Base Type: Pass_Fail_Empty (Pass=1, Fail=0, Empty=2)
	TokenPlus_1B1P,					//1 byte is 1 parameter
	TokenPlus_b64,					//base64 kodiranje. Prva 2 bita sta rezervirana (B0=0, B1=0)
	EtNotDefined = -1,
};

enum QrTestType
{
	QTT_SingleTest = 1,
	QTT_Inspection = 2,
	QTT_NotDefined = -1,
};

// Forward declarations:
struct QrElement;

struct QrParameterValue
{
	const char * value;			//DataDisplay value
	const char * code;			//print protocol id
	const QrElement* element;	//naslednji parameter oz. lista parametrov
};

struct QrElement
{
	QrElementType type;
	int id;	// DataDisplay id
	const char * removedUnit;
	const QrParameterValue * values;
};

struct QrTestRecord
{
	const QrElement * element;
	int version;
};

struct QrTest
{
	QrTestType type;
	int id;								// DataDisplay id
	const char * code;					// QR id
	const QrTestRecord *qrTestRecord;
};

extern QrTest const qrTests[];
extern QrParameterValue const measurement_general_status_values[];
extern QrParameterValue const parametersAndLimits_predefined_customValues[];

#endif  // _qr_codeData_h_
