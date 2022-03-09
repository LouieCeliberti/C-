//
//  main.cpp
//  Stacks and Queues
//
//  Created by Louiem Celiberti on 10/19/20.
//

#include <iostream>
using namespace std;

class Stack{
private:
    int max_cap, top, *data;
    
public:
    Stack(int cap){
        max_cap = cap;
        top = 0;
        data = new int[max_cap];
    }
    void push(int x){
        if(top == max_cap){
            cout << "Can not add anymore elements" << endl;
        }else{
            data[top] = x;
            top++;
        }
    }
    void pop(int &x){
        if(isEmpty())
            cout << "Stack is Empty!";
        else{
            top--;
            x = data[top];
        }
    }
    bool isEmpty(){
        return top == 0;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Stack s(10);
    s.push(11);
    s.push(2);
    s.push(3);
    
    while(!s.isEmpty()){
    int x;
    s.pop(x);
    cout << x << endl;
    s.pop(x);
    cout << x << endl;
    s.pop(x);
    cout << x << endl;
    }
    return 0;
}
