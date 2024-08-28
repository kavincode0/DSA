#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s, int num){
    if(s.empty()){
        s.push(num);
        return ;
    }

    if(s.top()<num){
        s.push(num);
    }
    else{
        int x = s.top();
        s.pop();
        insertSorted(s, num);
        s.push(x);
    }
}
void sortStack(stack<int> &s){
    if(s.empty())
    return ;
    int num = s.top();
    s.pop();

    sortStack(s);
    insertSorted(s, num);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(-2);
    sortStack(s);
    int size = s.size();
    for(int i = 0; i<size; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}