//
//  main.cpp
//  ClassExercises
//
//  Created by Louiem Celiberti on 9/17/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


// arr+2*sizeofint = arr + 2 * 4

struct Node{
    int data;
    Node* next;
    Node(int d, Node* n = nullptr){
        data = d;
        next = n;
    }
};

/*
bool is_even(int x){
    if(x % 2 == 0) return true;
        return false;
    }

void bubble_sort(int arr[], int size){
        for(int j = 0; j < size - 1; j++){
            //bool stop = true;
            for(int i = 0; i < size - 1; i++){
                bool condtion1 = (!is_even(arr[j]) && is_even(arr[j+1]));
                bool condition2 = (is_even(arr[j]) && is_even(arr[j + 1]) && arr[j] > arr[j+1]);
                bool condition3 = (!is_even(arr[j]) && !is_even(arr[j + 1]) && arr[j] > arr[j+1]);
            if(condtion1 || condition2 || condition3){
                //stop = false;
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
}*/
int main(int argc, const char * argv[]) {
    Node* head = nullptr;
    head = new Node(1, head);
    head = new Node(2, head);
    head = new Node(3, head);
    
    // insert code here...
   /* vector<int> dynamic_arr(1);
    dynamic_arr.push_back(5);
    dynamic_arr.push_back(10);
    dynamic_arr.push_back(2);
    
    for(int i = 0; i < dynamic_arr.size(); i++){
        cout << dynamic_arr[i] << " ";
    }
    cout << endl;
    dynamic_arr.pop_back();
    cout << dynamic_arr.size() << endl;
    
    if(dynamic_arr.empty()){
        cout << "The vector is clear." << endl;
    }else{
        cout << "The vector is NOT clear." << endl;
    }*/
    /*
    int arr[] = {1,2,3,4,5};
    int index = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < index; i++){
        cout << i;
    }
     */
    // take an array and sort it where the even come first then the odd
    
   /* int arr[] = {1, 4, 3 , 2, 0};
   // bubble_sort(arr, 6);
    for(int i = 0; i <=5; i++){
        cout << arr;
    }*/
    return 0;
}
