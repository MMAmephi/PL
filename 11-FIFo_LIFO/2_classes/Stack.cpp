#include "Stack.h"

void Stack::push(int element) {
    elements.push_back(element);
}

int Stack::pop() {
    if (!elements.empty()) {
        int temp = elements.back();
        elements.pop_back();
        return temp;
    }
    cout << "The stack is empty";
    return -1;
}

void Stack::print(){
    for(int i=0; i < elements.size(); i++){
        cout << elements[i] << " ";
    }
    cout << "\n";
}