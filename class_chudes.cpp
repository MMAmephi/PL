#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Yakubovich{
private:
    string start_replies[3]={"Прекрасный день, чтобы сыграть в поле чудес! Хотите начать?\nВведите Y, чтобы начать, N, чтобы закончить игру.", "Это что новый игрок?! Будем крутить барабан?\nВведите Y, чтобы начать, N, чтобы закончить игру.", "Добро пожаловать в игру поле чудес! Начнём?\nВведите Y, чтобы начать, N, чтобы закончить игру."};
    string good_replies[3]={"Вы чертовски правы, есть такая буква! Продолжим!", "Ваша интуиция не подвела вас!", "Точно в цель!"};
    string bad_replies[3]={"К сожалению, вы ошиблись. Попробуйте другую букву!", "В этот раз не повезло! Может, другая буква?", "Не ошибается только тот, кто ничего не делает! Попробуйте другую букву!"};
    string error_replies[3]={"Кажется, кто-то основательно забыл алфавит.", "Да вы что! Это даже не буква!", "Кому-то пора вернуться в первый класс или начать читать книги!"};
    string end_replies[3]={"Вы наш победитель! Поздравляем!", "Вы отгадали слово! Так держать!", "Хорошая работа! Слово отгадано!"};
public:
    char letter;

    void print_reply(string reply){
        for(int i=0; i<size(reply); i++){
            cout << reply[i];
        }
        cout << "\n";
    }

    void start_reply(){
        srand(time(NULL));
        print_reply(start_replies[rand()%3]);
    }

    void good_reply(){
        srand(time(NULL));
        print_reply(good_replies[rand()%3]);
    }

    void bad_reply(){
        srand(time(NULL));
        print_reply(bad_replies[rand()%3]);
    }

    void error_reply(){
        srand(time(NULL));
        print_reply(error_replies[rand()%3]);
    }

    void end_reply(){
        srand(time(NULL));
        print_reply(end_replies[rand()%3]);
    }

    void goodbye(){
        cout << "Хорошо поиграли! До новых встреч!";
    }

    void get_letter(){
        char temp;
        cout << "Введите букву!\n";
        cin >> temp;
        letter = temp;
    }
};

class Word{
private:
    string alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    string word;
    vector<int> flags;
    int length;

public:

    void set_word(string new_word){
        word = new_word;
        length = size(word);
        for(int i=0; i<length; i++){
            flags.push_back(0);
        }
    }

    void print(){
        for(int i=0; i<length; i++){
            if(flags[i]==1){
                cout << word[i];
            }
            else{
                cout << "-";
            }
        }
        cout << "\n";
    }

    int check_error(char current_letter){
        for(int i = 0; i < size(alphabet); i++){
            if(current_letter == alphabet[i]){
                return 1;
            }
        }
        return 0;
    }

    int check(char current_letter){
        for(int i = 0; i < length; i++){
            if(current_letter == word[i]){
                return 1;
            }
        }
        return 0;
    }

    void set_flags(char letter){
        for(int i=0; i<length; i++){
            if(letter == word[i]){
                flags[i]=1;
            }
        }
    }

    bool check_end(){
        int s=0;
        for(int i=0; i < length; i++){
            s+=flags[i];
        }
        if(s==length) return 1;
        else return 0;
    }

};

class Game{
private:
    string dictionary[5]={"тубус", "клавиатура", "принтер", "калькулятор", "аскорбинка"};
    Word current_word;

public:
    Yakubovich y;
    
    void start(){
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        srand(time(NULL));
    }

    bool suggest(){
        y.start_reply();
        char temp;
        cin >> temp;
        if(temp == 'Y'){
            return 1;
        }
        if(temp == 'N'){
            return 0;
        }
        else return 0;
    }

    void game(){
        current_word.set_word(dictionary[rand()%5]);
        current_word.print();
        while(current_word.check_end()==0){
            y.get_letter();
            if(current_word.check_error(y.letter) == 0){
                y.error_reply();
            }
            else{
                if(current_word.check(y.letter)==0){
                    y.bad_reply();
                }
                else{
                    current_word.set_flags(y.letter);
                    y.good_reply();
                }
            }
            current_word.print();
        }
        y.end_reply();
    }
};

int main(){
    Game game;
    game.start();
    while(game.suggest()==1){
        game.game();
    }
    game.y.goodbye();
}