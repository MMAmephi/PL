#include <windows.h>
#include <ctime>
#include "Yakubovich.h"
#include "Word.h"

using namespace std;


class Game{
private:
    string dictionary[5];
    Word current_word;

public:
    Yakubovich y;
    
    Game();
    ~Game();

    void start();

    bool suggest();

    void game();
};