#include "Stack.h"

void Stack::push(int element) {
    elements.push_back(element);
}

int Stack::pop() {
    try{
        if (elements.empty()) {
            throw "the stack is empty";
        }
        int temp = elements.back();
        elements.pop_back();
        return temp;
    }
    catch(const char* exception){
        std::cout << "Error: " << exception << "\n";
    }
    return -1;
}

void Stack::print(){
    for(int i=0; i < elements.size(); i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}