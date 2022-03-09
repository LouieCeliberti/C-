//
//  main.cpp
//  Arrays
//
//  Created by Louie m Celiberti on 11/22/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
   /*
    // printing array with range based for loop
    int arr[] = {1, 2, 3, 4, 5};
    for(int i : arr){
        cout << i << endl;
    }*/
    
    int numbers[5];
    
    for(int &val : numbers){
        cout << "Enter an integer value:" << endl;
        cin >> val;
    }
    
    cout << "Here are the values you entered\n";
    for(int val : numbers){
        cout << val << endl;
    }
    /*
    // Printing array with normal for loop
    int arr[] = { 2,3,4,3,94,2};
    for(int i = 0; i < 6; i++){
        cout << arr[i] << endl;
    }
     */
    
    return 0;
}

