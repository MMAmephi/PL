#pragma once

class Node{
public:
    Node(int value);

    int key;
    Node *lnode;
    Node *rnode;
};