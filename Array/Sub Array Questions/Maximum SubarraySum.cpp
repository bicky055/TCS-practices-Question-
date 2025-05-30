#include "bits/stdc++.h"
using namespace std;

int MaxSubarraySum1(int arr[], int n){

    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k = i; k<=j; k++){
                sum += arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;

}

int MaxSubarraySum2(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum +=arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
// This is a more optimized version of the above code.
// It reduces the number of iterations by calculating the 
// sum directly

// now 
// we can use the Kadane's algorithm to find the maximum subarray sum in O(n) time complexity.
int MaxSubarraySum3(int arr[], int n){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxi = max(sum, maxi);
        if(maxi < 0){
            sum = 0; // reset the sum if it becomes negative
        }
    }
    return maxi;
}
int main(){
    int n;
    cout << " Enter No: "<<endl;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxi = MaxSubarraySum3(arr,n);

    cout << maxi << endl;
}