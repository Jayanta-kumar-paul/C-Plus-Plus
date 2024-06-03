//C++ program to calculate compound interes using class objects.
#include <iostream>
#include <math.h>

class CompoundInterest
{
private:
    double principal, rate, time;

public:
    void input()
    {
        std::cout << "Enter the principal amount: ";
        std::cin >> principal;
        std::cout << "Enter the interest rate (in %): ";
        std::cin >> rate;
        std::cout << "Enter the time (in years): ";
        std::cin >> time;
    }

    void calculate()
    {
        double result = principal * pow((1 + (rate / 100)), time);
        std::cout << "Compound interest: " << result << std::endl;
    }
};

int main()
{
    CompoundInterest obj;
    obj.input();
    obj.calculate();
}