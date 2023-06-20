#include <iostream>

struct expenseStructure{
    double arr[4];
};

void fill(expenseStructure * expense, const char * Snames[]);
void show(expenseStructure * expense, const char * Snames[]);

int main(){
    const char * Snames[] = {"Spring", "Summer", "Autumn", "Winter"};
    expenseStructure * expenses = new expenseStructure;
    fill(expenses, Snames);
    show(expenses, Snames);
    delete expenses;
}

void fill(expenseStructure * expense, const char * Snames[]){
    using namespace std;

    for(int i = 0; i < 4; i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expense->arr[i];
    }
}

void show(expenseStructure * expense, const char * Snames[]){
    using namespace std;

    cout << "\n===EXPENSES===\n";
    for (int i = 0; i < 4; i++){
        cout << Snames[i] << ": " << expense->arr[i] << endl;
    }
}