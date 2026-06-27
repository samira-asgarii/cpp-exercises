/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 08
Title: Even Or Odd Between Two Numbers
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char choice;

    cout << "Enter first number: ";
    cin >> a ;
    cout << "Enter second number: ";
    cin >> b ;

    cout << "Enter E for Even or O for Odd: ";
    cin >> choice;

    for(int i = a; i <= b; i++)
    {
        if(choice == 'E' || choice == 'e')
        {
            if(i % 2 == 0)
                cout << i << " ";
        }
        else if(choice == 'O' || choice == 'o')
        {
            if(i % 2 != 0)
                cout << i << " ";
        }
    }

    return 0;
}
