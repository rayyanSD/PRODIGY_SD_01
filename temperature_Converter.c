#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

int main() {
    double temperature;
    char unit;

    printf("Enter the temperature value: ");
    scanf("%lf", &temperature);
    printf("Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &unit);  // Note the space before %c to consume any newline character

    switch (toupper(unit)) {
        case 'C':
            printf("%.2f °C is equal to %.2f °F and %.2f K.\n", 
                   temperature, 
                   celsiusToFahrenheit(temperature), 
                   celsiusToKelvin(temperature));
            break;
        case 'F':
            printf("%.2f °F is equal to %.2f °C and %.2f K.\n", 
                   temperature, 
                   fahrenheitToCelsius(temperature), 
                   fahrenheitToKelvin(temperature));
            break;
        case 'K':
            printf("%.2f K is equal to %.2f °C and %.2f °F.\n", 
                   temperature, 
                   kelvinToCelsius(temperature), 
                   kelvinToFahrenheit(temperature));
            break;
        default:
            printf("Invalid unit! Please enter C, F, or K.\n");
            break;
    }
