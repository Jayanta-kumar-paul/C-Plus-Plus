#include <iostream>
using namespace std;

template <class T>
class show
{

    T a, b;

public:
    show(T p, T q)
    {
        a = p;
        b = q;
    }
    void display()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    int p, q;
    float m, n;

    cout << "Enter value of a and b in int : ";
    cin >> p >> q;
    show<int> obj(p, q);
    obj.display();
    cout << "Enter value of a and b in float : ";
    cin >> m >> n;
    show<float> obj2(m, n);
    obj2.display();
    return 0;
}
// Enter value of a and b in int : 2
// 5
// a = 2 b = 5
// Enter value of a and b in float : 10.2
// 10.5
// a = 10.2 b = 10.5