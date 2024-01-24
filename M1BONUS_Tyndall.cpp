/*
CSC 134
M1BONUS - 4 problems
S Tyndall
1/24/24
*/
#include <iostream>
using namespace std;

int main() {
    /*
    1. Given a rectangle with height 8 and width 10, calculate and print the area. (This one is most similar to "Apple Orchard", 
    except these are both of type int. The formula "Area equals length times width" will be useful.)
    2. Assume a product is sold for $99.99, and sales tax is 8%. Display the product price, the amount of sales tax, and then the final cost including sales tax. 
    (For handling monetary values, and percentages, you will want to use the double type. "Percent" is "per cent", meaning a 8% sales tax in numerical terms is 0.08 )
    3. Assume a pizza is 12 inches in diameter. Using the standard formula, calculate and display the area of that pizza. 
    (You'll need to determine what common geometrical shape best fits a pizza, then look up the formula for area for that shape.)
    4. If the pizza from question 3 is cut into 8 pieces, what is the area of each piece?
    */
   cout << "Problem One:" << endl << endl;
   int height = 8;
   int width = 10;
   int area = height * width;
   cout << "A rectangle with a height of " << height << " and a width of " << width << " has an are of " << area << "." << endl;
   cout << "__________________________________________________________________________________________________" << endl << endl;
   cout << "Problem Two:" << endl << endl;
   double product_sold = 99.99;
   double sales_tax = 0.08;
   double tax_amount = product_sold * sales_tax;
   double final_cost = product_sold + tax_amount;
   cout << "Product Price - $" << product_sold << endl;
   cout << "Tax Amount \t";



    return 0;
}