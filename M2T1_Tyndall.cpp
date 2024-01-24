/*
CSC 134
M2T1 - Receipt Calculator
S Tyndall
1/24/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Print receipt for a restaurant
    // The price before tax
    // The amount of tax (8%)
    // The total including tax
    cout << fixed << setprecision(2); // only 2 decimal places
    cout << "M2T1" << endl << endl;
    // Set up variables
    string meal_name = "Lunch Special";
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = meal_price * tax_percent;
    double total_price;

    // Calculate
    // total = meal + tax
    total_price = tax_amount + meal_price;

    // Print Receipt
    cout << "Thank you for dining with us!" << endl << endl;
    cout << meal_name << "\t"<< "$" << meal_price << endl;
    cout << "Tax Amount" << "\t" << "$" << tax_amount << endl << endl;
    cout << "_______________________________" << endl;
    cout << "Total" << "\t\t"<< "$" << total_price << endl << endl;
    cout << "Please come again!" << endl << endl;



    return 0;
}