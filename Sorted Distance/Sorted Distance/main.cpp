//
//  main.cpp
//  Sorted Distance
//
//  Created by Louiem Celiberti on 9/16/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

// Was not able to complete this one. My problem was finding the new indexes of the sorted array.

int bubble_Sort(int arr[], int size){
    for(int j = 0; j < size - 1; j++){
        for(int i = 0; i < size - 1; i++){
            if(arr[i] > arr[i+1]){
                // swaps numbers if left if greater than right
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
        }
    }
}
    return -1;
}

int binary_Search(int arr[], int size, int target) {
       // if the size of the array is = 0, returns error
            if(size == 0){
                cout << "Array is empty!" << endl;
            }
            int left = 0, right = size - 1, mid = 0;
            while(left <= right){
                mid = left + (right - left) / 2;
                // if mid if target, return the target
                if(arr[mid] == target)
                    return mid;
                // if mid is greater than the left side of array, search right side
                if(arr[mid] >= arr[left]){
                    // if left is less than or equal to target and less than mid search right side
                    if((arr[left] <= target) && (target < arr[mid])){
                        right = mid - 1;
                    }else
                        left = mid + 1;
                }else{
                    // if mid is less than or equal to the right search left side
                    if((arr[mid] < target) && (target <= arr[right])){
                        left = mid + 1;
                    }else
                        right = mid - 1;
                }
            }
            return -1;
        }

int main(int argc, const char * argv[]) {
        // insert code here...
    // user enters size of array
    int size;
    cout << "Enter the number of elements: "<< endl;
    cin >> size;
    
    int original_Arr[size], sorted_Arr[size];

    
    // user enters original array
    cout << "Enter the original array: " << endl;
    for(int i = 0; i < size; i++){
    cin >> original_Arr[i];
    }
    // user enters sorted array
    cout << "Now enter the sorted array: " << endl;
    for(int j = 0; j < size; j++){
    cin >> sorted_Arr[j];
    }
    // checks if original array is nalready sorted
    for(int i = 0; i < size; i++){
        if(original_Arr[i] == bubble_Sort(original_Arr, size)){
            cout << "Already sorted";
        }
    }
    cout << endl;
    
    // prints out indexes of numbers
    
    for(int i = 0; i < size; i++){
    cout << binary_Search(original_Arr, size, original_Arr[i]) << " ";
    }
    cout << endl;
    
    for(int i = 0; i < size; i++){
    cout << binary_Search(sorted_Arr, size, sorted_Arr[i]) << " ";
    }
    cout << endl;
    return 0;
    }
