//
//  main.cpp
//  Assignment 5.1
//
//  Created by Louie m Celiberti on 10/22/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

/*
CMPT101 HW1, Assignment1.cpp
purpose: read an operator from the user anf two integer numbers using a switch statement
Programmer: Louie Celiberti
Date: 10/28/19
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    char operand;
    cout << "Enter two numbers" << endl;
    cin >> a >> operand >> b; // inputs the two integers and its operand
    
    switch(operand){           // beginning of switch statement
        case '+': cout << "Sum = " << a + b << endl; // If '+' is entered print out the sum of two inputed values
            break;
        case '-': cout << "difference = " << a - b << endl; // If '-' is entered print out the difference of two inputed values
            break;
        case '/': cout << "Quotient = " << a / b << endl;   // If '/' is entered print out the quotient of two inputed values
            break;
        case '*': cout << "Product = " << a * b << endl;    // If '*' is entered print out the product of two inputed values
            break;
        case '^': cout << "Square Root = " << pow(a,b) << endl; // If '^' is entered print out the sqaure root of two inputed values
            break;
    }
    
    
    
    return 0;
}
