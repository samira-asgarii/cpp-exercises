/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 05
Title: Day of Week by Number
Description: Display the day of the week based on a number from 1 to 7.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "Enter a number : ";
    cin >> day;

    if(day == 1)
        cout << "Saturday";
    else if(day == 2)
        cout << "Sunday";
    else if(day == 3)
        cout << "Monday";
    else if(day == 4)
        cout << "Tuesday";
    else if(day == 5)
        cout << "Wednesday";
    else if(day == 6)
        cout << "Thursday";
    else if(day == 7)
        cout << "Friday";
    else
        cout << "Invalid number";

    return 0;
}
