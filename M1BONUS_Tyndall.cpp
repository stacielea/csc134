/*
CSC 134
M1BONUS - 4 problems
S Tyndall
1/24/24
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << fixed << setprecision(2); // only 2 decimal places
    cout << "Problem One:" << endl << endl;
    /*1. Given a rectangle with height 8 and width 10, calculate and print the area. (This one is most similar to "Apple Orchard", 
    except these are both of type int. The formula "Area equals length times width" will be useful.)*/
    int height = 8;
    int width = 10;
    int area = height * width;
    cout << "A rectangle with a height of " << height << " and a width of " << width << " has an are of " << area << "." << endl;
    cout << "_____________________________________________________________________________________________________" << endl << endl;
    cout << "Problem Two:" << endl << endl;
    /*
    2. Assume a product is sold for $99.99, and sales tax is 8%. Display the product price, the amount of sales tax, and then the final cost including sales tax. 
    (For handling monetary values, and percentages, you will want to use the double type. "Percent" is "per cent", meaning a 8% sales tax in numerical terms is 0.08 )
    */
   double product_sold = 99.99;
   double sales_tax = 0.08;
   double tax_amount = product_sold * sales_tax;
   double final_cost = product_sold + tax_amount;
   cout << "Product Price \t\t$" << product_sold << endl;
   cout << "Tax Amount (8%)\t\t$" << tax_amount << endl;
   cout << "Total Price \t\t$" << final_cost << endl;
   cout << "_____________________________________________________________________________________________________" << endl << endl;
   cout << "Problem Three:" << endl << endl;
   /*
   3. Assume a pizza is 12 inches in diameter. Using the standard formula, calculate and display the area of that pizza. 
    (You'll need to determine what common geometrical shape best fits a pizza, then look up the formula for area for that shape.)
   */
  int pizza_diameter = 12;
  double radius = pizza_diameter / 2;
  double pizza_area = 3.14 * pow (radius, 2);
  cout << "The area of a pizza with a diameter of " << pizza_diameter << " is " << pizza_area << "." << endl;
  cout << "_____________________________________________________________________________________________________" << endl << endl;
  cout << "Problem Four:" << endl << endl;
  /*
  4. If the pizza from question 3 is cut into 8 pieces, what is the area of each piece?
  */
 double one_piece_of_pizza = pizza_area / 8;
 cout << "If a pizza with a diameter of " << pizza_diameter << " was cut into eight pieces, each piece woiuld have an area of " << one_piece_of_pizza << "." << endl;
 cout << endl << endl;


    return 0;
}