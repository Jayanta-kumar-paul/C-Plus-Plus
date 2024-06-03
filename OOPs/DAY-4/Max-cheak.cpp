// C++ program that finds the maximum between two numbers using a class object:

#include <iostream>
using namespace std;

class Maximum
{
public:
    int num1, num2;

    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void findMax()
    {
        if (num1 > num2)
        {
            cout << "Maximum: " << num1 << endl;
        }
        else
        {
            cout << "Maximum: " << num2 << endl;
        }
    }
};

int main()
{
    Maximum max;
    max.input();
    max.findMax();
    return 0;
}
