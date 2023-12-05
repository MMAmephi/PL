#pragma once

template<typename T>
class Node{
public:
    Node();
    Node(T value);

    T key;
    Node *lnode;
    Node *rnode;
    int height;
};