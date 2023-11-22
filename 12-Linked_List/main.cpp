#include "LinkedList.h"

int main(){
    LinkedList test;
    test.push(1);
    test.push(2);
    test.push(3);
    test.print();

    test.pop();
    test.print();
    
    return 0;
}