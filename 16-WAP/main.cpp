#include <iostream>
#include <map>
#include <windows.h>
#include <string>
#include <algorithm>
#include <fstream>


bool isalpha(std::string alphabet, char symbol){
    if (alphabet.find(symbol) == std::string::npos){
        return 0;
    }
    else{
        return 1;
    }
}

std::map<char, unsigned int> analyse(std::string root, std::string alphabet){
    std::map<char, unsigned int> res;
    for(int i = 0; i < alphabet.size(); i++){
        res[(char)alphabet[i]] = 0;
    }

    std::string text;
    std::ifstream file(root);

    while(std::getline(file, text)){ 
        transform(text.begin(), text.end(), text.begin(), tolower);
        for(int i = 0; i <= text.size(); i++){
            if(isalpha(alphabet, (char)text[i])){
                res[(char)text[i]]++;
            }
        }
    }

    file.close(); 

    for(int i = 0; i < alphabet.size(); i++){
        std::cout << alphabet[i] << " " << res[(char)alphabet[i]] << std::endl;
    }
    return res;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string tom1 = "C:\\Users\\merku\\Desktop\\PL\\16-WAP\\tom1.txt";
    std::string tom2 = "C:\\Users\\merku\\Desktop\\PL\\16-WAP\\tom2.txt";
    std::string tom3 = "C:\\Users\\merku\\Desktop\\PL\\16-WAP\\tom3.txt";
    std::string tom4 = "C:\\Users\\merku\\Desktop\\PL\\16-WAP\\tom4.txt";

    std::string alphabet = "àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ";
    analyse(tom1, alphabet);
    analyse(tom2, alphabet);
    analyse(tom3, alphabet);
    analyse(tom4, alphabet);
    return 0;
}