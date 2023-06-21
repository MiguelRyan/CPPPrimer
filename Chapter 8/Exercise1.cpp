#include <iostream>

void printString(const char * str[], int number = 0);
int* timesCalled = nullptr;

int main() {
    using namespace std;

    timesCalled = new int;
    *timesCalled = 0;
    const char * str = "Exercise 1";

    printString(&str);
    printString(&str);
    printString(&str);
    printString(&str, 1);


}

void printString(const char * str[], int number){
    using namespace std;
    if (number == 0) {
        cout << *str;
    }
    else{
        for (int i = 0; i < *timesCalled; i++){
            cout << *str;
        }
    }
    cout << endl;
    *timesCalled += 1;

}