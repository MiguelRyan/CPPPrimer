#include <iostream>

void fill(double expenses[], const char * Snames[]);
void show(double expenses[], const char * Snames[]);
int main(){
    const char * Snames[] = {"Spring", "Summer", "Autumn", "Winter"};
    double expenses[4];
    fill(expenses, Snames);
    show(expenses, Snames);

}

void fill(double expenses[], const char * Snames[]){
    using namespace std;

    for(int i = 0; i < 4; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}

void show(double expenses[], const char * Snames[]){
    using namespace std;

    cout << "\n===EXPENSES===\n";
    for (int i = 0; i < 4; i++){
        cout << Snames[i] << ": " << expenses[i] << endl;
    }
}