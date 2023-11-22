#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*
  CSC-134
  M6LAB2 - Vectors/Arrays
  Brian Williams

  Part 1
  Create an array containing 6 integers. Iterate through the array,       
  printing each value. When done, print the total of all the numbers.
  
  Part 2
  Instead of hard coding the array contents, use a loop and cin to let the 
  user enter the six values.
  
  Print: Each value, the total, the average, the maximum, and the minimum 
  values.
  
  Part 3 (Optional/Gold)
  Allow the user to choose how large the array should be. (They can pick 
  any size from 1 to 20.)
  
  Ensure the program works for different size arrays.
  
  Hint for Part 3
  resizing an array is tricky, but we can make an array size of, say, 20, 
  and then use a variable to only use part of the full size.

*/


int main() {
  /*
  cout << "M6LAB2" << endl;
  cout << "Part 1a: Arrays" << endl;
  int arr[] = {1, 2, 3, 4, 5, 6};
  
  int total = 0;
  for(int i = 0; i < 6; i++)
    {
      cout << arr[i] << endl;
      total += arr[i];
    }
  cout << "Total: " << total << endl;
  */
  cout << "Part 1b: Vectors" << endl;
  
  int num;
  bool numValue = false;
  cout << "Enter the size of the vector (from 1-20) you would like to use: ";
  while (numValue == false)
    {
      cin >> num;
      
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Only enter a value from 1 to 20." << endl;
      }
      else if (num < 1 || num > 20)
      {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Only enter a value from 1 to 20." << endl;
      }
      else
      {
        numValue = true;
      }
    }
  vector<int> numbers(num);
  
  for(int i = 0; i < num; i++)
    {
      cout << "Enter value " << i+1 << ": " << endl;
      bool enteredValue = false;
      while (enteredValue == false)
        {
          cin >> numbers[i];
          if (cin.fail())
          {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Only enter an integer number." << endl;
          }
          else
          {
            enteredValue = true;
          }
        }
      // add a umber to the vector
      numbers.push_back(i);
      //cout << "Added " << i << ", numbers is size=" << numbers.size() << endl;
    }
  // now print back everything in the vector
  cout << "numbers(" << num << ") = ";
  for(int i = 0; i < numbers.size(); i++)
    {
      cout << numbers[i] << " ";
    }
  cout << endl;

  // now find the total, average, min, and max of the dataset.
  auto min_number = min_element(numbers.begin(), numbers.end());
  auto max_number = max_element(numbers.begin(), numbers.end());
  int total = accumulate(numbers.begin(), numbers.end(), 0);
  double average = (double)total / numbers.size();
  cout << "Total sum of the dataset: " << total << endl;
  cout << "Average of the dataset: " << average << endl;
  cout << "Smallest Number: " << *min_number << endl;
  cout << "Largest Number: " << *max_number << endl;
}