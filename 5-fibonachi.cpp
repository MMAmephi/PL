#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void fib(int n){
    long long int prev_number = 0;
    long long int number = 1;
    for(int k = 1; k <= n; k++){
        cout << number << " ";
<<<<<<< HEAD
        long long int temp=number;
        number+=prev_number;
        prev_number=temp;
=======
        long long int temp = number;
        number += prev_number;
        prev_number = temp;
>>>>>>> 9607b077b1fc1f564aa3bbc05994bae52f7f6bfd
    }
}

int check_num(string temp){
    string numbers="-0123456789";
    int flag=0;
    int* p = &flag;
    for(int i = 0; i < size(temp); i++){
        *p=0;
        for(int j = 0; j < size(numbers); j++){
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
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"russian");
    int end = 0;
    while(end == 0){
        cout << "Введите целое число меньшее 90" <<"\n";
        string n;
        cin >> n;
        //n = "12";
        if(check_num(n)==1){
            int num = stoi(n);
            if(num >= 1){
                if(num < 90){
                    cout << "Первые " << num << " чисел Фибоначчи:" << "\n";
                    fib(num);
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