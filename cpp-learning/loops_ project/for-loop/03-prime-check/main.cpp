/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 03
Title: Prime Number Check
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
