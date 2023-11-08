#pragma once
#include "IStructure.h"

class Stack: public IStructure{
public:
    virtual void push(int element);
    virtual int pop();
    virtual void print();
};