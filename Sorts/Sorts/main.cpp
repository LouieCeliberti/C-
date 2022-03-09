//
//  main.cpp
//  Sorts
//
//  Created by Louiem Celiberti on 9/27/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

// bubble sort function sorts an array in acending order
// if right value is less than left value... swap
// otherwise do not swap
void bubble_sort(int arr[], int size){
    for(int j = 0; j < size - 1; j++){
        for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i+1]){
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }
        cout << "Iter " << j << ": " ;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
}
}
// selection sort function sorts an array in acending order
// sorts the array by repeatedly finding the smalles value in the array
void selection_sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        cout << "Iter " << i << ": " ;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    cout << endl;
}
}
// insertion sort function sorts an array in acending order
// it rearranges the values of the array with at most a constant number of them stored outside of the array at any time
void insertion_sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = 0;
        int key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + i] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
        cout << "Iter " << i << ": " ;
        for(int i = 0; i < size; i++){
                       cout << arr[i] << " ";
                   }
                      cout << "\n";
           }
    }

int main(int argc, const char * argv[]) {
    // array of size 6
    int arr[] = {3,7,1,4,0,1};
    int size = 6;
    
    // calls bubble sort function
    cout << "Bubble Sort Iterations: " << endl;
    bubble_sort(arr, size);
    
    // calls selection sort function
    cout << "Selection Sort Iterations: " << endl;
    selection_sort(arr, size);
    
    // calls inseriton sort function
    cout << "Insertion Sort Iterations: " << endl;
    insertion_sort(arr, size);
   
    return 0;
}
