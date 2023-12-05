#include "Node.h"

template<typename T>
Node<T>::Node(){}

template<typename T>
Node<T>::Node(T value): key(value), lnode(nullptr), rnode(nullptr){}