/*
CSC 134
M2HW - Gold
S Tyndall
2/15/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

void question1() {
  // Question 1. Write a program that simulates banking transactions
  // using the following
  // requirements.
  cout << "Banking Transactions" << endl << endl;
  string user_name;
  double start_amount, deposit_amount, withdrawal_amount;
  cout << fixed << setprecision(2); // only 2 decimal places
  cout << "Enter your account name: ";
  cin >> user_name;
  cout << "Enter your starting account balance: $";
  cin >> start_amount;
  cout << "Enter your amount of deposit: $";
  cin >> deposit_amount;
  cout << "Enter your amount of withdrawal: $";
  cin >> withdrawal_amount;
  int account_num = rand() % 9999 + 11000;
  double final_amount = start_amount + deposit_amount - withdrawal_amount;
  cout << "Account name: " << user_name << endl;
  cout << "Account Number: " << account_num << endl;
  cout << "Final account balance: $" << final_amount << endl << endl;

}

void question2() {
    // Question 2. Use the M2LAB1 program as a base for this question
    cout << "Crate volume, cost to build, and charge to customer" << endl << endl;
    cout << fixed << setprecision(2); // only 2 decimal places
    
    double length;
    double width;
    double height;
    double volume;
    double cost_to_build;
    double charge_to_customer;
    double profit;
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    volume = length * width * height;
    cost_to_build = volume * COST_PER_CUBIC_FOOT;
    charge_to_customer = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge_to_customer - cost_to_build;

    cout << endl << "The volume of your crate is " << volume << " cubic feet." << endl << endl;
    cout << "Cost to build: \t\t $" << cost_to_build << endl;
    cout << "Charge to customer: \t $" << charge_to_customer << endl;
    cout << "Profit: \t\t $" << profit << endl;
    cout << endl << endl;
}
void question3() {
    // Question 3. You are throwing a pizza party. Each visitor should
    // get three slices of pizza
    cout << "Pizza Party Order: Each visitor gets 3 slices." << endl << endl;
    int pizzas, slices, visitors;
    const int SLICE_PER_VISITOR = 3;
    cout << "How many pizzas are you ordering? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slices;
    cout << "How many visitors are attending? ";
    cin >> visitors;
    int total_slices = pizzas * slices;
    int amount_needed = visitors * SLICE_PER_VISITOR;
    if (total_slices >= amount_needed){
        cout << "You have enough pizza for your party and will have " << total_slices - amount_needed << " slices left." << endl << endl;
    }
    else{ 
        cout << "You do not have enough slices for your party. You will need " << amount_needed - total_slices << " more slices." << endl << endl;
    }
    
}
void question4() {
    // Question 4. Since FTCC has sports teams, you've been hired to
    // write a cheering program.
    cout << "Cheering Program" << endl << endl;
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

int main() {
    // One way to organize a HW assignment
    string format = "______________________________________________________";
    cout << format << endl;
    question1();
    cout << format << endl;
    question2();
    cout << format << endl;
    question3();
    cout << format << endl;
    question4();
    cout << format << endl;


}