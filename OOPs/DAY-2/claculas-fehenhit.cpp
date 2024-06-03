// C++ program that converts Celsius to Fahrenheit and vice versa using class objects:

#include <iostream>
using namespace std;

class Temperature
{
public:
    float temp;

    void input()
    {
        cout << "Enter temperature: ";
        cin >> temp;
    }

    void convertCtoF()
    {
        float F = (temp * 9 / 5) + 32;
        cout << temp << " Celsius is " << F << " Fahrenheit" << endl;
    }

    void convertFtoC()
    {
        float C = (temp - 32) * 5 / 9;
        cout << temp << " Fahrenheit is " << C << " Celsius" << endl;
    }
};

int main()
{
    Temperature temp;
    temp.input();
    cout << "Convert to Fahrenheit: ";
    temp.convertCtoF();
    cout << "Convert to Celsius: ";
    temp.convertFtoC();
    return 0;
}