#include "Queue.h"

Queue::Queue(unsigned num, ...){
    va_list args;
    va_start(args, num);
    while(num--){
        elements.insert(elements.begin(), va_arg(args, unsigned));
    }
    va_end(args);   
}

void Queue::push(int element) {
    elements.insert(elements.begin(), element);
}

int Queue::pop() {
    try{
        if (elements.empty()) {
            throw "the queue is empty";
        }
        int temp = elements.front();
        elements.pop_back();
        return temp;
    }
    catch(const char* exception){
        cout << "Error: " << exception << "\n";
    }
    return -1;
}

void Queue::print(){
    for(int i=0; i < elements.size(); i++){
        cout << elements[i] << " ";
    }
    cout << "\n";
}