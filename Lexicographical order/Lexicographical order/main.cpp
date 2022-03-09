//
//  main.cpp
//  Lexicographical order
//
//  Created by Louiem Celiberti on 11/7/20.
//

#include <iostream>
using namespace std;

struct pInfo{
string firstname, lastname;
int age;
};
// had to change the arrays in the partition and quicksort functions to array of structs
int partition(pInfo info[], int p, int q){ // order of N O(n)
    pInfo x = info[p];
    int i = p;
    for(int j = p+1; j <= q; j++){
        if(info[j].lastname <= x.lastname){
            i++;
            pInfo tmp = info[j];
            info[j] = info[i];
            info[i] = tmp;
        }
    }
    pInfo tmp = info[p];
    info[p] = info[i];
    info[i] = tmp;
    return i;
}
void quicksort(pInfo info[], int p, int q){
    if(p < q){
        int pivot_pos = partition(info, p, q);
        quicksort(info, p, pivot_pos - 1);
        quicksort(info, pivot_pos + 1, q);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 5;
    pInfo info[5] = {{"Bob", "Ross", 43}, // creates 5 array of structs containing age, firstname, and lstname
                    {"Bill", "Gates", 62},
                    {"Jeff", "Bezos", 59},
                    {"Steve", "Jobs", 58},
                    {"Warren", "Buffet", 77}
    };
    for(int i = 0; i < n; i++){ // prints out array before sorted
        cout << info[i].age << " ";
        cout << info[i].firstname << " ";
        cout << info[i].lastname << " ";
        cout << endl;
    }
    cout << endl;
    quicksort(info, 0, n-1);
    for(int i = 0; i < n; i++){ // prints out array after sorted
        cout << info[i].age << " ";
        cout << info[i].firstname << " ";
        cout << info[i].lastname << " ";
        cout << endl;
    }
    return 0;
}
