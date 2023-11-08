#include <iostream>
using namespace std;

/* 
 CSC 134
 11/8/23
 shipmant, rossatoe, Williams
 M5LAB2 - Complete a Program
*/


double getLength(double length); // Function for user to enter length

double getWidth(double width); //Function for user to enter width

double getArea(double length, double width); // Function to calculate area



void displayData(double length, double width, double area) {
  cout << "The length of the rectangle is: " << length << endl;
  cout << "The width of the rectangle is: " << width << endl;
  cout << "The area of the rectangle is: " << area << endl;
}

int main()
{
  // This program calculates the area of a rectangle.

   double length = -1;    // The rectangle's length
   double width = -1;     // The rectangle's width
   double area;      // The rectangle's area

   // Get the rectangle's length.
   length = getLength(length);

   // Get the rectangle's width.
   width = getWidth(width);

   // Get the rectangle's area.
  
   area = getArea(length, width);

   // Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

double getLength(double length) 
{
  bool valid = false;
  cout << "Enter the length of the rectangle: ";

  while (valid != true)
    {
      cin >> length;

      if (cin.fail())
      {
        cin.clear();
        string trash;
        cin >> trash;
        cout << "Error: enter a valid numerical length." << endl;
      }
      if (length <= 0) 
      {
        cout << "Error: length must be greater than 0." << endl;
        cout << "Enter the length of the rectangle: ";
      }
      if (length > 0)
      {
        valid = true;
      }
    }
  return length;
} 

double getWidth(double width){
  bool valid = false;
  cout << "Enter the width of the rectangle: ";

  while (valid != true)
    {
      cin >> width;

      if (cin.fail())
      {
        cin.clear();
        string trash;
        cin >> trash;
        cout << "Error: enter a valid numerical width." << endl;
      }
      if (width <= 0) 
      {
        cout << "Error: width must be greater than 0." << endl;
        cout << "Enter the width of the rectangle: ";
      }
      if (width > 0)
      {
        valid = true;
      }
    }
  return width;
}

double getArea(double length, double width) {
  double area;
  area = length * width;
    return area;
}