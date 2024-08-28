#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key){
    //base case
    if(size == 0)
        return false;
    
    if(arr[0]==key){
        return true;
    }    
    else{
        bool rem = Search(arr+1, size-1, key);
        return rem;
    }
}
int main(){
    int arr[5]={3, 4, 1, 2, 6};
    if(Search(arr, 5, 14))
    cout<<"Present";
    else
    cout<<"Absent";
}