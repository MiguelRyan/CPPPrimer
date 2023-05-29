#include <iostream>
#include <array>

int main() {
    using namespace std;

    array<float, 4> times{};

    cout << "30 Metre dash average calculator." << endl
         << "Enter first time: ";
    cin >> times[0];
    cout << "Enter second time: ";
    cin >> times[1];
    cout << "Enter thirds time: ";
    cin >> times[2];

    times[3] = times[0] / 3 + times[1] / 3 + times[2] / 3;
    cout << "Your average speed is " << times[3] << "m/s" << endl;
}