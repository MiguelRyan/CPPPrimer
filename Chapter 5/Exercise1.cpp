#include <iostream>

int main(){
    using namespace std;

    int num1, num2, sum;

    cout << "Give me two integers and I'll sum all the integers between them\n";
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    while(num1 <= num2){
        sum += num1;
        num1++;
    }

    cout << "The sum of all the integers is: " << sum << endl;
}