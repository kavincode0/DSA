#include <iostream>
using namespace std;

bool isSorted(int *arr/*arr[]*/, int size){
    //base case 
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
    bool remain  = isSorted(arr+1, size-1);
    return remain;
    }
}
int main(){
    int arr[5] = {2, 3, 5, 8};
    if(isSorted(arr, 4)==true){
        cout<<"sorted :)";
    }
    else
    cout<<":(";
    return 0;
}