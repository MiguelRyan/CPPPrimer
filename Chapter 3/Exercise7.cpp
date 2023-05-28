#include <iostream>

int main() {
    using namespace std;

    const float RATIO = 235.215;
    float euStyleEfficiency, usStyleEfficiency;

    cout << "Insert your efficiency in EU style (L/100KM): ";
    cin >> euStyleEfficiency;

    usStyleEfficiency = RATIO / euStyleEfficiency;
    cout << euStyleEfficiency << "L/100KM = " << usStyleEfficiency << "MPG";
}