#include<bits/stdc++.h>
using namespace std;

void interleaveQ(queue<int> &q){
     int n = q.size();
     if(n%2 == 1){
        cout<<"input even number of integers";
        return ;
     }
     stack<int> s;
     for(int i = 0; i<n/2; i++){
        s.push(q.front());
        q.pop();
     }
     while(!s.empty()){
      q.push(s.top());
      s.pop();
     }
     for(int i = 0; i<n/2; i++){
      q.push(q.front());
      q.pop();
     }
     for(int i = 0; i<n/2; i++){
        s.push(q.front());
        q.pop();
     }
     while(!s.empty()){
      q.push(s.top());
      s.pop();
      q.push(q.front());
      q.pop();
     }
     
}

int main(){
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   q.push(6);
   interleaveQ(q);
   for(int i = 0; i<6; i++){
      cout<<q.front()<<" ";
      q.pop();
   }
}