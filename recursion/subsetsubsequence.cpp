#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// to find all non-empty subsequences in a string

void solve(string str, string output, int index, vector<string>& ans){
    // base case
    if(index >= str.length()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(str, output, index+1, ans);
    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){

    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main(){
    string s = "abcdef";
    vector<string> result = subsequences(s);
    
    // Print the subsequences
    for (string subseq : result) {
        cout << subseq << endl;
    }
    
    return 0;
}