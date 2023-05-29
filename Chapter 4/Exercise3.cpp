#include <iostream>
#include <cstring>

int main() {
    using namespace std;

    const int arrSize = 30;
    char firstName[arrSize];
    char lastName[arrSize];
    char introLine[] = "Here's the information in a single string: ";
    char output[150];

    cout << "Enter your first name: ";
    cin.getline(firstName, arrSize);
    cout << "Enter your last name: ";
    cin.getline(lastName, arrSize);

    strcat(output, introLine);
    strcat(output, lastName);
    strcat(output, ", ");
    strcat(output, firstName);

    cout << output;


}