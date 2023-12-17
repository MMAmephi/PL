#include "Stack.h"
#include "Queue.h"

int main(){
    Stack test1;
    Queue test2;

    test1.push(1);
    test1.push(2);
    test1.push(3);
    test1.print();
    test1.pop();
    test1.print();
    test1.pop();
    test1.pop();
    test1.pop();

    test2.push(1);
    test2.push(2);
    test2.push(3);
    test2.print();
    test2.pop();
    test2.print();
    test2.pop();
    test2.pop();
    test2.pop();  

    return 0;
}