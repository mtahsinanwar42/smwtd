/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## link itsMaintainer
class Maintainer;

//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Dashboard
class Dashboard {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Dashboard(void);
    
    //## auto_generated
    ~Dashboard(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Maintainer* getItsMaintainer(void) const;
    
    //## auto_generated
    void setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Maintainer* itsMaintainer;		//## link itsMaintainer
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _clearItsMaintainer(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
