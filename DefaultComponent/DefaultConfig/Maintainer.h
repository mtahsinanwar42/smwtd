/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.h
*********************************************************************/

#ifndef Maintainer_H
#define Maintainer_H

//## auto_generated
#include <oxf.h>
//## link itsDashboard
class Dashboard;

//## link itsSMSWTD
class SMSWTD;

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## actor Maintainer
class Maintainer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Maintainer(void);
    
    //## auto_generated
    ~Maintainer(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Dashboard* itsDashboard;		//## link itsDashboard
    
    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _clearItsDashboard(void);
    
    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.h
*********************************************************************/
