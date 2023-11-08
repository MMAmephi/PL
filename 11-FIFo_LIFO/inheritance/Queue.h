#pragma once
#include "Stack.h"

using namespace std;

class Queue: public Stack {
public:
    void push(int element);
    int pop();
};