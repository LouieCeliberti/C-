//
//  main.cpp
//  Harris-Benedict Equation
//
//  Created by Louiem Celiberti on 10/4/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    double weight, height;
    int age;
    char sex;
    const int choc = 230;
    cout << "Please enter your weight, height, age a75nd sex" << endl;
    cin >> weight >> height >> age >> sex; // input of the user
    if(sex == 'f'){ // if user inputs 'f' then use formula below
       auto BMRW = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age); // formula for womens BMR
        int numberofChoclatebars_female = BMRW / choc; // Divides females BMR by the number of calories in a choclate bar
        cout << "The number of choclate bars you should be eating is: \n" << numberofChoclatebars_female << endl;
    }else if(sex == 'm'){ // if user inputs 'm' then use formula below
        auto BMRM = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age); // Formula for Mens BMR
        int numberofChoclatebars_male = BMRM / choc; // Divides males BMR by the number of calories in a choclate bar
        cout << "The number of choclate bars you should be eating is: \n" << numberofChoclatebars_male << endl;
    }else{
        cout << "please enter m or f" << endl; // return error if user doesn't input m or f as sex
    }
    return 0;
}
