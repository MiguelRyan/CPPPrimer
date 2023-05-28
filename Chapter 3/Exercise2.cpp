#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    const int INCHESPERFOOT = 12;
    const float METRESPERINCH = 0.0254;
    const float KILOSPERPOUND = 2.2;
    int feet, inches, pounds;

    cout << "How many feet tall are you? _\b";
    cin >> feet;
    cout << "How many inches extra are you? __\b\b";
    cin >> inches;
    cout << "How much do you weigh in pounds? ___\b\b\b";
    cin >> pounds;

    inches = feet * INCHESPERFOOT + inches;

    float metres, kilos, bmi;
    metres = inches * METRESPERINCH;
    kilos = pounds / KILOSPERPOUND;
    bmi = kilos / pow(metres, 2);

    cout << "You have a bmi of " << bmi << endl;
}
