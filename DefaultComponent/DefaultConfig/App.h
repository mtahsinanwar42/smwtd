/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: App
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\App.h
*********************************************************************/

#ifndef App_H
#define App_H

//## auto_generated
#include <oxf.h>
//## link itsUser
class User;

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class App
class App {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    App(void);
    
    //## auto_generated
    ~App(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\App.h
*********************************************************************/
