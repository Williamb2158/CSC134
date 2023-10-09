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


int main()
{
    const int num_days = 5;
    cout << "Part 1: Counting loop with for" << endl;
    //TODO

    cout << "Part 2: Count with while" << endl;
    //TODO: ask the user how many cars they saw
    // each day, then add them up

    int i = 0;
    while (i < num_days)
    {
        cout << "Day#" << i << endl;
        i = i + 1;
    }
}
