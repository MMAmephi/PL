#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Word {
private:
    string alphabet;
    string word;
    vector<int> flags;
    int length;

public:

    void set_word(string new_word);

    Word();
    ~Word();

    void print();

    int check_error(char current_letter);

    int check(char current_letter);

    void set_flags(char letter);

    bool check_end();
};