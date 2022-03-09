//
//  main.cpp
//  Assignment 7 BST
//
//  Created by Louiem Celiberti on 11/15/20.
//

#include <iostream>
using namespace std;

struct Node{
int value;
Node* left; Node* right; Node(int v){
value = v;
left = right = nullptr; }
};


void insert(Node* &root, int k){
    Node* n = new Node(k); // initialize new node
    if(!root){
        root = n;
    }else{
    Node* p = root;
    Node* q = nullptr;
    while(p){ // create while loop if the value inserted is less than root, put the value to the left of the parent, other wise put the value to the right of the parent
        q=p;
        if(k <= p->value)
            p = p->left;
        else
            p = p->right;
    }
    if(k <= q->value)
        q->left = n;
    else
        q->right = n;
    }
}
// counts all the nodes in the BST
int countAllNodes(Node* root){
    if (root == nullptr)
        return 0;
    return 1 + countAllNodes(root->left) + countAllNodes(root->right);;
}
// returns the max node of the BST
int max(Node* root){
    if(root == nullptr) return true;
    
    int maxvalue = root->value; // sets the max value to the root
    int left = max(root->left);
    int right = max(root->right);
    if (left > maxvalue) // if left greater than root, make left max value
        maxvalue = left;
    if (right > maxvalue) // if right greater than root, make right max value
        maxvalue = right;
    return maxvalue;
}
// returns the min node of the BST
int min(Node* root){
    if(root == nullptr) return true;
    
    int minvalue = root->value; // sets the min value to the root
    int left = max(root->left);
    int right = max(root->right);
    if (left < minvalue) // if left less than root, make left min value
        minvalue = left;
    if (right < minvalue) // if right less than root, make right min value
        minvalue = right;
    return minvalue;
}
// returns the sum of all nodes in the BST
int sumBST(Node* root) {
    if (root == nullptr)
        return 0;
    int leftSum  = sumBST(root->left);
    int rightSum = sumBST(root->right);
    int mySum = root->value + leftSum + rightSum;
    return mySum;
}
// returns the average of the nodes in the BST
// created a sum of all nodes function so it would be easier
double averageOfNodes(Node* root){
    if (root == nullptr)
        return 0;
    return (sumBST(root) / countAllNodes(root));
}
// this function deletes the nodes if the BST by first deleting the left children and right children and eventaully the root
void deleteNodes(Node* root){
    if (root == nullptr) return;
  
    deleteNodes(root->left);
    deleteNodes(root->right);
    
    delete root;
}

int main(int argc, const char * argv[]) {
    Node* root = nullptr;
    insert(root, 6);
    insert(root, 15);
    insert(root, 9);
    insert(root, 10);
    insert(root, 5);
    
    cout << "There are " << countAllNodes(root) << " nodes in the BST" << endl;
    cout << "Max value: " << max(root) << endl;
    cout << "Min value: " << min(root) << endl;
    cout << "Average: " << averageOfNodes(root) << endl;
    deleteNodes(root);
    cout << endl;
    // All the nodes are deleted now, If i were to call countAllNodes(); it would return an error because they are no more nodes in the BST
    return 0;
}
