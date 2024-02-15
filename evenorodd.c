#include <iostream>
using namespace std;

// Function to check if a number is even or odd
bool isEvenOrOdd(int num) {
    if(num % 2 == 0) {
        return true; // Even
    } else {
        return false; // Odd
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for(int i = 0; i < n; i++) {
        if(isEvenOrOdd(arr[i])) {
            cout << arr[i] << " is even. ";
        } else {
            cout << arr[i] << " is odd. ";
        }
    }
    cout << endl;

    return 0;
}