//
//  main.cpp
//  Balanced BST
//
//  Created by Louiem Celiberti on 11/16/20.
//

#include <iostream>
using namespace std;

struct Node{
int value;
Node* left;
Node* right;
Node(int v){
value = v;
left = right = nullptr;
    }
};

// was not able to quite finish this one
// i understood the logic of it
// Store the elements in the array, sort them, make the middle element the root, and then re insert the nodes and decide whether the node should be a left or right child
// However had a problem coding the kind of array whether it should dynamic or not

void inOrder(Node* root){ // puts the nodes of the BST in order tranveral
    if(root == nullptr) return;
    
    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

 // Recursive function to create the BST
Node* constructBST(Node* arr[], int start, int end){
    if (start > end)
        return nullptr;
  
    int mid = (start + end)/2;
    Node* root = arr[mid]; // sets middle node to root
  
    root->left  = constructBST(arr, start, mid-1);
    root->right = constructBST(arr, mid+1, end);
  
    return root;
}
// counts all nodes in BST
// I figured if i were to count up all the nodes in the BST and use it as the size of the array
int countAllNodes(Node* root){
    int count =  1;
    if (root == nullptr)
        return 0;
    else{
        count += countAllNodes(root->left);
        count += countAllNodes(root->right);
        return count;
    }
}

// balances BST
Node* balance_bts(Node* root){
    inOrder(root);
    int n = countAllNodes(root);
    Node* arr[n];
    return constructBST(arr, 0, n-1);
}
// inserts a new node recursivley
// For some reason a THREAD 1: error is occuring when running over this function
// Please leave feeback!!!
Node* insert(Node* &root, int data){
    if(root == nullptr)
        return new Node(data);
    if(data < root->value)
        root->left = insert(root->left, data);
    if(data > root->value)
        root->right = insert(root->right, data);
    return root;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Node* root;
    root = insert(root, 5);
    root->right = insert(root, 6);
    root->right->right = insert(root, 7); //  this is essentailly printing out a BST where all the nodes are to the right
    root->right->right->right = insert(root, 8);
    root->right->right->right->right = insert(root, 8);
    
    //fill_array(root, arr, 0);
    cout << root << endl;
    
    // creates balanced BST
    root = balance_bts(root);
    
    cout << root << endl;
    inOrder(root); // prints BST in order

    return 0;
}
