//Sanay Daptardar, CompSci 10A, Unit 4
//Worksheet Do While
//Extra: uses getline to test if an integer input was entered as a string
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //part 1
    string p;
    int u_b110;
    bool test = false;
    bool test2 = false;
    do
    {
        do //nested loop for extra string test
        {
            cout << "Please enter a number between 1 and 10" << endl; //getting input from user
            getline(cin, p);
            for(int i = 0; i < p.length(); i++)
            {
                if (!isdigit(p[i]))//testing if the input is a string (extra).
                {
                    test2 = true;
                    cout << "Please enter a valid input" << endl;
                    break;
                }else if(isdigit((p[i])))
                {
                    test2 = false; //stopping loop if not a string
                }
            }
        }while(test2);
        u_b110 = stoi(p);
        if(u_b110 < 1 || u_b110 > 10) //testing whether input is between 1 and 10
        {
            test = true;
            cout << "Please enter a valid input" << endl;
        }else if(u_b110 >= 1 && u_b110 <= 10)
        {
            test = false; //ending outer loop if input is valid
            cout << "Your input is valid." << endl;
        }
    }while(test);

    //part 2
    return 0;
}