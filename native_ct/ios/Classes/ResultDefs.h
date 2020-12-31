#ifndef _ResultDefs_H_
#define _ResultDefs_H_

enum ResultStatus 
{
	RS_EMPTY    = 0,    // neizmerjena meritev (brez rezultata)
	RS_PASS     = 1,    // pass glede na limito
	RS_FAIL     = 2,    // fail glede na limito
	RS_CANCEL   = 3,    // user prekine meritev (brez rezultata)
	RS_NONE     = 4,    // izmerjena meritev ki nima limit
	RS_ABORT    = 5,    // inštrument prekine meritev (brez rezultata?)
};


#endif /* _ResultDefs_H_ */
