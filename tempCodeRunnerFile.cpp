#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){
   if(i>j)
   return true;

   if(s[i] != s[j])
   return false;

   i++;
   j--;
   checkPalindrome(s, i, j);
}

int main(){
   string s = "ij";
   cout<<checkPalindrome(s, 0, 4);
}