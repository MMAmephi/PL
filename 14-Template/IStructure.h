#pragma once
#include <iostream>
#include <vector>

class IStructure {
public:

    virtual void push(int element)=0;
    virtual int pop()=0;
    virtual void print()=0;
    virtual bool IsEmpty()=0;
};