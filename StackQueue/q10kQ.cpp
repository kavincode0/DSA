#include<bits/stdc++.h>
using namespace std;


class kQ{
    public: 
    int n, k, *front, *rear, *next, fs,*arr;
    kQ(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        fs = 0;
        for(int i = 0; i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i = 0; i<n-1; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
    }
    void enQ(int d, int qn){
        if(fs == -1){
            cout<<"overflow";
            return ;
        }
        int index = fs;
        fs = next[index];
        if(front[qn-1] == -1)
          front[qn-1] = index;
        else
          next[rear[qn-1]] = index;
        next[index] = -1;
        rear[qn-1] = index;
        arr[index] = d;
    }
    int dQ(int qn){
        if(front[qn-1] == -1){
            cout<<"underflow";
            return -1;
        }
        int index = front[qn-1];
        front[qn-1] = next[index];
        next[index] = fs;
        fs = index;
        return arr[index];
    }
};

int main(){
    kQ q(10,3);
    q.enQ(10, 1);
    q.enQ(15, 1);
    q.enQ(20, 2);
    q.enQ(25, 1);
    cout<<q.dQ(1)<<endl;
    cout<<q.dQ(2)<<endl;
    cout<<q.dQ(1)<<endl;
    cout<<q.dQ(1)<<endl;
    cout<<q.dQ(1)<<endl;
}