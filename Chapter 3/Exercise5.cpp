#include <iostream>

int main() {
    using namespace std;

    long long worldPopulation, usPopulation, ratio;

    cout << "Enter the worlds population: ";
    cin >> worldPopulation;
    cout << "Enter the US population: ";
    cin >> usPopulation;

    ratio = (usPopulation * 100)  / worldPopulation;

    cout << "The population of the US is " << ratio << "% of the world population" << endl;
}