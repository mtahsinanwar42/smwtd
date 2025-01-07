/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessEngine
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessEngine.h
*********************************************************************/

#ifndef DataProcessEngine_H
#define DataProcessEngine_H

//## auto_generated
#include <oxf.h>
//## classInstance itsDataAnalyzer
#include "DataAnalyzer.h"
//## classInstance itsDataFilter
#include "DataFilter.h"
//## classInstance itsDataLogger
#include "DataLogger.h"
//## classInstance itsRiskEvaluator
#include "RiskEvaluator.h"
//## package SMSWTD::DESIGN::BDD

//## class DataProcessEngine
class DataProcessEngine {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataProcessEngine(void);
    
    //## auto_generated
    virtual ~DataProcessEngine(void);
    
    ////    Operations    ////
    
    //## operation initialize()
    virtual void initialize(void);
    
    //## operation processData()
    virtual void processData(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpString getData(void) const;
    
    //## auto_generated
    void setData(const RhpString p_data);
    
    //## auto_generated
    const RhpString getFilteredData(void) const;
    
    //## auto_generated
    void setFilteredData(const RhpString p_filteredData);
    
    //## auto_generated
    const int getId(void) const;
    
    //## auto_generated
    void setId(const int p_id);
    
    //## auto_generated
    const RhpString getPrediction(void) const;
    
    //## auto_generated
    void setPrediction(const RhpString p_prediction);
    
    //## auto_generated
    const RhpString getRisk(void) const;
    
    //## auto_generated
    void setRisk(const RhpString p_risk);
    
    //## auto_generated
    const RhpString getStatus(void) const;
    
    //## auto_generated
    void setStatus(const RhpString p_status);
    
    //## auto_generated
    const DataAnalyzer* getItsDataAnalyzer(void) const;
    
    //## auto_generated
    const DataFilter* getItsDataFilter(void) const;
    
    //## auto_generated
    const DataLogger* getItsDataLogger(void) const;
    
    //## auto_generated
    const RiskEvaluator* getItsRiskEvaluator(void) const;
    
    ////    Attributes    ////

private :

    RhpString data;		//## attribute data
    
    RhpString filteredData;		//## attribute filteredData
    
    int id;		//## attribute id
    
    RhpString prediction;		//## attribute prediction
    
    RhpString risk;		//## attribute risk
    
    RhpString status;		//## attribute status
    
    ////    Relations and components    ////
    
    DataAnalyzer itsDataAnalyzer;		//## classInstance itsDataAnalyzer
    
    DataFilter itsDataFilter;		//## classInstance itsDataFilter
    
    DataLogger itsDataLogger;		//## classInstance itsDataLogger
    
    RiskEvaluator itsRiskEvaluator;		//## classInstance itsRiskEvaluator
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessEngine.h
*********************************************************************/
