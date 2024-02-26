/*
CSC 134
M3LAB2 - Grade determination
S Tyndall
2/26/24
*/
#include <iostream>
using namespace std;

int main() {

    /*
    create a C++ program that converts numerical grades
    into letter grades based on the following criteria:
        A: 90 - 100
        B: 80 - 89
        C: 70 - 79
        D: 60 - 69
        F: 0 - 59
    */
   
   double grade;
   string letter_grade;
   cout << "Please enter you numerical grade: ";
   cin >> grade;

   // if else statements
   
   if (cin.fail()){
    // cin.fail() with return 1 accounts for anything that is not a number such as letters or symbols (3.15 Application)
    // will not display anything further
    cout << "Your input is not a numerical grade." << endl << endl;
    return 1;
   }
   
   if (grade >= 90 && grade <= 100){
    letter_grade = "A";
   }
   else if (grade >= 80 && grade < 90){
    // >= 89.5 rounds to A
    if (grade >= 89.5){
        letter_grade = "A";
    }
    else{
        letter_grade = "B";
    }
   }
   else if (grade >= 70 && grade < 80){
    // >= 79.5 rounds to B
    if (grade >= 79.5){
        letter_grade = "B";
    }
    else{
        letter_grade = "C";
    }
   }
   else if (grade >= 60 && grade < 70){
    // >= 69.5 rounds to C
    if (grade >= 69.5){
        letter_grade = "C";
    }
    else{
        letter_grade = "D";
    }
   }
   else if (grade >= 0 && grade < 60){
    letter_grade = "F";
   }
   else{
    // this accounts for any negative values
    letter_grade = "Invalid input.\nYour grade cannot be a negative";
   }
  
    // display results
    cout << "Your letter grade is: " << letter_grade << endl << endl;

    return 0; 

} // end of the main() method