#include <iostream>

int main() {
    using namespace std;

    cout << "Insert numbers and I'll add them.\nInsert 0 to quit\n";

    int first, sum;
    cin >> first;

    for(int x = first; x!=0; cin >> x){
        sum += x;
        cout << "Cumulative Sum = " << sum << endl;
    }

    cout << "Final sum = " << sum << endl;
}