#include <iostream>

int main() {
    using namespace std;

    int count = 0;
    double daphneMoney, cleoMoney;
    daphneMoney = cleoMoney = 100;
    double daphneInterest = 0.1 * daphneMoney;

    while(daphneMoney >= cleoMoney){
        daphneMoney += daphneInterest;
        cleoMoney *= 1.05;
        count++;
    }

    cout << "Cleo surpasses Daphne after " << count <<" years.\n"
         << "Cleo's Balance: " << cleoMoney << endl
         << "Daphne's Balance: " << daphneMoney << endl;
}