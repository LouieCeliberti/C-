//
//  main.cpp
//  Factorial
//
//  Created by Louiem Celiberti on 10/29/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int factorial = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        factorial *=i;
    }
    cout << n << "!" << "=" << factorial << endl;
    return 0;
}
