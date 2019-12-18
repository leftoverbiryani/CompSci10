/*
Sanay Daptardar, CompSci 10A, Unit 4 design
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> spc; //vector to hold varying amounts of spaces
    spc.push_back("");
    spc.push_back(" ");
    spc.push_back("   ");
    spc.push_back("     ");
    spc.push_back("       ");

    for(int i = 0; i <= 5; i++){ //outer loop for signs and inner spaces
        for(int j = 5; j >= i; j--){//inner loop for decreasing amount of outer spaces
            cout << " ";
        }
            if(i == 1)
                cout << "&";
            else if(i != 0)
                cout << "&" << spc[i-1] << "&";

        cout << endl;
    }
    cout << "&&&&&&&&&&&"; //ending cout for bottom row
    //total cout statements: 3
    return 0;
}