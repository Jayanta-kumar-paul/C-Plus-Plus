#include<iostream>
using namespace std;

class Triangle 
{
    public:
    float angle1,angle2,angle3;

    void input()
    {
        cout<<"Enter first angle: ";
        cin>>angle1;
        cout<<"Enter second angle :";
        cin>>angle2;
    }

    void calculate()
    {
        angle3=180-(angle1+angle2);// calculate third angle
    }

    void display()
    {
        cout<<"Third angle: " << angle3 <<endl;
    }
};
int main()
{
    Triangle a;
    a.input();
    a.calculate();
    a.display();
    return 0;
}