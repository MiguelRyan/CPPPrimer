#include <iostream>

int main() {
    using namespace std;

    double donations[10];
    double average;
    int count = 0;

    for (double & donation : donations){
        cout << "Insert donation amount: ";
        cin >> donation;
        if (cin.fail()){
            break;
        }
        average += donation;
        count ++;
    }
    average = average / count;
    count = 0;

    for(double donation: donations){
        if (donation > average){
            count++;
        }
    }

    cout << endl << "The average donation size was " << average << endl;
    cout << count << " donations exceed the average!\n";


}
