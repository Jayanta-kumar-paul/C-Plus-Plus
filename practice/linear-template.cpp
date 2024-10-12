#include <iostream>
using namespace std;
template<class T>

T linearSearch(T arr[], T n, T key) {
    for (T i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // return index of the found element
        }
    }
    return -1; // return -1 if the element is not found
}

int main() {
    int n, key;

    // Get the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare the array

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the key to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform linear search
    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
