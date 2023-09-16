#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

/*

CSC 134
M2HW1 Question 3 - Pizza Party Calculator
Brian M. Williams
09/16/2023

You are throwing a pizza party. Each visitor should get three slices of pizza.
    - This program should ask:
        - how many pizzas you order
        - how many slices per pizza
        - how many visitors are coming
    - The program should calculate and display how many slices of pizza are left over.

*/

int main() {

    cout << "Brian's Pizza Party Calculator!" << endl;
    cout << "" << endl;

// Declare variables:

    int numPizzas;
    int slicesPerPizza;
    int visitors;
    int slicesPerVisitor = 3;

// End variable declarations.

    cout << "How many pizzas will you be ordering for your party?" << endl;
    cout << "" << endl;
    cin >> numPizzas;
    cout << "" << endl;

    cout << "How many slices are on each pizza?" << endl;
    cout << "" << endl;
    cin >> slicesPerPizza;
    cout << "" << endl;

    cout << "How many visitors will be attending your party?" << endl;
    cout << "" << endl;
    cin >> visitors;
    cout << "" << endl;

// Calculation for leftover slices follows:

    int leftoverSlices = (numPizzas * slicesPerPizza) - (visitors * slicesPerVisitor);

// End calculation for leftover slices.

    cout << "____________________________________________________" << endl;
    cout << "" << endl;
    cout << "You will have " << leftoverSlices << " slice(s) of pizza leftover after the party." << endl;

return 0;
}
