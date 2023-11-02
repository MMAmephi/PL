#include <iostream>
#include <string>

using namespace std;

class Yakubovich{
private:
    string start_replies[3];
    string good_replies[3];
    string bad_replies[3];
    string error_replies[3];
    string end_replies[3];
public:
    char letter;

    void print_reply(string reply);

    void start_reply();

    void good_reply();

    void bad_reply();

    void error_reply();

    void end_reply();

    void goodbye();

    void get_letter();
};