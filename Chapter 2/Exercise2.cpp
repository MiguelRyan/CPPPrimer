#include <iostream>

int main(){
    using namespace std;

    cout << "Enter in number of furlongs to convert to yards." << endl;
    int furlongs;
    cin >> furlongs;
    int yards;
    yards = furlongs * 220;
    cout << furlongs << " furlongs = " << yards << " yards" << endl;
}