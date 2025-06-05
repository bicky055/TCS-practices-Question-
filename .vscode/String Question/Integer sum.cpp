#include "bits/stdc++.h"
using namespace std;

int integerSum(string st){

    int sum = 0;
    for(auto i : st){
        if(isdigit(i)){
            sum += int(i-'0');
        }
    }
    return sum;

}

void VolCons(string str){
    int vol = 0, conso = 0;
    for(auto i : str){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
            vol++;
        }
        else {
            conso++;
        }
        
    }
    cout <<"Vowel is: " << vol << endl;
    cout << "Consonants is " << conso << endl;
}

bool IsValid(string str){
    // base case 
    if(str.size() == 1) return false;
    
    stack<int> st;
    for(auto i : str){
        if(i == '(' || i == '{' || i == '['){
            st.push(i);
        }
        else{
            if(st.size() == 0) return false; // closing > opening
            if((st.top() == '(' && i == ')') ||
                (st.top() == '{') && i == '}'||
                (st.top() == '[' && i == ']') ){
                    st.pop();
                }
             else{
                return false;
             }   
        }
      
    }
      return (st.size() == 0);
}

void RemoveSpecialChar(string str){
    string result = "";
    for(auto i:str){
        if(isalpha(i) || isdigit(i)){
            result += i;
        }
    }
    cout << " string is " << result << endl;
}

void FristNonRepetingChar(string str){
    
    unordered_map<char,int> map;
    // count each frequency
    for(auto i: str){
        map[i]++;
    }
    // print Frist non-repetring charecter
    for(auto ch : str){
        if(map[ch] == 1){
            cout << "Frist Non repting char is : " << ch <<endl;
        }
    }
       
}

int main(){

    string str = "2ab5#";
    int sum = integerSum(str);
    cout << "sum is : " << sum << endl;

    string sr = "ababcbc";
    VolCons(sr);

    string s = "({[]{}})";
    if(IsValid(s)) cout <<"Yes";
    else cout << " No" << endl;

    string a = "absd2@a!d^n";
    RemoveSpecialChar(a);

    string rep = "abchabch";
    FristNonRepetingChar(rep);
    return 0;

}