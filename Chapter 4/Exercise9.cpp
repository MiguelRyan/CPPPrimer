#include <iostream>

struct CandyBar {
    char brandName[20];
    float weight;
    int calories;
};

int main() {
    using namespace std;

    CandyBar * snacks = new CandyBar;

    snacks[0] = {"Crunchie", 2.5, 150};
    snacks[1] = {"Milky Way", 3, 200};
    snacks[2] = {"KitKat", 2.1, 240};

    cout << "Brand names: " << snacks[0].brandName << ", " << snacks[1].brandName << ", " << snacks[2].brandName << endl;
    cout << "Weights: " << snacks[0].weight << ", " << snacks[1].weight << ", " << snacks[2].weight << endl;
    cout << "Calories: " << snacks[0].calories << ", " << snacks[1].calories << ", " << snacks[2].calories << endl;
}