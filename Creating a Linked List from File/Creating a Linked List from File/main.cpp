//
//  main.cpp
//  Creating a Linked List from File
//
//  Created by Louiem Celiberti on 12/12/20.
//

#include <iostream>
#include <fstream>
using namespace std;


// In this program, we will read the file ListofNumbers.txt (created from ListofNumbers_CppFile.java) from Desktop
// Use these numbers to create a Linked List

struct Node{
    int value;
    Node* next;
    Node(int v, Node* n = nullptr){
        value = v;
        next = n;
    }
};

int main(int argc, const char * argv[]) {
    
    // open ListofNumbers.txt file
    Node* head = nullptr;
    int value;
    ifstream n_file;
    n_file.open("/Users/louiemceliberti/Desktop/ListofNumbers.txt");
    while(n_file >> value){
        head = new Node(value, head);
    }
    while(head != nullptr){
        cout << " " << head->value;
        head = head->next;
    }
    cout << endl;
    n_file.close();
    /*Node* root = nullptr;
    Node* new_node = new Node(root);*/
    return 0;
}
