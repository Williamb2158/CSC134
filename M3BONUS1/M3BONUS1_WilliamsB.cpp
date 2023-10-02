#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/*

CSC 134
M3BONUS1 - Craps
Brian M. Williams
09/29/2023

 - This program simulates a single game of craps.

*/


int main()
{
    cout << "Welcome to Casino Royale!" << endl;

    string lucky;

    cout << "Today we are playing some craps." << endl;
    cout << "Please enter your lucky number to play." << endl;

    getline(cin, lucky);

    cout << "Let's see a " << lucky << " for the win!" << endl;

// Declaring die variables:
    int die1, die2, diceTotal; //two d6 die, total sum of 2d6
    int timeSeed = time(0);
    srand(timeSeed);
// End die variable declaration.

// Start a loop for multiple plays:

    // Dice roll variables:
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        diceTotal = die1 + die2;
    // End dice roll variables

    // Begin roll check (first, if point is established)
        cout << "You rolled a " << die1 << " and a " << die2 << "." << endl;

        if (diceTotal == 2 || diceTotal == 3 || diceTotal == 12)
        {
            cout << "Thats too bad, come back and play again." << endl;
        }
        else if  (diceTotal == 7 || diceTotal == 11)
        {
            cout << "YOU ARE TODAY'S BIG WINNER!" << endl;
        }
        else
        {
            cout << "Point has been established as " << diceTotal << "." << endl;

            // Establish variables for second roll against set point:
                int die3, die4, diceTotal2;
                die3 = (rand() % 6) + 1;
                die4 = (rand() % 6) + 1;
                diceTotal2 = die3 + die4;
            // End second roll variables

            // Begin second roll:
                string roll2;

                cout << "Please press enter to roll again against the Point." << endl;

                getline(cin, roll2);

                cout << "You rolled a " << die3 << " and a " << die4 << "." << endl;
            // End second roll

            // Check second roll
                if (diceTotal2 == 7 || diceTotal2 != diceTotal)
                {
                    cout << "Thats too bad, please come play with us again." << endl;
                }
                else
                {
                    cout << "We have a lucky one today. YOU WIN!" << endl;
                }
            // End second roll check
        }
    // End roll check (first if point is established)

return 0;
}
