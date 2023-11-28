#include "Queue.h"

bool Queue::IsEmpty(){
    return (elements.empty());
}

void Queue::push(int element) {
    elements.insert(elements.begin(), element);
}

int Queue::pop() {
    if (!elements.empty()) {
        int temp = elements.back();
        elements.pop_back();
        return temp;
    }
    std::cout << "The queue is empty";
    return -1;
}

void Queue::print(){
    for(int i=0; i < elements.size(); i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}