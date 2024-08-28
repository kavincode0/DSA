#include<bits/stdc++.h>
using namespace std;

struct pP{
    int petrol;
    int  distance;
};

int cirTour(pP p[], int n){
    int deficit = 0;
    int bal = 0; 
    int start = 0;
    for(int i = 0; i<n; i++){
        bal+= p[i].petrol - p[i].distance;
        if(bal<0){
            deficit += bal;
            bal = 0;
            start = i+1;
        }
    }
    if(deficit+bal>=0){
        return start;
    }
    else 
    return -1;
}

int main(){
    pP p[4];
    p[0].petrol = 4; 
    p[0].distance = 6;
    p[1].petrol = 6; 
    p[1].distance = 5;
    p[2].petrol = 7; 
    p[2].distance = 3;
    p[3].petrol = 4; 
    p[3].distance = 5;
    cout<<cirTour(p, 4);
}