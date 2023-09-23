#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

long long int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n-1)*n;
}

int check_num(string temp){
    string numbers="-0123456789";
    int flag=0;
    int* p = &flag;
    for(int i = 0; i < size(temp); i++){
        *p=0;
        for(int j = 0; j < size(numbers); j++){
            if(temp[i] == numbers[j]){
                *p=1;
            }
        }
        if(*p==0){
            return flag;
        }
    }
    return flag;
}

int main(){
    system("chcp 1251");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"russian");
    int end = 0;
    while(end == 0){
        cout << "Введите число меньшее 24" <<"\n";
        string n;
        cin >> n;
        //n = "12";
        if(check_num(n) == 1){
            int num = stoi(n);
            if(num >= 0){
                if(num <= 24){
                    cout << "Факториал числа " << num << " = " << fact(num);
                    end=1;
                }
                else{
                    cout << "Слишком большое число!" << "\n";
                    end=0;
                }
            }
            else{
                cout << "Не является положительным числом! Попробуйте ещё!" << "\n";
                end=0;
            }
        }
        else{
            cout << "Не является целым положительным числом! Попробуйте ещё!" << "\n";
            end=0;
        }
    }
    return 0;
}