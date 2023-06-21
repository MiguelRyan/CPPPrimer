#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char * str;
    int ct;
};

// prototype for set, show and show
void set(stringy & str, char input[]);
void show(const stringy str, int times = 1);
void show(const char str[], int times = 1);


int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & str, char input[]){
    int len = strlen(input) + 1;

    char * temp = new char[len];
    strcpy(temp, input);

    str.str = temp;
    str.ct = len;
}

void show(const stringy str, int times){
    for(int i = 0; i < times; i++)
        cout << str.str << endl;
}

void show(const char str[], int times){
    for(int i = 0; i < times; i++)
        cout << str << endl;
}

