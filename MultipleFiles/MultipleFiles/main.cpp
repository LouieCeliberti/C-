//
//  main.cpp
//  MultipleFiles
//
//  Created by Louie m Celiberti on 10/23/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;


double add(double x, double y);
double add(double a, double b, double c);
bool test(bool t);
double test(double x);
void test();

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    cout << add(545.3,2.4) << endl;
    cout << add(1.24,34.5,245.4) << endl;
    if(test(true)){
        cout << "This statement is true" << endl;
    }
    if(test(3.4)){
        cout << "This statement is true" << endl;
    }
    return 0;
}
