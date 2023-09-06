#include <iostream>
#include <iomanip>
using namespace std;

/*

CSC 134
M2T1 - Tax calculator
Brian M. Williams
09/06/2023

*/

int main() {

// Declare variables

    double menu_price = 5.99;
    double tax_rate_multiplier = 1.07;
    double tax_rate = 0.07;
    double tax_dollars = menu_price * tax_rate;
// Calculate the values

    double total_price = menu_price * tax_rate_multiplier;

// Print the results
    cout << "Your meal is $5.99" << endl;
    cout << "The tax is $" << fixed << setprecision(2) << tax_dollars << endl;
    cout << "The total price including tax is:" << endl;
    cout << "$" << fixed << setprecision(2) << total_price << endl;

return 0;
}
