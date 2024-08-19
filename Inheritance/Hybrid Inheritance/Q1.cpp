#include<iostream>
using namespace std;

// Base class 1 (Parent)
class Base 
{
public:
    void sum(int n1, int n2) 
    {
        int result = n1 + n2;
        cout << "The sum is " << result << endl;
    }
};

// Base class 2 (Parent) inheriting from Base
class Intermediate1 : public Base 
{
public:
    void multi(int n1, int n2) 
    {
        int result = n1 * n2;
        cout << "The multiple is " << result << endl;
    }
};

// Intermediate class (Child of Base)
class Intermediate2 : public Base 
{
public:
    void subtract(int n1, int n2) 
    {
        int result = n1 - n2;
        cout << "The subtraction is " << result << endl;
    }
};

// Derived class (Child of Intermediate1 and Intermediate2)
class Derive : public Intermediate1, public Intermediate2 
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

    Intermediate1 a;
    a. multi(n1,n2);
    a. sum(n1,n2);
    
    Intermediate2 b;
    b. subtract(n1,n2);
    b. sum(n1,n2);
    
    Derive c;
    c.multi(n1, n2);
    c.subtract(n1, n2);
    c.divide(n1, n2);
    return 0;
}
