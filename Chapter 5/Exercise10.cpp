#include <iostream>

int main() {
    using namespace std;

    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 1; j < (rows - i); j++){
            cout << ".";
        }
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}