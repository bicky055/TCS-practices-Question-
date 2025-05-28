
#include "bits/stdc++.h"
using namespace std;
void Freq(string str){
    unordered_map<char,int> map;
    for(int i=0; i<str.length(); i++){
        map[str[i]]++;
    }
    for(auto x : map){
        cout<<x.first << x.second ;
    }
}
int main(){
    string str = "aaabbccc";
    return 0;
    
}