#include "Stack.h"
#include "Queue.h"

int main(){
    vector<int> els{1, 3, 5};
    Stack test1(els);
    Queue test2{3, 1, 3, 5};

    test1.push(1);
    test1.push(2);
    test1.push(3);
    test1.print();
    test1.pop();
    test1.print();

    test2.print();
    test2.pop();
    test2.print();
}