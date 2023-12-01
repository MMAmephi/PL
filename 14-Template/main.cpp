#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

template<typename T> void reverse(T*);
template <> void reverse<>(LinkedList*);

int main(){
    Queue test1;
    reverse(&test1);
    test1.push(1);
    test1.push(2);
    test1.push(3);
    test1.print();
    reverse(&test1);
    test1.print();

    Stack test2;
    test2.push(7);
    test2.push(8);
    test2.push(9);
    test2.print();
    reverse(&test2);
    test2.print();
    
    LinkedList test3;
    test3.push(4);
    test3.push(5);
    test3.push(6);
    test3.print();
    reverse(&test3);
    test3.print();

    return 0;
}

template <> void reverse(LinkedList* a){
    Node* current = a->head;
    Node *prev = NULL;
    Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    a->head = prev;
}

template<typename T> void reverse(T* a){
    if(a->IsEmpty()){
        std::cout << "Operation isn't possible!" << std::endl;
    }
    else{
        std::vector<int> tmp = a->elements;
        int n = a->elements.size() - 1;
        for(int i=0; i <= n; i++){
            a->elements[i] = tmp[n - i];
        }
    }
}