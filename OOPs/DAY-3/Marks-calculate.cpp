//WAP c++ program to enter marks of five subjects and calculate total, average and percentage.
#include <iostream>
using namespace std;

class Student
{
public:
    int mark1, mark2, mark3, mark4, mark5;

    void inputMarks()
    {
        cout << "Enter Bengali mark 1: ";
        cin >> mark1;
        cout << "Enter English mark 2: ";
        cin >> mark2;
        cout << "Enter Mathematics mark 3: ";
        cin >> mark3;
        cout << "Enter Computer Sc. mark 4: ";
        cin >> mark4;
        cout << "Enter Biology mark 5: ";
        cin >> mark5;
    }

    int calculateTotal()
    {
        return mark1 + mark2 + mark3 + mark4 + mark5;
    }

    double calculateAverage()
    {
        return calculateTotal() / 5.0;
    }

    double calculatePercentage()
    {
        return (calculateTotal() / 500.0) * 100;
    }

    void displayResults()
    {
        cout << "\nTotal: " << calculateTotal() << endl;
        cout << "Average: " << calculateAverage() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main()
{
    Student student;
    student.inputMarks();
    student.displayResults();
    return 0;
}
