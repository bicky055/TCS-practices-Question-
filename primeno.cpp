#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n){
    //base case
    if(n<= 1) return false;

    for(int i=2; i*i <=n; i++){
        if(i%2 == 0) return false;

    }
    return true;
}
int main(){
    int num;
    cin>> num;

    if(isPrime(num)) cout<< num << " is Prime no";
    else cout << num << " not a prime no";
}