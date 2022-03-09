//
//  main.cpp
//  CMPT239 Nov_9th
//
//  Created by Louiem Celiberti on 11/9/20.
//

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = right = nullptr;
    }
};

Node * insert(Node * root, int data) {
       if(root == nullptr) return new Node(data);
       if(data < root->data) root->left = insert(root->left,data);
       if(data > root->data) root->right = insert(root->right,data);

       return root;
   }
void inOrder(Node *root) {
        if(root == nullptr) return;
        inOrder(root->left);
        cout << root-> data << " ";
        inOrder(root->right);
    }
bool search(Node* root, int x){
    if(root == nullptr) return false;
    if(root->data == x) return true;
    if(x <= root->data) return search(root->left,x);
    else return search(root->right,x);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 9);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 5);
    root = insert(root, 1);
    
    inOrder(root);
    
    bool found = search(root,5);
    if(found)
        cout << "Element found!" << endl;
    else{
        cout << "Not found!" << endl;
    }
    cout << endl;
    
    return 0;
}
