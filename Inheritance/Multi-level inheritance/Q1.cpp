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
    void multi(int n1, int n2) 
    {
        int result = n1 * n2;
        cout << "The multiple is " << result << endl;
    }
};

//  (Child of Base)
class Intermediate : public Base 
{
public:
    void subtract(int n1, int n2) 
    {
        int result = n1 - n2;
        cout << "The subtraction is " << result << endl;
    }
};

//  (Child of Intermediate)
class Derive : public Intermediate 
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
