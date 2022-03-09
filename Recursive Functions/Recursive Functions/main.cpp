//
//  main.cpp
//  Recursive Functions
//
//  Created by Louie m Celiberti on 11/15/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int f(int n){
    if( n <= 1){
        return 1;
    }
    else{
        return n*(f(n-1));
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "The factorial is: " << f(num)<< endl;
    return 0;
}
