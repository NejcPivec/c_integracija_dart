//
// Created by Rok Ostrovrsnik on 11.8.2016.
//



#ifndef QRBOJANTEST_QRMEASUREMENTPARSERUTILS_H
#define QRBOJANTEST_QRMEASUREMENTPARSERUTILS_H

#include <string>
#include <vector>
#include "DataDisplay.h"
#include "qr_codeData.h"

const std::string qrGetDecodedString(const char *qrMeasuremntString, int i);
const long
printQRelementValues(const QrElement *element, std::ostringstream &ss, std::vector<std::string> contentBeforePlus);
void printOutQRElements(std::ostringstream &outoutStringStream, const QrElement *qrElement,int &count) ;

//just print QR elements
const std::string qrGetQRelements(const std::string qrMeasuremntString);

#endif //QRBOJANTEST_QRMEASUREMENTPARSERUTILS_H
