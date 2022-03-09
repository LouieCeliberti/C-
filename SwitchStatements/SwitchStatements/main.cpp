//
//  main.cpp
//  SwitchStatements
//
//  Created by Louiem Celiberti on 9/22/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    char choice;
    
    cout<<"Enter A, B, OR C:";
    cin>> choice;
    switch(choice){
        case 'a':
        case 'A': cout << "You entered A.\n";
            break;
        case 'b':
        case 'B': cout << "You entered B.\n";
            break;
        case 'c':
        case 'C': cout << "You entered C.\n";
            break;
            default:
            cout << "Please enter A, B, OR C";
    }
    
    int arr[] = { 10, 20, 30, 40};
    
    // Printing elements of an array using
    // foreach loop
    for (int x : arr){
        if(x == arr[1]){
             cout << x <<endl;
            cout << "You have the right number" << endl;
        }else{
            continue;
        }
    }
    return 0;
}
