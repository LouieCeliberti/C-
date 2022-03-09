//
//  main.cpp
//  Selection Sort
//
//  Created by Louiem Celiberti on 12/13/20.
//

#include <iostream>
using namespace std;

void Selection_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int min = arr[i], ind = i;
        for(int j = i + 1; j < size - 1; j++){
        if(arr[j] < min){
            min = arr[j];
            ind = j;
        }
    }
        // swap arr[i] & arr[ind]
        int tmp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = tmp;
        for(int j = 0; j < size; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}
int main(int argc, const char * argv[]) {
    
    int arr[] = {2, -1, 3, 10, 5, 4};
    int n = 6;
    Selection_sort(arr, n);
    return 0;
}
