/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## link itsAircraft
class Aircraft;

//## link itsCloud
class Cloud;

//## link itsDashboard
class Dashboard;

//## link itsData_Consumer
class Data_Consumer;

//## link itsEnvironment
class Environment;

//## link itsMaintainer
class Maintainer;

//## link itsOrganization
class Organization;

//## link itsSatelite
class Satelite;

//## link itsSensors
class Sensors;

//## link itsUser
class User;

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
class SMSWTD {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Aircraft* getItsAircraft(void) const;
    
    //## auto_generated
    void setItsAircraft(Aircraft* const p_Aircraft);
    
    //## auto_generated
    const Cloud* getItsCloud(void) const;
    
    //## auto_generated
    void setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    const Data_Consumer* getItsData_Consumer(void) const;
    
    //## auto_generated
    void setItsData_Consumer(Data_Consumer* const p_Data_Consumer);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const Maintainer* getItsMaintainer(void) const;
    
    //## auto_generated
    void setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    const Organization* getItsOrganization(void) const;
    
    //## auto_generated
    void setItsOrganization(Organization* const p_Organization);
    
    //## auto_generated
    const Satelite* getItsSatelite(void) const;
    
    //## auto_generated
    void setItsSatelite(Satelite* const p_Satelite);
    
    //## auto_generated
    const Sensors* getItsSensors(void) const;
    
    //## auto_generated
    void setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Aircraft* itsAircraft;		//## link itsAircraft
    
    Cloud* itsCloud;		//## link itsCloud
    
    Dashboard* itsDashboard;		//## link itsDashboard
    
    Data_Consumer* itsData_Consumer;		//## link itsData_Consumer
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    Maintainer* itsMaintainer;		//## link itsMaintainer
    
    Organization* itsOrganization;		//## link itsOrganization
    
    Satelite* itsSatelite;		//## link itsSatelite
    
    Sensors* itsSensors;		//## link itsSensors
    
    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAircraft(Aircraft* const p_Aircraft);
    
    //## auto_generated
    void _setItsAircraft(Aircraft* const p_Aircraft);
    
    //## auto_generated
    void _clearItsAircraft(void);
    
    //## auto_generated
    void __setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _clearItsCloud(void);
    
    //## auto_generated
    void __setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _clearItsDashboard(void);
    
    //## auto_generated
    void __setItsData_Consumer(Data_Consumer* const p_Data_Consumer);
    
    //## auto_generated
    void _setItsData_Consumer(Data_Consumer* const p_Data_Consumer);
    
    //## auto_generated
    void _clearItsData_Consumer(void);
    
    //## auto_generated
    void __setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment(void);
    
    //## auto_generated
    void __setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _clearItsMaintainer(void);
    
    //## auto_generated
    void __setItsOrganization(Organization* const p_Organization);
    
    //## auto_generated
    void _setItsOrganization(Organization* const p_Organization);
    
    //## auto_generated
    void _clearItsOrganization(void);
    
    //## auto_generated
    void __setItsSatelite(Satelite* const p_Satelite);
    
    //## auto_generated
    void _setItsSatelite(Satelite* const p_Satelite);
    
    //## auto_generated
    void _clearItsSatelite(void);
    
    //## auto_generated
    void __setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* const p_Sensors);
    
    //## auto_generated
    void _clearItsSensors(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
