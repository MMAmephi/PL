#pragma once
#include <iostream>
#include "Node.h"

class BinaryTree{
public:
    BinaryTree();
    BinaryTree(int value);

    Node *root;
    
    void insert(int value);
    void del();
};