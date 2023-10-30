#include <iostream>
using namespace std;

/*
  M5T2 - Void functions and value returning functions
  CSC 134
  Williams, Brian
  10/30/2023
*/
// List all functions here:
int square(int num);
int add(int first, int second);
void print_answer_line(int num, int num_squared);

int main() {
  
  cout << "M5T2: Using Multiple Functions" << endl;
  int num = 10;
  cout << num << " squared is: " << square(num) << endl;

  cout << "2+3 = " << add(2,3) << endl;
  
  //We'll print out the squares of the numbers: 1-10
  cout << "Number\tSquared" << endl;
  for (int num=1; num <= 10; num++)
    {
      print_answer_line(num, square(num));
    }
  
  
}
// Write the functions here:

//a square function that takes an int, and returns the square of that int.
int square(int num) {
    return num * num;
}

// add() takes two ints, returns the sum
int add(int first, int second) {
  int answer = first + second;
  return answer;
}

void print_answer_line(int num, int num_squared) {
  cout << num << "\t\t" << num_squared << endl;
}