// C++ program that calculates the area and perimeter of a triangle, a circle, and a rectangle using class objects:

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class Triangle : public Shape
{
public:
    float base, height, side1, side2, side3;

    void input()
    {
        cout << "Enter Triangle base: ";
        cin >> base;
        cout << "Enter Triangle height: ";
        cin >> height;
        cout << "Enter Triangle side1: ";
        cin >> side1;
        cout << "Enter Triangle side2: ";
        cin >> side2;
        cout << "Enter Triangle side3: ";
        cin >> side3;
    }

    void area()
    {
        cout << "Triangle area: " << 0.5 * base * height << endl;
    }

    void perimeter()
    {
        cout << "Triangle perimeter: " << side1 + side2 + side3 << endl;
    }
};

class Circle : public Shape
{
public:
    float radius;

    void input()
    {
        cout << "\nEnter Circle radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Circle area: " << 3.14 * radius * radius << endl;
    }

    void perimeter()
    {
        cout << "Circle perimeter: " << 2 * 3.14 * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    float length, width;

    void input()
    {
        cout << "\nEnter Rectangle length: ";
        cin >> length;
        cout << "Enter Rectangle width: ";
        cin >> width;
    }

    void area()
    {
        cout << "Rectangle area: " << length * width << endl;
    }

    void perimeter()
    {
        cout << "Rectangle perimeter: " << 2 * (length + width) << endl;
    }
};

int main()
{
    Triangle triangle;
    triangle.input();
    triangle.area();
    triangle.perimeter();

    Circle circle;
    circle.input();
    circle.area();
    circle.perimeter();

    Rectangle rectangle;
    rectangle.input();
    rectangle.area();
    rectangle.perimeter();
    return 0;
}
