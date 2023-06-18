#include <iostream>

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display_box(box);
void calculate_volume(box *);

int main(){
    using namespace std;
    box heinzBox = {"Heinz", 10, 10, 10};
    display_box(heinzBox); // No volume set
    calculate_volume(&heinzBox); // passes an address instead of the object
    display_box(heinzBox); // now shows correct volume since we used a memory address instead of a copy of heinzBox
}

void display_box(box x){
    using namespace std;

    cout << x.maker << "'s box description:\n";
    cout << "Height:\t" << x.height << endl;
    cout << "Width:\t" << x.width << endl;
    cout << "Length:\t" << x.length << endl;
    cout << "Volume:\t" << x.volume << endl;
}

void calculate_volume(box * x){
    double volume = x->width * x->height * x->length;
    x->volume = volume;
}