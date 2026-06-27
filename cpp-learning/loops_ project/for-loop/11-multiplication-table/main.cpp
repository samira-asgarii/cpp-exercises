/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 11
Title: Multiplication Table
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int r, c;

    cout << "Enter rows : ";
    cin >> r ;
    cout << "Enter columns :";
    cin >> c ;

    for(int i = 1; i <=r; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
