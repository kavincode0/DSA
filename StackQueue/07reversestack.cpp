#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertBottom(stack<int> &s, int num){
    if(s.empty()){
    s.push(num);
    return ;
    }

    int x = s.top();
    s.pop();
    insertBottom(s, num);
    s.push(x);
}
void reverseStack(stack<int> &s){
    //base case
    if(s.empty())
    return ;

    int num = s.top();
    s.pop();
    reverseStack(s);

    insertBottom(s, num);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    reverseStack(s);
    int size = s.size();
    cout<<size;
    for(int i = 0; i<3; i++){
        cout<<s.top()<<" ";
        s.pop();
    } 
}