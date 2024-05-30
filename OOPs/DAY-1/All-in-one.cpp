#include<iostream>
// Not using namespace std;

class All
{
private:
    int n1, n2, sum;

public:
    void input()
    {
        std::cout << "Enter two numbers: ";
        std::cin >> n1 >> n2;
    }

    void addition()
    {
        sum = n1 + n2;
    }
    
    void subtraction ()
    {
        sum = n1 - n2;
    }
    
    void multiplication ()
    {
        sum = n1 * n2;
    }
    void division ()
    {
        sum = n1 / n2;
    }

    void output()
    {
        std::cout << "The sum is : " << sum <<std::endl;
    }
    
        void output2()
    {
        std::cout << "The subtraction sum is : " << sum <<std::endl;
    }
    
            void output3()
    {
        std::cout << "The multiply sum is : " << sum <<std::endl;
    }
    
                void output4()
    {
        std::cout << "The divide sum is : " << sum <<std::endl;
    }
    };

    int main()
    {
        All obj;
        obj.input();
        obj.addition();
        obj.output();
        obj.subtraction();
        obj.output2();
        obj.multiplication();
        obj.output3();
        obj.division();
        obj.output4();
        

        return 0;
    }