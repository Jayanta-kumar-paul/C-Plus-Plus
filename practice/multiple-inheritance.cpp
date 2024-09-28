#include<iostream>
using namespace std;
class Base1
{
    public:
    void sum(int a,int b)
    {
        int result = a+b;
        cout<<"The sum is :"<<result<<endl;
    }
};

class Base2
{

    public:
    void sub(int a,int b)
    {
        int result =a-b;
        cout<<"The subtraction is :"<<result <<endl;
    }
};

class Derive :public Base1,public Base2
{
    public:
    void multi(int a,int b)
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

    Derive obj;
    obj.multi(a,b);
    obj.sub(a,b);
    obj.sum(a,b);

    return 0;
}