//
//  main.cpp
//  The Fast Freight Shipping Company
//
//  Created by Louie m Celiberti on 10/6/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int weight;
    const double rate_twoorless = 1.10;
    const double rate_twoandsix = 2.20;
    const double rate_sixandten = 3.70;
    const double rate_tenandtwenty = 4.80;
    int distance;
    cout << "Please enter weight and distance of your package\n";
    cin >> weight >> distance;
    if(distance >=500){
        if(weight <= 2){
            cout << "The shipping cost is" << rate_twoorless << endl;
        }else if(weight > 2 && weight <= 6){
            cout << weight * rate_twoandsix << endl;
        }else if(weight > 6 && weight <= 10){
            cout << weight * rate_sixandten << endl;
        }else if (weight > 10 && weight <=20){
            cout << weight * rate_tenandtwenty << endl;
        }else{
            cout << "Your package must be under 20KG's" << endl;
        }
    }if(distance >=1000){
        if(weight <= 2){
            cout << weight * rate_twoorless << endl;
        }else if(weight > 2 && weight <= 6){
            cout << weight * rate_twoandsix << endl;
        }else if(weight > 6 && weight <= 10){
            cout << weight * rate_sixandten << endl;
        }else if (weight > 10 && weight <=20){
            cout << weight * rate_tenandtwenty << endl;
        }else{
            cout << "Your package must be under 20KG's" << endl;
        }
    }
    return 0;
}
