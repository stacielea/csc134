/*
CSC 134
M7T2 - Rectangles
S Tyndall
5/1/24
*/
#include <iostream>
using namespace std;
#include "Rectangle.h"

int main() {
    cout << "M7T2 - Rectangle" << endl << endl;
    // make a rectangle
    Rectangle r;
    double userLength;
    double userWidth;
    string text;
    cout << "Enter Width: ";
    cin >> userWidth;
    cout << "Enter Length: ";
    cin >> userLength;
    cout << "\nEnter character or emoji: ";
    cin >> text;
    

    r.setWidth(userWidth);
    r.setLength(userLength);
    r.setChar(text);

    cout << "\nRectangle demensions: " << r.getWidth() << " x " << r.getLength()<< endl;

    cout << "Rectangle Area: " << r.getArea() << endl << endl << "Printing the rectangle...\n\n";
    r.drawRectangle();
    cout << "\n\n";
    cout << "Printing heart...\n\n";
    r.drawHeart();

    return 0; 

} // end of the main() method