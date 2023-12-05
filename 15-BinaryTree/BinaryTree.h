#pragma once
#include <iostream>
#include "Node.h"

template<typename T>
class BinaryTree {
private:
    Node<T>* root;

    int height(Node<T>* node);

    int balanceFactor(Node<T>* node);

    void updateHeight(Node<T>* node);

    Node<T>* rotateRight(Node<T>* y);

    Node<T>* rotateLeft(Node<T>* x);

    Node<T>* insert(Node<T>* node, T key);

    Node<T>* deleteNode(Node<T>* root, T key);

    void printTree(Node<T>* root, int level);

public:
    BinaryTree();

    void insert(T key);

    void deleteMin();

    void print();

    Node<T>* minv(Node<T>* node);
};