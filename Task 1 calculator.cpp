#include <iostream>
using namespace std;

bool performAnotherCalculation() {
    char choice;
    cout << "Do you want to perform another calculation? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

int main() {
    double num1, num2;
    char operation;
    bool repeat;

    do {
        cout << "_______________________________________________________________________________________________________________________\n";
        cout << "\t\t\t\t-----SIMPLE CALCULATOR-----\n";
        cout << "\t\t\t\t---CREATED By: Muhammad Mustafa---\n";
        cout << "\t\t\t\t---TechnoHacks Internship---\n\n";
        cout << "_______________________________________________________________________________________________________________________\n";

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please enter one of +, -, *, /." << endl;
        }
        

        repeat = performAnotherCalculation();
        if (repeat) {
            system("cls"); // Clear the console screen
        }

    } while (repeat);

    cout << "Goodbye!\n";

    return 0;
}


