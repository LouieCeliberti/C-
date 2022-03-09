//
//  main.cpp
//  CMPT239
//
//  Created by Louie m Celiberti on 9/13/20.
//  Copyright © 2020 Louie m Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

int binary_Search(string arr[], int size, int target) {
            if(size == 0)
                return -1;
            int left = 0, right = size - 1, mid = 0;
    
            while(left <= right){
                mid = left + (right - left ) / 2;
                if(arr[mid] == target)
                    return mid;
               if(arr[mid]>=arr[left]){
                     if((arr[left] <= target) && (target < arr[mid])){
                        right = mid - 1;
                    }else
                        left = mid + 1;
                }else{
                    if((arr[mid] < target) && (target <= arr[right])){
                        left = mid + 1;
                    }else
                        right = mid - 1;
                }
            }
            return -1;
        }
  
int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int size = 5;
    int result = binary_Search(arr, size, 10);
    cout << result << endl;
    return 0;
}
