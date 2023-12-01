#include "BinaryTree.h"

BinaryTree::BinaryTree(): root(nullptr){}
BinaryTree::BinaryTree(int value){
    root = Node(value);
}

void BinaryTree::insert(int value){
    std::cout<<value;
}

void BinaryTree::del(){
    std::cout<<"\n";
}