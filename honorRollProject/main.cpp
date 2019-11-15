/* Sanay Daptardar, CompSci 10A, Honor Roll Lab
OOP version
*/

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
    bool test = false;
    bool test2 = false;
    srand((int)time(0)); //setting random for infraction
    int i = 0;
    while(i++ < 10) {
        r = rand() % 2;
    }

    student.setRandom(r);

    do {
        cout << "Enter your full name: " << endl;
        getline(cin, name);

        if (isdigit(name[0])) {
            cout << "Please enter a valid name." << endl;
            test = true;
        }else if(!isdigit(name[0])){
            test = false;
        }
    }while(test);
    test = false;
    student.setName(name);

    do
    {
        do
        {
            cout << "How many courses are you taking?" << endl;
            getline(cin, camount);
                if(!isdigit(camount[0]))
                {
                    cout << "Please enter a number" << endl;
                    test2  = true;
                    break;
                }else if(isdigit(camount[0])){
                    test2 = false;
                }

        }while(test2);


        cnum = stoi(camount);  //parsing int so that getline doesn't get messed up
        if(cnum < 1 || cnum > 8)
        {
            cout << "Please enter a valid input between 1 and 8" << endl;
            test = true;
        }else if(cnum >= 1  && cnum <= 8){
            test = false;
        }

    }while(test);

    cout << "Assumed classes: " << cnum << endl;

    for(int i = 1; i <= cnum; i++)
    {
        do
        {
            cout << "Enter class " << i << ": " << endl;
            getline(cin, c);
            if (c.length() >= 20) {
                cout << "Please enter a class name with under 20 characters." << endl;
                test = true;
            }else if (c.length() < 20){
                test = false;
            }
        }while(test);
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