#include <iostream>
void blindMice(int);
void run(int);

int main(){
    blindMice(2);
    run(2);
}

void blindMice(int times){
    using namespace std;

    for(int i = 0; i < times ;i++){
        cout << "Three Blind Mice" << endl;
    }
}

void run(int times){
    using namespace std;

    for(int i = 0; i < times ;i++){
        cout << "See how they run" << endl;
    }
}