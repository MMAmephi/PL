#include "Game.h"

Game::Game(){
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
    if(temp == 'Ä'){
        return 1;
    }
    else return 0;
}

string get_word(){
    vector<string> out;
    string line;
    ifstream in("dictionary.txt");
    if (in.is_open()){
        getline(in, line);
    }
    in.close();

    stringstream ss(line);
    string s;
    while(getline(ss, s, ';')){
        out.push_back(s);
    }
    srand(time(NULL));
    return out[rand()%(out.size())];
}

void Game::game(){
    current_word.set_word(get_word());
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