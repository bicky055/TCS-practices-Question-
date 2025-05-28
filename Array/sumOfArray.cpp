#include "bits/stdc++.h"
using namespace std;

int sumOfarray(int arr[],int n){
    //base case 
    if(n<=1) return n;

    return sumOfarray(arr,n-1) + arr[n-1];
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfarray(arr,n);
}