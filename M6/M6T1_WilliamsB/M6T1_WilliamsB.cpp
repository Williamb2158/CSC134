#include <iostream>
#include <vector>
using namespace std;

/*
  CSC 134
  M6T1 - Five Nights at For Loops
  WilliamsB
  11/13/2023
*/

void array_version() {
// allocate memory for five nights
  const int NIGHTS = 5;
  int bears[NIGHTS];
  
// Get the data
  cout << "Enter observation data for each night." << endl;

  for (int night = 0; night < NIGHTS; night++)
    {
      cout << "Night " << night << ": ";
      int tonights_bears;
      cin >> tonights_bears;
      //set tonight's bear count to the user entry
      bears[night] = tonights_bears;
    }

  cout << "____________"<< endl << endl;
// Print the data
  for (int night = 0; night < NIGHTS; night++)
    {
      cout << "Night " << night << ": " << bears[night] << " bears spotted." << endl;
    }
}

int main()
{
//array_version();// if you want to run both
//version using vectors

  //Allocate Vector(requires #include <vector>)
  const int NIGHTS = 5;
  vector<int> bears(NIGHTS, 0); //5 NIGHTS, 0 each
  for (int nights = 0; nights<NIGHTS; nights++)
    {
      cout << "Night " << nights+1 << ": ";
      cin >> bears[nights];
    }
  
  cout << "____________"<< endl << endl;
  
    for (int nights = 0; nights < NIGHTS; nights++)
      {
        cout << "Night " << nights+1 << ": " << bears[nights] << " bears spotted." << endl;
      }
}