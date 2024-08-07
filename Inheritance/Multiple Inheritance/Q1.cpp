#include <iostream>
using namespace std;

// Base class 1 (Parent)
class Base1
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

// Base class 2 (Parent)
class Base2
{
public:
    void multi(int n1, int n2)
    {
        int result = n1 * n2;
        cout << "The multiple is " << result << endl;
    }
};

// Derived class  inheriting from Base1 and Base2
class Derive : public Base1, public Base2
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
    
    Derive obj;
    obj.sum(n1, n2);
    obj.multi(n1, n2);
    obj.subtract(n1, n2);
    obj.divide(n1, n2);
    return 0;
}
