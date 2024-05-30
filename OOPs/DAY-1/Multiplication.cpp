#include<iostream>
using namespace std;

class Multiplication
{
private:
    int n1, n2, sum;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    void multiply()
    {
        sum = n1 * n2;
    }

    void output()
    {
        cout << "The sum is " << sum << endl;
    }
    };

    int main()
    {
        Multiplication obj;
        obj.input();
        obj.multiply();
        obj.output();

        return 0;
    }