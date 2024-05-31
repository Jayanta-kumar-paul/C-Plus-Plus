
#include <iostream>

class TemperatureConverter
{
private:
    double celsius;

public:
    void input()
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> celsius;
    }

    double convertToFahrenheit()
    {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    void output()
    {
        std::cout << "Temperature in Fahrenheit: " << convertToFahrenheit() << std::endl;
    }
};

int main()
{
    TemperatureConverter obj;
    obj.input();
    obj.output();

    return 0;
}
