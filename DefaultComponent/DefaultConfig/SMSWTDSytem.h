/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTDSytem
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSytem.h
*********************************************************************/

#ifndef SMSWTDSytem_H
#define SMSWTDSytem_H

//## auto_generated
#include <oxf.h>
//## classInstance itsDataAccessGateway
#include "DataAccessGateway.h"
//## classInstance itsDataCollector
#include "DataCollector.h"
//## classInstance itsDataProcessEngine
#include "DataProcessEngine.h"
//## classInstance itsGraphicalUserInterface
#include "GraphicalUserInterface.h"
//## classInstance itsHeartbeatChecker
#include "HeartbeatChecker.h"
//## classInstance itsNotificationSystem
#include "NotificationSystem.h"
//## package SMSWTD::DESIGN::BDD

//## class SMSWTDSytem
class SMSWTDSytem {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSWTDSytem(void);
    
    //## auto_generated
    ~SMSWTDSytem(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const DataAccessGateway* getItsDataAccessGateway(void) const;
    
    //## auto_generated
    const DataCollector* getItsDataCollector(void) const;
    
    //## auto_generated
    const DataProcessEngine* getItsDataProcessEngine(void) const;
    
    //## auto_generated
    const GraphicalUserInterface* getItsGraphicalUserInterface(void) const;
    
    //## auto_generated
    const HeartbeatChecker* getItsHeartbeatChecker(void) const;
    
    //## auto_generated
    const NotificationSystem* getItsNotificationSystem(void) const;
    
    ////    Relations and components    ////

private :

    DataAccessGateway itsDataAccessGateway;		//## classInstance itsDataAccessGateway
    
    DataCollector itsDataCollector;		//## classInstance itsDataCollector
    
    DataProcessEngine itsDataProcessEngine;		//## classInstance itsDataProcessEngine
    
    GraphicalUserInterface itsGraphicalUserInterface;		//## classInstance itsGraphicalUserInterface
    
    HeartbeatChecker itsHeartbeatChecker;		//## classInstance itsHeartbeatChecker
    
    NotificationSystem itsNotificationSystem;		//## classInstance itsNotificationSystem
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTDSytem.h
*********************************************************************/
