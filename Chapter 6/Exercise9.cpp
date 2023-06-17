#include <iostream>
#include <fstream>
#include <string>

struct contributor{
    std::string name;
    double contribution;
};

int main() {
    using namespace std;

    ifstream file("Exercise9_input.txt");

    if (file.is_open()){
        string readLine;
        getline(file, readLine);
        int numberOfContributors = stoi(readLine);

        contributor* contributions = new contributor[numberOfContributors];
        int count = 0;

        while(count < numberOfContributors){
            getline(file, readLine);
            contributions[count].name = readLine;
            getline(file, readLine);
            contributions[count].contribution = stoi(readLine);
            cout << contributions[count].name << endl << contributions[count].contribution << endl;
            count++;
        }
        file.close();

        cout << "\n=== GRAND PATRONS ===\n";
        for(int i = 0; i < numberOfContributors; i++){
            if(contributions[i].contribution >= 10000){
                cout << contributions[i].name << ":\t" << contributions[i].contribution << endl;
            }
        }
    }
    else{
        cout << "Error opening file.";
    }



}