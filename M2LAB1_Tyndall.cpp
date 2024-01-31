/*
CSC 134
M2LAB1 - Cost of Box
S Tyndall
1/31/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << fixed << setprecision(2); // only 2 decimal places
    string format = "______________________________________________________";
    cout << format << endl << endl << "M2LAB1 - Cost of Crate" << endl;
    cout << format << endl << endl;
    // declare variables

    double length;
    double width;
    double height;
    double volume;
    double cost_to_build;
    double charge_to_customer;
    double profit;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // get input
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    // do calculations
    volume = length * width * height;
    cost_to_build = volume * COST_PER_CUBIC_FOOT;
    charge_to_customer = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge_to_customer - cost_to_build;


    // print output
    cout << format << endl << endl;
    cout << "The volume of your crate is " << volume << " cubic feet." << endl << endl;
    cout << "Cost to build: \t\t $" << cost_to_build << endl;
    cout << "Charge to customer: \t $" << charge_to_customer << endl;
    cout << "Profit: \t\t $" << profit << endl;
    cout << format << endl << endl;


    return 0;
}