#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>

using namespace std;

/*

CSC 134
M3HW1 - Bonus(Max 110/110)
Brian M. Williams
09/25/2023

*/

void question1();
void question2();
//void question3();
//void question4();

int main()
{

    cout << "M3HW1 Menu" << endl;
    cout << "" << endl;

        cout << "Which question are we jumping to?" << endl;
        cout << "" << endl;

        //Declare question selection string:
        string choice;

            cout << "Question 1" << endl;
            cout << "" << endl;

            cout << "Question 2" << endl;
            cout << "" << endl;

            cout << "Question 3" << endl;
            cout << "" << endl;

            cout << "Question 4" << endl;
            cout << "" << endl;

            cout << "Please hit 1, 2, 3, or 4." << endl;
            cout << "" << endl;

// Application of user choice:
        do
        {
            getline(cin, choice);
            cout << "" << endl;

                if (cin.fail())
                {
                    cout << "Error: User selection failed. Please enter one of the previous selections listed above." << endl;
                    cout << "" << endl;
                }
                else if (choice == "1")
                {
                    question1();
                }
                else if (choice == "2")
                {
                    question2();
                }
                /*else if (choice == "3")
                {
                    question3();
                }
                else if (choice == "4")
                {
                    question4();
                }
                */
                else
                {
                    cout << "Please only enter one of the previous selections listed above." << endl;
                    cout << "" << endl;
                }

        } while (choice != "1" && choice != "2" && choice != "3" && choice != "4");

// End application of user choice.

return 0;
}

void question1()
{
    cout << "Question 1: Simple Chatbot" << endl;
    cout << "" << endl;

    // Declare string for chatbot use:
    string likeBot;

        cout << "Hello, I'm a C++ program!" << endl;
        cout << "Do you like me? Please type yes or no." << endl;

        getline(cin, likeBot);
        cout << "" << endl;

        if (cin.fail())
        {
            cout << "Error: please make a valid entry." << endl;
        }
        else if (likeBot == "yes")
        {
            cout << "That's great! I'm sure we'll get along." << endl;
        }
        else if (likeBot == "no")
        {
            cout << "Well, maybe you'll learn to like me later." << endl;
        }
        else
        {
            cout << "If you're not sure... that's OK." << endl;
        }
}

void question2()
{
    cout << "Question 2: Advanced functionality receipt calculator" << endl;
    cout << "" << endl;

   // Declare meal variables
    double mealPrice;
    int takeAway;
    double taxRate = 0.08;


        cout << "Please enter the price of your meal." << endl;
        cout << "" << endl;

        cin >> mealPrice;
        cout << "" << endl;

    double amountTax = mealPrice * taxRate;
    double totalPrice = mealPrice + amountTax;

        cout << "Please enter '1' if you will be dining in today, and enter '2' if you will be ordering takeaway." << endl;
        cout << "" << endl;

        cin >> takeAway;
        cout << "" << endl;

    do {
            if (cin.fail())
            {
                cout << "Error: Please try again." << endl;
                cout << "" << endl;
            }
            else if (takeAway == 1)
            {
                double tipRate = 0.15;
                double amountTip = mealPrice * tipRate;
                double totalPrice = mealPrice + (mealPrice * tipRate) + (mealPrice * taxRate);

                    cout << "Meal Price:  " << setw(10) << fixed << setprecision(2) << mealPrice << endl;
                    cout << "Tip (15%):   " << setw(10) << fixed << setprecision(2) << amountTip << endl;
                    cout << "Tax (08%):   " << setw(10) << fixed << setprecision(2) << amountTax << endl;
                    cout << "_______________________" << endl;
                    cout << "Total Price: " << setw(10) << fixed << setprecision(2) << totalPrice << endl;

            }
            else if (takeAway == 2)
            {
                cout << "Meal Price:  " << setw(10) << "$" << fixed << setprecision(2) << mealPrice << endl;
                cout << "Tax (08%):   " << setw(10) << "$" << fixed << setprecision(2) << amountTax << endl;
                cout << "_______________________" << endl;
                cout << "Total Price: " << setw(10) << "$" << fixed << setprecision(2) << totalPrice << endl;
            }
            else
            {
                cout << "Please enter '1' or '2' for your takeaway selection value." << endl;
                cout << "" << endl;
            }
       } while (takeAway != 1 && takeAway != 2);
}
