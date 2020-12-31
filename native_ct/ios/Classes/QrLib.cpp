#include "QRutilities.h"
#include "QRMeasurementParserUtils.h"
#include <string>
using std::string;
/* 
DELA

extern "C" {

     char *decodeQRlabelContent() {   
        const char *QRstring = "F22:1:3:0.00%M:0.00%M:9.00%M:9.00%M:9.00%M:9.00%M+3Y31";
        const std::string &str = qrGetDecodedString(QRstring, 12);
        char * writable = new char[str.size() + 1];
        std::copy(str.begin(), str.end(), writable);
        writable[str.size()] = '\0';
       return writable;
    }
} */


extern "C" {
    char *QRdecoder(char *qRsingleTestCOntetnt, int subversion) {
        //const char *QRstring = GetStringUTFChars(qRsingleTestCOntetnt, 0);
        const std::string &contetntStream = qrGetDecodedString(qRsingleTestCOntetnt, subversion);

        char * writable = new char[contetntStream.size() + 1];
        std::copy(contetntStream.begin(), contetntStream.end(), writable);
        writable[contetntStream.size()] = '\0';
        return writable;
    }
}


