#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr){
    stack<int> s;
    s.push(-1);
    vector<int> ans(arr.size());

    for(int i = arr.size()-1; i>=0; i--){
        int curr = arr[i];
        while(s.top()>=curr)
        s.pop();

        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 3, 4, 2};
    vector<int> result = nextSmallerElement(arr);
    for(int a: result){
        cout<<a<<" ";
    }
}