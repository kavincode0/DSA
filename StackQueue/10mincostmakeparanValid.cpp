#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minValidparan(string a){
    if(a.length()%2 == 1)
    return -1;

    stack<char> s;
    for(int i = 0; i<a.length(); i++){
        if(a[i] == '{'){
            s.push(a[i]);
        }
        else
        {
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else
            s.push(a[i]);
        }
    }

    int x = 0, y = 0; 
    while(!s.empty())
    {
        if(s.top() == '{'){
        x++;
    }
        else
         y++;
    s.pop();
    }
    int ans = (x+1)/2 + (y+1)/2;
    return ans;
}

int main(){
    string a = "{{{}}}";
    cout<<minValidparan(a);
}