#include <iostream>
#include <cctype>
#include <string>
using namespace std;
void convertUpper(string & str);

int main(){
    cout << "Enter a string (q to quit): ";
    string input;
    cin >> input;
    while(input != "q"){
        convertUpper(input);
        cout << input << endl;
        cout << "Enter a string (q to quit): ";
        cin >> input;
    }

}

void convertUpper(string & str){
    for(char & i : str){
        i = toupper(i);
    }
}