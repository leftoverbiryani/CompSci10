/*
 Sanay Daptardar, CompSci 10A, Unit 4 while loops
 Extra:
 prints out the user's name backwards
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    //part 1
    int h = 0;
    while(h < 20){ //looping until 20 to print 20 times
        cout << "Happy Holidays!" << endl; //endl for new line output
        h++;
    }
    cout << endl;

    //part 2
    int tt1 = 10;
    while(tt1 >= 1){ //looping until not greater than 1
        cout << tt1 << endl;
        tt1--; //decrement to print decreasing numbers
    }
    cout << endl;

    //part 3
    int ft51 = 5;
    while(ft51 <= 51){
        cout << ft51 << endl;
        ft51 += 2; //increment of 2 so that only odds are printed
    }
    cout << endl;

    //part 4
    string inc = "";
    while(inc != "C" && inc != "c"){ //while the condition is not met, the loop will continue to run
        cout << "Enter a letter" << endl;
        getline(cin, inc);
        if(inc != "C" && inc != "c") //if the condition is not met, print HELLO
            cout << "HELLO" << endl;
    }
    cout << endl;

    //part 5
    string sname = "";
    cout << "Enter your first name:" << endl;
    getline(cin, sname);
    int sni = 0;
    while(sni < sname.length()){
        cout << sni + 1 << ". " << sname[sni] << endl; //printing the respective character from the string
        sni++; //increment to print the next character every time
    }
    cout << sname << ", there are " << sname.length() << " letters in your name." << endl; //printing out length for total
    cout << endl;

    //extra:
    int sni2 = sname.length() - 1;
    int snicount = 1;
    while(sni2 >= 0){
        cout << snicount << ". " << sname[sni2] << endl;
        sni2--;
        snicount++;
    }
    cout << "That was your name backwards!" << endl;

    return 0;
}