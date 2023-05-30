#include <iostream>

int main() {
    using namespace std;

    int sales[12];
    char * months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};


    for(int i = 0; i <= 11; i++){
        cout << months[i] << ": ";
        cin >> sales[i];
    }

    int sum;
    for(int x: sales){      //Could've done the sum in the last loop to save computation but wanted to test out
        sum += x;           //range-based loops.
    }

    cout << "Total sales = " << sum << endl;
}
