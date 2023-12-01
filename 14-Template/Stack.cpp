#include "Stack.h"

bool Stack::IsEmpty(){
    return (elements.empty());
}

void Stack::push(int element) {
    elements.push_back(element);
}

int Stack::pop() {
    if (!elements.empty()) {
        int temp = elements.back();
        elements.pop_back();
        return temp;
    }
    std::cout << "The stack is empty";
    return -1;
}

void Stack::print(){
    for(int i=0; i < elements.size(); i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}

int Stack::len(){
    return elements.size();
}