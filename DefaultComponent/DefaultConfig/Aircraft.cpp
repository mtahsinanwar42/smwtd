/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Aircraft
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Aircraft.cpp
*********************************************************************/

//## auto_generated
#include "Aircraft.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Aircraft
Aircraft::Aircraft(void) : itsSMSWTD(NULL) {
}

Aircraft::~Aircraft(void) {
    cleanUpRelations();
}

const SMSWTD* Aircraft::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Aircraft::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAircraft(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Aircraft::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Aircraft* p_Aircraft = itsSMSWTD->getItsAircraft();
            if(p_Aircraft != NULL)
                {
                    itsSMSWTD->__setItsAircraft(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Aircraft::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Aircraft::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAircraft(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Aircraft::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Aircraft.cpp
*********************************************************************/
