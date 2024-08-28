#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

void solve(string s, string output, int index, vector<string>& ans){
    // base case
    if(index >= s.length()){
        ans.push_back(output);
        return;
    }

    for(int i = index; i < s.length(); i++){
        swap(s[index], s[i]);
        solve(s, output+s[index], index + 1, ans); // Increase the index and update the output
        // backtrack
        swap(s[index], s[i]);
    }
}

vector<string> generatePermutations(string s){
    int index = 0;
    vector<string> ans;
    string output = "";
    solve(s, output, index, ans);
    return ans;
}

int main(){
    string s = "abc";
    vector<string> result = generatePermutations(s);
    for(string subseq: result){
        cout << subseq << " ";
    }
}
