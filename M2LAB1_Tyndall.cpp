/*
CSC 134
M2LAB1 - Rectangles
S Tyndall
1/31/24
*/
#include <iostream>
// #include <iomanip>
using namespace std;

int main() {
    cout << "Part 1 - Area of a Rectangle" << endl << endl;

    // declare variables
    double length;
    double width;
    double area;

    // get input
    cout << "Enter length of your rectangle: ";
    cin >> length;
    cout << "Enter width of your rectangle: ";
    cin >> width;

    // do calculations
    area = length * width;

    // print output
    cout << endl;
    cout << "The area of your rectangle is " << area << endl << endl;


    return 0;
}