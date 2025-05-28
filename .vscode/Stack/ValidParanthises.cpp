#include "bits/stdc++.h"
using namespace std;
/*
bool isValid(string str){
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        //opening paranthise
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            st.push(str[i]);
        }
        else{
            //check size 
            if(st.size() == 0) return false;
            if((st.top() == '(' && str[i] == ')') || 
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']')
              ){
                st.pop();
              }
              else return false;

        }
    }
    // check stack size
    return st.size() == 0;
}
*/



bool IsValid(string str){
    //create stack
    stack<int> st;
    for(int i=0; i<str.length(); i++){
        //open paranthise
        if(str[i] == '(' || str[i] == '{' || str[i] =='['){
            st.push(str[i]);
        }
        else{
            // check size
            if(st.size() == 0) return false; // closing > open
            if((st.top() == '(' && str[i] == ')') ||
                (st.top() == '{' && str[i] == '}') ||
                (st.top() == '[' && str[i] == ']') 
             ) {
                st.pop();
             }
             else{
                return false;
             }

        }
    }
    // stack size 
    if(st.empty()) return true;
    else return false;
}

int main(){
    string str = "{({})([])}";
    bool falg = IsValid(str);
    if(falg) cout << " valid";
    else cout <<" Not valid";
}
