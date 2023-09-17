#include <iostream>
#include <string>

using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n-1)*n;
}

int check_num(string temp){
    string numbers="0123456789";
    int flag=0;
    int* p = &flag;
    for(int i=0; i < size(temp); i++){
        *p=0;
        for(int j=0; j < size(numbers); j++){
            if(temp[i]==numbers[j]){
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
    int end = 0;
    while(end == 0){
        cout << "������� ����� ������������� ����� �� ������� 100000" <<"\n";
        string n;
        cin >> n;
        //n = "12";
        if(check_num(n)==1){
            int num = stoi(n);
            if(num >= 0){
                if(num <= 100000){
                    cout << "��������� ����� " << num << " = " << fact(num);
                    end=1;
                }
                else{
                    cout << "������� ������� �����!" << "\n";
                    end=0;
                }
            }
            else{
                cout << "��������� �������������� ����� ����������!" << "\n";
                end=0;
            }
        }
        else{
            cout << "��� �� ����� �����" << "\n";
            end=0;
        }
    }
    return 0;
}