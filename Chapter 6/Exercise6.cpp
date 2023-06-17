#include <iostream>
#include <string>

struct contributor{
    std::string name;
    double contribution;
};

int main() {
    using namespace std;

    cout << "Insert number of contributors: ";
    int numberOfContributors;
    cin >> numberOfContributors;

    contributor* contributions = new contributor[numberOfContributors];
    for(int i = 0; i < numberOfContributors; i++){
        cout << "Insert name of contributor: ";
        cin >> contributions[i].name;
        cout << "Size of contribution in '$': ";
        cin >> contributions[i].contribution;
    }

    cout << "\n=== GRAND PATRONS ===\n";
    for(int i = 0; i < numberOfContributors; i++){
        if(contributions[i].contribution >= 10000){
            cout << contributions[i].name << ":\t" << contributions[i].contribution << endl;
        }
    }

    delete[] contributions;
}