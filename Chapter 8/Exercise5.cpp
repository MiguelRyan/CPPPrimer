#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[5]){
    T low = arr[0];
    for(int i = 1; i < 5; i++){
        if (arr[i] > low)
            low = arr[i];
    }
    return low;
}

int main() {
    double dArray[] = {2.01, 3.1, 10.61, 1.8, -3};
    int intArray[] = {-2, 4, 5, -2, 1};

    double dLargest = max5(dArray);
    int intLargest = max5(intArray);

    cout << "The largest double in the double array was: " << dLargest << endl;
    cout << "The largest int in the int array was: " << intLargest << endl;
}