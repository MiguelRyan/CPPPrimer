#include <iostream>
#include <string>

int main() {
    using namespace std;

    string firstName, lastName, introLine, output;

    introLine = "Here's the information in a single string: ";
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your second name: ";
    getline(cin, lastName);

    output = introLine + lastName + ", " + firstName;

    cout << output;
}