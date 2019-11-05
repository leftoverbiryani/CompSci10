#include <iostream> //for cin and cout
#include <string> //for getline
#include "honorRoll.h" //importing class file

using namespace std; //easier input and output

int main() {
    honorRoll student;

    string name; //variables for user input
    string c;
    string tc;
    string camount;
    int cnum;
    int g;
    int r;

    srand((int)time(0)); //setting random for infraction
    int i = 0;
    while(i++ < 10) {
        r = rand() % 2;
    }

    student.setRandom(r);

    cout << "Enter your full name: " << endl;
    getline(cin, name);

    student.setName(name);

    cout << "How many courses are you taking?" << endl;
    getline(cin, camount);

    cnum = stoi(camount); //parsing int so that getline doesn't get messed up

    for(int i = 1; i <= cnum; i++)
    {
        cout << "Enter class " << i << ": " << endl;
        getline(cin, c);
        student.setClasses(c); //setting classes
    }

    for(int i = 1; i <= cnum; i++)
    {
        tc = student.getClass(i);
        cout << "Enter your grade for " << tc << ": " << endl;
        cin >> g;
        student.setGrades(g); //setting grades for the classes
    }

    student.getStatus();
    return 0;
}