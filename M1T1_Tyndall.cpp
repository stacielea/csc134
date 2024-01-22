// Comment
/*
CSC 134
M1T1 - Hello World
S Tyndall
1/17/24
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    string food = "Mac & Cheese";
    cout << "My name is Stacie and my favorite food is " << food << endl;
    cout << "\n" << endl; // same thing (new line)
    // ask user a question
    cout << "What's yours? ";
    string answer;
    cin >> answer; // user answer
    cout << "You said " << answer << endl;
    cout << endl << endl;
    return 0;
}