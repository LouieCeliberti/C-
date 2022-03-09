//
//  main.cpp
//  Assignment 6.1
//
//  Created by Louie m Celiberti on 11/6/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    int r=0,n,p=0;

    cout << "Please enter a number: ";
    cin >> n;
    
    // rows
    for(int i=0;i<(2*n)-1;i++)
    {
        for(int j=0;j<(2*n)-1;j++) // columns
        {
            if(j >= n){
                r = (2*n) - j - 2;
            }
            else{
                r = j;
            }
            if(i >= n){
                p = (2*n) - i - 2;
            }
            else{
                p = i;
            }
            if((j==0) || (j==(2*n)-2) || (i==0) || (i==(2*n)-2)){
                cout << n;
            }
            else if(r == p){
                cout << n - r;
            }
            else if(p < r){
                cout << n - 1;
            }
            else{
                cout << n - r;
            }
        }
        cout << "\n";
    }
    return 0;
}
