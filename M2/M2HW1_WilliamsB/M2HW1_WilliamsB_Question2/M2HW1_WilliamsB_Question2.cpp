#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

/*

CSC 134
M2HW1 Question 2 - Calculate the volume of a cube with updates
Brian M. Williams
09/16/2023

Program must calculate:
 - Volume (in cubic feet)
 - Cost
 - Customer Price
 - Profit of any crate GCI builds

 -09/16/2023
    - updated cost/ft3 to 0.3
    - updated charge/ft3 to 0.52

*/

int main() {

double cost_per_cubic_foot = 0.23;
double charge_per_cubic_foot = 0.5;
double length; //in feet
double width; //in feet
double height; //in feet

// New values input for variables (cost/ft3) and (charge/ft3) on 09/16/2023.

    cost_per_cubic_foot = 0.3;
    charge_per_cubic_foot = 0.52;

// End new value input.

    cout << "Please enter the length of the box in feet." << endl;
    cin >> length;
    cout << "" << endl;

    cout << "Please enter width of the box in feet." << endl;
    cin >> width;
    cout << "" << endl;

    cout << "Please enter the height of the box in feet." << endl;
    cin  >> height;
    cout << "" << endl;

double volume = length * width * height; // in cubic feet
double cost = cost_per_cubic_foot * volume;
double charge = charge_per_cubic_foot * volume;
double profit = charge - cost;

    cout << "The volume of the box is: " << volume << " cubic feet." << endl;
    cout << "" << endl;
    cout << "The cost of building the crate is:" << setw(8) << "$" << fixed << setprecision(2) << cost << endl;
    cout << "" << endl;
    cout << "The charge to the customer is:" << setw(11) << "$" << fixed << setprecision(2) << charge << endl;
    cout << "" << endl;
    cout << "______________________________________________" << endl;
    cout << "" << endl;
    cout << "The profit made from this crate is:" << setw(7) << "$" << fixed << setprecision(2) << profit << endl;
    cout << "" << endl;


return 0;
}
