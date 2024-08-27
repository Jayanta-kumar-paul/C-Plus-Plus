#include <iostream>
using namespace std;

class Matrix
{
public:
    int r1, c1, r2, c2;
    int a[10][10];      // Adjust size as needed
    int b[10][10];      // Adjust size as needed
    int result[10][10]; // Adjust size as needed

    void order1()
    {
        cout << "Enter order (rows and columns) of 1st Matrix:" << endl;
        cin >> r1 >> c1;
    }

    void insertData1()
    {
        cout << "Enter data for 1st Matrix:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Enter data for element [" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }
    }

    void display1()
    {
        cout << "1st Matrix is:\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void order2()
    {
        cout << "Enter order (rows and columns) of 2nd Matrix:" << endl;
        cin >> r2 >> c2;
    }

    void insertData2()
    {
        cout << "Enter data for 2nd Matrix:" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Enter data for element [" << i << "][" << j << "]: ";
                cin >> b[i][j];
            }
        }
    }

    void display2()
    {
        cout << "2nd Matrix is:\n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << b[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void multiply()
    {
        if (c1 != r2)
        {
            cout << "Matrix multiplication not possible. Columns of 1st matrix must equal rows of 2nd matrix." << endl;
            return;
        }

        // Initialize result matrix with 0
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                result[i][j] = 0;
            }
        }

        // Perform matrix multiplication
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    void displayResult()
    {
        cout << "Resultant Matrix after multiplication is:\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << result[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix matrix;
    matrix.order1();
    matrix.insertData1();
    matrix.display1();

    matrix.order2();
    matrix.insertData2();
    matrix.display2();

    matrix.multiply();
    matrix.displayResult();

    return 0;
}
