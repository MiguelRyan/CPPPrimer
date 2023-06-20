#include <iostream>

double calculate(double x, double y, double (*function)(double w, double z));
double add(double x, double y);
double multiply(double x, double y);
double subtract(double x, double y);

int main(){
    using namespace std;
    double (*operations[3])(double, double) = {add, multiply, subtract};

    cout << "Enter values to be added, multiplied, and subtracted.\nEnter non-numeric to exit.\n";

    while(cin) {
        cout << "Enter first value: ";
        int value1;
        cin >> value1;
        if(!cin)
            break;
        cout << "Enter second value: ";
        int value2;
        cin >> value2;
        if(!cin)
            break;

        for (auto *point: operations) {
            cout << calculate(value1, value2, point) << endl;
        }
    }
}

double calculate(double x, double y, double (*function)(double w, double z)){
    return function(x, y);
}

double add(double x, double y){
    return x + y;
}

double multiply(double x, double y){
    return x * y;
}

double subtract(double x, double y){
    return x - y;
}