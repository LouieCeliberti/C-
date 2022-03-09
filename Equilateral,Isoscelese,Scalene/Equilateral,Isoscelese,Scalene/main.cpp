//
//  main.cpp
//  Equilateral,Isoscelese,Scalene
//
//  Created by Louiem Celiberti on 11/15/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int triangleCheck(int a, int b, int c){
    if(a==b && b==c && c==a){
        return 0;
    }else if(a==b || a==c || b==c){
        return 1;
    }else{
        return 2;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    triangleCheck(2, 3, 3);
    return 0;
}
