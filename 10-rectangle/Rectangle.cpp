#include <iostream>
#include "Rectangle.h"


using namespace std;


Rectangle::Rectangle(double this_lux, double this_luy, double this_rdx, double this_rdy) : lu_x(this_lux), lu_y(this_luy), rd_x(this_rdx), rd_y(this_rdy)
{}

bool Rectangle::check_collision(Rectangle& other) {
    double x = other.get_lux();
    double y = other.get_luy();
    if (lu_x < x && rd_x > x && lu_y > y && rd_y < y) {
        return true;
    }
    x = other.get_lux();
    y = other.get_rdy();
    if (lu_x < x && rd_x > x && lu_y > y && rd_y < y) {
        return true;
    }

    x = other.get_rdx();
    y = other.get_rdy();
    if (lu_x < x && rd_x > x && lu_y > y && rd_y < y) {
        return true;
    }

    x = other.get_rdx();
    y = other.get_luy();
    if (lu_x < x && rd_x > x && lu_y > y && rd_y < y) {
        return true;
    }

    return false;
}
void Rectangle::set_lux(double this_lux) {
    lu_x = this_lux;
}

void Rectangle::set_luy(double this_luy) {
    lu_y = this_luy;
}

void Rectangle::set_rdx(double this_rdx) {
    rd_x = this_rdx;
}

void Rectangle::set_rdy(double this_rdy) {
    rd_y = this_rdy;
}