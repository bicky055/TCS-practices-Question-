#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int st = 0, end = n-1;
    while(st<end){
        swap(arr[st++],arr[end--]);
    }
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}