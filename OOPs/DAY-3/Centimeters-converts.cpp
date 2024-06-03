// C++ program to enter length in centimeter and convert it into meter and kilometer using class obj.
#include <iostream>
using namespace std;

class LengthConverter
{
public:
    float cm, m, km;

    void input()
    {
        cout << "Enter length in centimeters: ";
        cin >> cm;
    }

    void convert()
    {
        m = cm / 100.0;     // convert centimeters to meters
        km = cm / 100000.0; // convert centimeters to kilometers
    }

    void display()
    {
        cout << cm << " centimeters is equal to:\n";
        cout << m << " meters\n";
        cout << km << " kilometers\n";
    }
};

int main()
{
    LengthConverter converter;
    converter.input();
    converter.convert();
    converter.display();
    return 0;
}
