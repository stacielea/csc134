/*
CSC 134
M3HW - Bronze 1,4
S Tyndall
3/3/24
*/
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void question1() {
  /* Question 1. Write a very simple “chat bot” that has a very short conversation. A sample
     transcript of the program output follows:
    Sample Run 1
        Hello, I’m a C++ program!
        Do you like me? Please type yes or no.
        yes
        That’s great! I’m sure we’ll get along.
    Sample Run 2
        Hello, I’m a C++ program!
        Do you like me? Please type yes or no.
        no
        Well, maybe you’ll learn to like me later.
    Sample Run 3
        Hello, I’m a C++ program!
        Do you like me? Please type yes or no.
        (any input other than ‘yes’ or ‘no’)
        If you’re not sure… that’s OK.
    */ 
   cout << "Question One : C++ Program" << endl << endl;
   string userInput;
   
   cout << "Hello, I'm a C++ program!" << endl << "Do you like me? Please type yes or no? ";
   cin >> userInput;
   

   if (userInput == "yes"){
    cout << "That's great! I'm sure we'll get along." << endl;
   }
   else if (userInput == "no") {
    cout << "Well, maybe you'll learn to like me later." << endl;
   }
   else{
    cout << "If you're not sure… that's OK." << endl;
   }
}



void question4() {
    /* Question 4. Write a simple “Math practice” program that meets the following requirements.
        The program should generate two single digit numbers at random.
        The program should print out the numbers as a simple addition problem.
        The program should ask the user to enter the answer.
        Finally, the program will tell the user whether or not their answer was correct. 
    */
    cout << "Question Four : Math Practice" << endl << endl;
    int user_num;
    int rand_num1 = rand() % 9 + 1;
    int rand_num2 = rand() % 9 + 1;

    cout << "What is " << rand_num1 << " + " << rand_num2 << " ? ";
    cin >> user_num;

    if (user_num == (rand_num1 + rand_num2)) {
        cout << "You are correct!" << endl;
    }
    else {
        cout << "You are incorrect :(" << endl;
    }

    
}

int main() {
    // One way to organize a HW assignment
    string format = "______________________________________________________";
    cout << format << endl;
    question1();
    cout << format << endl;
    question4();
    cout << format << endl;


}