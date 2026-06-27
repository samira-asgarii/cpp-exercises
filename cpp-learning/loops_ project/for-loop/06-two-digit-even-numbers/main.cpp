/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 06
Title: Two Digit Even Numbers Less Than N
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 10; i < n; i++)
    {
        if(i % 2 == 0)
            cout << i << " ";
    }

    return 0;
}
