#include<bits/stdc++.h>
using namespace std;

vector<int> U(int *a, int k, int n){
    vector<int> ans; 
    deque<int> dq;
    
    for(int i = 0; i<k; i++){
        if(a[i]<0)
        dq.push_back(i);
    }
    
    if(dq.size()>0)
    ans.push_back(a[dq.front()]);
    else
    ans.push_back(0);
    
    for(int i = k; i<n; i++){
        if(!dq.empty() && i - dq.front()>=k)
        dq.pop_front();
        
        if(a[i]<0)
        dq.push_back(i);
        
        if(dq.size()>0)
        ans.push_back(a[dq.front()]);
        
        else
        ans.push_back(0);
    }
    return ans;
} 

int main(){
    int a[] = {-8, 2, 3, -6, 10};
    vector<int> ans = U(a, 2, 5);
    for(int i = 0; i<4; i++){
        cout<<ans[i]<<" ";
    }
}
