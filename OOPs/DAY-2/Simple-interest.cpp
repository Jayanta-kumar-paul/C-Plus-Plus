#include <iostream>

class SimpleInterest
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

    double calculate()
    {
        return (principal * rate * time) / 100;
    }

    void output()
    {
        std::cout << "Simple interest: " << calculate() << std::endl;
    }
};

int main()
{
    SimpleInterest obj;
    obj.input();
    obj.output();

    return 0;
}
