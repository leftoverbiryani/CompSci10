/*
Sanay Daptardar, CommpSci 10A, Unit 4 nested For Loops
Extra:
Makes an upright triangle out of $
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //part 1
    vector<string> alph; //creating vector to hold letters
    alph.push_back("A");
    alph.push_back("B");
    alph.push_back("C");
    alph.push_back("D");
    alph.push_back("E");
    alph.push_back("F");

    for(int i = 1; i <= 6; i++){ //outer loop
        for(int j = 0; j < i; j++){ //inner loop depends on outer loop
            cout << alph[j];
        }
        cout << "\n";
    }


    //part 2
    int h = 1; //seperate int for printing the spaces
    for(int i = 1; i <= 8; i+=2){
        for(int j = 1; j <= h; j++){
            cout << " ";
        }
        for(int k = 7; k >= i; k --){
            cout << "&";
        }
        cout << "\n";
        h++; //makes it print one more space each time
    }


    //part 3
    int l = 0;
    for(int i = 1; i <= 6; i++){ //6 rows in outer loop
        for(int j = 1; j <= 20; j++){ //20 per row in inner loop
            cout << "*";
        }
        cout << "\n";
    }



    //extra
    int m = 1;
    for(int i = 1; i <= 8; i+=2){ //difference of 2 for 2 more $ each time
        for(int j = 4; j >= m; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "$";
        }
        cout << "\n";
        m++; //makes it print one less space each time
    }
    return 0;
}
