#include <iostream>
using namespace std;

template <class T,class S> //Multiple parameteried in Template Function
T sum(T a, S b)
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
    cout << "The sum is integer value: " << sum(p, q) << endl; //Data input int & float both

    // sum<float>(m, n);
    cout << "The sum is float value: " << sum(m, n) << endl;

    return 0;
}