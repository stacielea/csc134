/*
CSC 134
M2T2 - Apple Sales With User Input
S Tyndall
1/31/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Apple sales program
    string name; 
    int num_apples;
    double price_per_apple;    
    cout << "Please enter your name: ";     // ask the user for input
    cin >> name;     // wait for input, place it in name
    cout << endl;

    // variables for apples owned and price per apple
    cout << "Enter the amount of apples you have: ";
    cin >> num_apples;
    cout << endl;
    cout << "Enter the price per apple: $";
    cin >> price_per_apple;
    cout << endl;

    // calculate the total price of the apples
    double  total_cost = num_apples * price_per_apple;

    // print output
    cout << "Welcome to the " << name << " Apple Farm. " << endl; // or "\n"
    cout << "You have " << num_apples << " apples." << endl;
    cout << "Each apple costs $" << price_per_apple << endl;
    cout << endl << endl;
    cout << "The total cost for all of the apples is $" << total_cost << endl;
    cout << endl << endl;



    return 0;
}