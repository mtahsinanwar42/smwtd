/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245197
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataFilter
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataFilter.h
*********************************************************************/

#ifndef DataFilter_H
#define DataFilter_H

//## auto_generated
#include <oxf.h>
//## package SMSWTD::DESIGN::BDD

//## class DataFilter
class DataFilter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DataFilter(void);
    
    //## auto_generated
    virtual ~DataFilter(void);
    
    ////    Operations    ////
    
    //## operation applyNoiseReduction(RhpString)
    virtual RhpString applyNoiseReduction(const RhpString& data);
    
    //## operation removeOutliers(RhpString)
    virtual RhpString removeOutliers(const RhpString& data);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataFilter.h
*********************************************************************/
