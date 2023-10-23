#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>

using namespace std;

/*

CSC 134
M3T3 - Setting up a simple menu
Brian M. Williams
09/25/2023

 - Today's assignment will get us started on the M3 homework, in a way that will provide some bonus points.

    - A text based menu can be used as the most basic UI (User Interface) for interactive programs.
      We'll set up our program to list three options, and then call code for the option that the user picks.

        - The program will look something like this:

            - Menu:

                - 1. Choice one
                - 2. Choice 2
                - 3. Choice 3

                - Your choice?

    - Once you've got this working, you can use it as the basis for your M3HW,
      which will let you fulfill the Bonus - Menu System objective for that assignment.

*/

void option1();
void option2();
void option3();

int main()
{
    string userChoice;

        cout << "Menu" << endl;

        cout << "" << endl;

            cout << "Please select from the following options:" << endl;

            cout << "_________________________________________" << endl;

            cout << "" << endl;

                cout << "Option 1." << endl;

                cout << "" << endl;

                cout << "Option 2." << endl;

                cout << "" << endl;

                cout << "Option 3." << endl;

                cout << "" << endl;

//Application of user choice:

do {
        getline(cin, userChoice);

        cout << "" << endl;

            if (cin.fail())
            {
                cout << "Error: Selection failed. Please try again by selecting one of the previous options." << endl;
                cout << "" << endl;
            }
            else if (userChoice == "Option 1" || userChoice == "Option1" || userChoice == "option 1" || userChoice == "option1" || userChoice == "1")
            {
                option1();
            }
            else if (userChoice == "Option 2" || userChoice == "Option2" || userChoice == "option 2" || userChoice == "option2" || userChoice == "2")
            {
                option2();
            }
            else if (userChoice == "Option 3" || userChoice == "Option3" || userChoice == "option 3" || userChoice == "option3" || userChoice == "3")
            {
                option3();
            }
            else
            {
                cout << "Please enter option 1, option 2, or option 3." << endl;
                cout << "" << endl;
            }


    } while (userChoice != "Option 1" && userChoice != "Option1" && userChoice != "option 1" && userChoice != "option1" && userChoice != "1"
             && userChoice != "Option 2" && userChoice != "Option2" && userChoice != "option 2" && userChoice != "option2" && userChoice != "2"
             && userChoice != "Option 3" && userChoice != "Option3" && userChoice != "option 3" && userChoice != "option3" && userChoice != "3");

// End of selection application.

return 0;
}

// User choice functions for each menu option.

void option1()
{
    cout << "User has selected option 1." << endl;
}

void option2()
{
    cout << "User has selected option 2." << endl;
}

void option3()
{
    cout << "User has selected option 3." << endl;
}

// End user choice function for each menu option.
