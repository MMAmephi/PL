#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect1(1, 4, 3, 2), rect2(2, 3, 4, 1);
    if (rect2.check_collision(rect1)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}