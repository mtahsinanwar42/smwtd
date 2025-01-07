/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//## auto_generated
#include "Sensors.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Sensors
Sensors::Sensors(void) : itsSMSWTD(NULL) {
}

Sensors::~Sensors(void) {
    cleanUpRelations();
}

const SMSWTD* Sensors::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Sensors::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSensors(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Sensors::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Sensors* p_Sensors = itsSMSWTD->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsSMSWTD->__setItsSensors(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Sensors::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Sensors::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSensors(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Sensors::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/
