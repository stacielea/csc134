/*
CSC 134
M1HW1 - Movie Talk
S Tyndall
1/24/24
*/
#include <iostream>
using namespace std;

int main() {
    /*
    Variables:
    something to hold the name of the movie
    something to hold the year that it came out
    something to hold the box office gross or some other monetary figure about the movie (using a decimal point)
    */
    string movie_name = "Rocky IV";
    int movie_year = 1985;
    double box_office_gross = 300.4;

    // display information
    cout << movie_name << " was released in " << movie_year << " and it's box office gross was $" << box_office_gross << " million. ";
    cout << "It stars Slyvester Stallone as Rocky, Dough Lundgren as Drago, Carl Weathers as Apollo, and Talia Shire as Adrian." << endl << endl;
    // display quotes from the movie
    cout << "Rocky IV is hands down my favorite movie. Some memorable quotes from the movie include: " << endl;
    cout << "________________________________________________________________________________________" << endl << endl;
    cout << "\"Going in one more round when you don't think you can - that's what makes all the difference in your life.\" - Rocky" << endl << endl;
    cout << "\"You always did everything the way you wanted it. And I didn't understand that, but now I understand. I'll never forget you, Apollo.\" - Rocky" << endl << endl;
    cout << "\"Cause I'm a fighter! That's how I'm made, Adrian. That's what you married. We can't change what we are.\" - Rocky" << endl << endl;
    cout << "\"You know it's kinda hard for me to say these kinda things, cuz it ain't my way, but if I could just unzip myself and step out and be someone else, I'd wanna be you. You're all heart, Rock.\" - Paulie" << endl << endl;
    cout << "\"During this fight, I've seen a lot of changing, in the way you feel about me, and in the way I feel about you. In here, there were two guys killing each other, but I guess that's better than twenty million. I guess what I'm trying to say, is that if I can change, and you can change, everybody can change!\" - Rocky" << endl << endl;


    return 0;
}