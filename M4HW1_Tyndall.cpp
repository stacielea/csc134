/*
CSC 134
M4HW - Gold
S Tyndall
3/18/24
*/
#include <iostream>
using namespace std;

int main() {
    int number = 5;
    int multiply;
    cout<< "Part I - The '5' times table:";
    cout << endl << endl;

    for (multiply = 1; multiply <= 12; multiply++) {
        cout << number <<" times " << multiply << " is " << (number * multiply) << endl;
    }

    cout << endl << endl;

    int number2;
    int multiply2 = 1;
    
    cout<< "Part II - Enter number 1-12 for times table:";
    cin >> number2;
    cout << endl << endl;

    while (multiply2 <= 12) {
        if (number2 >= 1 && number2 <= 12){
            cout << number2 <<" times " << multiply2 << " is " << (number2 * multiply2) << endl;
            multiply2++;
        }
        else{
            cout << "invalid input. Enter another number 1-12: ";
            cin >> number2;
            cout << endl << endl;
        }
    }

    cout << endl << endl;

    return 0; 

} // end of the main() method