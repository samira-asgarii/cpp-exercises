/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 06
Title: Day Number by Name
Description: Display the number of the week day based on its name.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    string day;

    cout << "Enter day name: ";
    cin >> day;

    if(day == "Saturday")
        cout << "1";
    else if(day == "Sunday")
        cout << "2";
    else if(day == "Monday")
        cout << "3";
    else if(day == "Tuesday")
        cout << "4";
    else if(day == "Wednesday")
        cout << "5";
    else if(day == "Thursday")
        cout << "6";
    else if(day == "Friday")
        cout << "7";
    else
        cout << "Invalid day";

    return 0;
}
