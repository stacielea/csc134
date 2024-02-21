/*
CSC 134
M2HW - Silver
S Tyndall
2/15/24
*/
#include <iostream>
using namespace std;
/*
 Question one
 Question two
 Question four
*/


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
    cout<< " ";
}

void option2() {
    string school, team, lets_go,cheer_one, cheer_two;
    lets_go = "Let's go";
    school = "FTCC";
    team = "Trojans";
    cheer_one = lets_go + " " + school + "!";
    cheer_two = lets_go + " " + team + "!";
    cout << cheer_one << endl;
    cout << cheer_one << endl;
    cout << cheer_one << endl;
    cout << cheer_two << endl;
}