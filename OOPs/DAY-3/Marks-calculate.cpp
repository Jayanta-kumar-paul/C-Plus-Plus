//WAP c++ program to enter marks of five subjects and calculate total, average and percentage in class obj .
#include <iostream>
//#include <iomanip> // Include this for formatting

using namespace std;

class Student
{
private:
    int total;
    double average, percentage;
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

    void calculateTotal()
    {
        // No explicit return statement; update a member variable instead
        total = mark1 + mark2 + mark3 + mark4 + mark5;
    }

    void calculateAverage()
    {
        // No explicit return statement; update a member variable instead
        average = total / 5.0;
    }

    void calculatePercentage()
    {
        // No explicit return statement; update a member variable instead
        percentage = (total / 500.0) * 100.0;
    }

    void displayResults()
    {
        calculateTotal();
        calculateAverage();
        calculatePercentage();

       // cout << fixed << setprecision(2); // Set precision for percentage
        cout << "\nTotal: " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

};

int main()
{
    Student student;
    student.inputMarks();
    student.displayResults();
    return 0;
}
