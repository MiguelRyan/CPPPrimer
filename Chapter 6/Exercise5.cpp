#include <iostream>

int main(){
    using namespace std;

    int income;
    double taxowed;

    cout << "Yearly income tax calculator, insert negative number or non-number character to quit.\n";
    cout << "Insert your income for the year: ";
    cin >> income;

    while(income >= 0 and !cin.fail()){
        if (income <= 5000){
            taxowed = 0;
        }
        if(income > 5000 and income <= 15000){
            taxowed = (income - 5000) * 0.1;
        }
        if(income > 15000 and income <= 35000){
            taxowed = (10000 * 0.1) + ((income - 15000) * 0.15);
        }
        if (income > 35000){
            taxowed = (10000 * 0.1) + (20000 * 0.15) + ((income - 35000) * 0.2);
        }
        cout << "The tax owed on " << income << " twarps is " << taxowed << " twarps\n\n";
        cout << "Insert your income for the year: ";
        cin >> income;
    }
}