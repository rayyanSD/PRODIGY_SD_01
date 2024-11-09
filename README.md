This is a simple command-line application written in C that converts temperature between
three different units: Celsius, Fahrenheit, and Kelvin. 
The program takes an input temperature and its unit (C, F, or K), and outputs the equivalent temperature values in the other two units.

Features

Converts temperatures between Celsius, Fahrenheit, and Kelvin.
Handles both positive and negative temperature values.
User-friendly input and output interface.
Validates the input for unit selectio

Functions

The program uses the following functions to perform the temperature conversions:

celsiusToFahrenheit(double celsius) - Converts Celsius to Fahrenheit.
celsiusToKelvin(double celsius) - Converts Celsius to Kelvin.
fahrenheitToCelsius(double fahrenheit) - Converts Fahrenheit to Celsius.
fahrenheitToKelvin(double fahrenheit) - Converts Fahrenheit to Kelvin.
kelvinToCelsius(double kelvin) - Converts Kelvin to Celsius.
kelvinToFahrenheit(double kelvin) - Converts Kelvin to Fahrenheit.
Code Structure

The program is organized into two main parts:

Conversion functions: Functions for each temperature unit conversion.
Main function: Takes user input, processes the conversion based on the input unit, and displays the results.
