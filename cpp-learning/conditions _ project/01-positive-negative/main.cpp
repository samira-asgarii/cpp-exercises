/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 02
Title: Positive, Negative or Zero
Description: Determine whether a number is positive, negative, or zero.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num > 0)
        cout << "Positive";
    else if(num < 0)
        cout << "Negative";
    else
        cout << "Zero";

    return 0;
}
