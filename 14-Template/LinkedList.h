#pragma once
#include "IStructure.h"
#include "Node.h"

class LinkedList : public IStructure{
public:
    Node* head;
    Node* tail;

    LinkedList();
    virtual void push(int element);
    virtual int pop();
    virtual void print();
    virtual bool IsEmpty();
};