//
// Created by Rok Ostrovrsnik on 12.7.2016.
//

#ifndef QRBOJANTEST_QRUTILITIES_H
#define QRBOJANTEST_QRUTILITIES_H


#include <string>
#include <iosfwd>
#include "DataDisplay.h"
#include "qr_codeData.h"
//#include <string>

class QRutilities {

};


const QrTest* qrTestGet(QrTestType type, const char *code,int subversionId);
const std::string printQrItemJson(const QrTest *item,int subversionId);
const std::string qrGetAllQRTests(int subversionId);
const QrElement *getElementByVersion(const QrTest *item, int subversionId,int &usedVersion);


#endif //QRBOJANTEST_QRUTILITIES_H
