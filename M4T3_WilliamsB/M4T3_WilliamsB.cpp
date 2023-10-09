#include <iostream>

using namespace std;

/*
CSC 134
M4T3 -
Brian M. Williams
10/09/2023

Tasks:
For Loop: Write a program that utilizes a for loop to prompt the user to enter NUM_ITEMS numbers. Sum up the numbers entered by the user and calculate the average. Output both the sum and the average.

While Loop: Similar to the first task, write a program that uses a while loop to achieve the same results. Again, the loop should prompt the user for NUM_ITEMS numbers, sum them, and compute the average.

Sentinel-Controlled While Loop: Write a program that uses a while loop to gather numbers from the user until the sentinel value (-1) is entered. Calculate the sum and average of the numbers and output the results.

Requirements:
The constant NUM_ITEMS should be used as a loop control for Tasks 1 and 2.
Proper input and output statements should be used for user interaction.
The code must be properly indented and commented.

*/

void part1();
void part2();
void part3();
int main()
{
    string part_selection = "";


   while (!cin.fail())
   {
       cout << "Press 1 for Part 1, 2 for Part 2, or any other key for Part 3. Press any other key to quit." << endl;
       getline(cin, part_selection);

        if (part_selection == "1")
        {
            part1();
        }
        else if (part_selection == "2")
        {
            part2();
        }
        else if (part_selection == "3")
        {
            part3();
        }
        else
        {
            break;
        }

   }

return 0;
}

void part1()
{
    cout << "Part 1:(Using For Loop) Counting the number of cars seen over five days and find the average number of cars seen per day." << endl;

    int number_days = 5;
    int cars_that_day;
    int total_cars = 0;
    for (int i = 1; i <= number_days; i++)
    {
        cout << "Enter the number of cars you saw on day#" << i << endl;
        cin >> cars_that_day;

        if (!cin.fail())
        {
            total_cars += cars_that_day;
        }
        else
        {
            cin.clear();
            string trash;
            cin >> trash;
            i--;
            cout << "Please enter a number that is zero or larger." << endl;
        }
    }

    double average_cars_per_day = (double) total_cars / number_days;

        cout << "The total number of cars seen was: " << total_cars << endl;
        cout << endl;
        cout << "The average number of cars seen per day was: " << average_cars_per_day << endl;
}
void part2()
{
    cout << "Part 2:(Using While Loop) Counting the number of cars seen over five days and find the average number of cars seen per day." << endl;

    int number_days = 5;
    int cars_that_day;
    int total_cars = 0;
    double average_cars_per_day = 0.0;
    string quit;

    int i = 1;
    while (i <= number_days)
    {
        cout << "Enter the number of cars you saw on Day#" << i << endl;
        cin >> cars_that_day;

        if (!cin.fail())
        {
            total_cars += cars_that_day;
            i++;
        }
        else
        {
            cin.clear();
            string trash;
            cin >> trash;
            cout << "Please enter a number that is zero or larger." << endl;
        }
    }

        average_cars_per_day = (double) total_cars / number_days;

        cout << "The total number of cars seen was: " << total_cars << endl;
        cout << endl;
        cout << "The average number of cars seen per day was: " << average_cars_per_day << endl;

}

void part3()
{
    cout << "Part 3:(Sentinel Controlled Loop) Gathers numbers from the user until sentinel value (-1) is " << endl;
    cout << "entered. Calculate the sum and average of numbers." << endl;
    cout << endl;

    int user_entry;
    int total_of_entries = 0;
    double average_of_entries = 0.0;
    int number_of_entries = 0;
    bool done = false;
    cout << "Enter a group of numbers, hitting the enter key after each number, and entering -1 to stop adding numbers." << endl;

    while (!done)
    {
        cin >> user_entry;

        if (!cin.fail() && user_entry != -1)
        {
            number_of_entries++;
            total_of_entries += user_entry;
        }
        else if (user_entry == -1)
        {
            cout << "Program finished. Now calculating the total and average." << endl;
            done = true;
        }
        else
        {
            cin.clear();
            string trash;
            cin >> trash;
            cout << "Please enter an integer value to be added to the group of numbers or -1 to quit." << endl;
        }
    }

    average_of_entries = (double) total_of_entries / number_of_entries;

    cout << "The total sum of your entered values equals: " << total_of_entries << endl;
    cout << endl;
    cout << "The average of your entered values equals: " << average_of_entries << endl;

}

