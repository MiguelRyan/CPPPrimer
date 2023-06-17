#include <iostream>
#include <cctype>

int main() {
    using namespace std;

    int arrSize = 80;
    cout << "Enter text to scramble: " << endl;
    char ch[arrSize];

    cin >> ch;
    for (char c: ch){
        if (c == '@' or c == '\0'){
            break;
        }
        else if (isupper(c)){
            cout << char(tolower(c));
        }
        else if (islower(c)){
            cout << char(toupper(c));
        }
        else {
            cout << c;
        }

    }

}