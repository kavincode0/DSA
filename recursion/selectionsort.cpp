#include <iostream>
using namespace std;

void Sort(int arr[], int n){
    //base case
    if(n==0||n==1)
    return ;

    int min = 0;
    for(int i = 1; i<n; i++){
    if(arr[min]>arr[i]){
        int t = arr[min];
        arr[min] = arr[i];
        arr[i] = t;
        }
    }
    Sort(arr+1, n-1);
}
int main(){
    int arr[]={1, 8, 3, 5};
    Sort(arr, 4);
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<" ";
    }
}