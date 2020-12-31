//
// Created by Rok Ostrovrsnik on 12.7.2016.
//

#include "QRutilities.h"
#include <sstream>
#include <string.h>


using namespace std;



const QrTest *qrTestGet(QrTestType type, const char *code,int subversionId) {


    auto test = qrTests;




    while (test->type != QTT_NotDefined) {
        if ((test->type == type) &&
            (strcmp(test->code, code) == 0)) {

            return test;
        }
        ++test;
    }

    return nullptr;
}




const string qrGetAllQRTests(int subversionId) {
    auto test = qrTests;
    std:ostringstream ss;


    //ss<<"\"QRtests\":["<<endl;
    ss<<"["<<endl;
    while (test->type != QTT_NotDefined) {


        ss<<printQrItemJson(test,subversionId)<<endl;

        ++test;
    }
    ss<<"]"<<endl;
    return ss.str();
}




const long printQRelementTypesJSON(const QrElement *element, std::ostringstream& ss) {


    ss << "\"items\":["<<endl;
    while (element->type != QrElementType::EtNotDefined) {
        ss<<"{"<<endl;
        ss<<"\"type\":";
        ss <<"\"";
        switch (element->type) {

            case Limit:
                ss << "L" ;
                break;
            case Parameter:
                ss << "P" ;
                break;
            case Result:
                ss << "R" ;
                break;
            case Status:
                ss << "S" ;
                break;
            case InspectionB_PFCE_3bits:
                ss << "B_PFCE_3bits" ;
                break;
            case InspectionB_PFE_3bits:
                ss << "B_PFE_3bits" ;
                break;
            case TokenPlus_1B1P:
                ss << "TokenPlus_1B1P" ;
                break;
            case TokenPlus_b64:
                ss << "TokenPlus_b64";
                break;


        }
        ss <<"\"";
        ss<<",";
        ss <<"\"id\":"<<element->id << endl;
        ss<<"},"<<endl;
        ++element;
    }
    ss.seekp(-2,ss.cur);
    ss<<endl;
    ss <<"]\n";
    return 0;
}



const string  printQrItemJson(const QrTest *item,int subversionId) {
    std::ostringstream ss;




    if (item == nullptr) {
        ss << "[]" << endl;
        return ss.str();
    }

    ss << "{"<<endl;
    ss <<"\"type\":";
    ss <<"\"";
    switch (item->type) {

        case QTT_SingleTest:
            ss << "single" ;
            break;
        case QTT_Inspection:
            ss << "inspection" ;
            break;
        case QTT_NotDefined:
            ss << "undefined" ;
            break;
    }
    ss <<"\"";
    ss<<","<<endl;
    ss << "\"DDcode\":" << item->id <<","<<endl;
    ss << "\"QRcode\":" << item->code <<","<<endl;


    int takenVErsion=0;
    const QrElement *startingQrElement = getElementByVersion(item, subversionId,takenVErsion);


    ss << "\"QRversion\":" << takenVErsion <<","<<endl;

    if(startingQrElement== nullptr){

        ss << "[]" << endl;
        return ss.str();
    }




    printQRelementTypesJSON(startingQrElement,ss);

    ss<<endl<<"},";


    return ss.str();
    
}


/**
 * It serches array of QRElement to find the one with appropriate vesrion. If it finds same version it takes that one, othervise previous version.
 * If there are 1,3,5,6,12 versions and we are reading QR vesion V4:9, it will take version 6, since it is the last one.
 */
const QrElement *getElementByVersion(const QrTest *item, int subversionId,int &takenVersion) {
    const QrElement *startingQrElement;
    auto testRecord = item->qrTestRecord;
    //find right version

    while (1) {
        if(testRecord->version==subversionId){
            startingQrElement= testRecord->element;

            break;
        }
        if((testRecord->version==-1)){
            testRecord--;//go take previous version
            startingQrElement= testRecord->element;

            break;
        }


        if((testRecord->version>subversionId)){
            testRecord--;//go take previous version
            startingQrElement= testRecord->element;
            break;
        }


        testRecord++;

    }
    takenVersion=testRecord->version;
    return startingQrElement;
}
