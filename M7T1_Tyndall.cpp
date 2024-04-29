/*
CSC 134
M7T1 - resturant 
S Tyndall
4/29/24
*/
#include <iostream>
using namespace std;
#include "Restaurant.h"

int main() {
    cout << "Restaurant Review Program" << endl;
    cout << "--------------------------"<< endl;
    // make a new restaurant object
    cout << "Breakfast: " << endl;
    Restaurant breakfast = Restaurant("Waffle House", 3.0);
    breakfast.setComment("Eggs were runny.");
    //cout << breakfast.getName() << endl;
    //cout << breakfast.getRating() << endl << endl;
    breakfast.printReview();
    cout << "Lunch: " << endl;
    Restaurant lunch = Restaurant("Firehouse Subs", 4.5);
    //cout << lunch.getName() << endl;
    //cout << lunch.getRating() << endl << endl;
    lunch.printReview();
    return 0; 

} // end of the main() method