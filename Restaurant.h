// restaurant class file
#include <iostream>
using namespace std;

class Restaurant {
    private:
        string name;
        double rating;
        string comment;

    public:
        // constructor -- how we make an object
        Restaurant(string n, double r) {
            name = n;
            rating  = r;
            comment = "None";
        } 
        // getters and setters
        string getName() const {
            return name;
        }
        double getRating() const {
            return rating;
        }
        string getComment() const {
            return comment;
        }
        void setComment(string c) {
            comment = c;
        }
        void setName(string n) {
            name = n;
        }
        void setRating(double r) {
            rating = r;
        }
        // utility func. - print full review
        void printReview() {
            cout << "Name: " << name;
            cout << "\t(" << rating << "/5 stars)" << endl;
            cout << "Comments: " << comment << endl << endl;
        }

};
