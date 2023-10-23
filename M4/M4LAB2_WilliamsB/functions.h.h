#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iomanip>
#include <functional>
#include <cstdlib>
#include <ctime>
using namespace std;
// This is what header files look like

// Include any necessary libraries or headers here

// Function declarations go here


//Start Dice Roller
void counting_test()
{
  cout << "This is the Counting Test." << endl;
  cout << endl;
  
    int i = 0;
    while (i < 10)
    {
        cout << i << " " << endl;
        i++;
    }
  cout << endl;
}
// End of Counting Test

//-------------------------------------------------------------

//Start Dice Roller
void dice_roller()
{
  cout << "This is the Dice Roller." << endl;
  cout << endl;

  int luckyNum;
  int firstD6;
  int secondD6;
  int thirdD6;
  int total = 0;
  bool done = false;
  
  cout << "Enter your lucky number to roll 3D6: ";

  while (!done)
  {
    cin >> luckyNum;
    cout << endl;

      if (cin.fail())
      {
        cin.clear();
        string trash;
        cin >> trash;
        cout << "Please enter only your lucky number." << endl;
        cout << endl;
      }
      else
      {
        srand((unsigned) time(0));
      
           for (int index = 0; index < 10; index++) 
           {
              firstD6 = (rand() % 6) + 1;
              secondD6 = (rand() % 6) + 1;
              thirdD6 = (rand() % 6) + 1;
           }
          
            total = firstD6 + secondD6 + thirdD6;
  
            done = true;
      }
     
  }

  cout << "You rolled: " << firstD6 << ", " << secondD6 << ", and "           << thirdD6 << "." << endl;
  cout << endl;
  cout << "Your total was: " << total << "." << endl;
  cout << endl;
}
// End of Dice Roller

//-------------------------------------------------------------

// Start Total_Average
void total_average()
{
  cout << "Running total and average" << endl;

  int total = 0;
  srand((unsigned) time(0));

  for (int i = 0; i < 10; i++)
    {
      int first = (rand() % 6) + 1;
      int second = (rand() % 6) + 1;
      int third = (rand() % 6) + 1;
      int roll_total = first + second + third;

      total += roll_total;
    }

  float average = static_cast<float>(total) / 10;

  cout << "Total: " << total << endl;
  cout << "Average: " << average << endl;

  cout << endl;
}
// End of Total_Average

//-------------------------------------------------------------

#endif // FUNCTIONS_H