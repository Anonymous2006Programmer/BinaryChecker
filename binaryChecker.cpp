#include <iostream>
using namespace std;

class Binary
{
    string s;

public:
    void read(void);
    void checkbin(void);
};

void Binary ::read(void)
{
    cout << "Enter a Number\n>> ";
    cin >> s;
    cout << "\n";
    // checkbin();
}

void Binary ::checkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' and s.at(i) != '1')
        {
            cout << "It is not a Binary Number\n";
            exit(0);
        }
        else
        {
            cout << "Is is a Binary Number\n";
            exit(0);
        }
    }
}

int main(int argc, char const *argv[])
{

    Binary b;
    b.read();
    b.checkbin();

    return 0;
}