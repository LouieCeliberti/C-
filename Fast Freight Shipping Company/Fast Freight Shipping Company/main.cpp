//
//  main.cpp
//  Fast Freight Shipping Company
//
//  Created by Louiem Celiberti on 10/8/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

/*
CMPT101 HW1, Assignment1.cpp
Purpose: Determine the cost of shipping of the package
Programmer: Louie Celiberti
Date: 10/7/19
*/

#include <iostream>
using namespace std;
int main()
{
    int weight;
    int distance;
    cout << "Please enter the weight and the distance of the package: \n";
    cin >> weight >> distance;    // imput of weight and distance by user
    if (distance >= 500 && distance <= 999) {    // test if distance is between 500 and 999
        if(weight == 0){
            cout << "Your package must exceed 1KG" << endl;    // if weight is 0 then return "The package must exceed 1KG
        }
        else if (weight <= 2) {    // if package is less than two return $1.10 as the shipping cost
            cout << "The shipping cost is $1.10" << endl;
        }
        else if (weight > 2 && weight <= 6) {    // if package is greater than two but less than or equal too six return $2.20 as the shipping cost
            cout << "The shipping cost is $2.20" << endl;
        }
        else if (weight > 6 && weight <= 10) {    // if package is greater than six but less than or equal too ten return $3.70 as the shipping cost
            cout << "The shipping cost is $3.70" << endl;
        }
        else if (weight > 10 && weight <= 20) {    // if package is between greater than ten but less than or equal too twenty return $4.80 as the shipping cost
            cout << "The shipping cost is $4.80" << endl;
        }else{
            cout << "Package must be under 20KG's" << endl;
        }
}
    if (distance >= 1000 && distance <= 1499) { // test if distance is between 1000 and 1499
        if (weight == 0) {    // if weight is 0 then return "The package must exceed 1KG
            cout << "Your package must exceed 1KG" << endl;
        }
        else if (weight <= 2) {
            cout << "The shipping cost is $2.20" << endl;
        }
        else if (weight > 2 && weight <= 6) {
            cout << "The shipping cost is $4.40" << endl;
        }
        else if (weight > 6 && weight <= 10) {
            cout << "The shipping cost is $7.40" << endl;
        }
        else if (weight > 10 && weight <= 20) {
            cout << "The shipping cost is $9.60" << endl;
        }else{
            cout << "Package must be under 20KG's" << endl;
        }
}
    if (distance >= 1500 && distance <= 1999) {    // test if distance is between 500 and 999
        if (weight == 0) {
            cout << "Your package must exceed 1KG" << endl; // if weight is 0 then return "The package must exceed 1KG
        }
        if (weight <= 2) {
            cout << "The shipping cost is $3.30" << endl;
        }
        else if (weight > 2 && weight <= 6) {
            cout << "The shipping cost is $6.60" << endl;
        }
        else if (weight > 6 && weight <= 10) {
            cout << "The shipping cost is $11.10" << endl;
        }
        else if (weight > 10 && weight <= 20) {
            cout << "The shipping cost is $14.40" << endl;
        }else{
           cout << "Package must be under 20KG's" << endl;
        }
}
    if (distance >= 2000 && distance <= 2499) {    // test if distance is between 2000 and 2499
        if (weight == 0) {
            cout << "Your package must exceed 1KG" << endl; // if weight is 0 then return "The package must exceed 1KG
        }
        if (weight <= 2) {
            cout << "The shipping cost is $4.40" << endl;
        }
        else if (weight > 2 && weight <= 6) {
            cout << "The shipping cost is $8.40" << endl;
        }
        else if (weight > 6 && weight <= 10) {
            cout << "The shipping cost is $14.80" << endl;
        }
        else if (weight > 10 && weight <= 20) {
            cout << "The shipping cost is $19.20" << endl;
        }else{
            cout << "Package must be under 20KG's" << endl;
        }
}
    if (distance >= 2500 && distance <= 3000) {    // test if distance is between 2500 and 3000
        if (weight == 0) {
            cout << "Your package must exceed 1KG" << endl; // if weight is 0 then return "The package must exceed 1KG
        }
        if (weight <= 2) {
            cout << "The shipping cost is $5.50" << endl;
        }
        else if (weight > 2 && weight <= 6) {
            cout << "The shipping cost is $11.00" << endl;
        }
        else if (weight > 6 && weight <= 10) {
            cout << "The shipping cost is $18.50" << endl;
        }
        else if (weight > 10 && weight <= 20) {
            cout << "The shipping cost is $24.00" << endl;
        }else{
            cout << "Package must be under 20KG's" << endl;
        }
}
    return 0;    // return zero erros
}
