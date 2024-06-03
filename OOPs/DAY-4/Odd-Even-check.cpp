// C++ program that checks whether a number is even or odd using a class object :

#include <iostream>
    using namespace std;

class EvenOdd
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
        if (num % 2 == 0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
};

int main()
{
    EvenOdd eo;
    eo.input();
    eo.check();
    return 0;
}