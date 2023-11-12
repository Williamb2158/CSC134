#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/*
CSC 134
M5HW1 - Gold
Brian M. Williams
11/10/2023
*/


void question1();
    // Function to calculate the average rainfall over the three months
    double averageRain(double rain1, double rain2, double rain3);

    // Functions to hold the month choices due to the large size when
    // validating input
    string monthOne(string month1);
    string monthTwo(string month1, string month2);
    string monthThree(string month1, string month2, string month3);
void question2();
void question3();
void question4();
  void q4Sq1();
  void q4Sq2();
  void q4Sq3();
void question5();


int main() {
 

  int questionChoice = -1;
  bool menuChoice = false;
  
  cout << "M5HW1 Question Menu:" << endl;
  cout << "____________________________________________________" << endl;
  cout << endl;
  cout << "Question 1: Rainfall calculator. Enter '1'" << endl;
  cout << endl;
  cout << "Question 2: Rectangular prism calculator. Enter '2'" << endl;
  cout << endl;
  cout << "Question 3: 1-10 Roman Numerals. Enter '3''" << endl;
  cout << endl;
  cout << "Question 4: Geometry calculator. Enter '4''" << endl;
  cout << endl;
  cout << "Question 5: Distance traveled calculator. Enter '5'" << endl;
  cout << endl;
  cout << "End Program: Enter '0'" << endl;
  cout << endl;

  while (menuChoice != true)
    {
      cout << "Enter your Main Menu choice now." << endl;
      cout << endl;
      cin >> questionChoice;
      cout << endl;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input.";
        cout << "Please enter a number between 0 and 5." << endl;
      }
      if (questionChoice < 0 || questionChoice > 5)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid input.";
        cout << "Please enter a number between 0 and 5." << endl;
      }
      switch (questionChoice)
        {
          case 1: 
            question1();
            break;
          case 2:
            question2();
            break;
          case 3:
            question3();
            break;
          case 4:
            question4();
            break;
          case 5:
            question5();
            break;
          case 0:
            cout << "Ending program." << endl;
            menuChoice = true;
            break;
        }
    }

 return 0; 
}

//All Programs and functions contained in question 1.----------------------------------------------
void question1()
{
  bool value1 = false;
  bool value2 = false;
  bool value3 = false;
  double rain1 = -1;
  double rain2 = -1;
  double rain3 = -1;
  string month1;
  string month2;
  string month3;
  double average;

  
  cout << "Question 1: Rainfall calculator." << endl;
  cout << endl;
  cout << "This program will calculate the average rainfall for";
  cout << " a three month period." << endl;
  cout << endl;

  cout << "Please enter the first month (Ex. 'March'): " << endl;
  cout << endl;
  month1 = monthOne(month1);

  cout << "Please enter the second month: " << endl;
  cout << endl;
  month2 = monthTwo(month1, month2);

  cout << "Please enter the third month: " << endl;
  cout << endl;

  month3 = monthThree(month1, month2, month3);

  cout << "Enter the amount of rain for " << month1 << endl;
  cout << endl;
  while (value1 != true) 
  {
    cin >> rain1;
    
    if (cin.fail())
    {
      cin.clear();
        cin.ignore(100, '\n');
      cout << "Error. Enter a valid number in inches for the amount of rainfall." << endl;
    }
    else if (rain1 < 0.0) 
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error. One of your values was less than 0 inches." << endl;
      cout << "Please re-enter the amount of rain in " << month1 << " ."
           << endl;
    }
    else
    {
      value1 = true;
    }
  }
  
  cout << "Enter the amount of rain for " << month2 << endl;
  cout << endl;
  while (value2 != true) 
  {
    cin >> rain2;
    
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error. Enter a valid number in inches for the amount of rainfall." << endl;
    }
    else if (rain2 < 0.0) 
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error. One of your values was less than 0 inches." << endl;
      cout << "Please re-enter the amount of rain in " << month1 << " ."
           << endl;
    }
    else
    {
      value2 = true;
    }
  }

  cout << "Enter the amount of rain for " << month3 << endl;
  cout << endl;
  while (value3 != true) 
  {
    cin >> rain3;
    
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error. Enter a valid number in inches for the amount of rainfall." << endl;
    }
    else if (rain3 < 0.0) 
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error. One of your values was less than 0 inches." << endl;
      cout << "Please re-enter the amount of rain in " << month1 << " ."
           << endl;
    }
    else
    {
      value3 = true;
    }
  }

  average = averageRain(rain1, rain2, rain3);

  cout << "The average rainfall over " << month1 << ", " << month2;
  cout << ", & " << month3 << " is: "<< average << endl;
  cout << " inche(s)."<< endl;
  cout << endl;
  cout << "Returning to Main Menu." << endl;
  cout << endl;

}

// Math for the average rainfall
double averageRain(double rain1, double rain2, double rain3) 
{
    double threeMoAve;
    double sum = rain1 + rain2 + rain3;
    threeMoAve = sum / 3;
  return threeMoAve;
}


// User input for first month (includes validation)
string monthOne(string month1) 
{
  bool monthChoice1 = false;
  while (monthChoice1 != true) 
  {
    cin >> month1;

    if (cin.fail()) {
      cout << "Please enter a valid month." << endl;
      cout << endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    if (month1 == "January" || month1 == "February" || month1 == "March" || month1 == "April" || month1 == "May" || month1 == "June" || month1 == "July" || month1 == "August" || month1 == "September" || month1 == "October" || month1 == "November" || month1 == "December") 
    {
      monthChoice1 = true;
    }
    else
    {
      cout << "Please enter a valid month (Make sure to";
      cout << " use an uppercase letter to begin the word)." << endl;
      cout << endl;
    }
  }
  return month1;
}

// User input for second month (includes validation)
string monthTwo(string month1, string month2) 
{
  bool monthChoice2 = false;
  while (monthChoice2 != true) 
  {
    cin >> month2;

    if (cin.fail()) 
    {
      cout << "Please enter a valid month." << endl;
      cout << endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    if (month2 != month1)
    {
          if (month2 == "January" || month2 == "February" || month2 == "March" || month2 == "April" || month2 == "May" || month2 == "June" || month2 == "July" || month2 == "August" || month2 == "September" || month2 == "October" || month2 == "November" || month2 == "December") 
          {
                monthChoice2 = true;
          }
    }
    else
    {
      cout << "Please enter a valid month (Make sure" << endl;
      cout << " to use an uppercase letter to begin the word)." << endl;
      cout << "Month 2 cannot be the same as month1." << endl;
      cout << endl;
    }
  }
  return month2;
}

// User input for third month (includes validation)
string monthThree(string month1, string month2, string month3) {
  bool monthChoice3 = false;
  while (monthChoice3 != true) 
  {
    cin >> month3;

    if (cin.fail())
    {
      cout << "Please enter a valid month." << endl;
      cout << endl;
      cin.clear();
      cin.ignore(100, '\n');
    }
    if (month3 != month2 && month3 != month1)
    {
          if (month3 == "January" || month3 == "February" || month3 == "March" || month3 == "April" || month3 == "May" || month3 == "June" || month3 == "July" || month3 == "August" || month3 == "September" || month3 == "October" || month3 == "November" || month3 == "December") 
          {
            monthChoice3 = true;
          }
    }
      else
      {
        cout << "Please enter a valid month (Make sure" << endl;
        cout << " to use an uppercase letter to begin the word)." << endl;
        cout << "Month 3 cannot be the same as month 2 or 1." << endl;
        cout << endl;
      }
  }
  return month3;
}
//End all Programs and functions contained in question 1.------------------------------------------

//All programs and functions contained in question 2.----------------------------------------------
void question2()
{
  cout << "Question 2: Rectangular Prism Calculator." << endl;
  cout << "_________________________________________________" << endl;
  cout << endl;

  double length, width, height = -1;
  double volume;
  bool lengthValue = false;
  bool widthValue = false;
  bool heightValue = false;
  
  cout << "Please enter the length (in inches) of the rectangular prism: ";
  while (lengthValue != true)
    {
      cin >> length;
      
      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (length <= 0.0)
        {
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Please enter a valid number greater than 0." << endl;
          cout << endl;
        }
      else 
        {
         lengthValue = true; 
        }
    }

  cout << "Please enter the width (in inches) of the rectangular prism: ";
  
  while (widthValue != true)
    {
      cin >> width;
      
      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (width <= 0.0)
        {
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Please enter a valid number greater than 0." << endl;
          cout << endl;
        }
      else 
        {
         widthValue = true; 
        }
    }

  cout << "Please enter the height (in inches) of the rectangular prism: ";

  while (heightValue != true)
    {
      cin >> height;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (height <= 0.0)
        {
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Please enter a valid number greater than 0." << endl;
          cout << endl;
        }
      else 
        {
         heightValue = true; 
        }
    }

  volume = length * width * height;

  cout << "The volume of the rectangular prism is " << volume << " cubic inches." << endl;
  cout << endl;
  cout << "Returning to Main Menu." << endl;
  cout << endl;
  
}
//End all Programs and functions contained in question 2.------------------------------------------



//All programs and functions contained in question 3.----------------------------------------------
void question3()
{
  int numeral = -1;
  bool value = false;
  cout << "Question 3: Roman Numeral Translator." << endl;
  cout << "_________________________________________________" << endl;
  cout << endl;

  cout << "This program will translate a number between 1 and 10 into";
  cout << " its Roman Numeral equivalent." << endl;
  cout << endl;

  cout << "Please enter a number between 1 and 10: " << endl;
  cout << endl;

  while (value != true)
    {
      cin >> numeral;
      
      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number from 1 to 10." << endl;
        cout << endl;
      }

      switch (numeral)
        {
          case 1:
            cout << "I" << endl;
            cout << endl;
            value = true;
            break;
          case 2:
            cout << "II" << endl;
            cout << endl;
            value = true;
            break;
          case 3:
            cout << "III" << endl;
            cout << endl;
            value = true;
            break;
          case 4:
            cout << "IV" << endl;
            cout << endl;
            value = true;
            break;
          case 5:
            cout << "V" << endl;
            cout << endl;
            value = true;
            break;
          case 6:
            cout << "VI" << endl;
            cout << endl;
            value = true;
            break;
          case 7:
            cout << "VII" << endl;
            cout << endl;
            value = true;
            break;
          case 8:
            cout << "VIII" << endl;
            cout << endl;
            value = true;
            break;
          case 9:
            cout << "IX" << endl;
            cout << endl;
            value = true;
            break;
          case 10:
            cout << "X" << endl;
            cout << endl;
            value = true;
            break;
          default:
            cout << "Please enter a valid number between 1 and 10." << endl;
            cout << endl;
            break;
        }
    }
  cout << "Returning to Main Menu." << endl;
  cout << endl;
}
//End all Programs and functions contained in question 3.------------------------------------------



//All programs and functions contained in question 4.----------------------------------------------

void question4()
{
  int subQuestion = -1;
  bool sQvalue = false;
  cout << "Question 4: Sub-Menu (Calculators)." << endl;
  cout << "_________________________________________" << endl;
  cout << endl;

  cout << "SubQuestion1: Area of a Circle. Enter '1'" << endl;
  cout << endl;
  cout << "SubQuestion2: Area of a Rectangle. Enter '2'" << endl;
  cout << endl;
  cout << "SubQuestion3: Area of a Triangle. Enter '3'" << endl;
  cout << endl;
  cout << "SubQuestion4: Quit. Enter '0'" << endl;
  cout << endl;
  cout << "Enter a number between 0 and 4 to choose a calculator: " << endl;
  cout << endl;

  while (sQvalue != true)
    {
      cin >> subQuestion;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number between 0 and 4." << endl;
      }
      switch (subQuestion)
      {
        case 1:
          q4Sq1();
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Enter a value from 1 to 3 for the area calculators." << endl;
          cout << "Enter 0 to return to Main Menu." << endl;
          cout << endl;
          break;
        case 2:
          q4Sq2();
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Enter a value from 1 to 3 for the area calculators." << endl;
          cout << "Enter 0 to return to Main Menu." << endl;
          cout << endl;
          break;
        case 3:
          q4Sq3();
          cin.clear();
          cin.ignore(100, '\n');
          cout << "Enter a value from 1 to 3 for the area calculators." << endl;
          cout << "Enter 0 to return to Main Menu." << endl;
          cout << endl;
          break;
        case 0:
          {
            cout << "Returning to Main Menu." << endl;
            cout << endl;
            sQvalue = true;
            break;
          }
        default:
          {
            break;
          }
      }
    }
}

void q4Sq1()
{
  double radius = -1;
  double area;
  bool rvalue = false;
  cout << "Q4 SubQ1: Circular Area Calculator." << endl;
  cout << endl;

  cout << "Enter the radius (in inches) of the circle: " << endl;
  cout << endl;

  while (rvalue != true)
    {
      cin >> radius;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (radius <= 0.0)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Enter a value for the radius greater than 0." << endl;
        cout << endl;
      }
      else
      {
        area = M_PI * pow(radius, 2.0);
        rvalue = true;
      }
    }
  cout << "The area of the circle is " << area << " inches squared." << endl;
  cout << endl;
  cout << "Returning to Q4 Sub-Menu." << endl;
}

void q4Sq2()
{
  double length, width = -1;
  double area;
  bool lvalue = false;
  bool wvalue = false;
  cout << "Q4 SubQ2: Rectangle Area Calculator." << endl;
  cout << endl;

  cout << "Enter the length (in inches) of the rectangle: " << endl;
  cout << endl;

  while (lvalue != true)
    {
      cin >> length;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (length <= 0.0)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a value for length greater than 0." << endl;
        cout << endl;
      }
      else
      {
        lvalue = true;
      }
    }

  cout << "Enter the width (in inches) of the rectangle: " << endl;
  cout << endl;

  while (wvalue != true)
  {
    cin >> width;

    if (cin.fail())
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Please enter a valid number." << endl;
      cout << endl;
    }
    else if (width <= 0.0)
    {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Please enter a value for width greater than 0." << endl;
      cout << endl;
    }
    else
    {
      wvalue = true;
    }
  }

  area = length * width;
  cout << "The area of the rectangle is " << area << " inches squared." << endl;
  cout << endl;

  cout << "Returning to Q4 Sub-Menu." << endl;
}

void q4Sq3()
{
  double base, height = -1;
  double area;
  bool bvalue = false;
  bool hvalue = false;

  cout << "Q4 SubQ3: Triangle Area Calculator." << endl;
  cout << endl;

  cout << "Enter the length of the base (in inches) of the triangle: " << endl;
  cout << endl;

  while (bvalue != true)
    {
      cin >> base;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (base <= 0.0)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a value for the base greater than 0." << endl;
        cout << endl;
      }
      else
      {
        bvalue = true;
      }
    }
  cout << "Enter the height (in inches) of the triangle: " << endl;
  cout << endl;

  while (hvalue != true)
    {
      cin >> height;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (height <= 0.0)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a value for the height greater than 0." << endl;
        cout << endl;
      }
      else
      {
        hvalue = true;
      }
    }

  area = (base * height) / 2.0;

  cout << "The area of the triangle is " << area << " inches squared." << endl;
  cout << endl;
  
  cout << "Returning to Q4 Sub-Menu." << endl;
}

//End all Programs and functions contained in question 4.------------------------------------------



//All programs and functions contained in question 5.----------------------------------------------
void question5()
{
  int speed = -1; // mph
  int time = -1; // hours
  double distance;
  bool svalue = false;
  bool tvalue = false;
  cout << "Question 5: Distance Calculator." << endl;
  cout << "_________________________________" << endl;
  cout << endl;

  cout << "Enter the speed of the vehicle (in mph): " << endl;
  cout << endl;

  while (svalue != true)
    {
      cin >> speed;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (speed < 0)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a value for speed greater than or equal to 0." << endl;
        cout << endl;
      }
      else
      {
        svalue = true;
      }
    }

  cout << "Enter the number of hours (min 1hr) the vehicle has traveled: " << endl;
  cout << endl;

  while (tvalue != true)
    {
      cin >> time;

      if (cin.fail())
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a valid number." << endl;
        cout << endl;
      }
      else if (time < 1)
      {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter a value for time greater than or equal to 1." << endl;
        cout << endl;
      }
      else
      {
        tvalue = true;
      }
    }

  cout << "The speed of the vehicle is: " << speed << " mph." << endl;
  cout << "The total time traveled is: " << time << " hours." << endl;
  cout << "_________________________________________________________________" << endl;
  cout << "Hour(s)           Distance Traveled" << endl;
  cout << endl;
  for (int i = 0 ; i < time ; i++)
    {
      distance = speed * (i + 1);
      cout << " " << (i + 1) << setw(18) << " ";
      cout << distance << "miles"<< endl;
      cout << endl;
    }
}
//End all Programs and functions contained in question 5.------------------------------------------