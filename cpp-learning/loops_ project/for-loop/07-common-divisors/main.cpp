/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 07
Title: Common Divisors
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a ;
    cout << "Enter second number: ";
    cin >> b ;
    int minNum;

    if(a < b)
        minNum = a;
    else
        minNum = b;

    for(int i = 1; i <= minNum; i++)
    {
        if(a % i == 0 && b % i == 0)
            cout << i << " ";
    }

    return 0;
}
