#include "bits/stdc++.h"
using namespace std;
// Function to count subarrays with sum equal to k

int CountSubArraySumWithK1(int arr[], int n, int k){
    int count = 0;
    // Iterate through all possible subarrays
    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){
            // Calculate the sum of the current subarray
            // This is a brute force approach with O(n^3) time complexity
            int sum = 0;
            for(int k=i; k<=i; k++){
                sum += arr[k];
            }
            if(sum == k) count++;
        }
    }
    return count;
}

// This is a more optimized version of the above code.
int CountSubArraySumWithK2(int arr[], int n, int k){
    int count = 0;
    // Iterate through all possible subarrays
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == k) count++;
        }
    }
    return count;
}
// This is a more optimized version of the above code.
int CountSubarraySumWithK3(int arr[], int n, int k){
    int count = 0;
    // Using a hash map to store the cumulative sum
    unordered_map<int, int> sumMap;
    int currentSum = 0;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        // If currentSum is equal to k, increment count
        if(currentSum == k){
            count++;
        }
        // If (currentSum - k) exists in the map, 
        //it means there are subarrays
        // that sum to k
        if(sumMap.find(currentSum - k) != sumMap.end()){
            count += sumMap[currentSum - k];

        }
        // Increment the count of currentSum in the map
        sumMap[currentSum]++;   

    }
    return count;

}
int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = CountSubarraySumWithK3(arr, n, k);

    cout << "Count of subarrays with sum equal to " << k << " is: " << count << endl;
    return 0;
}