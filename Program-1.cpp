#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    double a;
    double b;
    string operation;

public:
    // Constructor to initialize the values
    Calculator(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    // Method to perform the calculation
    void Calculation() {
        if (operation == "Addition" || operation == "+") {
            cout<< a + b;
        }
        else if (operation == "Subtraction" || operation == "-") {
            cout<< a - b;
        }
        else if (operation == "Multiplication" || operation == "*") {
            cout<< a * b;
        }
        else if (operation == "Division" || operation == "/") {
            if (b != 0) {
                cout<< a / b;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        }
        else {
            cout << "Error: Invalid operation type entered." << endl;
        }
    }
};

int main() {
    cout << "Enter a b operation (examples: 5 2 +   or   5 2 addition):\n";

    double a, b;
    string op;
    cin>>a>>b>>op;

    Calculator myCalc(a, b, op);
    myCalc.Calculation();

    return 0;
}