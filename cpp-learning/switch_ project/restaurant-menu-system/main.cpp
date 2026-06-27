/*
Name: Samira Asgari
Course: C++ Programming
Topic: Nested Switch Case
Exercise: 03
Title: Restaurant Billing System
Date: 2026
*/

#include <iostream>
using namespace std;

int main()
{
    int item;
    char choice;

    string food = "None";
    string drink = "None";
    string dessert = "None";

    int foodPrice = 0;
    int drinkPrice = 0;
    int dessertPrice = 0;

    cout << "===== Welcome To our Restaurant =====" << endl;

    // Food Section
    cout << "\nDo you want food? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "\n--- Food Menu ---" << endl;
        cout << "1. Koobideh Kebab  (250)" << endl;
        cout << "2. Joojeh Kebab    (300)" << endl;
        cout << "3. Ghorme Sabzi    (220)" << endl;
        cout << "Choose your food: ";
        cin >> item;

        switch(item)
        {
            case 1:
                food = "Koobideh Kebab";
                foodPrice = 250;
                break;

            case 2:
                food = "Joojeh Kebab";
                foodPrice = 300;
                break;

            case 3:
                food = "Ghorme Sabzi";
                foodPrice = 220;
                break;

            default:
                cout << "Invalid Food!" << endl;
        }
    }

    // Drink Section
    cout << "\nDo you want a drink? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "\n--- Drinks Menu ---" << endl;
        cout << "1. Doogh     (50)" << endl;
        cout << "2. Soda      (40)" << endl;
        cout << "3. Delester  (60)" << endl;
        cout << "Choose your drink: ";
        cin >> item;

        switch(item)
        {
            case 1:
                drink = "Doogh";
                drinkPrice = 50;
                break;

            case 2:
                drink = "Soda";
                drinkPrice = 40;
                break;

            case 3:
                drink = "Delester";
                drinkPrice = 60;
                break;

            default:
                cout << "Invalid Drink!" << endl;
        }
    }

    // Dessert Section
    cout << "\nDo you want dessert? (y/n): ";
    cin >> choice;

    if(choice == 'y' || choice == 'Y')
    {
        cout << "\n--- Dessert Menu ---" << endl;
        cout << "1. Jelly      (70)" << endl;
        cout << "2. Cake       (90)" << endl;
        cout << "3. Ice Cream  (80)" << endl;
        cout << "Choose your dessert: ";
        cin >> item;

        switch(item)
        {
            case 1:
                dessert = "Jelly";
                dessertPrice = 70;
                break;

            case 2:
                dessert = "Cake";
                dessertPrice = 90;
                break;

            case 3:
                dessert = "Ice Cream";
                dessertPrice = 80;
                break;

            default:
                cout << "Invalid Dessert!" << endl;
        }
    }

    int total = foodPrice + drinkPrice + dessertPrice;

    cout << "\n========== INVOICE ==========" << endl;

    cout << "Food    : " << food
         << " (" << foodPrice << ")" << endl;

    cout << "Drink   : " << drink
         << " (" << drinkPrice << ")" << endl;

    cout << "Dessert : " << dessert
         << " (" << dessertPrice << ")" << endl;

    cout << "-----------------------------" << endl;
    cout << "Total Price = " << total << endl;

    return 0;
}
