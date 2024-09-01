#include <iostream>
using namespace std;

template <class T>
class Calculator
{
public:
    T sum(T a, T b)
    {
        T result = a + b;
        return result;
    }
};

int main()
{
    int p, q;
    float m, n;

    cout << "Enter value of a and b in int: ";
    cin >> p >> q;

    cout << "Enter value of a and b in float: ";
    cin >> m >> n;

    Calculator<int> intCalc;
    cout << "The sum is integer value: " << intCalc.sum(p, q) << endl;

    Calculator<float> floatCalc;
    cout << "The sum is float value: " << floatCalc.sum(m, n) << endl;

    return 0;
}
