#include <iostream>

int main() {
    using namespace std;

    cout << "Please enter one of the following choices:\n";
    cout << "a) carnivore\tb) pianist\n";
    cout << "c) tree\t\td) game\n";

    char ch;
    while(!(ch == 'a' or ch == 'b' or ch == 'c' or ch == 'd')) {
        cout << "Please enter a, b, c, or d: ";
        cin >> ch;
    }

    switch(ch){
        case 'a':
            cout << "A carnivore only eats meat!";
            break;
        case 'b':
            cout << "Beethoven was a brilliant pianist!";
            break;
        case 'c':
            cout << "A maple is a tree.";
            break;
        case 'd':
            cout << "Minecraft is one of the best selling games of all time!";
            break;
    }
}
