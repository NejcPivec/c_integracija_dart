#include "structureTagsDefs.h"

bool isPrint_on_dbObject(DataBaseObjectId structureId)
{
    switch (structureId)
    {
        //Installations:
        //
        //PAT:
        case DBO_APPLIANCE_FULL_DESCRIPTION:
        case DBO_APPLIANCE_SHORT_DESCRIPTION:
        case DBO_MEDICAL_EQUIP_SHORT:
        case DBO_MEDICAL_EQUIP_FULL_DESC:
        case DBO_WELDING_EQUIP_SHORT:
        case DBO_WELDING_EQUIP_FULL_DESC:
        //Machine:
        case DBO_MACHINE:
        case DBO_SWITCHGEAR:
        case DBO_LEVEL_1:	
        case DBO_LEVEL_2:	
        case DBO_LEVEL_3:	
        case DBO_EVSE:
        case DBO_VARISTOR:

		case DBO_ELEMENT:
		// MEBEDO:
		case DBO_MEBEDO_PAT_DEVICE:
		case DBO_MEBEDO_PAT_DEVICE_SHORT:
		case DBO_MEBEDO_PAT_MEDICALDEVICE:
		case DBO_MEBEDO_PAT_MEDICALDEVICE_SHORT:
		case DBO_MEBEDO_PAT_CABLE:
		case DBO_MEBEDO_PAT_CABLE_SHORT:
            return true;

        default:
            return false;
    }

}
