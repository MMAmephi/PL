#pragma once
#include "IStructure.h"

class Queue: public IStructure {
public:
    std::vector <int> elements;
    
    virtual void push(int element);
    virtual int pop();
    virtual void print();
    virtual bool IsEmpty();
    virtual int len();
};