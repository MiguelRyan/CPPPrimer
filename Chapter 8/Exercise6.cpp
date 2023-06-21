#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], int size){
    T low = arr[0];
    for(int i = 1; i < size; i++){
        if (arr[i] > low)
            low = arr[i];
    }
    return low;
}

template <>
const char * maxn(const char* arr[], int size){
    int low = strlen(arr[0]);
    const char* strAddress;
    for(int i = 1; i < size; i++){
        if (strlen(arr[i]) > low) {
            low = strlen(arr[i]);
            strAddress = arr[i];
        }
    }
    return strAddress;
}
int main() {
    double dArray[] = {2.01, 3.1, 10.61, 1.8};
    int intArray[] = {-2, 4, 5, -2, 1, 2};
    const char* strArray[] = {"Good", "Morning", "my", "friends"};

    double dLargest = maxn(dArray, 4);
    int intLargest = maxn(intArray, 6);
    const char* strLargest = maxn(strArray, 4);

    cout << "The largest double in the double array was: " << dLargest << endl;
    cout << "The largest int in the int array was: " << intLargest << endl;
    cout << "The largest string in the char* array was: " << strLargest << endl;
}