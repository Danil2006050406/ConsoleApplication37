#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Calculator {
public:
    double add(double a, double b) const {
        return a + b;
    }

    double subtract(double a, double b) const {
        return a - b;
    }

    double multiply(double a, double b) const {
        return a * b;
    }

    double divide(double a, double b) const {
        if (b == 0) {
            cerr << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;
    char operation;
    double num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (cin.fail()) {
        cerr << "Invalid input. Please enter valid numbers." << endl;
        return 1;
    }

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
    case '+':
        result = calculator.add(num1, num2);
        break;
    case '-':
        result = calculator.subtract(num1, num2);
        break;
    case '*':
        result = calculator.multiply(num1, num2);
        break;
    case '/':
        result = calculator.divide(num1, num2);
        break;
    default:
        cerr << "Invalid operation. Please enter a valid operation." << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
