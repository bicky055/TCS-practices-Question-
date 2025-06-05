#include "bits/stdc++.h"
using namespace std;

string RemoveDuplicateChart(string str){
     unordered_set<char> seen;
     string result = "";
     for(char c:str){
        if(seen.find(c) == seen.end()){
            result += c;
            seen.insert(c);
        }
     }
     return result;
}

int main(){

    string str;
    cin >> str;
    string output1 = RemoveDuplicateChart(str);
    cout << " After Removing str : " << output1<<endl;
    return 0;
}