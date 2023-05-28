#include <iostream>

int main() {
    using namespace std;

    const int SECONDSPERDAY = 86400;
    const int SECONDSPERHOUR = 3600;
    const int SECONDSPERMINUTE = 60;

    int days, hours, minutes, seconds, originalSeconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    originalSeconds = seconds;

    days = seconds / SECONDSPERDAY;
    seconds = seconds % SECONDSPERDAY;

    hours = seconds / SECONDSPERHOUR;
    seconds = seconds % SECONDSPERHOUR;

    minutes = seconds / SECONDSPERMINUTE;
    seconds = seconds % SECONDSPERMINUTE;

    cout << originalSeconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << seconds << " seconds" << endl;
}