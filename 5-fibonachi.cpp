#include <iostream>
#include <string>

using namespace std;

int fib(int i){
    if(i == 1){
        return 0;
    }
    if(i == 2){
        return 1;
    }
    return fib(i-2) + fib(i-1);
}

int check_num(string temp){
    string numbers="0123456789";
    int flag=0;
    int* p = &flag;
    for(int i = 0; i < sizeof(temp); i++){
        *p=0;
        for(int j = 0; j < sizeof(numbers); j++){
            if(temp[i]==numbers[j]){
                *p = 1;
            }
        }
        if(*p==0){
            return flag;
        }
    }
    return flag;
}

int main(){
    int end = 0;
    while(end == 0){
        cout << "Введите целое положительное число не большее 100:" <<"\n";
        string n;
        cin >> n;
        //n = "12";
        if(check_num(n)==1){
            int num = stoi(n);
            if(num >= 1){
                if(num <= 100){
                    cout << "Первые " << num << " чисел Фибоначчи:" << "\n";
                    for(int k=1; k <= num; k++){
                        cout << fib(k) << " ";
                    }
                    end=1;
                }
                else{
                    cout << "Слишком большое число! Попробуйте ещё раз!" << "\n";
                    end=0;
                }
            }
            else{
                cout << "Вы ввели отрицательное число! Попробуйте ещё раз!" << "\n";
                end=0;
            }
        }
        else{
            cout << "Это не целое число! Попробуйте ещё раз!" << "\n";
            end=0;
        }
    }
    return 0;
}