#include <iostream>

int arr_input(int arr[]);
void arr_display(int arr[], int size);
double arr_average(int arr[], int size);

int main(){
    using namespace std;

    int scores[10];
    int size;

    cout << "Please insert up to 10 golf scores (insert negative number to stop)\n";
    size = arr_input(scores);
    arr_display(scores, size);
    cout << "\nThe average score was: " << arr_average(scores, size) << endl;
}

int arr_input(int arr[]){
    using namespace std;
    int size = 0;
    for(int i = 0; i < 10; i++){
        cout << "Score #" << i+1 <<": ";
        int score;
        cin >> score;
        if (score >= 0) {
            arr[i] = score;
            size++;
        }
        else{
            return size;
        }
    }
    return size;
}

void arr_display(int arr[], int size){
    std::cout << "\n===Golf scores===\n";
    for(int i = 0; i < size; i++){
        std::cout << "Score #" << i+1 << ": " << arr[i] << std::endl;
    }
}

double arr_average(int arr[], int size){
    double total;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return total/size;
}