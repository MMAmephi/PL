#include <iostream>
#include <windows.h>
#include <ctime>
#include <cmath>

using namespace std;

int random(){
    int r_num[3]={0, 11111111, 22222222};
    srand(time(NULL));
    return r_num[rand()%3];
}

int date_sum(string date){
    int sum=0;
    for(int i=0; i<size(date); i++){
        if(isdigit(date[i])){
            sum+=int(date[i])-'0';    
        }
    }
    return sum;
}

int month(string date){
    for(int i=0; i<size(date); i++){
        if(date[i]=='.'){
            return (int(date[i+1])-'0')*10+int(date[i+2])-'0';
        }
    }
    return 0;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"russian");

    string music[14]={"Master of puppets Metallica", "����� Pyrokinesis", "Homebody PH1","������ ������������","Russian Ebunny","Enemy Imagine dragons"," ������� ���� � ��������","Valentine Justice","Swimming pools Kendrick Lamar","Night Call Kovinsky","Yesterday The Beatles","��� ���������� ����� ����������� �������","�� ������ �� ����������","Bad habits Ed sheeran"}; 
    string movies[14]={"�������� ���������", "������������", "�������", "�� ������������ �������","�����������","��� ��������","�������� �","�����","������� ����","���� � ��������","�� ����� � �����","������� ����","��������","�� �������� ������"};
    string actors[14]={"����� �������", "�������� ����", "����� ���","����� �������","�������� ��������","�������� ����������","����� ���������","����� ����","������� ��������","����� ����������","��������� ������","������� ������","��� ����","���� ����"}; 
    string actriss[14]={"������� �����������", "����� ����", "��������� �����","���� �����","���� ������","���� ������","����� �������","����� �����","����� �����","������� ���������","���������� ������","��������� �����","������ �����","��������� ����������"}; 
    string celeb[14]={"���� ���������", "���� ����", "������ �������", "��������� ��������", "������ ����������", "������� �����", "�����", "����� �������", "������ �������","����� ����","��������� �������","����� �����","��� ���������","����� ����"}; 
    cout << "������� ���� ���\n";
    string name;
    cin >> name;
    cout << "������� ���� ���� ��������\n";
    string date;
    cin >> date;
    //date="10.10.2003";
    cout << "�������������, " << name << "!";
    int temp = random();
    cout << temp << "\n";
    unsigned int x = pow(date_sum(date), month(date))+temp;
    //cout << x <<"\n";
    int arr[5];
    for(int i=0; i<5; i++){
        arr[i] = (x<<12+4*i)>>(28);
        //cout << arr[i] << "\n"; 
    }
    cout << "���� ����� �������: " << music[arr[0]%14] << "\n";
    cout << "��� �����: " << movies[arr[1]%14] << "\n";
    cout << "��� ����: " << actors[arr[2]%14] << "\n";
    cout << "���� ��������: " << actriss[arr[3]%14] << "\n";
    cout << "���� ���������: " << celeb[arr[4]%14] << "\n";
    return 0;
}