#include "Queue.h"

void Queue::push(int element) {
    elements.insert(elements.begin(), element);
}

int Queue::pop() {
    if (!elements.empty()) {
        int temp = elements.front();
        elements.pop_back();
        return temp;
    }
    cout << "The queue is empty";
    return -1;
}