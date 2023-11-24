#pragma once
#include <iostream>

class Fraction{
public:
    int num;
    int denom;

    Fraction(float number);
    Fraction(int a, int b);
    
    void print();
    void printFraction();

    Fraction operator+ (const Fraction& fr){
        return Fraction(num * fr.denom + fr.num * denom, denom * fr.denom);
    }
    Fraction operator* (const Fraction& fr){
        return Fraction(num * fr.num, denom * fr.denom); 
    }
};