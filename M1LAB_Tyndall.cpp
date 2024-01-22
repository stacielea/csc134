// Comment
/*
CSC 134
M1LAB - Apple Sales
S Tyndall
1/22/24
*/
#include <iostream>
using namespace std;

int main() {
    // Apple sales program
    string name = "Tyndall";

    // variables for apples owned and price per apple
    int num_apples = 100;
    double price_per_apple = 0.25;

    // calculate the total price of the apples
    double  total_cost = num_apples * price_per_apple;

    // print output
    cout << "Welcome to the " << name << " Apple Farm. " << endl; // or "\n"
    cout << "We have " << num_apples << " apples." << endl;
    cout << "Each apple costs $" << price_per_apple << endl;
    cout << endl << endl;
    cout << "The total cost for all of the apples is $" << total_cost << endl;
    cout << endl << endl;

    return 0;
}