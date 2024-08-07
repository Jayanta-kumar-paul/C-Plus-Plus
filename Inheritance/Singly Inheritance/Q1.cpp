#include <iostream>
using namespace std;

class base
{
public:
    void sum(int a, int b)
    {
        int result;
        result = a + b;
        cout << "The sum is = " << result << endl;
    }
    void mul(int a, int b)
    {
        int result;
        result = a * b;
        cout << "The multiplication is = " << result << endl;
    }
};
class derive : public base
{
public:
    void sub(int a, int b)
    {
        int result;
        result = a - b;
        cout << "The subtraction is = " << result <<endl;
    }
    void div(int a, int b)
    {
        int result;
        result = a / b;
        cout << "The division is = " << result <<endl;
    }
};
int main()
{
    int a, b;
    cout << "enter two number :";
    cin >> a >> b;

    base obj1;
    obj1.sum(a, b);
    obj1.mul(a, b);

    derive obj2;
    obj2.sum(a, b);
    obj2.mul(a, b);
    obj2.sub(a, b);
    obj2.div(a, b);
    return 0;
}