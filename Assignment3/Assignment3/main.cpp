//
//  main.cpp
//  Assignment3
//
//  Created by Louiem Celiberti on 10/12/20.
//

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node(int v, Node* n = nullptr) { // constructor
        value = v;
        next = n;
    }
};

int count_elements(Node* head){
    int count = 0; // initializes count = 0
    Node* current = head;
    while(current != NULL){
        count++; // increment count is current is NOT NULL
        count_elements(head); // current node points to next node
    }
    return count;
}

double average(Node* head){
    if (head == NULL)
        return -1;
  
    int count = 0, sum = 0; // Initialize count = 0 & sum = 0
    double avg = 0.0; // Initialize count = 0 & sum = 0.0
  
    Node* current = head; // Initialize current
    while (current != NULL) {
        count++; // increment count is current is NOT NULL
        sum += current->value; // values are added up to the sum when searching through linked list
        current = current->next; // current node points to next node
    }
  

    avg = (double)sum / count; // cast sum into double then divided by count
  
    return avg;
}

Node* insert_sorted(Node*& head, int data){
    
    Node *new_node = new Node(data); // initializes new node
         
    if(head == NULL ||  head ->value >= data){ //check if new_node is going to be inserted in front
       /*new_node->next = head;
        head = new_node;*/
        return head;
           }
    
    Node* temp = head;

    while( temp->next != NULL && (temp->next)->value < data){ // node is skipped if value is less then inputed value
        temp = temp->next;
    }
               
    new_node->next=temp->next; //insert the new_node
    temp->next=new_node;
}

void delete_all_even(Node*& head){
    while(head != NULL && head->value % 2 == 0){ // checks if head is NOT ull and if the node is even or odd
        Node *temp=head;
        head=head->next;
        delete temp;
    }
             
    if(head == NULL){ // If head == null, return nothing
    return;
    }
           
    Node *current=head; // initializes current = head
    while(current->next != NULL){ // checks is next node is NOT null

    Node *temp = current->next;
                
    if(temp->value % 2 == 1) // if temp is odd, then move the current node to temp
    current = temp;
    else{ // Otherwise delete the node and update the next node as current
        current->next=temp->next;
        delete temp;
        }
    }

}

void displayList(Node *myList){ // displays elements in linked list
    while(myList){
        cout<<"-> "<< myList->value;
        myList=myList->next;
    }
        cout<<endl;
}

 
int main(int argc, const char * argv[]) {
    Node* head = NULL;

    // inserts nodes in accending order
    insert_sorted(head, 3);
    insert_sorted(head, 8);
    insert_sorted(head, 1);
    insert_sorted(head, 7);
    insert_sorted(head, 9);
    insert_sorted(head, 4);

    // displays list
    cout<< "Original list"; displayList(head);
    
    // returns numbers of elements in linked list
    cout<<"number of elements: "<<count_elements(head)<<endl;
    
    //return average of elements in linked list
    cout<<"Average of elements: "<<average(head)<<endl;
    
    //delets all even elements in linked list
    delete_all_even(head);
    
    // displays list after even elements in linked list are deleted
    cout<<"Linked list after deleting even elements: "; displayList(head);

    return 0;
}
