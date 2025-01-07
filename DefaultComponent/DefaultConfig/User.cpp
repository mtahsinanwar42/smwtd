/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/

//## auto_generated
#include "User.h"
//## link itsApp
#include "App.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## actor User
User::User(void) : itsApp(NULL), itsSMSWTD(NULL) {
}

User::~User(void) {
    cleanUpRelations();
}

const App* User::getItsApp(void) const {
    return itsApp;
}

void User::setItsApp(App* const p_App) {
    if(p_App != NULL)
        {
            p_App->_setItsUser(this);
        }
    _setItsApp(p_App);
}

const SMSWTD* User::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void User::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsUser(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void User::cleanUpRelations(void) {
    if(itsApp != NULL)
        {
            const User* p_User = itsApp->getItsUser();
            if(p_User != NULL)
                {
                    itsApp->__setItsUser(NULL);
                }
            itsApp = NULL;
        }
    if(itsSMSWTD != NULL)
        {
            const User* p_User = itsSMSWTD->getItsUser();
            if(p_User != NULL)
                {
                    itsSMSWTD->__setItsUser(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void User::__setItsApp(App* const p_App) {
    itsApp = p_App;
}

void User::_setItsApp(App* const p_App) {
    if(itsApp != NULL)
        {
            itsApp->__setItsUser(NULL);
        }
    __setItsApp(p_App);
}

void User::_clearItsApp(void) {
    itsApp = NULL;
}

void User::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
}

void User::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsUser(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void User::_clearItsSMSWTD(void) {
    itsSMSWTD = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User.cpp
*********************************************************************/
