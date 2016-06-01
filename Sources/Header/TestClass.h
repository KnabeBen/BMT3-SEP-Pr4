/* 
 * File:   TestClass.h
 * Author: abv861
 *
 * Created on 1. Juni 2016, 14:36
 */

#ifndef TESTCLASS_H
#define	TESTCLASS_H

#include "FestoProcessSensors.h"

class TestClass : public FestoProcessSensors {
    
public:

    TestClass();
    ~TestClass();
    void ReadTestData(); // datei öffen, einlsen
    
    virtual unsigned short getHight();
private:

};

#endif	/* TESTCLASS_H */

