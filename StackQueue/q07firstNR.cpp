#include<bits/stdc++.h>
using namespace std;

string firstNR(string A){
    queue<int> q;
    unordered_map<char, int> cnt;
    string ans = "";

    for(int i = 0; i<A.length(); i++){
        char ch = A[i];
        cnt[ch] ++;
        q.push(ch);
        
        while(!q.empty()){
            if(cnt[q.front()]>1)
            q.pop();
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main(){
    cout<<firstNR("aabc");
}