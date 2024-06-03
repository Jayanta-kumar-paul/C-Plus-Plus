// C++ program that checks whether a year is a leap year or not using a class object:

#include <iostream>
using namespace std;

class LeapYear
{
public:
    int year;

    void input()
    {
        cout << "Enter a year: ";
        cin >> year;
    }

    void check()
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "Leap year" << endl;
        }
        else
        {
            cout << "Not a leap year" << endl;
        }
    }
};

int main()
{
    LeapYear ly;
    ly.input();
    ly.check();
    return 0;
}
