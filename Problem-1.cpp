#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    
    double calculate(double a, double b, char op) {
        switch(op) {
            case '+': 
                return a + b;

            case '-': 
                return a - b;

            case '*': 
                return a * b;

            case '/': 
                if (b == 0)
                    throw runtime_error("Error: Division by zero is not allowed.");
                return a / b;

            default:
                throw invalid_argument("Invalid operation type.");
        }
    }
};

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    Calculator calc;

    try {
        double result = calc.calculate(a, b, op);
        cout << "Result: " << result << endl;
    } 
    catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
