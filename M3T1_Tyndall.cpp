/*
CSC 134
M3T1 - rectangle area through input
S Tyndall
2/12/24
*/
#include <iostream>
using namespace std;
/*
For this assignment you will create a program to match the following specifications.
Ask the user to enter the length and width of two rectangles, then display the area of both.
After you getting this working:
For this assignment you will create a program to match the following specifications.
Ask the user to enter the length and width of two rectangles, then display the area of both.
Tell the user which rectangle has the larger area, or if they are the same area.
*/
int main() {
    // Declare variables
    int length1, length2, width1, width2;
    int area1, area2;
    // Rectangle 1 length, width, and area
    cout << "Enter length and width of first rectangle (seperated by a space) : ";
    cin >> length1;
    cin >> width1;
    area1 = length1 * width1;
    cout << "The area of rectangle one is: "<< area1 << endl << endl;
    // Rectangle 2 length, width, and area
    cout << "Enter length and width of second rectangle (seperated by a space) : ";
    cin >> length2;
    cin >> width2;
    area2 = length2 * width2;
    cout << "The area of rectangle two is: "<< area2 << endl << endl;
    // Determine which rectangle area is larger
    if (area1 < area2)
    
        cout << "The second rectangle has a larger area.\n\n";
    else if (area1 == area2) // what if they are the same?
    {
        cout << "The areas for both rectangles are equal.\n\n";
    }
    else
        cout << "The first rectangle has a larger area.\n\n";

    
    return 0;
}