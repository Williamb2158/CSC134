#include <iostream>
#include <iomanip>
using namespace std;

/*

CSC 134
M2T1 - Receipt Calculator
Brian M. Williams
09/06/2023 - 09/11/2023
This program should take the price of a meal, which is 5.99, and print out a simple text receipt.
It should include:
 - The price before tax
 - The amount of tax owed (08%)
 - The total including tax

*/

int main() {

// Declare variables

    double menu_price = 5.99;
    double tax_rate_multiplier = 1.08;
    double tax_rate = 0.08;
    double tax_dollars = menu_price * tax_rate;
// Calculate the values

    double total_price = menu_price * tax_rate_multiplier;

// Print the results
    cout << "Your meal is: $5.99" << endl;
    cout << "The tax is:   $" << fixed << setprecision(2) << tax_dollars << endl;
    cout << "The total price including tax is:" << endl;
    cout << "              $" << fixed << setprecision(2) << total_price << endl;

return 0;
}
