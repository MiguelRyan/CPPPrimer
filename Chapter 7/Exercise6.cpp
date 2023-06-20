#include <iostream>

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main(){
    using namespace std;
    double scores[10];

    int size;
    cout << "Insert values for the array (Insert non-numeric to cease input)\n";
    size = Fill_array(scores, 10);
    cout << "\n===Original Array===\n";
    Show_array(scores, size);
    Reverse_array(scores, size);
    cout << "\n===Reversed Array===\n";
    Show_array(scores, size);
    cout << "\n===Reversing all but first and last entries===\n";
    Reverse_array(scores+1, size-2);
    Show_array(scores, size);



}

int Fill_array(double arr[], int size){     //returns size of final array.
    using namespace std;
    int count = 0;
    for(int i = 0; i < size; i++){
        cout << "Insert value #" << i+1 << ": ";
        double input;
        cin >> input;
        if(cin.fail()){
            break;
        }
        arr[i] = input;
        count++;
    }
    return count;
}

void Show_array(const double arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << "Value #" << i+1 << ": " << arr[i] << std::endl;
    }
}

void Reverse_array(double arr[], int size){
    for(int i = 0; 2*i < size-1; i++){
        double first = arr[i];
        double last = arr[(size-1)-i];
        arr[i] = last;
        arr[(size-1)-i] = first;
    }
}