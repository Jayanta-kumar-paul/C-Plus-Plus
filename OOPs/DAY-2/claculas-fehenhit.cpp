
#include <iostream>

class TemperatureConverter
{
private:
    int celsius;

public:
    void input()
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> celsius;
    }

    void convertToFahrenheit()
    {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    }

  
};

int main()
{
    TemperatureConverter obj;
    obj.input();
    obj.convertToFahrenheit();

    return 0;
}
