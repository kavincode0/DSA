#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertBottom(stack<int> &s, int num){
    if(s.empty()){
        s.push(num);
        return ; 
    }
    int n = s.top();
    s.pop();
    insertBottom(s, num);
    s.push(n);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    insertBottom(s, 0);
    int size = s.size();
    for(int i = 0; i<size; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}