/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataLogger
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataLogger.h
*********************************************************************/

#ifndef DataLogger_H
#define DataLogger_H

//## auto_generated
#include <oxf.h>
//## package SMSWTD::DESIGN::BDD

//## class DataLogger
class DataLogger {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataLogger(void);
    
    //## auto_generated
    virtual ~DataLogger(void);
    
    ////    Operations    ////
    
    //## operation removeLegacyData()
    virtual void removeLegacyData(void);
    
    //## operation saveDataAndPrediction(RhpString,RhpString)
    virtual void saveDataAndPrediction(const RhpString& filteredData, const RhpString& prediction);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataLogger.h
*********************************************************************/
