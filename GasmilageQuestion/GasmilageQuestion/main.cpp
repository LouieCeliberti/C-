// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
 CMPT101 HW1, Assignment1.cpp
 pURPOSE: Calculate the gas milage of a car
 Programmer: Louie Celiberti
 Date: 9/20/19
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double gallons_gas, miles;
    cout << "How many gallons of gas can your car hold?\n";
    cin >> gallons_gas;
    cout << "How many miles can you drive on a full tank?\n";
    cin >> miles;
    auto miles_per_gallon = miles / gallons_gas;
    cout << setprecision(2) << fixed << "Your car gets " << miles_per_gallon << " miles to the gallon" <<endl;
    return 0;
}
