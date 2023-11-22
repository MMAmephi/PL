#include "LinkedList.h"

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
    if (tail == NULL) return 0;
    if (head == tail) {
        temp = tail->val;
        delete tail;
        head = tail = NULL;
        return temp;
    }
    Node* node = head;
    for (; node->next != tail; node = node->next);

    node->next = NULL;
    temp = tail->val;
    delete tail;
    tail = node;
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
    std::cout << "/n";
}