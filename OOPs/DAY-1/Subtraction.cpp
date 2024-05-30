#include<iostream>
using namespace std;

class subtraction
{
private:
    int n1, n2, sum;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    void calculate()
    {
        sum = n1 - n2;
    }

    void output()
    {
        cout << "The sum is " << sum << endl;
    }
    };

    int main()
    {
        subtraction obj;
        obj.input();
        obj.calculate();
        obj.output();

        return 0;
    }