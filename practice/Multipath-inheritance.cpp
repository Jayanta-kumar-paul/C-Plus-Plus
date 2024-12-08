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

class Derive1:public Base1
{
    public:
   Derive1(int a,int b) : Base1(a, b)
    {
        int result =a-b;
        cout<<"The subtraction is :"<<result <<endl;
    }
};

class Derive2 :public Base1
{
    public:
    Derive2(int a,int b) :Base1( a, b)
    {
        int result =a*b;
        cout<<"The multiplecation is :"<<result<<endl;
    }
};

//class Intermediate :

int main ()
{
    int a,b;
    cout<<"Enter the first integers :";
    cin>>a;
    cout<<"Enter the second integers :";
    cin>>b;

    Derive1 obj(a,b);
  /* obj.multi(a,b);
    obj.sub(a,b);
    obj.sum(a,b);*/

    return 0;
}