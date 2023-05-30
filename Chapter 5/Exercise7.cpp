#include <iostream>
#include <string>

struct car{
    std::string make;
    int buildYear;
};

int main() {
    using namespace std;

    cout << "How many cars do you wish to catalog? ";
    int numberOfCars;
    cin >> numberOfCars;

    car * carCatalog = new car[numberOfCars];
    auto originalPointer = carCatalog;  //Use this for after we loop, and deleting memory at the end

    for (int i = 0; i < numberOfCars; i++){
        cout << "Car #" << i + 1 << ":\nPlease enter the make: ";
        cin >> carCatalog->make;
        cout << "Please enter the year made: ";
        cin >> carCatalog->buildYear;
        carCatalog++;
    }
    carCatalog = originalPointer;

    cout << "Here is your collection:\n";
    for(int i = 0; i < numberOfCars; i++){
        cout << carCatalog->buildYear << " " << carCatalog->make << endl;
        carCatalog++;
    }
    delete[] originalPointer;
}