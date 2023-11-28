#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr){}

bool LinkedList::IsEmpty(){
    return (head==NULL);
}

void LinkedList::push(int element) {
    Node* p = new Node(element);
    if (head == NULL) {
        head = p;
    }
    if(tail != NULL){
        tail->next = p;
    }
    tail = p;
}

int LinkedList::pop() {
    int temp;
    if (tail == NULL){
        std::cout << "Impossible to pop!";
    }
    if (head == tail) {
        temp = tail->val;
        delete tail;
        head = tail = NULL;
        return temp;
    }

    Node* p = head;
    while(p->next != tail){
        p = p->next;
    }

    p->next = NULL;
    temp = tail->val;
    delete tail;
    tail = p;
    return temp;
}

void LinkedList::print() {
    if (head == NULL){
        std::cout << "The list is empty!";
    }
    Node* p = head;
    while (p) { 
        std::cout << p->val << " ";
        p = p->next;
    }
    std::cout << "\n";
}