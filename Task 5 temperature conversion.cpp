#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    int choice;
    double temperature;
    
        cout << "_______________________________________________________________________________________________________________________\n";
        cout << "\t\t\t\t-----TEMPERATURE CONVERSION-----\n";
        cout << "\t\t\t\t---CREATED By: Muhammad Mustafa---\n";
        cout << "\t\t\t\t---TechnoHacks Internship---\n\n";
        cout << "_______________________________________________________________________________________________________________________\n";

    cout << "Temperature Conversion Program: \n" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << " °C" << endl;
            break;
        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << " °F" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}

