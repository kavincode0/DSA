#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){
//    stack<int> s;
// //    s.push(2);
// //    s.push(4);
//    s.push(10);
//    cout<<s.top()<<endl;
//    cout<<s.size()<<endl;
//    s.pop();
// //    cout<<s.top()<<endl;
//    if(s.empty()){
//     cout<<"stack is empty"<<endl;
//    }
// }

// implementation

class Stack{
    // properties
    public: 
       int *arr; 
       int top;
       int size;

    // behaviour
    Stack(int size){
        this -> size = size;//equals to size in parameter
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0)
        top--;
        else
        cout<<"stack underflow"<<endl;
    }
    int peek(){
        if(top>=0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1)
           return true;
        else
           return false;
    }
};

int main(){
    Stack st(6);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek()<<endl;
}