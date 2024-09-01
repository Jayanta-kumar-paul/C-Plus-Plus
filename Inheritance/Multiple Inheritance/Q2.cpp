#include<iostream>
using namespace std;

// Base class 1 (Parent)
class Base1 
{
public:
    Base1(int n1, int n2)
    {
        int result = n1 + n2;
        cout << "The sum is " << result << endl;
    }
};

// Base class 2 (Parent)
class Base2 
{
public:
    Base2(int n1, int n2) 
    {
        int result = n1 * n2;
        cout << "The multiple is " << result << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derive : public Base1, public Base2
{
public:
    Derive(int n1, int n2) : Base1(n1, n2), Base2(n1, n2)
    {
        int result1 = n1 - n2;
        cout << "The subtraction is " << result1 << endl;

        if (n2 != 0)
        {
            int result2 = n1 / n2;
            cout << "The division is " << result2 << endl;
        }
        else
        {
            cout << "Division by zero is not allowed" << endl;
        }
    }
};

int main() 
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    Derive obj(n1, n2);
    return 0;
}
