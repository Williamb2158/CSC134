#include <iostream>

using namespace std;

/*
CSC 134
M5T1 - Basic Functions
Brian M. Williams
10/23/2023

    - Choose your own adventure game with multiple functions


*/

void main_menu();
void choice_front_door();
void choice_stoop();
void choice_find_key();
void choice_shed();
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
    cout << "1. Look around the stoop" << endl;
    cout << "2. Check around back" << endl;
    cout << "3. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_stoop();
    } else if (choice == "2") {
        choice_back_door();
    } else if (choice == "3") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }
}

void choice_stoop() {
    string choice;
    cout << "You see a window with a billowing curtain." << endl;
    cout << "There seems to be an orange light flickering faintly inside the room." << endl;
    cout << "A small pot is broken and spreading dirt on the step." << endl;
    cout << "There is a dead rose in the pot but the thorns still look sharp." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try to open the window" << endl;
    cout << "2. Dig into the pot" << endl;
    cout << "3. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        cout << "You jiggle the window and it starts to open with a quiet creak." << endl;
        cout << "The window opens enough to reach your arm inside." << endl;
        cout << "Red eyes fill your vision as you feel claws dig into your bicep." << endl;
        cout << "Your vision begins to blur and fade away..." << endl;
        cout << "The beast is satiated until next Halloween." << endl;
    } else if (choice == "2") {
        choice_find_key();
    } else if (choice == "3") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }

}

void choice_find_key() {
    string choice;
    cout << "You prick your arm on the thorns while lifting the pot." << endl;
    cout << "Small drops of blood fall into the dirt." << endl;
    cout << "Incredibly, the dirt begins to dissolve." << endl;
    cout << "You find a small silver key with faded writing." << endl;
    cout << "The key says: 'SHED'" << endl;
    cout << "Do you:" << endl;
    cout << "1. Try to open the shed" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    cin >> choice;
    if (choice == "1") {
        choice_shed();
    } else if (choice == "2") {
        choice_go_home();
    } else {
        cout << "You have to choose..." << endl;
        choice_front_door();
    }
}

void choice_shed() {
    cout << "You force the key into the lock of the shed." << endl;
    cout << "The lock almost seems to fight back, but you manage to turn the key." << endl;
    cout << "As the door opens you see an orange glow glimmering off of something shiny." << endl;
    cout << "A candle placed atop a workbench offers just enough light to see piles of jewelery and coins." << endl;
    cout << "While stuffing your pockets full, you can hear the door from the house begin to creak open." << endl;
    cout << "You run as fast as you can out the door of the shed." << endl;
    cout << "Weighed down by the vast riches in your pocket, you feel sluggish." << endl;
    cout << "Howls, as if by a wolf, seem to echo off of every tree." << endl;
    cout << "The sounds become faint, and you return to the edge of the city." << endl;
    cout << "Enjoy your newfound riches. You have survived Halloween night." << endl;
}

void choice_back_door() {
    cout << "You hear growls coming from inside the door." << endl;
    cout << "The door falls away into the house with a crash." << endl;
    cout << "You see a pair of red eyes almost hidden in what you can only assume is shaggy fur." << endl;
    cout << "You attempt to run but the galloping pads behind you get louder with each drop of your foot." << endl;
    cout << "Teeth sink into your left calf." << endl;
    cout << "Your face becomes one with the earth as you become wet with saliva." << endl;
    cout << "The beast is now satiated for another year." << endl;
    cout << "Hopefully it is left alone next Halloween." << endl;
}

void choice_go_home() {
    cout << "The cowards choice is often the safest." << endl;
    cout << "You are safe for another year, but you'll always wonder what you might have found." << endl;
}
