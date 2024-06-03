// C++ program that finds the maximum between three numbers using a class object:

#include <iostream>
using namespace std;

class Maximum
{
public:
    int num1, num2, num3;

    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter third number: ";
        cin >> num3;
    }

    void findMax()
    {
        if (num1 > num2 && num1 > num3)
        {
            cout << "Maximum: " << num1 << endl;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << "Maximum: " << num2 << endl;
        }
        else
        {
            cout << "Maximum: " << num3 << endl;
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
