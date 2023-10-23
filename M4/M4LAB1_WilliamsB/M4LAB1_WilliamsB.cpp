#include <iostream>

using namespace std;

/*

CSC 134
M4LAB1 - Using loops to create an asterisk block
Williams, Brian

    - For this assignment, the task is to draw a block of asterisks. It should look like this (example is 5 by 5):

      -  * * * * *
         * * * * *
         * * * * *
         * * * * *
         * * * * *

         - use nested for() loops to create the rows and columns

*/


int main()
{
    cout << "This program will create a block of asterisks using nested for() loops." << endl;

    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

return 0;
}
