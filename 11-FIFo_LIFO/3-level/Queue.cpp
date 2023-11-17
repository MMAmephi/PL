#include "Queue.h"

void Queue::push(int element) {
    elements.insert(elements.begin(), element);
}