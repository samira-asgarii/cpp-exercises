/*
Name: Samira
Course: C++ Programming
Topic: Conditions
Exercise: 04
Title: Largest of Three Numbers
Description: Find the largest number among three input numbers.
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a >= b && a >= c)
        cout << "Largest number = " << a;
    else if(b >= a && b >= c)
        cout << "Largest number = " << b;
    else
        cout << "Largest number = " << c;

    return 0;
}
