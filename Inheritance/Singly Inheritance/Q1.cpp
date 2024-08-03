#include <iostream>
#include <string>

using namespace std;

class A
{
public:
    int roll;
    void show()
    {
        cout << "The roll is " << roll << endl;
    }

private:
    int marks;
    void print()
    {
        cout << "The marks are " << marks << endl;
    }

protected:
    int age;
    void display()
    {
        cout << "The age is " << age << endl;
    }
};

class B : public A
{
public:
    string name;
    void getdata()
    {
        cout << "My name is " << name << endl;
    }
};

int main()
{
    A obj;
    obj.roll = 10;
    obj.show();
    // obj.marks = 420; // Can't access private members
    // obj.print();     // Can't access private members
    // obj.age = 20;    // Can't access protected members
    // obj.display();   // Can't access protected members

    B obj1;
    obj1.name = "Jayanta";
    obj1.getdata();
    obj1.roll = 15; // Can access public members inherited from class A
    obj1.show();    // Can call public methods inherited from class A
    // obj1.marks = 380; // Can't access private members
    // obj1.print();     // Can't access private members
    // obj1.age = 35;    // Can't access protected members
    // obj1.display();   // Can't access protected members

    return 0;
}