#include "bits/stdc++.h"
using namespace std;

bool CheckPlindrom(string s){
    int n = s.length();
    int st = 0, end = n-1;
    while(st <= end){
        if(s[st++] != s[end--]) return false;
    }
    return true;
}
int main(){

    string str;
    cin >> str;
    if(CheckPlindrom(str)) cout<<"is a Plindrom";
    else cout << "Not a plindrom"<<endl;
    return 0;
}