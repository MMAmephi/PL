#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;

bool odd(int n){
    return n%2;
}

bool bit_odd(int n){
    return (n&1==1);
}

bool shift_odd(int n){
    return !(n==((n>>1)<<1));
}

int main(){
    int N=INT_MAX;
    int m=5;
    int s1=0;
    int s2=0;
    int s3=0;
    for(int j=0; j<m; j++){
        unsigned int start_time1 = clock();
        for(int i=0; i<N; i++){
            shift_odd(i);
        }
        unsigned int end_time1 = clock();
        s1+=end_time1-start_time1;
        unsigned int start_time2 = clock();
        for(int i=0; i<N; i++){
            odd(i);
        }
        unsigned int end_time2 = clock();
        s2+=end_time2-start_time2;
        unsigned int start_time3 = clock();
        for(int i=0; i<N; i++){
            bit_odd(i);
        }
        unsigned int end_time3 = clock();
        s3+=end_time3-start_time3;
    }
    cout <<"shift: " << s1/m << '\n' << "simple: " << s2/m << '\n' << "bit: " << s3/m;
    //cout << loop_odd(n);
    //cout << bit_odd(n); 
    return 0;
}