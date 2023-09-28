#include <iostream>
#include <iomanip>
#include <string>
#include <optional>
#include <cctype>

using namespace std;

/*

CSC134
M3LAB3 - Percent to letter grade converter
Brian M. Williams
09/27/2023

*/


int main()
{
    cout << "Percent grade to letter grade converter." << endl;
    cout << "" << endl;
//Minimum grade values for each letter grade section
    const int aGradeMin = 90;
    const int bGradeMin = 80;
    const int cGradeMin = 70;
    const int dGradeMin = 60;
//End letter grade values

//Variable declarations for user inputs.
    //percentageNumber will take the user's direct input
    //percentage grade will take the user's input after error checking to ensure integer values are the only entries
    string percentageNumber = "A";
    string letterGrade;
    int percentageGrade = 0;
//End user input variable declarations

//The check integer will be used to error check the user's entered values using isdigit in a for() loop
    int check;
//End Check integer


//Ask for user input:
    cout << "Please enter the percentage grade you received as an integer without letters or symbols: " << endl;
    cout << "" << endl;
//End question for user input

//Begin do-while loop to ensure the user will receive a letter grade (after error checking the input)
    do
    {
        // Receive user input
        getline(cin, percentageNumber);
        cout << "" << endl;
        //End user input

            //Begin for() loop, checking each entered character is an integer value
            for (int i = 0; i < percentageNumber.size(); i++)
            {
                check = isdigit(percentageNumber[i]);

                if (check)
                {
                    percentageGrade = stoi (percentageNumber);
                }
                else
                {
                    cout << "Please enter a numerical value." << endl;
                    cout << "" << endl;
                    cin.clear();
                    percentageGrade = -1;
                    break;
                }
            }
            //End for() loop

            //Check "percentageGrade" integer value against letterGrade table with if, else if statements
            if (percentageGrade >= aGradeMin)
            {
                letterGrade = "A";
            }
            else if (percentageGrade >= bGradeMin)
            {
                letterGrade = "B";
            }
            else if (percentageGrade >= cGradeMin)
            {
                letterGrade = "C";
            }
            else if (percentageGrade >= dGradeMin)
            {
                letterGrade = "D";
            }
            else
            {
                letterGrade = "F";
            }
            //End letterGrade check

    } while ((percentageGrade < 0) || (percentageGrade > 150));
//End do-while loop if the entered value is an integer, repeat if not integer

//Serve user the letterGrade answer for entered percentNumber value
    cout << "A grade of " << percentageGrade << " is " << letterGrade << endl;
//No more program

return 0;
}
