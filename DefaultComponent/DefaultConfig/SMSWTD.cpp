/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//## auto_generated
#include "SMSWTD.h"
//## link itsAircraft
#include "Aircraft.h"
//## link itsCloud
#include "Cloud.h"
//## link itsDashboard
#include "Dashboard.h"
//## link itsData_Consumer
#include "Data_Consumer.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsMaintainer
#include "Maintainer.h"
//## link itsOrganization
#include "Organization.h"
//## link itsSatelite
#include "Satelite.h"
//## link itsSensors
#include "Sensors.h"
//## link itsUser
#include "User.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
SMSWTD::SMSWTD(void) : itsAircraft(NULL), itsCloud(NULL), itsDashboard(NULL), itsData_Consumer(NULL), itsEnvironment(NULL), itsMaintainer(NULL), itsOrganization(NULL), itsSatelite(NULL), itsSensors(NULL), itsUser(NULL) {
}

SMSWTD::~SMSWTD(void) {
    cleanUpRelations();
}

const Aircraft* SMSWTD::getItsAircraft(void) const {
    return itsAircraft;
}

void SMSWTD::setItsAircraft(Aircraft* const p_Aircraft) {
    if(p_Aircraft != NULL)
        {
            p_Aircraft->_setItsSMSWTD(this);
        }
    _setItsAircraft(p_Aircraft);
}

const Cloud* SMSWTD::getItsCloud(void) const {
    return itsCloud;
}

void SMSWTD::setItsCloud(Cloud* const p_Cloud) {
    if(p_Cloud != NULL)
        {
            p_Cloud->_setItsSMSWTD(this);
        }
    _setItsCloud(p_Cloud);
}

const Dashboard* SMSWTD::getItsDashboard(void) const {
    return itsDashboard;
}

void SMSWTD::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_setItsSMSWTD(this);
        }
    _setItsDashboard(p_Dashboard);
}

const Data_Consumer* SMSWTD::getItsData_Consumer(void) const {
    return itsData_Consumer;
}

void SMSWTD::setItsData_Consumer(Data_Consumer* const p_Data_Consumer) {
    if(p_Data_Consumer != NULL)
        {
            p_Data_Consumer->_setItsSMSWTD(this);
        }
    _setItsData_Consumer(p_Data_Consumer);
}

const Environment* SMSWTD::getItsEnvironment(void) const {
    return itsEnvironment;
}

void SMSWTD::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsSMSWTD(this);
        }
    _setItsEnvironment(p_Environment);
}

const Maintainer* SMSWTD::getItsMaintainer(void) const {
    return itsMaintainer;
}

void SMSWTD::setItsMaintainer(Maintainer* const p_Maintainer) {
    if(p_Maintainer != NULL)
        {
            p_Maintainer->_setItsSMSWTD(this);
        }
    _setItsMaintainer(p_Maintainer);
}

const Organization* SMSWTD::getItsOrganization(void) const {
    return itsOrganization;
}

void SMSWTD::setItsOrganization(Organization* const p_Organization) {
    if(p_Organization != NULL)
        {
            p_Organization->_setItsSMSWTD(this);
        }
    _setItsOrganization(p_Organization);
}

const Satelite* SMSWTD::getItsSatelite(void) const {
    return itsSatelite;
}

void SMSWTD::setItsSatelite(Satelite* const p_Satelite) {
    if(p_Satelite != NULL)
        {
            p_Satelite->_setItsSMSWTD(this);
        }
    _setItsSatelite(p_Satelite);
}

const Sensors* SMSWTD::getItsSensors(void) const {
    return itsSensors;
}

void SMSWTD::setItsSensors(Sensors* const p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsSMSWTD(this);
        }
    _setItsSensors(p_Sensors);
}

const User* SMSWTD::getItsUser(void) const {
    return itsUser;
}

void SMSWTD::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSMSWTD(this);
        }
    _setItsUser(p_User);
}

void SMSWTD::cleanUpRelations(void) {
    if(itsAircraft != NULL)
        {
            const SMSWTD* p_SMSWTD = itsAircraft->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAircraft->__setItsSMSWTD(NULL);
                }
            itsAircraft = NULL;
        }
    if(itsCloud != NULL)
        {
            const SMSWTD* p_SMSWTD = itsCloud->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsCloud->__setItsSMSWTD(NULL);
                }
            itsCloud = NULL;
        }
    if(itsDashboard != NULL)
        {
            const SMSWTD* p_SMSWTD = itsDashboard->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsDashboard->__setItsSMSWTD(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsData_Consumer != NULL)
        {
            const SMSWTD* p_SMSWTD = itsData_Consumer->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsData_Consumer->__setItsSMSWTD(NULL);
                }
            itsData_Consumer = NULL;
        }
    if(itsEnvironment != NULL)
        {
            const SMSWTD* p_SMSWTD = itsEnvironment->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsEnvironment->__setItsSMSWTD(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsMaintainer != NULL)
        {
            const SMSWTD* p_SMSWTD = itsMaintainer->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsMaintainer->__setItsSMSWTD(NULL);
                }
            itsMaintainer = NULL;
        }
    if(itsOrganization != NULL)
        {
            const SMSWTD* p_SMSWTD = itsOrganization->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsOrganization->__setItsSMSWTD(NULL);
                }
            itsOrganization = NULL;
        }
    if(itsSatelite != NULL)
        {
            const SMSWTD* p_SMSWTD = itsSatelite->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSatelite->__setItsSMSWTD(NULL);
                }
            itsSatelite = NULL;
        }
    if(itsSensors != NULL)
        {
            const SMSWTD* p_SMSWTD = itsSensors->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSensors->__setItsSMSWTD(NULL);
                }
            itsSensors = NULL;
        }
    if(itsUser != NULL)
        {
            const SMSWTD* p_SMSWTD = itsUser->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsUser->__setItsSMSWTD(NULL);
                }
            itsUser = NULL;
        }
}

void SMSWTD::__setItsAircraft(Aircraft* const p_Aircraft) {
    itsAircraft = p_Aircraft;
}

void SMSWTD::_setItsAircraft(Aircraft* const p_Aircraft) {
    if(itsAircraft != NULL)
        {
            itsAircraft->__setItsSMSWTD(NULL);
        }
    __setItsAircraft(p_Aircraft);
}

void SMSWTD::_clearItsAircraft(void) {
    itsAircraft = NULL;
}

void SMSWTD::__setItsCloud(Cloud* const p_Cloud) {
    itsCloud = p_Cloud;
}

void SMSWTD::_setItsCloud(Cloud* const p_Cloud) {
    if(itsCloud != NULL)
        {
            itsCloud->__setItsSMSWTD(NULL);
        }
    __setItsCloud(p_Cloud);
}

void SMSWTD::_clearItsCloud(void) {
    itsCloud = NULL;
}

void SMSWTD::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
}

void SMSWTD::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsSMSWTD(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void SMSWTD::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

void SMSWTD::__setItsData_Consumer(Data_Consumer* const p_Data_Consumer) {
    itsData_Consumer = p_Data_Consumer;
}

void SMSWTD::_setItsData_Consumer(Data_Consumer* const p_Data_Consumer) {
    if(itsData_Consumer != NULL)
        {
            itsData_Consumer->__setItsSMSWTD(NULL);
        }
    __setItsData_Consumer(p_Data_Consumer);
}

void SMSWTD::_clearItsData_Consumer(void) {
    itsData_Consumer = NULL;
}

void SMSWTD::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
}

void SMSWTD::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsSMSWTD(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void SMSWTD::_clearItsEnvironment(void) {
    itsEnvironment = NULL;
}

void SMSWTD::__setItsMaintainer(Maintainer* const p_Maintainer) {
    itsMaintainer = p_Maintainer;
}

void SMSWTD::_setItsMaintainer(Maintainer* const p_Maintainer) {
    if(itsMaintainer != NULL)
        {
            itsMaintainer->__setItsSMSWTD(NULL);
        }
    __setItsMaintainer(p_Maintainer);
}

void SMSWTD::_clearItsMaintainer(void) {
    itsMaintainer = NULL;
}

void SMSWTD::__setItsOrganization(Organization* const p_Organization) {
    itsOrganization = p_Organization;
}

void SMSWTD::_setItsOrganization(Organization* const p_Organization) {
    if(itsOrganization != NULL)
        {
            itsOrganization->__setItsSMSWTD(NULL);
        }
    __setItsOrganization(p_Organization);
}

void SMSWTD::_clearItsOrganization(void) {
    itsOrganization = NULL;
}

void SMSWTD::__setItsSatelite(Satelite* const p_Satelite) {
    itsSatelite = p_Satelite;
}

void SMSWTD::_setItsSatelite(Satelite* const p_Satelite) {
    if(itsSatelite != NULL)
        {
            itsSatelite->__setItsSMSWTD(NULL);
        }
    __setItsSatelite(p_Satelite);
}

void SMSWTD::_clearItsSatelite(void) {
    itsSatelite = NULL;
}

void SMSWTD::__setItsSensors(Sensors* const p_Sensors) {
    itsSensors = p_Sensors;
}

void SMSWTD::_setItsSensors(Sensors* const p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsSMSWTD(NULL);
        }
    __setItsSensors(p_Sensors);
}

void SMSWTD::_clearItsSensors(void) {
    itsSensors = NULL;
}

void SMSWTD::__setItsUser(User* const p_User) {
    itsUser = p_User;
}

void SMSWTD::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsSMSWTD(NULL);
        }
    __setItsUser(p_User);
}

void SMSWTD::_clearItsUser(void) {
    itsUser = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
