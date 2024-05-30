#include<iostream>
using namespace std;

class Division
{
private:
    int n1, n2, sum;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    void divide()
    {
        sum = n1 / n2;
    }

    void output()
    {
        cout << "The sum is " << sum << endl;
    }
    };

    int main()
    {
        Division obj;
        obj.input();
        obj.divide();
        obj.output();

        return 0;
    }