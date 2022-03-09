//
//  main.cpp
//  Multiplication Table
//
//  Created by Louiem Celiberti on 10/29/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i = 1; i <=9; i++){
        for(int j = 1; j <= 9; j++){
            cout << i * j << "\t";
        }
        cout << "\n";
    }
    return 0;
}
