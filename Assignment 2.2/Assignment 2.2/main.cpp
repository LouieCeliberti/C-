//
//  main.cpp
//  Assignment 2.2
//
//  Created by Louie m Celiberti on 2/17/20.
//  Copyright © 2020 Louie m Celiberti. All rights reserved.
//

/*
CMPT102 HW1, Assignment2.1.cpp
Purpose: Reverse order of array
Programmer: Louie Celiberti
Date: 2/18/20
*/

#include <iostream>
using namespace std;

int* reversedorderArray(int *arr, int SIZE){
   
    // this function first dynamically allocates a new array
    // Then saves the original values and reverses the order of the array
    int *ptr = new int[SIZE];

    for(int i = 0; i < SIZE; i++){
        *(ptr + SIZE - 1 - i) = *(arr + i);
    }

    return ptr;
}


int main(){
    // The main function creates an array ranging from 0 to 9
    // then prints the values of the array and declares a pointer to return the address of the reversed array
    // finally it deketes any unused memory
    
    const int SIZE = 10;

    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Original array:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cout << *(arr + i) << "  ";
    }
   
    int *revArr = reversedorderArray(arr, SIZE);

    cout << "\n\nReversed array:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        cout << *(revArr + i) << "  ";
    }
    cout << endl;
    
    //deletes unused memory
    delete [] revArr;

    return 0;
}
