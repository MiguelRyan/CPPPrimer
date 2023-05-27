#include <iostream>
void timeDisplay(int, int);

int main(){
    using namespace std;

    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;

    timeDisplay(hours, minutes);
}

void timeDisplay(int hour, int minute){
    using namespace std;

    cout << "Time: " << hour << ":" << minute << endl;
}