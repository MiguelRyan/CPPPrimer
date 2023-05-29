#include <iostream>

int main(){
    using namespace std;

    //I decided to use C style strings just to test myself, the question doesn't specify which strings to use.
    const int arrSize = 30;
    char firstName[arrSize];
    char lastName[arrSize];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(firstName, arrSize);
    cout << "What is your last name? ";
    cin.getline(lastName, arrSize);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << char (grade + 1) << endl;
    cout << "Age: " << age;

}