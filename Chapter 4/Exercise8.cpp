#include <iostream>

const int arrSize = 30;
struct PizzaCompany {
    char name[arrSize];
    float diameter;
    int weight;
};

int main(){
    using namespace std;
    PizzaCompany * pizzaPointer = new PizzaCompany;

    cout << "Enter pizza diameter: ";
    cin >> pizzaPointer->diameter;
    cin.ignore();
    cout << "What is the name of your pizza company? ";
    cin.getline(pizzaPointer->name, arrSize);
    cout << "Enter pizza weight: ";
    cin >> pizzaPointer->weight;
    cout << endl;

    cout << "Company name: " << pizzaPointer->name << endl
         << "Pizza Diameter: " << pizzaPointer->diameter << "\"" << endl
         << "Pizza Weight: " << pizzaPointer->weight << "g" << endl;

    delete pizzaPointer;

}