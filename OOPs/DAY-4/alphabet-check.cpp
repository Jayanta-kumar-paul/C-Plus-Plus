// C++ program that checks whether a character is an alphabet or not using a class object:

#include <iostream>
using namespace std;

class CheckAlphabet
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
        else
        {
            cout << "Not an alphabet" << endl;
        }
    }
};

int main()
{
    CheckAlphabet ca;
    ca.input();
    ca.check();
    return 0;
}