/*
CSC 134
M6LAB1 - Buckshot
S Tyndall
4/10/24

Handler loading and looking at a shotgun magazine.
Max is 6 shells, they are live, blanks, or empty.
*/
#include <iostream>
using namespace std;
#include "M6LAB1_utils.h"


// array is a global variable
int magazine[MAX_SHELLS] = { LIVE,BLANK, LIVE, EMPTY, BLANK, EMPTY};



int main() {
    

    cout << "M6LAB1" << endl << endl;

    cout << "The magazine holds: " << endl;
    // LOOP THRU THE MAGAZINE
    for (int i=0; i < MAX_SHELLS; i++){
        int shell = magazine[i]; // current shell
        string name = shell_name(shell);
        cout << name << ", ";
        
    }
    // 2nd option: range-based for loop
    cout << endl;
    for (int shell: magazine) {
        cout << shell_name(shell) << ", ";
    }

    cout << endl << endl;
    return 0; 

} // end of the main() method
