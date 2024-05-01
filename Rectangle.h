#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

// Class Declorations
class Rectangle {
    private:
        double width;
        double length;
        string text;
    public:
        void setLength(double);
        void setWidth(double);
        void setChar(string);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
        void drawRectangle() const;
        void drawHeart() const;

};


// Functions Definitions
void Rectangle::setLength(double len){
    length = len;
}
void Rectangle::setWidth(double w){
    width = w;
}
void Rectangle::setChar(string ch){
    text = ch;
}
double Rectangle::getLength() const{
    return length;
}
double Rectangle::getWidth() const{
    return width;
}
void Rectangle::drawRectangle() const{
    // draw rectangle with emojis
    for (int i=0; i < length; i++){
        for (int j=0; j < width; j++){
            cout << text;
        }
        cout << endl;
    }
}
void Rectangle::drawHeart() const{
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
double Rectangle::getArea() const{
    double area = length * width;
    return area;
}


#endif
