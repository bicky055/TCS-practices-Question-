#include "bits/stdc++.h"
using namespace std;

string reverseStr(string s){
    int n = s.length();
    int st = 0, end = n-1;
    while(st <= end){
         swap(s[st++],s[end--]);
    }
    return s;
}
int main(){

    string str;
    cin >> str;
    //reverse(str.begin(),str.end());
    //cout << str << endl;
    cout << reverseStr(str)<<endl;
    return 0;
}