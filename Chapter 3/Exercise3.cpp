#include <iostream>

int main() {
    using namespace std;

    int degrees;
    float minutes, seconds, output;
    cout << "Enter a latitude in degrees, minutes, and seconds:\nFirst, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of the arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of the arc: ";
    cin >> seconds;

    output = degrees + minutes / 60 + seconds / 3600;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << output << " degrees." << endl;
}
