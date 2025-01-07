/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataLogger
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataLogger.cpp
*********************************************************************/

//## auto_generated
#include "DataLogger.h"
//## package SMSWTD::DESIGN::BDD

//## class DataLogger
DataLogger::DataLogger(void) {
}

DataLogger::~DataLogger(void) {
}

void DataLogger::removeLegacyData(void) {
    //#[ operation removeLegacyData()
    std::cout << "DataProcessEngine | DataLogger | Clearing 20 years old data";
    //#]
}

void DataLogger::saveDataAndPrediction(const RhpString& filteredData, const RhpString& prediction) {
    //#[ operation saveDataAndPrediction(RhpString,RhpString)
    std::cout << "DataProcessEngine | DataFilter | Saving data & Prediction";
    //#]
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataLogger.cpp
*********************************************************************/
