#pragma once

using namespace std;


class Rectangle{
    private:
        double rd_x, rd_y;
        double lu_x, lu_y;

    public:
        Rectangle(double this_lux, double this_luy, double this_rdx, double this_rdy);

        bool check_collision(Rectangle& other); 

        void set_lux(double this_lux);

        void set_luy(double this_luy);

        void set_rdx(double this_rdx);

        void set_rdy(double this_rdy);

        double get_lux() { return lu_x; }

        double get_luy() { return lu_y; }

        double get_rdx() { return rd_x; }

        double get_rdy() { return rd_y; }
};