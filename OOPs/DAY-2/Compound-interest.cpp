
#include <iostream>
#include<math.h>

class CompoundInterest
{
private:
    double principal, rate, time, compoundedTimes;

public:
    void input()
    {
        std::cout << "Enter the principal amount: ";
        std::cin >> principal;
        std::cout << "Enter the interest rate (in %): ";
        std::cin >> rate;
        std::cout << "Enter the time (in years): ";
        std::cin >> time;
        std::cout << "Enter the number of times interest is compounded per time period: ";
        std::cin >> compoundedTimes;
    }

    double calculate()
    {
        return principal * ((1 + (rate / 100) / compoundedTimes), compoundedTimes * time);
    }

    void output()
    {
        std::cout << "Compound interest: " << calculate() << std::endl;
    }
};

int main()
{
    CompoundInterest obj;
    obj.input();
    obj.output();

    return 0;
}
