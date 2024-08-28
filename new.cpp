#include<iostream>
using namespace std;

void swap(char &a, char &b){
   char t = a; 
   b = a; 
   a = t; 
}
bool checkPalindrome(string s, int i, int j){
   if(i>j)
   return true;

   if(s[i] != s[j])
   return false;
   
   checkPalindrome(s, ++i, --j);
}

int main(){
   string s = "jij";
   if(checkPalindrome(s, 0, 2)==true)
   cout<<"yes";
   else
   cout<<"no";
}