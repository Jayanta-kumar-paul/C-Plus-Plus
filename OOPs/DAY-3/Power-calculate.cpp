// c++ program that calculates the power of a number (x ^ y)  using class obj:

#include <iostream>
using namespace std;

class PowerCalculator 
{
public:
    double x;
    int y;

    void input() 
    {
        cout << "Enter base (x): ";
        cin >> x;
        cout << "Enter power (y): ";
        cin >> y;
    }

    double calculate() 
    {
        double result = 1.0;
        for (int i = 0; i < y; i++) 
        {
            result *= x;
        }
        return result;
    }

    void display() 
    {
        cout <<  "The raised to the power of  (x^y) is: " << calculate() << endl;
    }
};

int main() 
{
    PowerCalculator calculator;
    calculator.input();
    calculator.display();
    return 0;
}

