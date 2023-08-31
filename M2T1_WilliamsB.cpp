#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
  
  double pricePretax = 5.99;
  double taxRate = 1.08;

// Calculate the values
  
  double totalPrice = pricePretax * taxRate;

// Print the results
  
  cout << "The total price including tax is:" << endl;
  cout << "$" << fixed <<         setprecision(2) << totalPrice << endl;

return 0;
}