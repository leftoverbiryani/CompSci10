/*
Sanay Daptardar, CompSci 10A, Unit 4 For Loops
Extra:

*/
#include <iostream>

using namespace std;

int main() {

    /*part 1
    for(int i = 0; i <= 5; i++)
    {
        if(i != 5)
            cout << "C++ knows loops." << endl;
        else if(i == 5)
            cout << "C++ knows when to stop." << endl;
    }
     */

    /*part 2

    double p2num;
    double p2avg = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Enter number " << i << ": " << endl;
        cin >> p2num;
        p2avg += p2num;
    }
    cout << "Total: " << p2avg << endl;
    p2avg /= 5;
    cout << "Average: " << p2avg << endl;
    */

    /*part 3

    for(int i = 0; i < 8; i++)
    {
        cout << pow(2, i) << " ";
    }
        cout << "\n";
    */

    //part 4
    char c [] = "LIVERPOOL";

    for(int i = sizeof(c); i >= 0; i--)
    {
        cout << c[i];
    }
    cout << "\n";
    return 0;
}
