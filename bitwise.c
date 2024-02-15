#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase letter: ";
    cin >> ch;

    // Convert the uppercase letter to lowercase using bitwise operators
    ch = (ch | 0x20);

    cout << "The lowercase letter is: " << ch << endl;

    return 0;
}