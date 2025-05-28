#include "bits/stdc++.h"
using namespace std;

void Freq(string str){
     unordered_map<char,int> map;

     for(char c : str){
        map[c]++;
     }
     for(auto x: map){
        cout<<x.first <<x.second;
     }
}
int main(){

    string str;
    cin >> str;
    Freq(str);
    return 0;
}