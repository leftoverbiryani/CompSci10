/*
Sanay Daptardar, CompSci 10A, Unit 4 For Loops
Extra:

*/
#include <iostream>

using namespace std;

int main() {
    //part 1
    for(int i = 0; i <= 5; i++)
    {
        if(i != 5)
            cout << "C++ knows loops." << endl;
        else if(i == 5)
            cout << "C++ knows when to stop." << endl;
    }

    return 0;
}
