//Reverse an integer array
#include <bits/stdc++.h>

using namespace std;

void reverseArray(int P[],int start,int end){

    while (start < end)
    {
        int temp = P[start];
        P[start] = P[end];
        P[end] = temp;
        start++;
        end--;
    }
    
}

void printArray(int P[],int n){
    for(int i = 0;i<n;i++){
        cout<<P[i]<<" ";
    }
}

int main(){
    int P[] = {5,8,7,6};
    int n = sizeof(P)/sizeof(P[0]);
    reverseArray(P,0,n-1);
    printArray(P,n);
    return 0;
}