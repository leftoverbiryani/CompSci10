#include "honorRoll.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

honorRoll::honorRoll() {
    i = 0;
    j = 0;
    eligible = false;
    gtotal = 0;
    average = 0;

    srand((int)time(NULL));

}

void honorRoll::setGrades(int x){
    g[i] = x;
    i++;
    gtotal += x;
}

void honorRoll::setClasses(string x){
    c[j] = x;
    j++;
}

string honorRoll::getClass(int x){
    return c[x-1];
}

void honorRoll::setName(string x){
    name = x;
}

void honorRoll::setRandom(int x){
    random = x;
}

void honorRoll::getStatus() {
    average = gtotal / i;
    k = i;

    cout << left << setw(22) << "Class:" << "Grade:" << endl;
    for (i = 0; i < k; i++) {
        cout << left << setw(22) << c[i] << g[i] << endl;
    }
    if (random == 1){
        infraction = true;
    }else if (random == 0){
        infraction = false;
    }
    cout << endl;

    cout << left << setw(10) << "Average:" << average << endl;

    if(infraction){
        cout << left << setw(26) << "Disciplinary Infraction:" << "YES" << endl;
    }else if(!infraction){
        cout << left << setw(26) << "Disciplinary Infraction:" << "NO" << endl;
    }
    if(average >= 90 && !infraction && j >= 5){
        eligible = true;
    }

    if(eligible){
        cout << "Congratulations " << name << "! You have made the honor roll." << endl;
    }else{
        cout << "I'm sorry  " << name << ", but you didn't qualify for the honor roll." << endl;
    }

}