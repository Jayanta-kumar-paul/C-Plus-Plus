#include <iostream>
using namespace std;

// Template function for binary search
template <typename T>
int binarySearch(T arr[], int size, T key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if the key is at the mid position
        if (arr[mid] == key)
        {
            return mid; // Return the index of the found element
        }
        // If key is greater, ignore the left half
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        // If key is smaller, ignore the right half
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Return -1 if the key is not found
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Taking input for an integer array
    int arr[size];
    cout << "Enter " << size << " elements (sorted): ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int result = binarySearch(arr, size, key);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
