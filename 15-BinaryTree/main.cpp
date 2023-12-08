#include <iostream>
#include "BinaryTree.h"


int main() {
    BinaryTree<int> test;

    test.insert(30);
    test.insert(12);
    test.insert(26);
    test.insert(54);
    test.insert(8);

    std::cout << "Original Tree:\n";
    test.print();

    test.deleteMin();
    std::cout << "\nTree after deleting:\n";
    test.print();

    return 0;
}