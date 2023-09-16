#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

/*

CSC 134
M2HW1 Question 4 - Cheer Program
Brian M. Williams
09/16/2023

 - This program should output this message:
    Let's go FTCC
    Let's go FTCC
    Let's go FTCC
    Let's go Trojans

    - You should use the following variables in your cout statements:
        - string school, team;

    - Suggested Improvements
        - For bonus points, meet these additional constraints:
            - You can't print out any raw strings ("that look like this"), only string variables.
            - you can only use these string variables:
                - string letsGo, school, team, cheerOne, cheerTwo;
            - You must use string concatenation to build the strings cheerOne and cheerTwo . (String
              concatenation means to use the + operator.)
        - Create a program that prints out the output in the sample using these constraints.

*/

int main() {

    cout << "FTCC's Cheer Program" << endl;
    cout << "" << endl;

// String declarations:

    string letsGo = "Let's go";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + " " + school;
    string cheerTwo = letsGo + " " + team;

// End string declarations.

// Cheer output:

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;


return 0;
}
