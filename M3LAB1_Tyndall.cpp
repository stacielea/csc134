/*
CSC 134
M3LAB1 - 
S Tyndall
2/14/24
*/
#include <iostream>
using namespace std;

int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

    // ask the question
    cout << "Do you choose to go to the park (Option 1) or go to the beach (Option 2)?" << endl;
    cout << "Type 1 or 2: "; 
    cin >> choice;

    // using if, make a decision based on the user's choice

    if (1 == choice) {
  	    option1();
    }
    else if (2 == choice) {
  	    option2();
    }
    else {
  	    cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // finish up
    cout << "Thanks for playing!" << endl << endl; // this runs no matter what they choose
    return 0; 

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void option1() {
    // this is a function
    int choice;
    cout << "You chose Option 1" << endl;
        cout << "Would you like to go to Central park (Option 1) or Yellowstone park (Option 2)" << endl;
        cout << "Type 1 or 2: "; 
        cin >> choice;
        if (1 == choice) {
  	        cout << "You chose Central park! Enjoy you day!" << endl;
        }
        else if (2 == choice) {
            cout << "You chose Yellowstone park! Enjoy you day!" << endl;
        }
        else {
  	    cout << "I'm sorry, that is not a valid choice." << endl;
        }
}

void option2() {
    int choice;
    cout << "You chose Option 2" << endl;
        cout << "Would you like to go to Myrtle beach (Option 1) or Miami beach (Option 2)" << endl;
        cout << "Type 1 or 2: "; 
        cin >> choice;
        if (1 == choice) {
  	        cout << "You chose Myrtle beach! Enjoy you day!" << endl;
        }
        else if (2 == choice) {
            cout << "You chose Miami beach! Enjoy you day!" << endl;
        }
        else {
  	    cout << "I'm sorry, that is not a valid choice." << endl;
        }
}