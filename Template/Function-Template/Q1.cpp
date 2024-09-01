#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    T result = a + b;
    return result;
}

int main()
{
    int p, q;
    float m, n;

    cout << "Enter value of a and b in int: ";
    cin >> p >> q;

    cout << "Enter value of a and b in float: ";
    cin >> m >> n;

    // sum<int>(p, q);
    cout << "The sum is integer value: " << sum(p, q) << endl;

    // sum<float>(m, n);
    cout << "The sum is float value: " << sum(m, n) << endl;

    return 0;
}