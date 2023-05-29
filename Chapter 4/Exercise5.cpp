#include <iostream>

struct CandyBar {
        char brandName[20];
        float weight;
        int calories;
};

int main() {
    using namespace std;

    CandyBar snack {
        "Mocha Munch",
        2.3,
        50
    };

    cout << "Chocolate Name: " << snack.brandName << endl
         << "Weight: " << snack.weight << "g" << endl
         << "Calories: " << snack.calories << "kcal" << endl;
}