#pragma once
#include "IStructure.h"

class DataContainer: public IStructure{
protected:
    std::vector <int> elements;

public:

    virtual int pop();
    virtual void print();
};