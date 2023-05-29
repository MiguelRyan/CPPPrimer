#include <iostream>

const int arrSize = 30;
struct PizzaCompany {
    char name[arrSize];
    float diameter;
    int weight;
};

int main() {
    using namespace std;

    PizzaCompany pizza;
    cout << "What is the name of your pizza company? ";
    cin.getline(pizza.name, arrSize);
    cout << "Enter pizza diameter: ";
    cin >> pizza.diameter;
    cout << "Enter pizza weight: ";
    cin >> pizza.weight;
    cout << endl;

    cout << "Company name: " << pizza.name << endl
         << "Pizza Diameter: " << pizza.diameter << "\"" << endl
         << "Pizza Weight: " << pizza.weight << "g" << endl;
}