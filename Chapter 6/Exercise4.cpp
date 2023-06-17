#include <iostream>

struct bop {
    char fullname[30]; // real name
    char title[30];    // job title
    char bopname[30];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main(){
    using namespace std;
    bop boparray[] = {
            {"John Travolta", "Actor", "Johnno", 0},
            {"Tom Hanks", "Actor", "Hanksy", 2},
            {"Emma Watson", "Actress", "EmWat", 1},
            {"Brad Pitt", "Actor", "Pitty", 0},
            {"Angelina Jolie", "Actress", "Angie", 2},
            {"Leonardo DiCaprio", "Actor", "Leo", 1},
            {"Jennifer Lawrence", "Actress", "JLaw", 0},
            {"Robert Downey Jr.", "Actor", "RDJ", 2},
            {"Natalie Portman", "Actress", "Nat", 1},
            {"Will Smith", "Actor", "BigWill", 0},
            {"Scarlett Johansson", "Actress", "ScarJo", 2},
            {"Johnny Depp", "Actor", "CaptainJack", 1},
            {"Meryl Streep", "Actress", "Meryl", 0},
            {"Denzel Washington", "Actor", "Denz", 2},
            {"Anne Hathaway", "Actress", "Annie", 1},
            {"Samuel L. Jackson", "Actor", "Sam", 0},
            {"Julia Roberts", "Actress", "Jules", 2},
            {"Chris Hemsworth", "Actor", "Thor", 1},
            {"Harrison Ford", "Actor", "Indy", 0},
            {"Cate Blanchett", "Actress", "Cate", 2}
    };

    char input;
    while(input != 'q'){
        cout << "a. display by name\tb. display by title\n";
        cout << "c. display by bopname\td. display by preference\n";
        cout << "q. quit\n";
        cin >> input;

        switch(input){
            case 'a':
                for(bop person: boparray){
                    cout << person.fullname << endl;
                }
                cout << endl;
                break;
            case 'b':
                for(bop person: boparray){
                    cout << person.title << endl;
                }
                cout << endl;
                break;
            case 'c':
                for(bop person: boparray){
                    cout << person.bopname << endl;
                }
                cout << endl;
                break;
            case 'd':
                for(bop person: boparray){
                    if (person.preference == 0){
                        cout << person.fullname << endl;
                    }
                    if (person.preference == 1){
                        cout << person.title << endl;
                    }
                    if (person.preference == 2){
                        cout << person.bopname << endl;
                    }
                }
                cout << endl;
                break;
        }
    }
}