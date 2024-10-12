#include<iostream>
using namespace std;
class Base1
{
    public:
    Base1(int a,int b)
    {
        int result = a+b;
        cout<<"The sum is :"<<result<<endl;
    }
};

class Base2
{
    public:
    Base2(int a,int b)
    {
        int result =a-b;
        cout<<"The subtraction is :"<<result <<endl;
    }
};

class Derive :public Base1,public Base2
{
    public:
    Derive(int a,int b) :Base1( a, b),Base2(a, b)
    {
        int result =a*b;
        cout<<"The multiplecation is :"<<result<<endl;
    }
};

int main ()
{
    int a,b;
    cout<<"Enter the first integers :";
    cin>>a;
    cout<<"Enter the second integers :";
    cin>>b;

    Derive obj(a,b);
  /* obj.multi(a,b);
    obj.sub(a,b);
    obj.sum(a,b);*/

    return 0;
}