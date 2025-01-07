/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Organization
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Organization.cpp
*********************************************************************/

//## auto_generated
#include "Organization.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Organization
Organization::Organization(void) : itsSMSWTD(NULL) {
}

Organization::~Organization(void) {
    cleanUpRelations();
}

const SMSWTD* Organization::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Organization::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsOrganization(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Organization::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            const Organization* p_Organization = itsSMSWTD->getItsOrganization();
            if(p_Organization != NULL)
                {
                    itsSMSWTD->__setItsOrganization(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Organization::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void Organization::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsOrganization(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Organization::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Organization.cpp
*********************************************************************/
