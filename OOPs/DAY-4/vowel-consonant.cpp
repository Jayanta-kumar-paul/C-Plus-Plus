// C++ program that inputs any alphabet and checks whether it is a vowel or consonant using a class object:

#include <iostream>
using namespace std;

class CheckVowel
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
        ch = tolower(ch); // convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "Vowel" << endl;
        }
        else if ((ch >= 'a' && ch <= 'z'))
        {
            cout << "Consonant" << endl;
        }
        else
        {
            cout << "Not a letter" << endl;
        }
    }
};

int main()
{
    CheckVowel cv;
    cv.input();
    cv.check();
    return 0;
}