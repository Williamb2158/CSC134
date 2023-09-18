#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

CSC 134
M3T2 - The House Always Wins
Brian M. Williams
09/18/2023

    - For this assignment, we'll need to do a little research to find out how random numbers work.

        (At the beginning, we can ask the user to tell us what the dice rolls are, and then we'll use rnd().)

        - We'll start with the very basics:

           - The player rolls two 6-sided dice (abbreviated 2d6.)
                - 7 or 11 -> instant win
                - 2, 3, or 12 -> instant loss
                - The program should ask for the dice rolls, then use if statements to tell the user the result.

        - Additional Features

            - We'll add this in class:

               - rnd() function used to roll the dice -- so we'll change the user input to something like "press any key to roll."
                Specific response messages for the losses (for example, 2 = "snake eyes")

*/

int main(){
/*
    cout << "Dice Roller" << endl;


// Declare the variables for the die:

    int die1, die2, diceTotal;

    //roll is 2d6 (two 6-sided die)

// End variable declaration.

//Ask for dice rolls

    cout << "What was your first dice roll?" << endl;
    cout << "" << endl;
    cin >> die1;
    cout << "" << endl;

    cout << "What was your second dice roll?" << endl;
    cout << "" << endl;
    cin >> die2;
    cout << "" << endl;

// Add the dice rolls:

    diceTotal = die1 + die2;

// End dice roll addition.

    cout << "You rolled: " << diceTotal << endl;

// if statements for wins and losses

    if (diceTotal == 7 || diceTotal == 11) {

        cout << "You are a winner!" << endl;

    }
        else if (diceTotal == 2 || diceTotal == 3 || diceTotal == 12 ){

            cout << "The house takes the win." << endl;

        }
            else {

                cout << "Push. Please play again." << endl;

            }

*/
// Random number dice roller:

    cout << "Random Dice Roller." << endl;
     cout << "" << endl;

     srand((unsigned) time(0));

     int randomNumber1;
     int randomNumber2;

     for (int index = 0; index < 10; index++) {
        randomNumber1 = (rand() % 6) + 1;
        randomNumber2 = (rand() % 6) + 1;
     }
     string start;

     cout << "Please type start to roll a random number." << endl;
     cout << "" << endl;
     cin >> start;
     cout << "" << endl;
     cout << randomNumber1 << endl;
    cout << "" << endl;
    cout << randomNumber2 << endl;
     cout << "" << endl;

     int diceTotal = randomNumber1 + randomNumber2;

     if (diceTotal == 7 || diceTotal == 11) {

        cout << "You are a winner!" << endl;

    }
        else if (diceTotal == 2 || diceTotal == 3 || diceTotal == 12 ){

            cout << "The house takes the win." << endl;

        }
            else {

                cout << "Push. Please play again." << endl;

            }




return 0;
}
