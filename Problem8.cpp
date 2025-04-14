// Create a function that will convert from Celsius to Fahrenheit
// Formula we're using °F = (°C × 9/5) + 32 
// Additionally making a function to calculate Fahrenheit to Celsius  [Formula we're using °C = (°F - 32) × 5/9] 

#include<iostream>
using namespace std;

void CelsiustoFahrenheit() {
    int cel, feh;
    cout << "Enter the tempreture in Celsius = ";
    cin >> cel;
    feh =  ( cel * 9/5 ) + 32 ;
    cout << "The tempreture in fehrenheit is = " << feh << endl;
    cout << endl;
}

void FahrenheittoCelsius() {
    int cel, feh;
    cout << "Enter the tempreture in Fahrenheit = ";
    cin >> feh;
    cel =  ( feh - 32 ) * 5/9 ;
    cout << "The tempreture in celsius is = " << cel;
}

void startConversion() {
    int choice;
    cout << "Temperature Converter" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch(choice) {
        case 1:
            CelsiustoFahrenheit();
            break;
        case 2:
            FahrenheittoCelsius();
            break;
        default:
            cout << "Invalid choice. Please run the program again." << endl;
    }
}

int main() {
    startConversion();
    return 0;
}