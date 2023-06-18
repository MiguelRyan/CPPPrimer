#include <iostream>

unsigned int factorial(unsigned int x);
int main(){
    using namespace std;

    int x = 0;
    cout << "Insert number (negative to quit): ";
    cin >> x;

    while(x >= 0){
        cout << x << "! = " << factorial(x) << endl;
        cout << "Insert number: ";
        cin >> x;
    }
}

unsigned int factorial(unsigned int x){
    if(x > 0) {
        return x * factorial(x - 1);
    }
    return 1;
}