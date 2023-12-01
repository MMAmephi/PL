#include "Fraction.h"

unsigned int gcd(unsigned int a, unsigned int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return gcd(a%b, b);
    return gcd(a, b%a);
}

Fraction::Fraction(float number){
    int tmp = (int) number * 100000;
    Fraction(tmp, 1000000);
}

Fraction::Fraction(int a, int b){
    int temp = gcd(abs(a), abs(b));
    if(b != 0){
        if(b < 0){
            num = -a/temp;
            denom = abs(b)/temp;
        }
        else{
            num = a/temp;
            denom = b/temp;
        }
    }
    else{
        std::cout << "The denominator is 0! Impossible to create fraction."; 
    }
}

void Fraction::print(){
    std::cout << (double) num/denom << "\n";
}

void Fraction::printFraction(){
    if(num!=0){
        std::cout << num/denom << " " << (num % denom) << "/" << denom << "\n";    
    }
    else{
        std::cout << num << "\n";
    }
}