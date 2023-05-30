#include <iostream>

int main() {
    using namespace std;

    char * months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};

    int sales[3][12] = {
            {10, 10, 20, 10, 30, 20, 10, 20, 30, 20, 10, 10},
            {30, 40, 30, 50, 60, 40, 50, 40, 30, 20, 40, 50},
            {50, 50, 50, 60, 70, 80, 80, 80, 100, 150, 200, 250}
    };

    int totalSum = 0;

    for(int year = 0; year < 3; year++){
        int sum = 0;
        for(int month = 0; month < 12; month++){
            sum += sales[year][month];
        }
        totalSum += sum;
        cout << "Year " << year << " sales = " << sum << endl;
    }

    cout << "Total sales = " << totalSum << endl;
}