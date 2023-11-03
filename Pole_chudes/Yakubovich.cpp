#include "Yakubovich.h"

Yakubovich::Yakubovich()
{
    string start_replies[3] = { "Прекрасный день, чтобы сыграть в поле чудес! Хотите начать?\nВведите Y, чтобы начать, N, чтобы закончить игру.", "Это что новый игрок?! Будем крутить барабан?\nВведите Y, чтобы начать, N, чтобы закончить игру.", "Добро пожаловать в игру поле чудес! Начнём?\nВведите Y, чтобы начать, N, чтобы закончить игру." };
    string good_replies[3] = { "Вы чертовски правы, есть такая буква! Продолжим!", "Ваша интуиция не подвела вас!", "Точно в цель!" };
    string bad_replies[3] = { "К сожалению, вы ошиблись. Попробуйте другую букву!", "В этот раз не повезло! Может, другая буква?", "Не ошибается только тот, кто ничего не делает! Попробуйте другую букву!" };
    string error_replies[3] = { "Кажется, кто-то основательно забыл алфавит.", "Да вы что! Это даже не буква!", "Кому-то пора вернуться в первый класс или начать читать книги!" };
    string end_replies[3] = { "Вы наш победитель! Поздравляем!", "Вы отгадали слово! Так держать!", "Хорошая работа! Слово отгадано!" };
    char letter;
}

Yakubovich::~Yakubovich()
{
}

void Yakubovich::print_reply(string reply) {
    for (int i = 0; i < size(reply); i++) {
        cout << reply[i];
    }
    cout << "\n";
}

void Yakubovich::start_reply() {
    srand(time(NULL));
    print_reply(start_replies[rand() % 3]);
}

void Yakubovich::good_reply() {
    srand(time(NULL));
    print_reply(good_replies[rand() % 3]);
}

void Yakubovich::bad_reply() {
    srand(time(NULL));
    print_reply(bad_replies[rand() % 3]);
}

void Yakubovich::error_reply() {
    srand(time(NULL));
    print_reply(error_replies[rand() % 3]);
}

void Yakubovich::end_reply() {
    srand(time(NULL));
    print_reply(end_replies[rand() % 3]);
}

void Yakubovich::goodbye() {
    cout << "Хорошо поиграли! До новых встреч!";
}

void Yakubovich::get_letter() {
    char temp;
    cout << "Введите букву!\n";
    cin >> temp;
    letter = temp;
}