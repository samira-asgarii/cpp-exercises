/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 07
Title: Student Grade Status
Description: Determine the student's status based on the grade.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    float grade;

    cout << "Enter grade: ";
    cin >> grade;

    if(grade >= 18 && grade <= 20)
        cout << "A";
    else if(grade >= 16 && grade < 18)
        cout << "B";
    else if(grade >= 14 && grade < 16)
        cout << "C";
    else
        cout << "No Status";

    return 0;
}
