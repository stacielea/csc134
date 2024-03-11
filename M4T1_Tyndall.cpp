/*
CSC 134
M4T1 - Program 5-3 and 5-6
S Tyndall
3/10/24
*/
#include <iostream>
using namespace std;

int main() {
    // Program 5-3
    cout << "Program 5-3:" << endl << endl;
    int number = 0;

    while (number < 5 )
    {
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n\n";
    

    // Program 5-6
    cout << "Program 5-6:" << endl << endl;
    const int MIN_NUMBER = 1, MAX_NUMBER = 10;
    int num = MIN_NUMBER;

    cout << "Number NUmber Squared\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;

    }
    cout << endl << endl;
  
    return 0; 

} // end of the main() method