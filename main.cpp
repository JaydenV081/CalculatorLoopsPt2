/*
Calculator Program
Create a menu driven program that allows the user to select what arithmetic operation they with to perform.
-- display menu
-- get users choice
-- get two numbers from the user
-- code for different operations (including modulo and exponents)
-- display result
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void displayMenu ();
void displayResults (double result);
double sum (double num1, double num2);
double difference (double num1, double num2);
double product (double num1, double num2);
double quotient (double num1, double num2);
double modulo (double num1, double num2);
double power (double num1, double num2);

int main () {

    bool repeat = true;

    do {
        int choice;
        double num1, num2;

        double result = 1;

        // Displays menu and gets user choice
        displayMenu();
        cin >> choice;

        // Calculates result based on the two values and chosen operation
        switch (choice) {
            case 1: cout << "Addition" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = sum(num1, num2);
                break;
            case 2: cout << "Subtraction" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = difference(num1, num2);
                break;
            case 3: cout << "Multiplication" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = product(num1, num2);
                break;
            case 4: cout << "Division" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = quotient(num1, num2);
                break;
            case 5: cout << "Modulo" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = modulo(num1, num2);
                break;
            case 6: cout << "Power" << endl;
                cout << "Please enter two numbers with space between: ";
                cin >> num1 >> num2;
                result = power(num1, num2);
                break;
            case 7: cout << "Exiting program";
                return 0;
            default: cout << "Please a enter a valid choice! " << endl;
                break;
        }
        // If choice is valid, then results are displayed
        // If invalid, results are skipped and user has to enter new choice
        if (choice > 1 || choice <= 7) {
            displayResults(result);
        }
    // Repeats until user enters 7 as choice, ending program
    } while (repeat);

    return 0;
}

void displayMenu() {
    cout << "Enter a digit corresponding to the operation: " << endl;
    cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Modulo \n6. Power \n7. (Exit Code)" << endl;
}

void displayResults (double result) {
    cout << "The answer to your function is " << result << endl;
    cout << "----------------------" << endl;
}

// Addition
double sum (double num1, double num2) {
    return num1 + num2;
}
// Subtraction
double difference (double num1, double num2) {
    return num1 - num2;
}
// Multiplication
double product (double num1, double num2) {
    return num1 * num2;
}
// Quotient
double quotient (double num1, double num2) {
    return num1 / num2;
}
// Modulo
double modulo (double num1, double num2) {
    return static_cast<int>(num1) % static_cast<int>(num2);
}
// Power
double power (double num1, double num2) {
    return pow(num1, num2);
}
