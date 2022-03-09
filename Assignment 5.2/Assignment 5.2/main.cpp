//
//  main.cpp
//  Assignment 5.2
//
//  Created by Louie m Celiberti on 10/28/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

/*
CMPT101 HW1, Assignment1.cpp
purpose: Return nthe sum of the given inputs
Programmer: Louie Celiberti
Date: 10/28/19
*/

#include<iostream>
using namespace std;
int main ()
{

    int number, numberitems, count = 0, sum = 0; // counter and sum set to zero
    double average;
    cout << "Enter number of items: \n";
    cin >> numberitems; // input of how many numbers there will be
    
    // beginning of loop
    while(count<=numberitems)
    {
        count++;        // iteration
        cout << "Enter number: \n";
        cin >> number; // input number
        sum = sum + number;
        average = sum/numberitems;
    }
    cout<<"sum is: "<< sum<<endl;       // prints out sum
    cout<<"Average is: "<< average <<endl;  // prints out average
    return 0;
}
