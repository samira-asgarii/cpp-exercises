/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 10
Title: Decimal To Binary
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int binary[32];
    int i = 0;

    cout << "Enter a decimal number: ";
    cin >> n;

    for( ; n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }

    return 0;
}
