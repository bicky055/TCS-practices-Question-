#include "bits/stdc++.h"
using namespace std;

// Brute force approach
void LongestSubStringWithoutRepeatingChar(string str){
    int n = str.size();
    int maxLength = 0;

    for(int i=0; i<n; i++){
        // Reset the hash array for each starting point
        int hash[255] = {0}; 
        for(int j = i; j<n; j++){
            if(hash[str[j]] == 1){
                // If we encounter a repeating character, break the inner loop
                break;
            } else {
                // Mark the character as seen
                hash[str[j]] = 1;
                // Update the maximum length found so far
                maxLength = max(maxLength, j - i + 1);

            }
        }
    }
    cout << "Length of the longest substring without repeating characters: " << maxLength << endl;
}
// Optimized approach using sliding window technique
void LogestSubString(string str){
    int n = str.size();
    int maxLength = 0;
    int l = 0; // left pointer
    int r = 0; // right pointer
    int hash[255] = {0}; // hash array to store character counts
    while(r < n){
        if(hash[str[r]] == 0){
            // If the character is not seen, mark it and move the right pointer
            hash[str[r]]++;
            r++;
            // Update the maximum length found so far
            maxLength = max(maxLength, r - l);
        } else {
            // If the character is already seen, move the left pointer
            hash[str[l]]--;
            l++;
        }
    }
    cout << "Length of the longest substring without repeating characters: " << maxLength << endl;
}
    
   
int main(){

    string str = "cadbzabcd";
    LongestSubStringWithoutRepeatingChar(str);
    LogestSubString(str);
    return 0;   
}