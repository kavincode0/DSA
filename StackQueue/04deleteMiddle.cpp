#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    // base case
    if(count == size/2){
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    solve(inputStack, count+1, size);
    inputStack.push(num);

}

void deleteMiddle(stack<int> &inputStack, int N){
    int count = 0; 
    solve(inputStack, count, N);
}
int main(){
    stack<int> s;
    for(int i = 1; i<6; i++){
        s.push(i);
    }
    deleteMiddle(s, 5);
    for(int i = 0; i<5; i++){
        cout<<s.top();
        s.pop();
    }
}