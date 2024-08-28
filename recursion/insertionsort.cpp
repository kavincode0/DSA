#include <iostream>
using namespace std;

void Sort(int arr[], int n){
    if(n==0||n==1)
    return ;

    Sort(arr, n-1);
    int last = arr[n-1];
    int j = n-2;
    
    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main(){
    int arr[] = {1, 8, 5, 3};
    Sort(arr, 4);
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<" ";
    }
}