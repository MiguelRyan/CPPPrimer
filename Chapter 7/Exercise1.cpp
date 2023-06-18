#include <iostream>
double harmonicMean(double, double);
int main() {
    using namespace std;

    double x, y;
    while(1){
        cout << "Insert two numbers for their harmonic mean (Insert '0' to quit): ";
        cin >> x;
        if (x == 0){
            break;
        }
        cin >> y;
        if (y == 0){
            break;
        }
        double harmonic = harmonicMean(x, y);
        cout << "The harmonic mean of " << x << " and " << y << " is " << harmonic << endl;
    }
}

double harmonicMean(double x, double y){
    double output = (2 * x * y) / (x + y);

    return output;
}