#pragma once
#include "DataContainer.h"

class Queue: public DataContainer {
public:
    virtual void push(int element);
};