#include <iostream>

int main(){
    using namespace std;

    float petrol, kilometres, efficiency;
    cout << "How many kilometres have you driven? ";
    cin >> kilometres;
    cout << "How many litres of petrol did you use? ";
    cin >> petrol;

    efficiency = (petrol * 100) / kilometres;

    cout << "You have driven with an average efficiency of " << efficiency << "L/100KM";
}