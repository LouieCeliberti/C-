//
//  main.cpp
//  Binar Search Tree
//
//  Created by Louiem Celiberti on 11/5/20.
//

#include <iostream>
using namespace std;

struct Node{
    int key;
    Node* leftchild;
    Node* rightchild;
    Node(int key){
        this->key = key;
        leftchild = rightchild = nullptr;
    }
};
void insert(Node* &root, int k){
    Node* n = new Node(k);
    if(!root){
        root = n;
    }else{
    Node* p = root;
    Node* q = nullptr;
    while(p){
        q=p;
        if(k <= p->key)
            p = p->leftchild;
        else
            p = p->rightchild;
    }
    if(k <= q->key)
        q->leftchild = n;
    else
        q->rightchild = n;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Node* root = nullptr;
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    
    cout << "The root is: " << root->key << endl;
    cout << "Root left child: " << root->leftchild->key << endl;
    cout << "Root right child: " << root->rightchild->key << endl;
    return 0;
}
