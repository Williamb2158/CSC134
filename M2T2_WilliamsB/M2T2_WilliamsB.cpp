#include <iostream>
#include <iomanip>
using namespace std;

/*
  CSC 134
  M2T2 - Apple Store Part 2
  Brian Williams
  08/30/2023
  */

int main() {
  
  //Apple Store. Ask for user input
  //Declare variables
  
  string name;
  int numApples;
  double pricePerApple;

  cout << "What's your name?" << endl;
  cin >> name;

  cout << "How many apples are for sale?" << endl;
  cin >> numApples;

  cout << "How much per apple?" << endl;
  cin >> pricePerApple;
  
  //The remainder will resemble the       previous M2T1 Program
  
  cout << "Welcome to " << name << "'s Apple Orchard!" << endl;
  
  cout << "We have " << numApples << " apples in stock." << endl;

  cout << "Price per apple is $" << fixed << setprecision(2) << pricePerApple << endl;

//Finish by calculating the price for the entire stock of apples

  double priceAllApples = numApples * pricePerApple;

  cout << "The price for all of the apples in " << endl;
  cout << "stock is $" << priceAllApples << endl;

  
  return 0;
}