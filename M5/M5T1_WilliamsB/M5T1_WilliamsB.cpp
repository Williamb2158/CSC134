#include <iostream>

using namespace std;

/*
CSC 134
M5T1 - Basic Functions
Brian M. Williams
10/23/2023

    -


*/

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

int main()
{
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    string choice;
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_front_door();
    } else if (choice == "2") {
        choice_back_door();
    } else if (choice == "3") {
        choice_go_home();
    } else if (choice == "4") {
        cout << "Ok, quitting game" << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        main_menu();
    }
}

void choice_front_door() {
    string choice;
    cout << "Try the front door." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_back_door();
    } else if (choice == "2") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }
}

void choice_back_door() {
    cout << "TODO: Write something here" << endl;
}

void choice_go_home() {
    cout << "TODO: Write something here" << endl;

}
