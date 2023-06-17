#include <iostream>
#include <string>
#include <cctype>

int main() {
    using namespace std;

    cout << "Enter words (q to quit):\n";
    string inputWord;
    int vowelCount = 0;
    int consonantCount = 0;
    int otherCount = 0;

    cin >> inputWord;
    while(inputWord != "q"){
        char firstChar = inputWord[0];

        if(firstChar == 'a' or firstChar == 'e' or firstChar == 'i' or firstChar == 'o' or firstChar == 'u'){
            vowelCount++;
        }
        else if(isalpha(firstChar)){
            consonantCount++;
        }
        else{
            otherCount++;
        }
        cin >> inputWord;
    }

    cout << vowelCount << " words beginning with vowels\n";
    cout << consonantCount << " words beginning with consonants\n";
    cout << otherCount << " others\n";
}