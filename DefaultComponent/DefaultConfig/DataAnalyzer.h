/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataAnalyzer
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataAnalyzer.h
*********************************************************************/

#ifndef DataAnalyzer_H
#define DataAnalyzer_H

//## auto_generated
#include <oxf.h>
//## package SMSWTD::DESIGN::BDD

//## class DataAnalyzer
class DataAnalyzer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataAnalyzer(void);
    
    //## auto_generated
    virtual ~DataAnalyzer(void);
    
    ////    Operations    ////
    
    //## operation analyzeDataStatistically(RhpString)
    virtual RhpString analyzeDataStatistically(const RhpString& data);
    
    //## operation runPredictionModels(RhpString)
    virtual RhpString runPredictionModels(const RhpString& analyzedData);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataAnalyzer.h
*********************************************************************/
