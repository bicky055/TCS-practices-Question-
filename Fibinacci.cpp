#include "bits/stdc++.h"
using namespace std;
// using Recursion

int Fibonachi(int n){
    // base case 
    if(n <= 1 ) return n;

    return Fibonachi(n-1) + Fibonachi(n-2);
}

int main(){
    int num;
    cin >> num;

    for(int i=0; i<=num; i++){
        cout << Fibonachi(i) << " ";
    }
}





/*
int main(){
    int n;
    cin >> n;
   
    int a=0, b=1;
    for(int i=1; i<=n; i++){
        cout << a <<" ";
        int next = a+b;
        a = b;
        b = next;
    }
    return 0;
}

*/