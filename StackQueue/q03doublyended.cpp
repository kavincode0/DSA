#include<bits/stdc++.h>
using namespace std;

class DoublyQ{
    int *arr;
    int front;
    int rear;
    int size;

    public:

    DoublyQ(int s){
        size = s;
        arr = new int[size];
        front = 0; 
        rear = 0;
    }
    void popfront(){
        if(front == rear){
            cout<<"q is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }
    void popback(){
        if(front == rear){
            cout<<"q is empty"<<endl;
        }
        else{
            arr[rear-1] = -1;
            rear--;
        }
    }
    void pushfront(int n){
        if(front == 0){
            cout<<"element cannot be pushed front"<<endl;
        }
        else{
            arr[front-1] = n;
            front--;
        }
    }
    void pushback(int n){
        if(rear == size){
            cout<<"element cannot be pushed rear"<<endl;
        }
        else{
            arr[rear] = n;
            rear++;
        }
    }
    int qfront(){
        if(front == rear)
        return -1;
        else
        return arr[front];
    }
    int qrear(){
        if(front == rear)
        return -1;
        else
        return arr[rear-1];
    }
};

int main(){
    DoublyQ d(6);
    d.pushback(4);
    d.pushback(5);
    d.pushback(6);
    d.pushfront(3);
    d.pushfront(2);
    cout<<d.qfront()<<endl;
    cout<<d.qrear()<<endl;
    d.pushfront(1);
    d.pushback(7);
    cout<<d.qfront()<<endl;
    cout<<d.qrear()<<endl;
}