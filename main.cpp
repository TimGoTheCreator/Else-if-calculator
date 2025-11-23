// Else-if Calculator
// A simple C++ calculator i made on day 1 of my C++ journey that handles two numbers, basic arithmetic, and power operation.
// Demonstrates input validation, loops, and if-else logic.
// Compile With G++: g++ main.cpp -o main
// Compile with Clang: clang++ main.cpp -o main
// Run: ./main

#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    double a, b;
    string operation;
    string input1;
    string input2;

    while (true) {
        cout << "Enter the first number or press Q to quit. " << endl; // Get first number
        cin >> input1; // Input 1

        if (input1 == "Q" || input1 == "q") { // If Q or q was pressed, quit the loop
            break;
        }

        stringstream ss1(input1); // Convert string input to double to handle numeric validation and quit option
        if (!(ss1 >> a)) {
            cout << "Invalid input! Please enter a number." << endl; // / Print invalid if input isn't numeric
            continue; // Go to the start of the loop
        }

        cout << "Enter an operation (+, -, *, /, **  for power): "; // Get an operation to perform
        cin >> operation; // Operation input

        cout << "Enter the second number: "; // Get second number
        cin >> input2; // Input 2

        if (input2 == "Q" || input2 == "q") { // If Q or q was pressed, quit the loop.
            break;
        }

        stringstream ss2(input2); // Convert string input to double to handle numeric validation and quit option
        if (!(ss2 >> b)) {
            cout << "Invalid input! Please enter a number." << endl; // Print invalid if input isn't numeric
            continue; // Go to the start of the loop
        }

        double final;

        if (operation == "+") { // Addition operation
            final = a + b;
        } else if (operation == "-") { // Subtraction operation
            final = a - b;
        } else if (operation == "*") { // Multiplication operation
            final = a * b;
        } else if (operation == "/") { // Division operation
            if (b != 0) {
                final = a / b;
            } else {
                cout << "Invalid syntax / Division by 0!" << endl; // Print cannot divide by 0.
                continue; // Go to the start of the loop
            }
    
        } else if (operation == "**") {
            final = pow(a,b); // Power operation (Python style operator)
    
        } else {
            cout << " Invalid operator!" << endl; // Print if operator isnt "+", "-", "*", "/" or "**"
            continue; // Go to the start of the loop
        }

        cout << "Result: " << final << endl; // Print result

    }

    cout << "Loop finished!" << endl; // Finish loop message
    return 0; // Return success


}
