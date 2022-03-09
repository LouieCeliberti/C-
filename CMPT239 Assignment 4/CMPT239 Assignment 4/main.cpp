//
//  main.cpp
//  CMPT239 Assignment 4
//
//  Created by Louiem Celiberti on 10/22/20.

#include <iostream>
using namespace std;

class Stack{
private:
    struct StackNode{
        int data;
        StackNode* next;
        StackNode(int d, StackNode* n = nullptr){
        data = d;
        next = n;
        }
    };
    StackNode* top;
public:
    Stack(){
        top = 0; // set top = 0
    }
    bool is_Empty(){ // sets top to nullptr if stack is empty
        return top == nullptr;
    }
    void push(int x){ // adds new node to stack
        top = new StackNode(x, top);
    }
    void pop(int &x){ // deles node from stack
        if(is_Empty())
            cout << "The stack is empty!" << endl;
        x = top->data;
        StackNode *oldTop = top;
        top = top->next;
        delete oldTop;
    }
    bool is_equal_stacks(Stack &stack1, Stack &stack2){
        
        Stack tmp_stack1 ,tmp_stack2; // create two temporary stacks

        while(!stack1.is_Empty() && !stack2.is_Empty()){ // While both stack1 & stack2 are NOT empty
            int tmp1,tmp2;
            stack1.pop(tmp1); // pop element from stack1
            tmp_stack1.push(tmp1);  // insert popped element in tmpstack1
            stack2.pop(tmp2);  // pop element from stack2
            tmp_stack2.push(tmp2); // insert popped element in tmpstack2

            if(tmp1 != tmp2) // if NOT equal return false
                return false;
        }

        if(!stack1.is_Empty() && !stack2.is_Empty()){
            return false;
        }

        while(!tmp_stack1.is_Empty() && !tmp_stack2.is_Empty()){ // While both NOT empty, fill original stack with original value in original order
            int tmp1,tmp2;
            tmp_stack1.pop(tmp1);
            stack1.push(tmp1);
            tmp_stack2.pop(tmp2);
            stack2.push(tmp2);
        }
        return true;
    }
};
class Queue{
 private:
    struct QueueNode{
        int data;
        QueueNode* next;
        QueueNode(int d, QueueNode* n = nullptr){
        data = d;
        next = n;
    }
};
    QueueNode* front, *rear;
public:
    Queue(){ // sets front and rear equal to 0
        front = rear = nullptr;
    }
    bool is_Empty(){ // sets front to nullptr if Queue is empty
        return front == nullptr;
    }
    void enqueue(int x){ // moves rear to the right as it fills positions in the array
        if(is_Empty())
            front = rear = new QueueNode(x);
        else{
            rear -> next = new QueueNode(x);
            rear = rear->next;
        }
    }
    void dequeue(int &x){ // moves front to the right as it empties positions in the array
        if(is_Empty())
            cout << "Queue is Empty!" << endl;
        else{
            x = front->data;
            QueueNode* tmp = front;
            front = front->next;
            delete tmp;
        }
    }
  void swap_queue_elements(Queue &Q){
      int first, last;
      
      if(Q.is_Empty()){ // checks if Queue is empty
      cout<<"Stack is empty"<<endl;
      }
      
      Q.dequeue(first); // remove first element

      if(Q.is_Empty()){
      Q.enqueue(first);
      }

      Stack temp,temp2; // create two temporary stacks

      while(!Q.is_Empty()){ // while the queue IS NOT empty remove and add element from Queue to stack
      int x;
      Q.dequeue(x);
      temp.push(x);
      }

      temp.pop(last); // pop last element

      while(!temp.is_Empty()){ // while the queue IS NOT empty remove and add element from first stack to second stack
      int x;
      temp.pop(x);
      temp2.push(x);
      }

      Q.enqueue(last); // add last element

      while(!temp2.is_Empty()){ // while the queue IS NOT empty remove and add element from second stack to Queue
      int x;
      temp2.pop(x);
      Q.enqueue(x);
    }
      Q.enqueue(first);
}
    void delete_queue_element(Queue &Q, int position){
        
        Queue tmp; // create a temporary queue

        int count = 0;
        while(!Q.is_Empty()){ // While NOT empty, remove element
        int x;
        Q.dequeue(x);
        count++;

        if(count != position) // if i IS NOT equal to the current position, add element
            tmp.enqueue(x);
    }
        Q = tmp; // set Q to tmp
    }
};
void display(Queue &Q){ // displays contents in Queue
    int x;
    while(!Q.is_Empty()){
        Q.dequeue(x);
        cout << x << endl;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Stack s, s2;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    s2.push(5);
    s2.push(4);
    s2.push(3);
    s2.push(2);
    s2.push(1);
    
    cout << "Stack One: " << endl;
    while(!s.is_Empty()){
        int x;
        s.pop(x);
        cout << x << endl;
    }

    cout << "Stack Two: " << endl;
    while(!s2.is_Empty()){
        int x;
        s2.pop(x);
        cout << x << endl;
    }

    // calls is_equal_stacks function to determine whether or not the stacks are equal
    if(s.is_equal_stacks(s,s2)){
        cout << "Stacks are equal!" << endl;
    }else{
        cout << "Stacks are not equal!" << endl;
    }

    Queue Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    Q.enqueue(5);

    // swap first and last element
    Q.swap_queue_elements(Q);
    // delete ith node
    Q.delete_queue_element(Q,2);

    cout << "Final Queue:" << endl;
    display(Q);
    return 0;
}
