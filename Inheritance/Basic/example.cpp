#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void set(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print() const
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    friend Complex sum(Complex o1, Complex o2);
};

Complex sum(Complex o1, Complex o2)
{
    Complex o3;
    o3.set((o1.a + o2.a), (o1.b + o2.b));
    cout << "The Sum result is: " << o1.a + o2.a << " + " << o1.b + o2.b << "i" << endl;
}

int main()
{
    Complex c1, c2;
    int real1, imag1, real2, imag2;

    cout << "Enter the first complex number: ";
    cin >> real1 >> imag1;
    c1.set(real1, imag1);
    c1.print();

    cout << "Enter the second complex number: ";
    cin >> real2 >> imag2;
    c2.set(real2, imag2);
    c2.print();

    sum(c1, c2); 

    return 0;
}
// Enter the first complex number: 5
// 7
// Your number is 5 + 7i
// Enter the second complex number: 3
// 5
// Your number is 3 + 5i
// The Sum result is: 8 + 12i
