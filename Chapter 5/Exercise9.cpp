#include <iostream>
#include <string>

int main(){
    using namespace std;

    int count = 0;
    string word;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> word;

    while (word != "done"){
        cin >> word;
        count++;
    }

    cout << "You entered a total of " << count << " words.";

}
