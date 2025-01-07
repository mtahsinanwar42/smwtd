/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskEvaluator
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskEvaluator.h
*********************************************************************/

#ifndef RiskEvaluator_H
#define RiskEvaluator_H

//## auto_generated
#include <oxf.h>
//## package SMSWTD::DESIGN::BDD

//## class RiskEvaluator
class RiskEvaluator {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RiskEvaluator(void);
    
    //## auto_generated
    virtual ~RiskEvaluator(void);
    
    ////    Operations    ////
    
    //## operation calculateRisk(RhpString)
    virtual RhpString calculateRisk(const RhpString& prediction);
    
    //## operation setRiskThresholds()
    virtual void setRiskThresholds(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpString getRiskThresholds(void) const;
    
    //## auto_generated
    void setRiskThresholds(const RhpString p_riskThresholds);
    
    ////    Attributes    ////

private :

    RhpString riskThresholds;		//## attribute riskThresholds
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskEvaluator.h
*********************************************************************/
