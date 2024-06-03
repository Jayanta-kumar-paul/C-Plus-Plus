// C++ program that checks whether a number is negative, positive, or zero using a class object:

#include <iostream>
using namespace std;

class NumberCheck
{
public:
    int num;

    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check()
    {
        if (num > 0)
        {
            cout << "Positive" << endl;
        }
        else if (num < 0)
        {
            cout << "Negative" << endl;
        }
        else
        {
            cout << "Zero" << endl;
        }
    }
};

int main()
{
    NumberCheck check;
    check.input();
    check.check();
    return 0;
}