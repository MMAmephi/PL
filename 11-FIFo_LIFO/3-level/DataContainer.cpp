#include "DataContainer.h"

int DataContainer::pop() {
    try{
        if (elements.empty()) {
            throw "the container is empty";
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

void DataContainer::print(){
    for(int i=0; i < elements.size(); i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}