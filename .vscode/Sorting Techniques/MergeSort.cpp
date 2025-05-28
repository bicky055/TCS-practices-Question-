/*
#include "bits/stdc++.h"
using namespace std;

void Merage(vector<int> &arr, int st,int mid, int end){
    // Create a temp arr
    vector<int> temp;
    // merge left and right sorted arr
    int i = st, j = end;
    while(i <= mid && j<= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    // seen any element left or not so push
    // left arr check
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while (j<=end)
    {
        temp.push_back(arr[j++]);
    }
    
    // store value in orignal arry
    for (int k = 0; k < temp.size(); ++k) {
    arr[st + k] = temp[k];
}

      
}

void mergeSort(vector<int> &arr,int st,int end){
    int mid = st + (end-st)/2; // use for intiger overflow
    if(st<end){
        //Left part
        mergeSort(arr,st,mid);
        //right part
        mergeSort(arr,mid+1, end);

        // call Merge Function
        Merage(arr,st,mid,end);
    }

}

int main(){
    vector<int> arr ={20,10,53,44,12,78,68};
    mergeSort(arr,0,arr.size()-1);

    for(auto i : arr){
        cout << i <<" ";
    }cout <<endl;
}
*/
/*
#include "bits/stdc++.h"
using namespace std;

void Merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        arr[st + k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        Merge(arr, st, mid, end);
    }
}

int main() {
    vector<int> arr = {20, 10, 53, 44, 12, 78, 68};
    mergeSort(arr, 0, arr.size() - 1);

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
*/

#include "bits/stdc++.h"
using namespace std;

void merge(vector<int> &arr, int st,int mid,int end){
    vector<int> temp;
    int i = st;
    int j = mid+1;
    while(i<= mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid) temp.push_back(arr[i++]);
    while(j<=end) temp.push_back(arr[j++]);

    for(int k=0; k<temp.size(); k++){
        arr[k+st] = temp[k];
    }
}

void mergeSort(vector<int> &arr,int st, int end){
    int mid = st + (end-st)/2;
     //base case
     if(st < end){
        //left
        mergeSort(arr,st,mid);
        //right
        mergeSort(arr,mid+1,end);

        //Merge all 
        merge(arr,st,mid,end);
     }
}

int main(){
    vector<int> arr = {5,2,6,41,10,64,7,30,9};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    }
}