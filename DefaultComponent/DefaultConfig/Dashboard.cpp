/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//## auto_generated
#include "Dashboard.h"
//## link itsMaintainer
#include "Maintainer.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Dashboard
Dashboard::Dashboard(void) : itsMaintainer(NULL), itsSMSWTD(NULL) {
}

Dashboard::~Dashboard(void) {
    cleanUpRelations();
}

const Maintainer* Dashboard::getItsMaintainer(void) const {
    return itsMaintainer;
}

void Dashboard::setItsMaintainer(Maintainer* const p_Maintainer) {
    if(p_Maintainer != NULL)
        {
            p_Maintainer->_setItsDashboard(this);
        }
    _setItsMaintainer(p_Maintainer);
}

const SMSWTD* Dashboard::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Dashboard::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsDashboard(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Dashboard::cleanUpRelations(void) {
    if(itsMaintainer != NULL)
        {
            const Dashboard* p_Dashboard = itsMaintainer->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsMaintainer->__setItsDashboard(NULL);
                }
            itsMaintainer = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            const Dashboard* p_Dashboard = itsSMSWTD->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsSMSWTD->__setItsDashboard(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Dashboard::__setItsMaintainer(Maintainer* const p_Maintainer) {
    itsMaintainer = p_Maintainer;
}

void Dashboard::_setItsMaintainer(Maintainer* const p_Maintainer) {
    if(itsMaintainer != NULL)
        {
            itsMaintainer->__setItsDashboard(NULL);
        }
    __setItsMaintainer(p_Maintainer);
}

void Dashboard::_clearItsMaintainer(void) {
    itsMaintainer = NULL;
}

void Dashboard::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Dashboard::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsDashboard(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Dashboard::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
