#include <iostream>

struct CandyBar {
    char brandName[20];
    float weight;
    int calories;
};

int main() {
    using namespace std;

    CandyBar snacks[3];

    snacks[0] = {"Crunchie", 2.5, 150};
    snacks[1] = {"Milky Way", 3, 200};
    snacks[2] = {"KitKat", 2.1, 240};

    cout << "Names: " << snacks[0].brandName  << ", " << snacks[1].brandName << ", " << snacks[2].brandName << endl
         << "Weights: " << snacks[0].weight <<"g, "<< snacks[1].weight << "g, " <<snacks[2].weight << "g"<< endl
         << "Calories: " << snacks[0].calories << "kcal, " << snacks[1].calories << "kcal, " << snacks[2].calories
         << "kcal" << endl;

}