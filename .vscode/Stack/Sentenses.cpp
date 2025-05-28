#include "bits/stdc++.h"
using namespace std;

void ReverseSentences(string str){
    stack<string> st;

    for(int i=0; i<str.length(); i++){
        string word ="";
        while(str[i] != ' ' && i<str.length()){
            word += str[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() <<" ";
        st.pop();
    }cout << endl;
}

int main(){
    string str ="Hello I am b2?";
    ReverseSentences(str);
    return 0;
}