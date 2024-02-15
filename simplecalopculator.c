#include <stdio.h>
using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    int result;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }

    cout << "The result is: " << result << endl;

    return 0;
}