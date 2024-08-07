#include<iostream>
using namespace std;

// Base class (Parent)
class Base 
{
public:
    void sum(int n1, int n2) 
    {
        int result = n1 + n2;
        cout << "The sum is " << result << endl;
    }
    void subtract(int n1, int n2) 
    {
        int result = n1 - n2;
        cout << "The subtraction is " << result << endl;
    }
};

// Derived class (Child of Base)
class Derive1 : public Base 
{
public:
    void multi(int n1, int n2) 
    {
        int result = n1 * n2;
        cout << "The multiple is " << result << endl;
    }
};

// Derived class 1 (Child of Base)
class Derive2 : public Base 
{
public:
    void divide(int n1, int n2) 
    {
        int result = n1 / n2;
        cout << "The division is " << result << endl;
    }
};

int main() 
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    Derive1 obj1;
    obj1.sum(n1, n2);
    obj1.multi(n1, n2);
    obj1.subtract(n1, n2);

    Derive2 obj2;
    obj2.sum(n1, n2);
    obj2.subtract(n1, n2);
    obj2.divide(n1, n2);
    return 0;
}
