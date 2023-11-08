#pragma once
#include <iostream>
#include <vector>

class IStructure{
protected:
    std::vector <int> elements;

    virtual void push(int element)=0;
    virtual int pop()=0;
    virtual void print()=0;
};