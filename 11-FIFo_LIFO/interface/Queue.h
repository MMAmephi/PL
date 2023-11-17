#pragma once
#include "IStructure.h"

class Queue: public IStructure {
private:
    std::vector <int> elements;

public:

    virtual void push(int element);
    virtual int pop();
    virtual void print();
};