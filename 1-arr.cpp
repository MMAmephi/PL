#include <iostream>
#include <array>

using namespace std;

int main()
{
    int T1[5];//first method
    int *T2;
    T2 = (int*)malloc(5*sizeof(int));//second method
    int *T3 {new int[5]};//third method
    array<int, 5> T4;//forth method
    return 0;
}