#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool redundantBracket(string &a){
    stack<char> s;
    for(int i = 0; i<a.length(); i++){
        if(a[i]=='(' || a[i]=='+' || a[i] == '-' || a[i] == '/'){
            s.push(a[i]);
        }
        else
        {
            if(a[i] == ')'){
                bool isRed = true;
                while(s.top()!='('){
                    char top = s.top();
                    if(top =='(' || top =='+' || top == '-' || top == '/'){
                        isRed = false;
                    }
                    s.pop();
                }
                if(isRed == true)
                return true;
                s.pop();
            }
            
        }

    }
    return false;
}
int main(){
    string a = "(a+b)()";
    cout<<redundantBracket(a);
}