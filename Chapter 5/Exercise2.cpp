#include <iostream>
#include <array>

const int arrSize = 100; //Insert value of the factorial you want to find
int main() {
    using namespace std;

    array<long double, arrSize> factorials{};
    factorials[0] = factorials[1] = 1;

    for(int i = 2; i <= arrSize; i++){
        factorials[i] = i * factorials[i-1];
    }

    cout << arrSize << "! = " << factorials[arrSize];
}