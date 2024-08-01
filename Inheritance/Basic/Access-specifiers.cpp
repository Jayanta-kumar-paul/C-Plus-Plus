#include<iostream>
#include<string>
using namespace std;

class A
{
    public:
    int roll;
    void show()
    {
        cout<<"My rool is :"<<roll<<endl;
    }

    private:
    int age;
    void print()
    {
        cout<<"My age is :"<<age<<endl;
    }

    protected:
    int marks;
    void display()
    {
        cout<<"My marks is :"<<marks<<endl;
    }
};

class B : public A
{
    public:
    string name;
    void getsdata()
    {
        cout<<"My name is :"<<name<<endl;
    }
};

int main()
{
    A obj;
    obj.roll=8;
    obj.show();
    

}