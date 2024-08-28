#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int l, int key) {
    if(s>l)
        return -1;
    int m = (s+l)/2;
    if(key==arr[m])
    return m;
    if(key>arr[m])
    return binarySearch(arr, m+1, l, key);
    else
    return binarySearch(arr, s, m-1, key);
}

int main() {
    int arr[5] = {1, 4, 5, 7, 9};
    if(binarySearch(arr, 0, 4, 4)==-1){
        cout<<"Absent";
    }
    else
    cout<<"Position: "<<binarySearch(arr, 0, 4, 4);
}