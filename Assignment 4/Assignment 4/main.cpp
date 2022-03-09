//
//  main.cpp
//  Assignment 4
//
//  Created by Louie m Celiberti on 3/23/20.
//  Copyright © 2020 Louie m Celiberti. All rights reserved.
//

/*
CMPT102 HW4, Assignment4.cpp
Purpose: Using OOP to display the Desription, unitsOnHand, and Proce of retail items
Programmer: Louie Celiberti
Due Date: 3/24/20
*/


#include "RetailItem.hpp"
#include <iostream>
using namespace std;

// displayRetailItems is a NON-Member functioin that displays the information of the Retail Items
void displayRetailItems(){
    RetailItem r1("Iphone", 78, 1199.99);
    RetailItem r2("Wii", 45, 199.99);
    RetailItem r3("Notebook", 250, 4.99);
    
    cout <<"-------------------------------" << endl;
    cout << "Item\t\t" << "UnitsOnHand\t\t" << "Price\t\t"<<endl;
    cout << r1.getDescrpition() << "\t\t\t" << r1.getUnitsOnHand() << "\t\t\t$" << r1.getPrice() << endl;
    cout << r2.getDescrpition() << "\t\t\t\t" << r2.getUnitsOnHand() << "\t\t\t$" << r2.getPrice() << endl;
    cout << r3.getDescrpition() << "\t\t" << r3.getUnitsOnHand() << "\t\t\t$" << r3.getPrice() << endl;
    cout <<"-------------------------------" << endl;
}

int main(int argc, const char * argv[]) {
    displayRetailItems();
    return 0;
}
