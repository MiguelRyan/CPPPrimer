#include <iostream>

int main(){
    using namespace std;

    cout << "Enter your age: ";
    int age;
    cin >> age;
    int months;
    months = age * 12;
    cout << "Your age in months is: " << months << endl;
}