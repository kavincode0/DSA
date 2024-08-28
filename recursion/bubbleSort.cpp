#include <iostream>
using namespace std;

void Sort(int arr[], int n){
    if(n==0||n==1)
    return ;
    
    for(int i = 1; i<n; i++){
        if(arr[i-1]>arr[i]){
        int t = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = t;
        }
        Sort(arr, n-1);
    }
}

int main(){
    int arr[4] = {1, 7, 4, 3};
    Sort(arr, 4);
    for(int i = 0; i<4; i++){
        cout<<arr[i];
    }
}