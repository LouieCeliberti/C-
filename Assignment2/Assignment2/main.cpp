//
//  main.cpp
//  Assignment2
//
//  Created by Louiem Celiberti on 9/8/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

/*
 CMPT101 HW1, Assignment1.cpp
 pURPOSE: Calculate the monetary value of the coins the user has
 Programmer: Louie Celiberti
 Date: 9/3/19
 */

#include <iostream>
using namespace std;

int main() {
    
    int quarter, dime, nickel, penny, monetaryvalue; // declared five variables for each coin and total
    cout << "How many quarters do you have? \n"; // prints how many quarters the user has
    cin >> quarter;                    // input of user for how many quarters they have
    cout << "How many dimes do you have? \n"; // prints how many dimes the user has
    cin >> dime;                       // input of user for how many dimes they have
    cout << "How many nickels do you have? \n"; // prints how many nickels the user has
    cin >> nickel;                     // input of user for how many nickels they have
    cout << "How many pennies do you have? \n"; // prints how many pennies the user has
    cin >> penny;                      // input of user for how many pennies they have
    
    monetaryvalue = (quarter * 25) + (dime * 10) + (nickel * 5) + (penny * 1); // alll values added up to get total number of cents user has
    
    cout << "The monetary value of these coins are: " << monetaryvalue << " cents \n"; // prints the total number of coins user has
    return 0;
}
