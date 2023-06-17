#include <fstream>
#include <iostream>
#include <cctype>

int main(){
    using namespace std;

    ifstream file("lorem_ipsum.txt");
    int count = 0;
    char ch;

    if(file.is_open()) {
        file.get(ch);
        while (!file.eof()) {
            if(isalnum(ch)){
                count++;
            }
            file.get(ch);
        }
        file.close();
        cout << "File contains " << count << " alphanumeric characters.";
    }
    else{
        cout << "Error opening text file.";
    }
}