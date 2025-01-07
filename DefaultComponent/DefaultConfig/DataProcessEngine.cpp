/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessEngine
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessEngine.cpp
*********************************************************************/

//## auto_generated
#include "DataProcessEngine.h"
//## package SMSWTD::DESIGN::BDD

//## class DataProcessEngine
DataProcessEngine::DataProcessEngine(void) {
}

DataProcessEngine::~DataProcessEngine(void) {
}

void DataProcessEngine::initialize(void) {
    //#[ operation initialize()
    std::cout << "Initializing DataProcessEngine";
    //#]
}

void DataProcessEngine::processData(void) {
    //#[ operation processData()
    std::cout << "DataProcessEngine | Processing Data";
    
    RhpString dataWithoutNoise = itsDataFilter.applyNoiseReduction(data);
    filteredData = itsDataFilter.removeOutliers(dataWithoutNoise);
    
    RhpString analyzedData = itsDataAnalyzer.analyzeDataStatistically(filteredData);
    prediction = itsDataAnalyzer.runPredictionModels(analyzedData);
    risk = itsRiskEvaluator.calculateRisk(prediction);
    
    itsDataLogger.saveDataAndPrediction(filteredData,prediction);
    //#]
}

const RhpString DataProcessEngine::getData(void) const {
    return data;
}

void DataProcessEngine::setData(const RhpString p_data) {
    data = p_data;
}

const RhpString DataProcessEngine::getFilteredData(void) const {
    return filteredData;
}

void DataProcessEngine::setFilteredData(const RhpString p_filteredData) {
    filteredData = p_filteredData;
}

const int DataProcessEngine::getId(void) const {
    return id;
}

void DataProcessEngine::setId(const int p_id) {
    id = p_id;
}

const RhpString DataProcessEngine::getPrediction(void) const {
    return prediction;
}

void DataProcessEngine::setPrediction(const RhpString p_prediction) {
    prediction = p_prediction;
}

const RhpString DataProcessEngine::getRisk(void) const {
    return risk;
}

void DataProcessEngine::setRisk(const RhpString p_risk) {
    risk = p_risk;
}

const RhpString DataProcessEngine::getStatus(void) const {
    return status;
}

void DataProcessEngine::setStatus(const RhpString p_status) {
    status = p_status;
}

const DataAnalyzer* DataProcessEngine::getItsDataAnalyzer(void) const {
    return &itsDataAnalyzer;
}

const DataFilter* DataProcessEngine::getItsDataFilter(void) const {
    return &itsDataFilter;
}

const DataLogger* DataProcessEngine::getItsDataLogger(void) const {
    return &itsDataLogger;
}

const RiskEvaluator* DataProcessEngine::getItsRiskEvaluator(void) const {
    return &itsRiskEvaluator;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessEngine.cpp
*********************************************************************/
