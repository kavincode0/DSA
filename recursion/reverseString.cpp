#include <iostream>
using namespace std;

void reverse(string& s, int i, int j){
    if(i>j)
    return ;

    char t  = s[i];
    s[i] = s[j];
    s[j] = t;

    i++;
    j--;
    reverse(s, i, j);

}

int main(){
        string name = "kavya";
        reverse(name, 0, 4);
        cout<<name;
}