#include <iostream>
using namespace std;

// Template function for insertion sort
template <typename T>
void insertionSort(T arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        T key = arr[i];
        int j = i - 1;

        // Move elements that are greater than the key to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Array can be of any type, let's use int for this example
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
