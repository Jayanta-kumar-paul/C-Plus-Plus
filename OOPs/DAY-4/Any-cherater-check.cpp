// C++ program that inputs any character and checks whether it is an alphabet, digit, or special character using a class object:

#include <iostream>
using namespace std;

class CheckCharacter
{
public:
    char ch;

    void input()
    {
        cout << "Enter a character: ";
        cin >> ch;
    }

    void check()
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            cout << "Alphabet" << endl;
        }
        else if (ch >= '0' && ch <= '9')
        {
            cout << "Digit" << endl;
        }
        else
        {
            cout << "Special character" << endl;
        }
    }
};

int main()
{
    CheckCharacter cc;
    cc.input();
    cc.check();
    return 0;
}
