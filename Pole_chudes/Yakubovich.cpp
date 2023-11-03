#include "Yakubovich.h"

Yakubovich::Yakubovich()
{
    string start_replies[3] = { "���������� ����, ����� ������� � ���� �����! ������ ������?\n������� Y, ����� ������, N, ����� ��������� ����.", "��� ��� ����� �����?! ����� ������� �������?\n������� Y, ����� ������, N, ����� ��������� ����.", "����� ���������� � ���� ���� �����! �����?\n������� Y, ����� ������, N, ����� ��������� ����." };
    string good_replies[3] = { "�� ��������� �����, ���� ����� �����! ���������!", "���� �������� �� ������� ���!", "����� � ����!" };
    string bad_replies[3] = { "� ���������, �� ��������. ���������� ������ �����!", "� ���� ��� �� �������! �����, ������ �����?", "�� ��������� ������ ���, ��� ������ �� ������! ���������� ������ �����!" };
    string error_replies[3] = { "�������, ���-�� ������������ ����� �������.", "�� �� ���! ��� ���� �� �����!", "����-�� ���� ��������� � ������ ����� ��� ������ ������ �����!" };
    string end_replies[3] = { "�� ��� ����������! �����������!", "�� �������� �����! ��� �������!", "������� ������! ����� ��������!" };
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
    cout << "������ ��������! �� ����� ������!";
}

void Yakubovich::get_letter() {
    char temp;
    cout << "������� �����!\n";
    cin >> temp;
    letter = temp;
}