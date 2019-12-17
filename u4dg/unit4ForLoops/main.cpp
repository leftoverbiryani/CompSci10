/*
Sanay Daptardar, CompSci 10A, Unit 4 For Loops
Extra:
do while loops around parts if user wants to run again.
*/
#include <iostream>

using namespace std;

int main() {
    bool running = true;
    string test = "";
    //part 1
    do {
        for (int i = 0; i <= 5; i++) //looping 6 times
        {   //last time will be different output
            if (i != 5)
                cout << "C++ knows loops." << endl;
            else if (i == 5) //if its the last iteration, print stop message
                cout << "C++ knows when to stop." << endl;
        }
        cout << "Would you like to run again? (y/n)" << endl;
        cin >> test;

        if(test == "y" || test == "Y")
            running = true;
        else if(test == "n" || test == "N")
            running = false;

    }while(running);



    //part 2

    double p2num;
    double p2avg = 0;

    do {
        for (int i = 1; i <= 5; i++) {
            cout << "Enter number " << i << ": " << endl;
            cin >> p2num;
            p2avg += p2num; //adding up numbers for average
        }
        cout << "Total: " << p2avg << endl;
        p2avg /= 5; //printing total using avg without dividing
        cout << "Average: " << p2avg << endl; //dividing avg for average

        cout << "Would you like to run again? (y/n)" << endl;
        cin >> test;

        if(test == "y" || test == "Y")
            running = true;
        else if(test == "n" || test == "N")
            running = false;
    }while(running);

    //part 3

    do {
        for (int i = 0; i < 8; i++) {
            cout << pow(2, i) << " "; //using pow() for exponents
        }
        cout << "\n";

        cout << "Would you like to run again? (y/n)" << endl;
        cin >> test;

        if(test == "y" || test == "Y")
            running = true;
        else if(test == "n" || test == "N")
            running = false;
    }while(running);

    //part 4
    do {
        char c[] = "LIVERPOOL";

        for (int i = sizeof(c); i >= 0; i--) {
            cout << c[i]; //looping backwards to print array backwards
        }
        cout << "\n";

        cout << "Would you like to run again? (y/n)" << endl;
        cin >> test;

        if(test == "y" || test == "Y")
            running = true;
        else if(test == "n" || test == "N")
            running = false;
    }while(running);
    return 0;


}
