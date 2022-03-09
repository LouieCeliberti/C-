//
//  main.cpp
//  PrintnumberofOccurence
//
//  Created by Louiem Celiberti on 11/8/20.
//

#include <iostream>
using namespace std;

int partition(string a[], int p, int q){ // order of N O(n)
    string x = a[p];
    int i = p;
    for(int j = p+1; j <= q; j++){
        if(a[j] <= x){
            i++;
            string tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }
    string tmp = a[p];
    a[p] = a[i];
    a[i] = tmp;
    return i;
}
void quicksort(string a[], int p, int q){ // complexity: O(logn)
    if(p < q){
        int pivot_pos = partition(a, p, q);
        quicksort(a, p, pivot_pos - 1);
        quicksort(a, pivot_pos + 1, q);
    }
}

int main(int argc, const char * argv[]) { // Overall complexity O(S*nLog(n))
    // insert code here...
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i = 0; i < n; i++){ // loops through array and checks if the current string is equal to the next string
        string current = arr[i];
        int count = 1;
        if(current == arr[i+1])
            count++;
        if(count > 1){ // only print word if count is greater than 1
            cout << current << " " << count << endl;
        }
    }
    return 0;
}
