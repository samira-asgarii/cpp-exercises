/*
Name: Samira
Course: C++ Programming
Topic: For Loop
Exercise: 09
Title: Sum And Largest Number
Date: 2026
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    int largest = 0;

    for( ; ; )
    {
        cout << "Enter a number (0 to stop): ";
        cin >> num;

        if(num == 0)
            break;

        sum += num;

        if(num > largest)
            largest = num;
    }

    cout << "Sum = " << sum << endl;
    cout << "Largest = " << largest;

    return 0;
}
