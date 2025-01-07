/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskEvaluator
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskEvaluator.cpp
*********************************************************************/

//## auto_generated
#include "RiskEvaluator.h"
//## package SMSWTD::DESIGN::BDD

//## class RiskEvaluator
RiskEvaluator::RiskEvaluator(void) {
}

RiskEvaluator::~RiskEvaluator(void) {
}

RhpString RiskEvaluator::calculateRisk(const RhpString& prediction) {
    //#[ operation calculateRisk(RhpString)
    std::cout << "DataProcessEngine | RiskEvaluator | Calculating Risks";
    return "{}";
    //#]
}

void RiskEvaluator::setRiskThresholds(void) {
    //#[ operation setRiskThresholds()
    std::cout << "DataProcessEngine | RiskEvaluator | Setting Risk Thresholds";
    riskThresholds = "{}";
    //#]
}

const RhpString RiskEvaluator::getRiskThresholds(void) const {
    return riskThresholds;
}

void RiskEvaluator::setRiskThresholds(const RhpString p_riskThresholds) {
    riskThresholds = p_riskThresholds;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskEvaluator.cpp
*********************************************************************/
