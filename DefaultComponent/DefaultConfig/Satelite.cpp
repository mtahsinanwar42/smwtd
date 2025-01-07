/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satelite
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Satelite.cpp
*********************************************************************/

//## auto_generated
#include "Satelite.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Satelite
Satelite::Satelite(void) : itsSMSWTD(NULL) {
}

Satelite::~Satelite(void) {
    cleanUpRelations();
}

const SMSWTD* Satelite::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Satelite::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSatelite(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Satelite::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Satelite* p_Satelite = itsSMSWTD->getItsSatelite();
            if(p_Satelite != NULL)
                {
                    itsSMSWTD->__setItsSatelite(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Satelite::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Satelite::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSatelite(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Satelite::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satelite.cpp
*********************************************************************/
