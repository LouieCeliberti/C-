//
//  main.cpp
//  BinarySearch
//
//  Created by Louiem Celiberti on 9/16/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

// binary search algorithm, complexity is O(logn)
int binary_Search(string arr[], int size, string target) {
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
    //array of strings
    string arr[] = {"abc","abcd","abcde","abcdef"};
    int size = 4;
    string target = "abcd";
    //prints the index of the target
    cout << "Index: " << binary_Search(arr, size, target) << endl;
    cout << "Steps: " << endl;
    return 0;
}
