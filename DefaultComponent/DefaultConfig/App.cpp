/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: App
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\App.cpp
*********************************************************************/

//## auto_generated
#include "App.h"
//## link itsUser
#include "User.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class App
App::App(void) : itsUser(NULL) {
}

App::~App(void) {
    cleanUpRelations();
}

const User* App::getItsUser(void) const {
    return itsUser;
}

void App::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsApp(this);
        }
    _setItsUser(p_User);
}

void App::cleanUpRelations(void) {
    if(itsUser != NULL)
        {
            const App* p_App = itsUser->getItsApp();
            if(p_App != NULL)
                {
                    itsUser->__setItsApp(NULL);
                }
            itsUser = NULL;
        }
}

void App::__setItsUser(User* const p_User) {
    itsUser = p_User;
}

void App::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsApp(NULL);
        }
    __setItsUser(p_User);
}

void App::_clearItsUser(void) {
    itsUser = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\App.cpp
*********************************************************************/
