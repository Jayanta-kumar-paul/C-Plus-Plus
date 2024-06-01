
#include <iostream>
using namespace std;

class DateConverter
{
public:
    int days,years,weeks,remainingDays;

    void inputDays()
    {
        cout << "Enter number of days: ";
        cin >> days;
    }

    void convertDays()
    {
        years = days / 365;
        weeks = (days % 365) / 7;
        remainingDays = (days % 365) % 7;
    }

    void displayResult()
    {
        cout << days << " days is equal to:" << endl;
        cout << years << " years" << endl;
        cout << weeks << " weeks" << endl;
        cout << remainingDays << " days" << endl;
    }
};

int main()
{
    DateConverter converter;
    converter.inputDays();
    converter.convertDays();
    converter.displayResult();
    return 0;
}
