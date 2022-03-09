//
//  RetailItem.cpp
//  Assignment 4
//
//  Created by Louie m Celiberti on 3/23/20.
//  Copyright © 2020 Louie m Celiberti. All rights reserved.
//

#include "RetailItem.hpp"
using namespace std;

RetailItem::RetailItem(string descr, int units, double p){
    description = descr;
    unitsOnHand = units;
    price = p;
}

// mutators
void RetailItem::setDescrpition(string descr){description = descr;}
void RetailItem::setUnitsOnHand(int units){unitsOnHand = units;}
void RetailItem::setPrice(double p){price = p;}

// accessors
string RetailItem::getDescrpition(){return description;}
int RetailItem::getUnitsOnHand(){return unitsOnHand;}
double RetailItem::getPrice(){return price;}
