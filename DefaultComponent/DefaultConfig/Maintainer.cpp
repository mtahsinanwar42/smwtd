/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/

//## auto_generated
#include "Maintainer.h"
//## link itsDashboard
#include "Dashboard.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## actor Maintainer
Maintainer::Maintainer(void) : itsDashboard(NULL), itsSMSWTD(NULL) {
}

Maintainer::~Maintainer(void) {
    cleanUpRelations();
}

const Dashboard* Maintainer::getItsDashboard(void) const {
    return itsDashboard;
}

void Maintainer::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_setItsMaintainer(this);
        }
    _setItsDashboard(p_Dashboard);
}

const SMSWTD* Maintainer::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Maintainer::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsMaintainer(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Maintainer::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            const Maintainer* p_Maintainer = itsDashboard->getItsMaintainer();
            if(p_Maintainer != NULL)
                {
                    itsDashboard->__setItsMaintainer(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            const Maintainer* p_Maintainer = itsSMSWTD->getItsMaintainer();
            if(p_Maintainer != NULL)
                {
                    itsSMSWTD->__setItsMaintainer(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Maintainer::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
}

void Maintainer::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsMaintainer(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void Maintainer::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

void Maintainer::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Maintainer::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsMaintainer(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Maintainer::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/
