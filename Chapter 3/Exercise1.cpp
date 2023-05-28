#include <iostream>

int main() {
    using namespace std;
    const int INCHESPERFEET = 12;

    cout << "How many inches tall are you? ___\b\b\b";

    int inches;
    cin >> inches;

    int feet;
    feet = inches / INCHESPERFEET;
    inches = inches % INCHESPERFEET;

    cout << "You are " << feet << " feet and " << inches << " inches tall!" << endl;
}