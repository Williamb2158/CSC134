#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

/*

CSC 134
M3T1 - Area of Two Rectangles and Which is Larger using if, else.
Brian M. Williams
09/18/2023

 - For this assignment you will create a program to match the following specifications.

    - Ask the user to enter the length and width of two rectangles, then display the area of both.

    - Part 2: Add Additional Features

        - Ask the user to enter the length and width of two rectangles, then display the area of both.

        - Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.)

*/

int main() {

    cout << "Areas of Rectangles.\n";
    cout << "" << endl;

// Declare variables for length and width of rectangle 1 and 2:

    double lengthOne, lengthTwo, widthOne, widthTwo;

// End Declaration.


    cout << "Please enter the length and width of rectangle one. (Seperate the length and width with the enter button.)" << endl;
    cout << "" << endl;
    cin >> lengthOne >> widthOne;
    cout << "" << endl;

    cout << "Please enter the length and width of rectangle two. (Seperate the length and width with the enter button.)" << endl;
    cout << "" << endl;
    cin >> lengthTwo >> widthTwo;
    cout << "" << endl;

// Calculation for Area one and Area two:

    double areaOne = lengthOne * widthOne;
    double areaTwo = lengthTwo * widthTwo;

// End calculation.

    cout << "__________________________________________________________________________________________________________" << endl;
    cout << "" << endl;
    cout << "The area of rectangle one is: " << areaOne << endl;
    cout << "" << endl;
    cout << "The area of rectangle two is: " << areaTwo << endl;
    cout << "" << endl;

// Determine which rectangle has a larger area:

    if (areaOne > areaTwo)
    {
        cout << "Rectangle one is larger than rectangle two." << endl;
        }

        else if (areaTwo > areaOne) {
                cout << "Rectangle two is larger than rectangle one." << endl;

            }
            else {
                cout << "Rectangle one and rectangle two are equal size." << endl;
            }
// End Determination.


 return 0;
}
