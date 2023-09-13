#include <iostream>
#include <iomanip>
using namespace std;

/*

CSC 134
M2LAB1 - Calculate the volume of a cube
Brian M. Williams
09/13/2023

Program must calculate:
 - Volume (in cubic feet)
 - Cost
 - Customer Price
 - Profit of any crate GCI builds

*/

int main() {

double cost_per_cubic_foot = 0.23;
double charge_per_cubic_foot = 0.5;
double length; //in feet
double width; //in feet
double height; //in feet

    cout << "Please enter the length of the box in feet." << endl;
    cin >> length;

    cout << "Please enter width of the box in feet." << endl;
    cin >> width;

    cout << "Please enter the height of the box in feet." << endl;
    cin  >> height;

double volume = length * width * height; // in cubic feet
double cost = cost_per_cubic_foot * volume;
double charge = charge_per_cubic_foot * volume;
double profit = charge - cost;

    cout << "The volume of the box is: " << volume << " cubic feet." << endl;
    cout << "The cost of building the crate is: $" << fixed << setprecision(2) << cost << endl;
    cout << "The charge to the customer is: $" << fixed << setprecision(2) << charge << endl;
    cout << "The profit made from this crate is: $" << fixed << setprecision(2) << profit << endl;


return 0;
}
