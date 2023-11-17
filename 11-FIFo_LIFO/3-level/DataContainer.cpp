#include "DataContainer.h"

int DataContainer::pop() {
    if (!elements.empty()) {
        int temp = elements.back();
        elements.pop_back();
        return temp;
    }
    std::cout << "The container is empty";
    return -1;
}

void DataContainer::print(){
    for(int i=0; i < elements.size(); i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}