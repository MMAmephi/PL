#include "Stack.h"
#include "Queue.h"

int main(){
    vector<int> els{1, 3};
    Stack test1(els);
    Queue test2{2, 4};

    test1.push(5);
    test1.print();
    test1.pop();
    test1.print();
    test1.pop();
    test1.pop();
    test1.pop();

    test2.push(6);
    test2.print();
    test2.pop();
    test2.print();
    test2.pop();
    test2.pop();
    test2.pop();

    return 0;
}