#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// header files let you add more functions to your program
#include <iostream>
using namespace std;

//constants
const int MAX_SHELLS = 6;
const int  EMPTY = 0;
const int  BLANK = 1;
const int  LIVE = 2;

// prototypes
string shell_name(int shell);

// utility functions
string shell_name(int shell){
    // input # of shell: (0, 1, 2)
    // output: name (empty, blank, live)
    string name;
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK){
        name = "Blank";
    }
    if (shell == LIVE){
        name = "Live";
    }
    return name;
}
#endif