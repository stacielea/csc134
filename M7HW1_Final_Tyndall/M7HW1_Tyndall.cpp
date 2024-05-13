/*
CSC 134
M7HW1 - Final Project: Ask user to choose between three different shapes and input parameters.
S Tyndall
5/13/24
*/
#include <iostream>
#include "Shapes.h";
using namespace std;

// Function prototypes
void Rectangle();
void Heart();
void Triangle();

int main() {
    cout << "M7HW1 - Final Project: Shapes" << endl << endl;
    // ask user what shape they would like to make
    bool choice = true;

    while (choice){
        int userShape;
        cout << "What shape would you like to make \n "
        "1 - rectangle\n 2 - heart\n 3 - triangle\n 4 - [Quit]\n\nChoose: ";
        cin >> userShape;
        if (userShape == 1){
            Rectangle();
        }
        else if (userShape == 2){
            Heart();
        }
        else if (userShape == 3){
            Triangle();
        }
        else if (userShape == 4){
            cout << "Thanks for playing!\n\n";
            break;
        }
        else{
            cout << "Invalid Choice. Try again.\n\n";
        }
        

    }

  
    return 0; 

} // end of the main() method

void Rectangle(){
    // draw rectangle based on user input
    Shapes r;
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

    cout << "Printing the rectangle...\n\n";
    r.drawRectangle();
    cout << "\n\n";
}

void Heart(){
    // draw heart based on user input
    Shapes h;
    double userWidth;
    string text;
    cout << "Enter width of heart: ";
    cin >> userWidth;
    cout << "\nEnter character or emoji: ";
    cin >> text;

    h.setWidth(userWidth);
    h.setChar(text);

    cout << "\nHeart demesions (width): " << h.getWidth() << endl;
    cout << "Printing Heart...\n\n";
    h.drawHeart();
    cout << "\n\n";

}

void Triangle(){
    // draw triangle based on user input
    Shapes t;
    double userHeight;
    string text;
    cout << "Enter the height of your triangle: ";
    cin >> userHeight;
    cout << "\nEnter character or emoji: ";
    cin >> text;

    t.setHeight(userHeight);
    t.setChar(text);

    cout << "\nTriangle demesions (height): " << t.getHeight() << endl;
    cout << "Printing Triangle...\n\n";
    t.drawTriangle();
    cout << "\n\n";

}