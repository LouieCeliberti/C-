//
//  main.cpp
//  Stacks and Queues CMPT239 October 22nd
//
//  Created by Louiem Celiberti on 10/22/20.
//

#include <iostream>
using namespace std;

/*class Queue{
private:
    int front, rear, num_elements, max_cap;
    int *data;
public:
    Queue(int cap){
        max_cap = cap;
        front = rear = num_elements = 0;
        data = new int[max_cap];
    }
    bool is_Empty(){
        return num_elements == 0;
    }
    bool is_Full(){
        return num_elements == max_cap;
    }
    void enqueue(int x){
        if(is_Full())
            cout << "Queue is Full!" << endl;
        else{
            cout << "Enqueuing the value: " << x << endl;
            data[rear] = x;
            rear = (rear + 1) % max_cap;
            num_elements++;
        }
    }
    void dequeue(int &x){
        if(is_Empty())
            cout << "Queue is Empty!" << endl;
        else{
            x = data[front];
            front = (front + 1) % max_cap;
            num_elements--;
        }
    }
};
void display(Queue &Q){
    int x;
    while(!Q.is_Empty()){
        Q.dequeue(x);
        cout << x << endl;
    }
}
int main(int argc, const char * argv[]) {
    
    Queue Q(3);
    Q.enqueue(5);
    Q.enqueue(1);
    Q.enqueue(10);
    
    display(Q);
    
    Q.enqueue(4);
    Q.enqueue(2);
    Q.enqueue(1);
    
    
    return 0;
}
*/

class Queue{
private:
    struct Node{
        int data;
        Node* next;
        Node(int d, Node* n = nullptr){
            data = d;
            next = n;
        }
    };
    Node* front, * rear;
public:
    Queue(){
        front = rear = nullptr;
    }
    bool is_Empty(){
        return front == nullptr;
    }
    void enqueue(int x){
        if(is_Empty())
            front = rear = new Node(x);
        else{
            cout << "Enqueuing the value: " << x << endl;
            rear -> next = new Node(x);
            rear = rear->next;
        }
    }
    void dequeue(int &x){
        if(is_Empty())
            cout << "Queue is Empty!" << endl;
        else{
            x = front->data;
            Node* tmp = front;
            front = front->next;
            delete tmp;
        }
    }
};
void display(Queue &Q){
    int x;
    while(!Q.is_Empty()){
        Q.dequeue(x);
        cout << x << endl;
    }
}
int main(int argc, const char * argv[]) {
    
    Queue Q;
    Q.enqueue(5);
    Q.enqueue(1);
    Q.enqueue(10);
    
    display(Q);
    
    Q.enqueue(4);
    Q.enqueue(2);
    Q.enqueue(1);
    
    
    return 0;
}
