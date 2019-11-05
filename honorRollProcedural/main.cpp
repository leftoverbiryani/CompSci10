#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name; //variables for user input
    string c;
    string camount;
    int cnum;
    int g;
    int r;
    bool infraction = false;
    bool eligible = false;
    int gtotal = 0;

    srand((int)time(0)); //setting random for infraction
    int i = 0;
    while(i++ < 10) {
        r = rand() % 2;
    }

    cout << "Enter your full name: " << endl;
    getline(cin, name);

    cout << "How many courses are you taking?" << endl;
    getline(cin, camount);

    cnum = stoi(camount); //parsing int so that getline doesn't get messed up

    string classes [8];
    int grades [8];

    for(int i = 1; i <= cnum; i++)
    {
        cout << "Enter class " << i << ": " << endl;
        getline(cin, c);
        classes[i-1] = c;//setting classes
    }

    for(int i = 1; i <= cnum; i++)
    {
        cout << "Enter your grade for " << classes[i-1] << ": " << endl;
        cin >> g;
        grades[i-1] = g; //setting grades for the classes
        gtotal += g;
    }

    int average = gtotal / cnum;

    cout << left << setw(22) << "Class:" << "Grade:" << endl;
    for (i = 0; i < cnum; i++) {
        cout << left << setw(22) << classes[i] << grades[i] << endl;
    }
    if (r == 1){
        infraction = true;
    }else if (r == 0){
        infraction = false;
    }
    cout << endl;

    cout << left << setw(10) << "Average:" << average << endl;

    if(infraction){
        cout << left << setw(26) << "Disciplinary Infraction:" << "YES" << endl;
    }else if(!infraction){
        cout << left << setw(26) << "Disciplinary Infraction:" << "NO" << endl;
    }
    if(average >= 90 && !infraction && cnum >= 5){
        eligible = true;
    }

    if(eligible){
        cout << "Congratulations " << name << "! You have made the honor roll." << endl;
    }else{
        cout << "I'm sorry  " << name << ", but you didn't qualify for the honor roll." << endl;
    }
    return 0;
}