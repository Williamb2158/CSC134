#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>

using namespace std;

/*

CSC 134
M3LAB2 -
Brian M. Williams
09/20/2023

 - This sample program simulates a very simple game show, where the user makes a choice and then finds out what they've won.

    - The first program is a simple 'Hello World', before we start adding features to the program.

    - Program two uses the if statement to print different results based on a user choice.

    - Program three uses some advanced techniques we will get to soon, adding additional functions (also called methods) to the program. (So far, we've only had one method, which is main(). If program three causes you confusion and you're having trouble with it, then that's fine -- you can base your program on program two for now.)

 - Use the examples given here as a basis (Program Two or Program Three, your choice). Instead of Door #1 and Door #2, you should have some other choice, with other consequences. For example, a combat game, where the user types 'fight' or 'run'.

    - To complete the program:

        - Start with a binary choice for the player

        - Have an if/ else if / else choice for:

            - Picked first choice

            - Picked second choice

            - Didn't pick either (error)

        - Next, make one of those branches a "continuation", and:

            - also put a binary choice within that branch

    - The player "wins" if they make both "correct" choices - one for the first choice, one for the second.

I recommend you look through each file in order to see how the program is built. Rather than copying and pasting the example, try to type it up yourself.

*/

void pushButton();
void noPush();

int main() {


string button;



    cout << "Welcome to The Big Red Button!" << endl;

    cout << "In this game, the contestant will be placed behind a podium with a large red button." << endl;

    cout << "There will be a prize or punishment hidden behind the curtain located to the rear of the contestant." << endl;

    cout << "The prizes and punishments vary week to week so you, the viewer will have to tune in every week to find out." << endl;

    cout << "This week: contestant Charley Baker will be standing behind that imposing podium." << endl;



    do {
             cout << "Charley, will you be the first contestant this month to press the big red button?" << endl;

                getline(cin, button);

            if (button == "yes" || button == "Yes" || button == "YES")
            {
                pushButton();
            }
            else if (button == "no" || button == "No" || button == "NO")
            {
                noPush();
            }
            else
            {
                cout << "Charley, we need you to say 'yes' or 'no'." << endl;

            }
        } while (button != "yes" && button != "Yes" && button != "YES" && button != "no" && button != "No" && button != "NO");

return 0;
}

void pushButton() {


    cout << "CHARLEY HAS CHOSEN TO PUSH THE BUTTON!" << endl;
    cout << "Charley has received $10,000 and a trip to Fiji today!" << endl;


}
void noPush() {


    cout << "Charley has decided not to push the button today..." << endl;
    cout << "Charley will always be wondering what he could have won today. Thanks for playing." << endl;

}
