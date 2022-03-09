//
//  main.cpp
//  Midterm
//
//  Created by Louiem Celiberti on 10/15/20.
//

/*#include <iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int d, Node* n = nullptr){
data = d;
next = n; }
};
Node* sum_lists(Node* head1, Node* head2){
    if(head1 == nullptr){
        return head2;
    }
    Node* sum = head1;
    while(sum->next != nullptr){
        sum = sum->next;
    }
    sum->data = head1->data + head2->data;
    return sum;
}

void print_list(Node* head){ while (head != nullptr){
cout << head->data << " ";
head = head -> next; }
cout << endl; }

int main() {
Node* head1 = nullptr, * head2 = nullptr;
head1 = new Node(4, head1);
head1 = new Node(3, head1);
head1 = new Node(2, head1);
head1 = new Node(1, head1);
head2 = new Node(6, head2);
head2 = new Node(4, head2);
head2 = new Node(2, head2);
head2 = new Node(0, head2);
Node* head3 = sum_lists(head1, head2);
print_list(head1);
print_list(head2);
print_list(head3);
return 0;
}*/#include <iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int d, Node* n = nullptr){
data = d;
next = n; }
};
//Write a function “insert_nodes” here
/*Node* insert_nodes(int arr[], int value, Node* head){
    Node *new_node = new Node(value, head);
         
    if(head == NULL){
        return head;
           }
    
    Node* temp = head;

    while(temp->next != NULL && (temp->next)->data < value){
        temp = temp->next;
    }
               
    new_node->next=temp->next;
    temp->next=new_node;
    return head;
}
void print_list(Node* head){ while (head != nullptr){
cout << head->data << " ";
head = head -> next; }
}
int main() {
Node* head = nullptr;
head = new Node(4, head);
head = new Node(3, head);
head = new Node(2, head);
head = new Node(1, head);
int arr[] = {5, 6, 7};
head = insert_nodes(arr, 3, head);
print_list(head);
return 0;
    
}*


/*#include <iostream>
using namespace std;
struct Node{ int data;
Node* next;
Node(int d, Node* n = nullptr){
data = d;
next = n; }
};
bool is_prime(int n){
if (n <= 1) return false;
    for (int i=2;i<n;i++)
if (n % 2 == 0) return false;
    return true;
}
//Write “count_prime” function here
 
int count_Prime(Node* head){
    int count = 0; // initializes count = 0
    Node* current = head;
    while(current != NULL){
        if(is_prime(current->data))
           count++; // increment count is current is NOT NULL
           current = current -> next;
            count_Prime(current);// current node points to next node
    }
    return count;
}

int main() {
Node* head = nullptr;
head = new Node(5, head);
head = new Node(10, head);
head = new Node(3, head);
head = new Node(7, head);
head = new Node(6, head);
cout << count_Prime(head) << endl; return 0;
}
*/
/*
int greater_than(int arr[], int size){
    int sum;
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            if(arr[i] < arr[j]){
                sum = arr[i]
            }
        }
    }
}
int main(){
    int arr[], int n;
    cin >> n;
    for(int i = 0; i < n; i++){
    cin >> arr[i];
 }
    
}*/
