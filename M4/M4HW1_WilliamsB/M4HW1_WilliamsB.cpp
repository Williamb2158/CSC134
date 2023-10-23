#include <iostream>
#include <iomanip>

using namespace std;

/*

CSC 134
M4HW1 - Multiplication Table *Gold 100/100*
Williams, Brian

 - Create a multiplication table for a user's input from (1 - 12). Use input validation to ensure
   user only enters a number from (1 - 12).

*/


int main()
{
    cout << "Multiplication table calculator:" << endl;
    cout << "This program will calculate the multiplicatiion values of your input from x1 to x12." << endl;
    cout << endl;

    int input = 0;
    bool done = false;

    cout << "Enter a number from 1 to 12." << endl;
    cout << endl;

    while (!done)
    {
        cin >> input;
        cout << endl;

        if (cin.fail())
        {
            cin.clear();
            string trash;
            cin >> trash;
            cout << "Please enter a valid value." << endl;
            cout << endl;
        }
        if (input < 1 || input > 12)
        {
            cin.clear();
            int trash;
            cin >> trash;
            cout << "Please only enter a value that is at least 1 and at most 12." << endl;
            cout << endl;
        }
        if (input >= 1 && input <= 12)
        {
            for (int i = 1; i < 13; i++)
            {
                int output = input * i;

                cout << input << " * " << setw(2) << i << " = " << setw(3) << output << endl;
            }

            done = true;

        }
    }








return 0;
}
