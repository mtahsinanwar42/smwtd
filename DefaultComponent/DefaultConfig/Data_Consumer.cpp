/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Consumer
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Data_Consumer.cpp
*********************************************************************/

//## auto_generated
#include "Data_Consumer.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Data_Consumer
Data_Consumer::Data_Consumer(void) : itsSMSWTD(NULL) {
}

Data_Consumer::~Data_Consumer(void) {
    cleanUpRelations();
}

const SMSWTD* Data_Consumer::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Data_Consumer::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsData_Consumer(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Data_Consumer::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Data_Consumer* p_Data_Consumer = itsSMSWTD->getItsData_Consumer();
            if(p_Data_Consumer != NULL)
                {
                    itsSMSWTD->__setItsData_Consumer(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Data_Consumer::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Data_Consumer::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsData_Consumer(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Data_Consumer::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Consumer.cpp
*********************************************************************/
