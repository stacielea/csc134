#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

// Class Declorations

class Shapes {
    private:
        double width;
        double length;
        double height;
        string text;
    public:
        void setLength(double);
        void setWidth(double);
        void setHeight(double);
        void setChar(string);
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        void drawRectangle() const;
        void drawHeart() const;
        void drawTriangle() const;

};


// Functions Definitions
void Shapes::setLength(double len){
    length = len;
}
void Shapes::setWidth(double w){
    width = w;
}
void Shapes::setChar(string ch){
    text = ch;
}
void Shapes::setHeight(double h){
    height = h;
}
double Shapes::getLength() const{
    return length;
}
double Shapes::getWidth() const{
    return width;
}
double Shapes::getHeight() const{
    return height;
}
void Shapes::drawRectangle() const{
    // draw rectangle with emojis
    for (int i=0; i < length; i++){
        for (int j=0; j < width; j++){
            cout << text;
        }
        cout << endl;
    }
}

void Shapes::drawTriangle() const{
    // draw circle with emojis
    for (int i = 1; i <= height; i++) {
        // Print spaces before the asterisks
        for (int j = 1; j <= height - i; j++) {
            cout << "  ";
        }

        // Print asterisks for the current row
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << text;
        }

        cout << "\n";
    }
}

void Shapes::drawHeart() const{
    // draw heart with emojis
    // example code from https://www.quora.com/How-do-I-print-a-heart-using-C-programming

    int i, j, n = width; // Adjust n to change the size of the heart 
 
    for (i = n / 2; i <= n; i += 2) { 
        for (j = 1; j < n - i; j += 2) { 
            cout << "  "; 
        } 
 
        for (j = 1; j <= i; j++) { 
            cout << text; //
        } 
 
        for (j = 1; j <= n - i; j++) { 
            cout << "  "; 
        } 
 
        for (j = 1; j <= i; j++) { 
            cout << text;  //
        } 
 
        cout << "\n"; 
    } 
 
    for (i = n; i >= 1; i--) { 
        for (j = i; j < n; j++) { 
            cout << "  "; 
        } 
 
        for (j = 1; j <= (i * 2) - 1; j++) { 
            cout << text; //
        } 
 
        cout << "\n"; 
    } 
}


#endif