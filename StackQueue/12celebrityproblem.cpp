#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> &M, int a, int b){
  if(M[a][b] == 1)
  return true;
  else 
  return false;
 }
    
int findCelebrity(vector<vector<int>> &M){
  int n = M.size();
  stack<int> s;
  for(int i = 0; i<n; i++){
    s.push(i);
  }

  while(s.size()>1){

    int a = s.top();
    s.pop();
    int b = s.top();
    s.pop();
    if(knows(M, a, b)){
        s.push(b);
    }
    else{
        s.push(a);
    }
  }
  int candidate = s.top();
  // single element in stack is potential celebrity, check
  bool rowCheck = false;
  int zeroCnt = 0;
  for(int i=0; i<n; i++){
     if(M[candidate][i] == 0)
     zeroCnt++;
  }
  if(zeroCnt == n){
    rowCheck = true;
  }
  bool colCheck = false;
  int oneCnt = 0; 
  for(int i = 0; i<n; i++){
    if(M[i][candidate] == 1)
    oneCnt++;
}
if(oneCnt == n-1){
  colCheck = true;
}

if(rowCheck ==  true && colCheck == true)
return candidate;
else
return -1;
}
 
int main()
{
    vector<vector<int>> m = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout<<findCelebrity(m)+1<<" person";
}