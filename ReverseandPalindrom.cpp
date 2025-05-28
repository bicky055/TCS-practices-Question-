#include "bits/stdc++.h"
using namespace std;

// check Palindrom
 int main(){
    int n,m;
    cin >>n ;
    m=n;
    int rev = 0 ;
    
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    if(m == rev ) cout << "its a Palindrom";
    else cout << "Not a palindrom";
 }

/*
int main(){
    int n ;
    cin >> n;
    
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    cout << rev<<endl;
}
    */