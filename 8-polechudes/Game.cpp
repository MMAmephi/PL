#include "Game.h"

Game::Game(){
    string dictionary[5]={"тубус", "клавиатура", "принтер", "калькулятор", "аскорбинка"};
    Word current_word;
    Yakubovich y;   
}

Game::~Game(){
}

void Game::start(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
}

bool Game::suggest(){
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

void Game::game(){
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