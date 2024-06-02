// c++ program that calculates the power of a number (x ^ y) without using a function:

#include <iostream>
using namespace std;

int main() 
{
    double x;
    int y;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (y): ";
    cin >> y;

    double result = 1.0;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}