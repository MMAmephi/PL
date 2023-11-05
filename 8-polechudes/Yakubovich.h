#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

class Yakubovich{
private:
    vector<string> replies;
public:

    char letter;

    Yakubovich();

    void print_reply(string reply);

    void start_reply();

    void good_reply();

    void bad_reply();

    void error_reply();

    void end_reply();

    void goodbye();

    void get_letter();
};