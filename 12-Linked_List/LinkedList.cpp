#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr){}

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
    try{
        int temp;
        if (tail == NULL){
            throw "the list is empty";
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
    catch(const char* exception){
        std::cout << "Error: " << exception << "\n";
    }
    return -1;
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