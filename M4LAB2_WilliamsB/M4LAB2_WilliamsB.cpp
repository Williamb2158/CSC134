#include <iostream>
#include "functions.h"
#include <iomanip>
#include <functional>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
  CSC-134
  M4LAB2 - Simple Menu
  Brian M. Williams
  10/11/2023

Here we'll take our first stab at input validation, where we repeat until the user successfuly gives us valid input.

  - This program will do the following:

    - Ask the user to select option 1, 2, 3, or 4.

      - If they do choose 1,2, or 3, or 4, carry out an action using if            block ("option one", "option two", or quit)

      - If they choose anything else, ask them again until they do choose          a valid option.

    - This will give you the basis of a simple menu that you can use in          your own applications.

  - After we get the basic menu working, we'll add functions for different     "mini-game types". We'll then see if we can implement craps as one         mini game, and start thinking about others.

    - Menu Item 1: Counting Test

    - Menu Item 2: Dice Roller

    - Menu Item 3: Running Total & Average

    - Menu Item 4: Quit Program
*/

int main()
{ 
  bool done = false;
  int i = 0;
  int option = -1;
  while (!done)
    {
      // This is just decoration to make it look nice after the first run.
      if (i == 0)
      {
      cout << "Welcome to the menu!" << endl;
      cout << endl;
        i++;
      }
      else
      {
        cout << "Welcome back to the menu!" << endl;
      cout << endl;
      }
      // End decoration
      
      
      cout << "Option1 is the Counting Test." << endl;
      cout << "Option2 is the Dice Roller." << endl;
      cout << "Option3 is the Running Total & Average." << endl;
      cout << "Option4 will quit the program." << endl;
      cout << endl;
    
      cout << "Please enter 1, 2, 3, or 4." << endl;
      cout << endl;

// Create inner loop for option selection so that we don't repeat the 
// menu for invalid inputs
      bool finished = false;
        while (!finished)
        {
          cin >> option;
          cout << endl;

            if (cin.fail())
            {
              cout << "Please enter a valid option." << endl;
              cout << endl;
              cin.clear();
              string trash;
              cin >> trash;
            }
            
            if (option == 1)
            {
              counting_test();
              cin.clear();
              finished = true;
            }
            
            if (option == 2)
            {
              dice_roller();
              cin.clear();
              finished = true;
            }
            
            if (option == 3)
            {
              total_average();
              cin.clear();
              finished = true;
            }

            if (option == 4)
            {
              cout << "Thank you for using the program." << endl;
              finished = true;
              done = true;
            }
          
        }
      
    }
return 0;
}