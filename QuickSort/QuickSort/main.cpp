//
//  main.cpp
//  QuickSort
//
//  Created by Louiem Celiberti on 11/2/20.
//

#include <iostream>
using namespace std;

// Worst case time complexity: O(n^2)
//O(NLog(N))

int partition(int a[], int p, int q){ // order of N O(n)
    int x = a[p];
    int i = p;
    for(int j = p+1; j <= q; j++){
        if(a[j] <= x){
            i++;
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }
    int tmp = a[p];
    a[p] = a[i];
    a[i] = tmp;
    return i;
}
void quicksort(int a[], int p, int q){
    if(p < q){
        int pivot_pos = partition(a, p, q);
        quicksort(a, p, pivot_pos - 1);
        quicksort(a, pivot_pos + 1, q);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {5, 6, 2, 1, 7, 4}, n = 6;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    quicksort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
