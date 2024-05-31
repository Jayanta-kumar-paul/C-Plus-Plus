// // WAP in C++ swap in two integers in class obj method.
// #include <iostream>

// class IntegerSwap
// {
// private:
//     int num1, num2;

// public:
//     void input()
//     {
//         std::cout << "Enter the two integers: ";
//         std::cin >> num1 >> num2;
//     }

//     void swap()
//     {
//         int temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }

//     void output()
//     {
//         std::cout << "Swapped integers: " << num1 << std::endl
//                   << num2 << std::endl;
//     }
// };

// int main()
// {
//     IntegerSwap obj;
//     obj.input();
//     obj.swap();
//     obj.output();

//     return 0;
// }

// simple C++ program that swaps two integers without using a third integer, using a class object:

#include <iostream>

class IntegerSwap
{
private:
    int num1, num2;

public:
    void input()
    {
        std::cout << "Enter the two integers: ";
        std::cin >> num1 >> num2;
    }

    void swap()
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    void output()
    {
        std::cout << "Swapped integers: " << num1 << std::endl << num2 << std::endl;
    }
};

int main()
{
    IntegerSwap obj;
    obj.input();
    obj.swap();
    obj.output();

    return 0;
}
