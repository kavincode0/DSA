#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string str = "javascript";
    for(char h: str){
        s.push(h);
    }
    for(char h: str){
        cout<<s.top();
        s.pop();
    }
}