#include <iostream>
double lightyearToAU(double);

int main(){
    using namespace std;

    cout << "Enter the number of light years: ";
    double lightyear;
    cin >> lightyear;
    double au;
    au = lightyearToAU(lightyear);

    cout << lightyear << " light years = " << au << " astronomical units" << endl;
}

double lightyearToAU(double lightyear){
    double au;
    au = lightyear * 63240;

    return au;
}