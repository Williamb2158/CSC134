#include <iostream>
#include <iomanip>
using namespace std;

/*

CSC 134
M2T2 - Receipt Calculator Advanced
Brian M. Williams
09/11/2023
This program should take the price of a meal based on user input for type of meal and amount of item. Then print a simple text receipt.

The user should enter:
 - The name of the food item
 - Its price
 - How many they want

It should include:
 - The price before tax
 - The amount of tax owed (08%)
 - The total including tax

*/

int main() {
// Greet the user

    cout << "Welcome to Brian's Burger Bar!" << endl;

// Ask the user for meal price

    string item;
    double item_price;
    double amount_item;

    cout << "What would you like to order today?" << endl;
    getline(cin, item);


    cout << "What was the price on that item?" << endl;
    cin >> item_price;

    cout << "And how many " << item;
    cout << " would you like today?" << endl;
    cin >> amount_item;
    cout << " " << endl;

// Declare variables

    double tax_rate_multiplier = 1.08;
    double tax_rate = 0.08;

// Calculate the meal price, amount of tax paid, and the total price

    double meal_price = item_price * amount_item;
    double tax_dollars = meal_price * tax_rate;
    double total_price = meal_price * tax_rate_multiplier;

// Print the results

    cout << "Your meal is: $" << fixed << setprecision(2) << meal_price << endl;
    cout << "The tax is:   $" << fixed << setprecision(2) << tax_dollars << endl;
    cout << "_____________________" << endl;
    cout << "                     " << endl;
    cout << "The total price including tax is:" << endl;
    cout << "  " << endl;
    cout << "              $" << fixed << setprecision(2) << total_price << endl;

return 0;
}
