//
// Created by Rok Ostrovrsnik on 12.7.2016.
//

#include "QRMeasurementParserUtils.h"
#include "QRutilities.h"
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void createJSOnQRitemFOrKeyValue(std::ostringstream &outoutStringStream, const QrElement *qrElement,
                                 const QrParameterValue *pointerToParamValues);

void
createQRJSONitemForValue(std::ostringstream &outoutStringStream, const QrElement *qrElement,
                         const string &QRItemValue);


void split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

std::vector<std::string> split2(const std::string &text, char sep) {
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;
    while ((end = text.find(sep, start)) != std::string::npos) {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(text.substr(start));
    return tokens;
}

/**
 * Enter string from QR, and get decoded results
 * @param qrMeasuremntString
 * @return
 */
const std::string qrGetDecodedString(const char *qrMeasuremntString, int subversionId) {

    std:
    ostringstream ss;
    string contetnBeforePlusSign;

    auto splitedsplitedOnPLusSign = split2(qrMeasuremntString, '+');
    contetnBeforePlusSign = splitedsplitedOnPLusSign.at(0);


    auto splitedElements = split2(contetnBeforePlusSign, ':');

    if (splitedsplitedOnPLusSign.size() == 2) {
        string contetnAfterPlusSign;
        splitedElements.push_back("+");
        contetnAfterPlusSign = splitedsplitedOnPLusSign.at(1);
        int numParams = contetnAfterPlusSign.length();

        for (int i = 0; i < numParams; ++i) {
            char element = contetnAfterPlusSign.at(i);
            string s(1, element);
            splitedElements.push_back(s);
        }
    }


    //remove F and find QRtest
    auto functionId = splitedElements.at(0);
    auto strippedFunctionId = functionId.replace(0, 1, "");
    auto test = qrTestGet(QTT_SingleTest, strippedFunctionId.c_str(), subversionId);
    if (test == nullptr) {
        ss << "{}" << endl;
        return ss.str();
    }


    int usedVersion = 0;
    const QrElement *startingQrElement = getElementByVersion(test, subversionId, usedVersion);

    if (startingQrElement == nullptr) {
        ss << "{}" << endl;
        return ss.str();
    }

    ss << "{\"DDid" << "\":" << test->id << "," << endl;

    printQRelementValues(startingQrElement, ss, splitedElements);
    return ss.str();
}


int getElementId(const QrElement *element) {
    return element->id;
}

string getUnitRemoved(const QrElement *element) {

    if (element->removedUnit != nullptr) {
        return element->removedUnit;
    }

    return "";

}

string getStringType(QrElementType type) {
    switch (type) {

        case Limit:
            return "L";
        case Parameter:
            return "P";;
        case Result:
            return "R";
        case Status:
            return "S";
        case InspectionB_PFCE_3bits:
            return "'PFCE'";
        case InspectionB_PFE_3bits:
            return "'PFE'";
        case TokenPlus_1B1P:
            return "+";
        case TokenPlus_b64:
            return "'+64";
        case EtNotDefined:
            return "/";
    }


}

string getQRTypeQUalifier(QrElementType type, int id) {

    ostringstream ss;
    ss << id;

    switch (type) {

        case Limit:
            return "L" + ss.str();
        case Parameter:
            return "P" + ss.str();
        case Result:
            return "R" + ss.str();
        case Status:
            return "S";
        case InspectionB_PFCE_3bits:
            return "'PFCE'";
        case InspectionB_PFE_3bits:
            return "'PFE'";
        case TokenPlus_1B1P:
            return "+";
        case TokenPlus_b64:
            return "'+64";
        case EtNotDefined:
            return "/";
    }


}

void getValues(std::ostringstream &outoutStringStream, const QrElement *qrElement,
               vector<string> QRsplitedElements,
               int itemQRposition) {


    bool shouldBeSetEmpty = false;

    while (qrElement->type != EtNotDefined) {


        if (itemQRposition >= QRsplitedElements.size()) {
            return;
        }

        string QRItemValue = QRsplitedElements.at(itemQRposition);

        if (qrElement->type == Status) {

            createQRJSONitemForValue(outoutStringStream, qrElement, QRItemValue);
            qrElement++;
            itemQRposition++;
            continue;
        }

        if (QRItemValue.compare("+") == 0) {
#ifdef PLUSDEBUG
            cout<<"We have a + at "<<itemQRposition<<endl;
#endif
            qrElement++;
            itemQRposition++;

            QRItemValue = QRsplitedElements.at(itemQRposition);

        }
        if (QRItemValue == QR_NOT_AVAILABLE) {
#ifdef DEBUG
            cout << "Skipping element because it is Y nor available"<< endl;
#endif

            qrElement++;
            itemQRposition++;

            if(itemQRposition<QRsplitedElements.size()){
                QRItemValue = QRsplitedElements.at(itemQRposition);
            }



        }

        //before + sign if it is empty we skip it
        if (QRItemValue.empty()) {
#ifdef DEBUG
            cout << "Skipping element because it is Empty"<< endl;
#endif

            qrElement++;
            itemQRposition++;

            QRItemValue = QRsplitedElements.at(itemQRposition);

        }

        if (QRItemValue == QR_EMPTY) {
#ifdef DEBUG
            cout << "Skipping element because it is Z emptz"<< endl;
#endif
            shouldBeSetEmpty=true;

        }

        const QrParameterValue *pointerToParamValues = qrElement->values;//if there is a link to other table
        if ((pointerToParamValues != nullptr) && !shouldBeSetEmpty) {
            //we have to go along this path, parameter value has pointer to new QRElement
#ifdef DEBUG
            cout << "Coded value:" << QRItemValue << " count:" << itemQRposition << endl;
#endif
            bool codeFound = false;
            while (pointerToParamValues->code != nullptr) {

                if (pointerToParamValues->code == QRItemValue) {//we found code
                    codeFound = true;
#ifdef DEBUG
                    cout << "\"" << QRItemValue << ":" << pointerToParamValues->value << "\","<< endl;
#endif

                    createQRJSONitemForValue(outoutStringStream, qrElement,
                                             pointerToParamValues->value);
                    //outoutStringStream << "\"" <<getQRTypeQUalifier(qrElement->type,qrElement->id)<< ":" <<QRItemValue << pointerToParamValues->value << "\",";
                    if (pointerToParamValues->element !=
                        nullptr) {//if parameter value has pointer to new QR element.
                        //we go along new path
                        auto nextQRelement = pointerToParamValues->element;
                        itemQRposition++;
                        getValues(outoutStringStream, nextQRelement, QRsplitedElements,
                                  itemQRposition);
                        return;
                    }

                }
                pointerToParamValues++;
            }
            if (codeFound == false) {
#ifdef DEBUG
                cout << "!!!!!!!!!!!!!Coded value not found:" << QRItemValue << endl;
#endif
            }

            //
        } else {
            //we have no pointer to new QR element so we continue in current struct
            if (qrElement->removedUnit != nullptr) {
#ifdef DEBUG
                cout << "value:" << QRItemValue << " unit:" << qrElement->removedUnit << " count:" << itemQRposition << endl;
            } else {
                cout << "value:" << QRItemValue << " count:" << itemQRposition << endl;
#endif
            }

             if(shouldBeSetEmpty){
                createQRJSONitemForValue(outoutStringStream, qrElement, "");
            }else{
                createQRJSONitemForValue(outoutStringStream, qrElement, QRItemValue);
            }


            qrElement++;
            itemQRposition++;
            getValues(outoutStringStream, qrElement, QRsplitedElements, itemQRposition);
            return;
        }

        qrElement++;
        itemQRposition++;
    }
    return;


}

void
createQRJSONitemForValue(ostringstream &outoutStringStream, const QrElement *qrElement,
                         const string &QRItemValue) {

    outoutStringStream << "{\"" << "type\":\"" << getQRTypeQUalifier(qrElement->type, qrElement->id)
                       << "\",\"value\":\"";

    //so there can be predefined value also, like X for limit off. We have to check that.
    const QrParameterValue *predefineValues = parametersAndLimits_predefined_customValues;
    while (predefineValues->code != nullptr) {
        if (predefineValues->code == QRItemValue) {
            outoutStringStream << parametersAndLimits_predefined_customValues->value;
            outoutStringStream << "\"}," << endl;
            return;
        }
        predefineValues++;
    }
    outoutStringStream << QRItemValue;
    if (qrElement->removedUnit != nullptr) {
        outoutStringStream << qrElement->removedUnit;
    }
    outoutStringStream << "\"}," << endl;

}


void
printOutQRElements(std::ostringstream &outoutStringStream, const QrElement *qrElement, int &count) {

    while (qrElement->type != EtNotDefined) {


        outoutStringStream << "type:" << getStringType(qrElement->type) << "  id:" << qrElement->id
                           << endl;
        count++;

        const QrParameterValue *pointerToParamValues = qrElement->values;//if there is a link to other table
        if (pointerToParamValues !=
            nullptr) {//we have to go along this path, parameter value has pointer to new QRElement


            while (pointerToParamValues->code != nullptr) {


                if (pointerToParamValues->element !=
                    nullptr) {//if parameter value has pointer to new QR element.
                    //we go along new path
                    auto nextQRelement = pointerToParamValues->element;
                    printOutQRElements(outoutStringStream, nextQRelement, count);
                    return;
                }

                pointerToParamValues++;
            }

            //
        } //else {//we have no pointer to new QR element so we continue in current struct

        qrElement++;
        printOutQRElements(outoutStringStream, qrElement, count);
        return;
        /*}
        qrElement++;*/
    }
    outoutStringStream << "END..." << count << endl;
    return;


}

const long
printQRelementValues(const QrElement *element, ostringstream &ss, vector<string> splitedElements) {


    int itemQRposition = 1; //offset because of Fxxx: as first element
    ss << "\"content\":[" << endl;
    ostringstream ss2;
    getValues(ss2, element, splitedElements, itemQRposition);
    ss << ss2.str();

    //remove last , sign
    ss.seekp(-2, ss.cur);
    ss << "\n]\n}";
    return 0;
}





