#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect1(1, 1, 3, 2), rect2(2, 2, 3, 1);
    if (rect2.check_collision(rect1)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}