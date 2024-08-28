#include <iostream>
using namespace std;
int swap(int& a, int& b){
    int t = a;
    a = b;
    b = t; 
    return a, b;
}

int partition(int arr[], int s, int e){
        
        int pivot = arr[s];
        int cnt = 0; 
        for(int i = s+1; i<=e; i++){
            if(arr[i]<=pivot)
            cnt++;
        }

        // place pivot at right position
        int pivotIndex = s+cnt;
        swap(arr[pivotIndex], arr[s]);

        // left and right part managed
        int i = s, j = e; 
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<pivot)
            i++;
            while(arr[j]>pivot)
            j--;
            if(i<pivotIndex && j>pivotIndex){
                swap(arr[i++], arr[j--]);
            }
        }
return pivotIndex;
}
void Sort(int arr[], int s, int e){
        // base case
        if(s >= e)
        return ;

        int p = partition(arr, s, e);

        // left part sort
        Sort(arr, s, p-1);
        
        // right part sort
        Sort(arr, p+1, e);
}
int main(){
    int n, arr[n]; 
    cout<<"enter the number of elements to be sorted:"<<endl;
    cin>>n;
    cout<<"enter array of "<<n<<" elements:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    Sort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}