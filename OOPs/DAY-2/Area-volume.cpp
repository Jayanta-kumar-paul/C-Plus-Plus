#include<iostream>

class Room 
{
private:
    int length, width, height;

public:
    void input() 
    {
        std::cout << "Enter the length, width, and height of the room: ";
        std::cin >> length >> width >> height;
    }

    void calculateArea() 
    {
        int area = length * width;
        std::cout << "The area of the room is: " << area << std::endl;
    }

    void calculateVolume() 
    {
        int volume = length * width * height;
        std::cout << "The volume of the room is: " << volume << std::endl;
    }
};

int main() 
{
    Room obj;
    obj.input();
    obj.calculateArea();
    obj.calculateVolume();

    return 0;
}