//
//  main.cpp
//  Largest Number Game
//
//  Created by Louiem Celiberti on 9/29/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

// bubble sort function, swaps values if left value is less than right value
// sorts in decending order
void bubble_sort(int arr[], int size){
    for(int j = 0; j < size - 1; j++){
        bool stop = true;
        for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i+1]){
            stop = false;
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }
        for(int i = size - 1; i > 0; i--){
            cout << arr[i] << " ";
        }
        cout << "\n";
        if(stop){
            break;
        }
    }
}
// sperate digits function sperates any double digit numbers into two sperate digits
void seperatedigits(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] >= 10){
            cout << arr[i] % 10 << " ";
            arr[i] /= 10;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    // array of size 4
    int arr[] = {7,60,43,2};
    int size = 4;
    seperatedigits(arr, size);
    bubble_sort(arr, size);
    return 0;
}
