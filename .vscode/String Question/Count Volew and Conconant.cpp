#include "bits/stdc++.h"
using namespace std;

void CountVolwelandConsonant(string str){
    int volwe = 0, conso = 0;
    for(char c: str){
        c = tolower(c);
        // kya pta c apfabate hi na ho so
        if(isalpha(c)){
            if(c == 'a' || c == 'e' || c ==  'i' || c== 'o' || c== 'u'){
                volwe++;
            }
            else conso++;
        }
    }
    cout << "count of vlowel is " <<volwe<<endl;
    cout << " count of consonant is " << conso<<endl;  
}
int main(){

    string str;
    cin >> str;
    CountVolwelandConsonant(str);
    return 0;
}