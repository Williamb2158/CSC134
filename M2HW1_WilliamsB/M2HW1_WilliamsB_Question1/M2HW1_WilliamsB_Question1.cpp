#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

/*

CSC 134
M2HW1 - Question 1
Brian M. Williams
09/16/2023

Question 1:
 - Write a program that simulates banking transactions:
    - Ask user for their name
        - Ask user for the following information (all units in dollars)
            - Starting account balance
            - Amount of deposit
            - Amount of withdrawal
        - The program should then display the following information:
            - Name on the account
            - Account number ( you can generate this any way you see fit -- a number you pick, or a random number, for example )
            - Final account balance.
*/

int main() {

    cout << "Question 1:" << endl;
    cout << "" << endl;


    string fname;
    string lname;
    double starting_account_balance;
    double amount_deposited;
    double amount_withdrawn;

    cout << "Please enter your first name." << endl;
    getline(cin, fname);
    cout << "" << endl;
    cout << "Please enter your last name." << endl;
    getline(cin, lname);
    cout << "" << endl;

    // Account Number Generator to follow:

    char startAcctNumChar = fname[0];
    int startAcctNumValue = startAcctNumChar;
    string startAcctNum = to_string(startAcctNumValue);

    char midAcctNumChar = lname[0];
    int midAcctNumValue = midAcctNumChar;
    string midAcctNum = to_string(midAcctNumValue);

    const int primeMult = 433;
    int genAcctNumValue = (primeMult * startAcctNumValue * midAcctNumValue) / pow(10, 3);
    string genAcctNum = to_string(genAcctNumValue);

            // "Bank" Account Number always ends in 6856
    int bankNumFinalVal = 6856;
    string bankNumFinal = to_string(bankNumFinalVal);

    string userBankAccountNum = startAcctNum + midAcctNum + genAcctNum + bankNumFinal;

    // End Account Number Generator.

    cout << "Please enter your starting account balance." << endl;
    cout << "Example: 5345.56" << endl;
    cout << "" << endl;
    cin >> starting_account_balance;
    cout << "" << endl;

    cout << "Please enter the amount you would like to deposit today." << endl;
    cout << "Example: 125.00" << endl;
    cout << "" << endl;
    cin >> amount_deposited;
    cout << "" << endl;

    cout << "Please enter the amount you would like to withdraw today." << endl;
    cout << "Example: 60.00" << endl;
    cout << "" << endl;
    cin >> amount_withdrawn;
    cout << "" << endl;

    // Computation for account balance to follow:

    double account_balance = starting_account_balance + amount_deposited - amount_withdrawn;

    // End account balance computation.

    cout << "_________________________________________________________" << endl;

    cout << "Welcome, " << fname << " " << lname << "!" << endl;
    cout << "Your account number is: " << userBankAccountNum << endl;
    cout << "Your account balance is: $" << fixed << setprecision(2) << account_balance << endl;

return 0;
}
