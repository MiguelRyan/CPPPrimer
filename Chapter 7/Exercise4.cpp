#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned numberOfMega);
int main(){
    using namespace std;

    cout << "How many numbers in the first draw? ";
    unsigned numbers;
    cin >> numbers;

    cout << "How many numbers do you pick? ";
    unsigned picks;
    cin >> picks;

    cout << "How many mega numbers are there? ";
    unsigned numberOfMega;
    cin >> numberOfMega;

    cout << "Your probabilit of winning this lotto is " << probability(numbers, picks, numberOfMega) << "%" << endl;
}

long double probability(unsigned numbers, unsigned picks, unsigned numberofMega){
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p =picks; p > 0; n--, p--){
        result = result * n / p;
    }
    result = result / numberofMega;
    return result;
}