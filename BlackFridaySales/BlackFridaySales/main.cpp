//
//  main.cpp
//  BlackFridaySales
//
//  Created by Louiem Celiberti on 9/15/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double itemvalues[] = {60.00, 29.95, 42.99, 50.00, 74.43, 89.30};
    // 45% discout on all items
    double discout = 0.45;
    for(int i = 0; i < 6; i++){
    cout << "$ " << discout * itemvalues[rand() % 6] << endl;
    }
    return 0;
}
