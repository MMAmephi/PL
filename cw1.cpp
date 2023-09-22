#include <iostream>
#include <windows.h>
#include <ctime>
#include <cmath>

using namespace std;

int random(){
    int r_num[3]={0, 11111111, 22222222};
    srand(time(NULL));
    return r_num[rand()%3];
}

int date_sum(string date){
    int sum=0;
    for(int i=0; i<size(date); i++){
        if(isdigit(date[i])){
            sum+=int(date[i])-'0';    
        }
    }
    return sum;
}

int month(string date){
    for(int i=0; i<size(date); i++){
        if(date[i]=='.'){
            return (int(date[i+1])-'0')*10+int(date[i+2])-'0';
        }
    }
    return 0;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"russian");

    string music[14]={"Master of puppets Metallica", "Брошу Pyrokinesis", "Homebody PH1","Червяк Даргомыжский","Russian Ebunny","Enemy Imagine dragons"," Зизазай Огги и тараканы","Valentine Justice","Swimming pools Kendrick Lamar","Night Call Kovinsky","Yesterday The Beatles","Так закалялась сталь Гражданская оборона","За деньги да Инстасамка","Bad habits Ed sheeran"}; 
    string movies[14]={"Короткое замыкание", "Трансформеры", "Полночь", "По соображениям совести","Джентльмены","Ван Хельсинк","Операция Ы","Драйв","Большая игра","Игра в имитацию","Всё везде и сразу","Форрест Гамп","Терминал","Не смотрите наверх"};
    string actors[14]={"Райан Гослинг", "Кристиан Бейл", "Джеки Чан","Эндрю Гарфилд","Леонардо ДиКаприо","Бенедикт Кембербетч","Мэтью Макконахи","Дэвид Линч","Дэниэлл Рэдклифф","Джейк Джиллехолл","Александр Петров","Рональд Рейган","Том Круз","Брэд Питт"}; 
    string actriss[14]={"Наталия Крачковская", "Меган Фокс", "Джениффер Лопез","Эмма Стоун","Эмма Уотсон","Кира Найтли","Милла Йовович","Марго Робби","Мерил Стрип","Скарлет Йоханссон","Александра Бортич","Анджелина Джоли","Шарлиз Терон","Ингеборга Дапкунайте"}; 
    string celeb[14]={"Дейв Майнстейн", "Иван Зола", "Сергей Мавроди", "Екатерина Гордеева", "Роберт Опенгеймер", "Лионель Месси", "Папич", "Хидэо Кодзима", "Ляйсан Утяшева","Павел Воля","Криштиану Роналду","Борис Бурда","Ким Кардашьян","Клава Кока"}; 
    cout << "Введите ваше имя\n";
    string name;
    cin >> name;
    cout << "Введите вашу дату рождения\n";
    string date;
    cin >> date;
    //date="10.10.2003";
    cout << "Здравстсвуйте, " << name << "!";
    int temp = random();
    cout << temp << "\n";
    unsigned int x = pow(date_sum(date), month(date))+temp;
    //cout << x <<"\n";
    int arr[5];
    for(int i=0; i<5; i++){
        arr[i] = (x<<12+4*i)>>(28);
        //cout << arr[i] << "\n"; 
    }
    cout << "Ваша песня сегодня: " << music[arr[0]%14] << "\n";
    cout << "Ваш фильм: " << movies[arr[1]%14] << "\n";
    cout << "Ваш актёр: " << actors[arr[2]%14] << "\n";
    cout << "Ваша актрисса: " << actriss[arr[3]%14] << "\n";
    cout << "Ваша селебрити: " << celeb[arr[4]%14] << "\n";
    return 0;
}