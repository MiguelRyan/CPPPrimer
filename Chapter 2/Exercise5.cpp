#include <iostream>
int celsiusToFahrenheit(int);

int main(){
    using namespace std;

    cout << "Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    int fahrenheit;
    fahrenheit = celsiusToFahrenheit(celsius);

    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";
}

int celsiusToFahrenheit(int celsius){
    int fahrenheit;                         //Double is more appropriate but question output looks like an int.
    fahrenheit = (celsius * 1.8) + 32;

    return fahrenheit;
}