//
//  main.cpp
//  BubbleSort
//
//  Created by Louiem Celiberti on 9/14/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

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
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        if(stop){
            break;
        }
}
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {5, 1, 4, 2, 8, 6};
    int n = 6;
    bubble_sort(arr, n);
   
    return 0;
}
