#include<iostream>
using namespace std;

int Sum(int arr[], int size){
    // base case
    if(size == 0)
    return 0;
    if(size == 1)
    return arr[0];

    int sum = arr[0] + Sum(arr+1, size-1);
    return sum;
}
int main(){
    int arr[5]={1, 2, 3, 4, 10};
    cout<<Sum(arr, 5);
}