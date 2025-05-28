#include "bits/stdc++.h"
using namespace std;

int binaryToDecimal(string &binary){
    int decimal = 0;
    int n = binary.length();
    for(int i=0; i<n; i++){
        if(binary[n-i-1] == '1'){
            decimal += pow(2,i);

        }
    }
    return decimal;
}


int main(){
    string str = "11011";
    int decimalVal = binaryToDecimal(str);
    cout << "Decimal value of binary " << str << " is: " << decimalVal << endl;
    return 0;
}