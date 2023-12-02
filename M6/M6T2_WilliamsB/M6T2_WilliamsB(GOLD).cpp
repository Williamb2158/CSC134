#include <iostream>
#include "Box.h"
using namespace std;
/*
CSC-134
M6T2 - Rectangles (GOLD)
Brian M. Williams

Bronze Tier (80/100):

Enter program 13-1 ("Rectangle") from the Gaddis slides. Submit the program and
a screenshot of the output here.

Silver Tier (90/100):

As Bronze, and add input validation to ensure the rectangle is a valid size. (No
sides can be zero, or negative.)

Gold Tier (100/100):

As Silver, and create a second file which, instead of having the Rectangle
class, has a class Box. We'll define a "Box" as a three dimensional rectangle --
it has length and width, and it also has height. Instead of area, it has volume.

Later in this chapter we'll learn how to add multiple files to a single C++
program. For now, you may find it easier to just create this version as a
separate project.

Include both Rectangle and Box files, and a screenshot of the program output.

OR:

Add drawing random rectangles (we'll do this in class)
*/

// Rectangle class declaration.
class Rectangle {
private:
 double width;
 double length;

public:
  void setWidth(double);
  void setLength(double);
  double getWidth() const;
  double getLength() const;
  double getArea() const;
  
};

// setWidth assigns a value to the width member.

void Rectangle::setWidth(double w) { width = w; }

// setLength assigns a value to the length member.

void Rectangle::setLength(double len) { length = len; }

// getWidth returns the value in the width member.

double Rectangle::getWidth() const { return width; }

// getLength returns the value in the length member.

double Rectangle::getLength() const { return length; }

// getArea returns the product of width times length.

double Rectangle::getArea() const { return width * length; }

// End of declarations. Move to main function

int main() {

  cout << "M6T2 - Rectangles and Boxes" << endl;

  cout << "This program will calculate the volume of a box." << endl;

  Box box1;     // Define an instance of the Box class
  double boxWidth;  // Local variable for width
  double boxLength; // Local variable for length
  double boxHeight; // Local Variable for height
  
// Get the box's width and length from the user.
  bool widthValue = false;
  bool lengthValue = false;
  bool heightValue = false;

    //Validate the width value
  
  cout << "What is the width of the box in inches?" << endl;
  cout << "Box width: ";

  while (widthValue == false) 
  {
    cin >> boxWidth;
    cout << endl;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Only enter numerical values for the width." << endl;
      cout << "Box width: ";
    }
    else if (boxWidth <= 0) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "You cannot have a negative or zero width box." << endl;
      cout << "Enter a numerical value that is greater than zero." << endl;
      cout << "Box width: ";
    } else {
      cout << "inches." << endl;
      widthValue = true;
    }
  }

    //Validate the length value

  cout << "What is the length of the box in inches?" << endl;
  cout << "Box length: ";

  while (lengthValue == false) 
  {
    cin >> boxLength;
    cout << endl;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Only enter numerical values for the length." << endl;
      cout << "Box length: ";
    }
    else if (boxLength <= 0) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "You cannot have a negative or zero length box." << endl;
      cout << "Enter a numerical value that is greater than zero." << endl;
      cout << "Box width: ";
    } else {
      cout << "inches." << endl;
      lengthValue = true;
    }
  }

    //Validate the height value

  cout << "What is the height of the box in inches?" << endl;
  cout << "Box height: ";

  while (heightValue == false) 
  {
    cin >> boxHeight;
    cout << endl;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Only enter numerical values for the height." << endl;
      cout << "Box height: ";
    }
    else if (boxHeight <= 0) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "You cannot have a negative or zero height box." << endl;
      cout << "Enter a numerical value that is greater than zero." << endl;
      cout << "Box height: ";
    } else {
      cout << "inches." << endl;
      heightValue = true;
    }
  }

  // Store the width, length, and height of the box
  // in the box object.
  box1.setWidth(boxWidth);
  box1.setLength(boxLength);
  box1.setHeight(boxHeight);
    

  // Display the box's data.

  cout << "Dimensions of the box:" << endl << endl;
  cout << "Width: " << box1.getWidth() << " inches." << endl;
  cout << "Length: " << box1.getLength() << " inches." << endl;
  //cout << "Area: " << box1.getArea() << endl;
  cout << "Height: " << box1.getHeight() << " inches." << endl;
  cout << "Volume: " << box1.getVolume() << " cubic inches."<< endl;

  return 0;
}