#include <iostream>
const int Max = 5;

// function prototypes
double * fill_array(double * begin, int size);
void show_array(const double * begin, const double * end);
void revalue(double * begin, double * end, double r);

int main(){
    using namespace std;
    double properties[Max];

    double * end = fill_array(properties, Max);
    show_array(properties, end);

    if (end != properties){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(properties, end, factor);
        show_array(properties, end);
    }

    cout << "Done.\n";
}

double * fill_array(double * begin, int size){
    using namespace std;
    double * pTemp = begin;
    int temp;

    for (int i = 0; i < size; i++){
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if(!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0){
            break;
        }
        *pTemp = temp;
        pTemp++;
    }
    return pTemp;
}

void show_array(const double * begin, const double * end){
    using namespace std;
    int propertyNumber = 1;
    const double * pTemp;

    for (pTemp = begin; pTemp != end; pTemp++){
        cout << "Property #" << propertyNumber << ": $" << *pTemp << endl;
        propertyNumber++;
    }
}

void revalue(double * begin, double * end, double r){
    double * pTemp;

    for(pTemp = begin; pTemp != end; pTemp++){
        *pTemp *= r;
    }
}