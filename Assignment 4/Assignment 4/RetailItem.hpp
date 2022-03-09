//
//  RetailItem.hpp
//  Assignment 4
//
//  Created by Louie m Celiberti on 3/23/20.
//  Copyright © 2020 Louie m Celiberti. All rights reserved.
//

#ifndef RetailItem_hpp
#define RetailItem_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

// RetailItem class holds the data of the three retail items
// one constructor that accepts the arguments of each member variable
// creates three accessors and three mutators
class RetailItem{
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string, int, double); // Constructor
        // mutators
        void setDescrpition(string);
        void setUnitsOnHand(int);
        void setPrice(double);
        // accessors
        string getDescrpition();
        int getUnitsOnHand();
        double getPrice();
    };

#endif /* RetailItem_hpp */
