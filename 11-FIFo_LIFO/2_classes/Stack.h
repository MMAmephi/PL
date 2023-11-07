#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector <int> elements;
public:
    void push(int element);
    int pop();
    void print();
};