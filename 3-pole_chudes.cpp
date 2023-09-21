#include <iostream>
#include <windows.h>

using namespace std;

int checking(string word, char letter){
    for( int i = 0; i < size(word); i++){
        if(letter == word[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"russian");
    string word;
    cout << "\n" << "Введите слово: ";
    cin >> word;
    //string word {"колонка"};
    string word_now;
    string already_used;
    int length = size(word);
    int end = length;
    for(int i = 0; i < length;i++){
        word_now.push_back('-');
    }
    while(end != 0){
        cout << word_now << "\n";
        cout << "\n" << "Введите букву: ";
        char temp;
        cin >> temp;
        if(checking(word, temp)){
            already_used.push_back(temp);
            for(int i = 0; i < size(word); i++){
                if(temp == word[i]){
                    word_now[i]=temp;
                    end-=1;
                }
            }
            if(end!=0){
                cout << "Вы угадали!" << "\n";
            }
        }
        else{
            cout << "Такой буквы нет! Попробуйте ещё раз!" << "\n";
        }
    }
    cout << "Вы угадали слово: " << word <<"! Поздравляем!";
    return 0;
}