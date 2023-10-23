#include <iostream>

using namespace std;

/*
  CSC 134
  Brian Williams
  08/26/2023
*/

int main() {
  // This program will simulate an apple orchard.
    // The owner’s name
  string name = "Jane Smith";
    //number of apples owned
  int apples = 100;
    //price per apple
  double pricePerApple = 0.25;
    // calculate the total price of the apples

    // print all the information about the orchard

  cout << "Welcome to " << name;
  cout << "'s Apple " << endl;
  cout << "Orchard!" << endl;

  cout << "We have " << apples;
  cout << " apples in stock." << endl;

  cout << "Apples are currently $"<< pricePerApple;
  cout << " each." << endl;

  // calculate the total price of the apples
  double totalPrice = apples * pricePerApple;

  cout << "The total price for all of the " << endl;
  cout << "apples in stock is $" << totalPrice;
  cout << ".00." << endl;

  return 0;
}
