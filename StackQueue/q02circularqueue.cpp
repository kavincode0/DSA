#include<bits/stdc++.h>
using namespace std;

class Cqueue{
    int* arr;
    int front, rear, size;
    public:
    Cqueue(int s){
        size = s;
        front = -1;
        rear = -1;
        arr = new int[s];
    }
    void enqueue(int n){
        if((rear + 1) % size == front){
            cout<<"q is full"<<endl;
        }
        else if(front == -1 && rear == -1){
             front = 0, rear = 0;
             arr[front] = n;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = n;
        }
    }
    void dequeue(){
        if(front == -1 && rear == -1){
            cout<<"q is empty"<<endl;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front = (front + 1)%size;
        }
    }
    int qfront(){
        if(front == -1)
        return -1;
        else 
        return arr[front];
    }
};

int main(){
    Cqueue c(4);
    c.enqueue(1);
    c.enqueue(2);
    c.enqueue(3);
    c.enqueue(4); 
    c.dequeue();
    c.dequeue();
    c.enqueue(5);
    c.dequeue();
    c.dequeue();
    cout<<c.qfront();
}