#include<bits/stdc++.h>
using namespace std;

class Nstack{
    // initialize your data structure
    int *arr;
    int *top; 
    int *next; 
    int n, s;
    int freespot;

    public: 
    Nstack(int N, int S){
        n = N; 
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
      // top initialize   
        for(int i =0; i<n; i++){
            top[i] = -1;
        }
      // next initialize   
        for(int i = 0; i<s; i++){
            next[i] = i+1;
        }
// update last index to -1
        next[s-1] = -1;
// initialize freespot
        freespot = 0;
    }

    bool push(int x, int m){
        // check for overflow
        if(freespot == -1){
            return false;
        }
        // find index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // insert element into array
        arr[index] = x;

        // update next
        next[index] = top[m-1];

        // update top
        top[m-1] = index;

        return true;
    }

    // pops top element from the mth stack. returns -1 if the stack if empty, otherwise returns the popped element
    int pop(int m)
    {
        // check underflow 
        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freespot;

        freespot = index;
        return arr[index];
    }
};

