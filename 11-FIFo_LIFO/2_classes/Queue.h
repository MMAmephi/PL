#pragma once
#include <iostream>
#include <vector>
#include <stdarg.h>

using namespace std;

class Queue {
private:
    vector <int> elements;
public:
    Queue(unsigned num, ...);
    void push(int element);
    int pop();
    void print();
};