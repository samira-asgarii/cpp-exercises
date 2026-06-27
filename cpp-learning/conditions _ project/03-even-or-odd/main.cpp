/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 03
Title: Even or Odd Number
Description: Determine whether a number is even or odd.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
