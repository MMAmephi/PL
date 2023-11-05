#include "Yakubovich.h"

Yakubovich::Yakubovich(){
}

void Yakubovich::print_reply(string reply){
    cout << reply << "\n";
}

vector<string> get_reply(string file_name){
    vector<string> out;
    string line;
    ifstream in(file_name);
    if (in.is_open()){
        getline(in, line);
    }
    in.close();

    stringstream ss(line);
    string s;
    while(getline(ss, s, ';')){
        out.push_back(s);
    }
    return out;
}

void Yakubovich::start_reply(){
    srand(time(NULL));
    replies = get_reply("start_replies.txt");
    print_reply(replies[rand()%(replies.size())]);
}

void Yakubovich::good_reply(){
    srand(time(NULL));
    replies = get_reply("good_replies.txt");
    print_reply(replies[rand()%3]);
}

void Yakubovich::bad_reply(){
    srand(time(NULL));
    replies = get_reply("bad_replies.txt");
    print_reply(replies[rand()%3]);
}

void Yakubovich::error_reply(){
    srand(time(NULL));
    replies = get_reply("error_replies.txt");
    print_reply(replies[rand()%3]);
}

void Yakubovich::end_reply(){
    srand(time(NULL));
    replies = get_reply("end_replies.txt");
    print_reply(replies[rand()%3]);
}

void Yakubovich::goodbye(){
    cout << "Хорошо поиграли! До новых встреч!";
}

void Yakubovich::get_letter(){
    string temp;
    cout << "Введите букву!\n";
    cin >> temp;
    while(size(temp)!=1){
        cout << "Ошибка! Введите одну букву!\n";
        cin >> temp;
    }
    letter = temp[0];
}