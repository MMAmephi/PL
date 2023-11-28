#pragma once
#include "IStructure.h"

class Stack: public IStructure{
public:
    std::vector <int> elements;
    
    virtual void push(int element);
    virtual int pop();
    virtual void print();
    virtual bool IsEmpty();
};