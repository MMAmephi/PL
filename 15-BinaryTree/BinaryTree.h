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

template<typename T>
int BinaryTree<T>::height(Node<T>* node) {
    if (node == nullptr)
        return 0;
    return node->height;
}

template<typename T>
int BinaryTree<T>::balanceFactor(Node<T>* node) {
    if (node == nullptr)
        return 0;
    return height(node->left) - height(node->right);
}

template<typename T>
void BinaryTree<T>::updateHeight(Node<T>* node) {
    if (node != nullptr)
        node->height = 1 + std::max(height(node->left), height(node->right));
}

template<typename T>
Node<T>* BinaryTree<T>::rotateRight(Node<T>* y) {
    Node<T>* x = y->left;
    Node<T>* z = x->right;
    x->right = y;
    y->left = z;
    updateHeight(y);
    updateHeight(x);
    return x;
}

template<typename T>
Node<T>* BinaryTree<T>::rotateLeft(Node<T>* x) {
    Node<T>* y = x->right;
    Node<T>* T2 = y->left;
    y->left = x;
    x->right = T2;
    updateHeight(x);
    updateHeight(y);
    return y;
}

template<typename T>
Node<T>* BinaryTree<T>::insert(Node<T>* node, T key) {
    if (node == nullptr)
        return new Node<T>(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    updateHeight(node);

    int balance = balanceFactor(node);
    if (balance > 1) {
        if (key < node->left->key)
            return rotateRight(node);
        else {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
    }

    // Right Heavy
    if (balance < -1) {
        if (key > node->right->key){
            return rotateLeft(node);
        }
        else {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
    }

    return node;
}

template<typename T>
Node<T>* BinaryTree<T>::deleteNode(Node<T>* root, T key) {
    if (root == nullptr)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == nullptr || root->right == nullptr) {
            Node<T>* temp = root->left ? root->left : root->right;

            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else
                *root = *temp;

            delete temp;
        } else {
            // Node with two children, get the inorder successor (smallest
            // in the right subtree)
            Node<T>* temp = minv(root->right);

            // Copy the inorder successor's data to this node
            root->key = temp->key;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->key);
        }
    }

    if (root == nullptr)
        return root;

    updateHeight(root);

    int balance = balanceFactor(root);

    // Left Heavy
    if (balance > 1) {
        if (balanceFactor(root->left) >= 0)
            return rotateRight(root);
        else {
            root->left = rotateLeft(root->left);
            return rotateRight(root);
        }
    }

    // Right Heavy
    if (balance < -1) {
        if (balanceFactor(root->right) <= 0)
            return rotateLeft(root);
        else {
            root->right = rotateRight(root->right);
            return rotateLeft(root);
        }
    }

    return root;
}

template<typename T>
void BinaryTree<T>::printTree(Node<T>* root, int level) {
    if (root != nullptr) {
        printTree(root->right, level + 1);
        for (int i = 0; i < level; i++)
            std::cout << "\t";
        std::cout << root->key << "\n";
        printTree(root->left, level + 1);
    }
}

template<typename T>
BinaryTree<T>::BinaryTree():root(nullptr) {}

template<typename T>
void BinaryTree<T>::insert(T key) {
    root = insert(root, key);
}

template<typename T>
void BinaryTree<T>::deleteMin() {
    if (root != nullptr)
        root = deleteNode(root, minv(root)->key);
}

template<typename T>
void BinaryTree<T>::print() {
    printTree(root, 0);
}

template<typename T>
Node<T>* BinaryTree<T>::minv(Node<T>* node) {
    Node<T>* current = node;

    while (current->left != nullptr)
        current = current->left;

    return current;
}