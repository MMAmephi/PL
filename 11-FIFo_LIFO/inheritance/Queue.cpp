#include "Queue.h"

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