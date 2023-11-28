#include "Fraction.h"

int main(){
    Fraction test1(-1, -3);
    test1.print();
    Fraction test2(6, 10);
    test2.printFraction();
    (test2+test1).print();
    (test2-test1).printFraction();
    (test1*test2).print();
    return 0;
}