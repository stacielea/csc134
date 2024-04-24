/*
CSC-134
M6LAB2 - Vectors and Linked Lists
S Tyndall
4/23/24
*/

#include <iostream>
#include <iomanip>
#include <vector> // NEED FOR VECTORS
using namespace std;
struct Node{ 
    int num; // the data
    Node * next; // pointer to the next node
};
int main() {
    cout << "M6LAB2" << endl;
    // Create a vector of ints
    vector <int> numbers;
    // add a number to the end
    int num;
    int how_many;
    cout << "How many numbers: " << endl;
    cin >> how_many;
    how_many -=1;

    for(int i = 0; i < how_many ; i++){
        cin >> num;
    numbers.push_back(num);
    }
    cin >> num;
    numbers.push_back(num);
    
    // print out the vector
    cout << "Vector contenets: " << endl;
    for(int i:numbers){
        cout << i;
    }

    // part 2 - linked list
    //make some nodes, then link them together
    Node * head = nullptr; // no head = empty list
    //return 0;

    Node first;
    first.num = 1;
    first.next = nullptr;

    Node second;
    second.num = 2;
    second.next = nullptr;

    // connect head to first
    head = &first; // & = 'address of' or 'reference to'
    // connect head to second
    head = &second;
    second.num = 2;
    cout << endl;
    //finally, loop through the list
    cout <<"Nodes of the list" << endl;

    Node* probe = head;
    while(probe != nullptr){
        cout << probe->next << ",";
        probe = probe->next;
    }
    return 0;
}