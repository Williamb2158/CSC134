#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
CSC 134
M4T1 - Example Loops
Brian M. Williams
10/02/2023
*/

void hello();
void squares();

int main()
{
    cout << "M4T1 Menu: " << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Table of Squares" << endl;

    int choice;
    cout << "Select: ";
    cin >> choice;

    // if statement for 1 or 2

        if (choice == 1)
        {
            hello();
        }
        else if (choice == 2)
        {
            squares();
        }
        else
        {
            cout << "That's not a valid choice." << endl;
        }

return 0;
}
// End of main()

// define functions
void hello()
{
    //use a loop to say hello five times
   int numberHello = 1;
   while (numberHello <= 5)
    {
        numberHello++;
        cout << "Hello!" << endl;
    }
}

void squares()
{
    //use a loop to print a table of squares
    //from 1 to 10
    int squareNumber = 1;
    int outputNumber = 0;
    while (squareNumber <= 10)
    {
        outputNumber = squareNumber * squareNumber;

        cout << " " << squareNumber << " squared is: " << setw(3) << outputNumber << "." << endl;

        squareNumber++;
    }

}
