#include <iostream>
using namespace std;

const int MAXARRAY = 40;

struct CandyBar{
    char brandName[MAXARRAY];
    double weight;
    int calories;
};

void showCandy(CandyBar* cb);
void modifyCandy(CandyBar& cb, const char* name = "Millennium Munch", double weight = 2.85, int calories = 350);

int main(){
    CandyBar millennium = {};
    CandyBar milkyWay = {};
    CandyBar mars = {};

    modifyCandy(millennium);
    modifyCandy(milkyWay, "Milky Way", 3.4, 400);
    modifyCandy(mars, "Mars Bar", 5, 625);

    showCandy(&millennium);
    showCandy(&milkyWay);
    showCandy(&mars);
}

void showCandy(CandyBar* cb){
    cout << cb->brandName << " Dossier" << endl;
    cout << "Calories: " << cb->calories << "kcal" << endl;
    cout << "Weight: " << cb ->weight << "g" << endl << endl;
}

void modifyCandy(CandyBar& cb, const char* name, double weight, int calories){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){
        cb.brandName[i] = name[i];
        count = i;
    }
    cb.brandName[count+1] = '\0';
    cb.weight = weight;
    cb.calories = calories;
}