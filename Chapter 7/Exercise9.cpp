#include <iostream>
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    cout << "Let's get some info about our students\n";
    for(int i = 0; i < n; i++){
        cout << "Student #" << i+1 << endl;
        cout << "Full Name: ";
        cin.getline(pa[i].fullname, SLEN);
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "OOP Level: ";
        cin >> pa[i].ooplevel;
        cin.ignore();
    }
}

void display1(student st){
    cout << "Full Name:\t" << st.fullname << endl;
    cout << "Hobby:\t\t" << st.hobby << endl;
    cout << "OOP Level:\t" << st.ooplevel << endl;
}
void display2(const student * ps){
    cout << "Full Name:\t" << ps->fullname << endl;
    cout << "Hobby:\t\t" << ps->hobby << endl;
    cout << "OOP Level:\t" << ps->ooplevel << endl;
}
void display3(const student pa[], int n){
    for(int i = 0; i < n; i++){
        cout << "Student #" << i+1 << endl;
        display1(pa[i]);
    }
}