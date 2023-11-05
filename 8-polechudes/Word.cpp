#include "Word.h"

Word::Word(){ 
}

void Word::set_word(string new_word){
    word = new_word;
    length = size(word);
    for(int i=0; i<length; i++){
        flags.push_back(0);
    }
}

void Word::print(){
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

int Word::check_error(char current_letter){
    string alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    for(int i = 0; i < size(alphabet); i++){
        if(current_letter == alphabet[i]){
            return 1;
        }
    }
    return 0;
}

int Word::check(char current_letter){
    for(int i = 0; i < length; i++){
        if(current_letter == word[i]){
            return 1;
        }
    }
    return 0;
}

void Word::set_flags(char letter){
    for(int i=0; i<length; i++){
        if(letter == word[i]){
            flags[i]=1;
        }
    }
}

bool Word::check_end(){
    int s=0;
    for(int i=0; i < length; i++){
        s+=flags[i];
    }
    if(s==length) return 1;
    else return 0;
}