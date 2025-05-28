#include "bits/stdc++.h"
using namespace std;

void Freq(int arr[], int n){
     unordered_map<int,int> map;

     for(int i=0; i<n; i++){
        map[arr[i]]++;
     }
     for(auto x: map){
        cout<<x.first <<x.second;
     }
}
void Freq1(int arr[], int n){
    // create a vector with all true value
    vector<bool> visited(n,false);

    for(int i=0; i<n; i++){
        //skip if we visitied allready
        if(visited[i] == true) continue;
        
        int count = 1;
        for(int j=i+1; j<n; j++){
           if(arr[i] == arr[j]){
            visited[j] = true;
            count++;
           }
        }
        cout << arr[i] <<" counts " << count<<endl;
    }
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Freq1(arr, n);
    return 0;
}