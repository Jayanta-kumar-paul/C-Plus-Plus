#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    int roll;
    void show()
    {
        cout << "My roll is :" << roll << endl;
    }

private:
    int age;
    void print()
    {
        cout << "My age is :" << age << endl;
    }

protected:
    int marks;
    void display()
    {
        cout << "My marks is :" << marks << endl;
    }
};

class B : public A
{
public:
    string name;
    void getsdata()
    {
        cout << "My name is :" << name << endl;
    }
};

int main()
{
    A obj;
    obj.roll = 8;
    obj.show();
    // obj.age=19;
    // obj.print();
    // obj.marks=8;
    // obj.show();

    B obj1;
    obj1.roll = 21;
    obj1.show();
    obj1.name = "JAYANTA";
    obj1.getsdata();
    // obj1.marks=8;
    // obj1.display();
    
    return 0;
}