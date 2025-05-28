#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int Max1 = arr[0], Max2 = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > Max1) {
            Max2= Max1;
            Max1 = arr[i];
        }
        else if(arr[i] > Max2 && arr[i] != Max1 ){
            Max2 = arr[i];
        }
    }
    cout << Max2; 
}