/*
CSC 134
M4LAB1 - For this assignment, the task is to draw a block of asterisks.
S Tyndall
3/10/24
*/
#include <iostream>
using namespace std;

int main() {
    int height, width;
    cout << "Height of block: ";
    cin >> height;
    cout << "Width of block: ";
    cin >> width;
    cout << endl << "Your block:" << endl << endl;

    for (int i=0; i < height; i++){
        // print 1 row
        for (int l=0; l < width; l++){
            cout << "*" << " ";
        }
        cout << endl; // end the row with a new line
    }
    
    cout << endl << endl;
    return 0; 

} // end of the main() method