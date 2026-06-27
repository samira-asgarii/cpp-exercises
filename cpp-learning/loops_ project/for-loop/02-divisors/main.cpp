/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 02
Title: Divisors of a Number
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
