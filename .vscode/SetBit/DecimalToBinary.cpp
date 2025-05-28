#include "bits/stdc++.h"
using namespace std;
string DecimalTobinary(int n){
    string result = "";
    if(n == 0) return "0"; // Handle the case for 0
    while(n > 0){
        int bit = n&1; // Get the last bit
        result = char(bit + '0') + result; // Append it to the result
        n = n >> 1; // Right shift to process the next bit

    }
    return result; // Return the binary representation as a string
}
string DecimalTooctal(int n){
    string result = "";
    if(n == 0) return "0"; // Handle the case for 0
    while(n > 0){
        int bit = n % 8; // Get the last octal digit
        result = char(bit + '0') + result; // Append it to the result
        n = n / 8; // Divide by 8 to process the next digit
    }
    return result; // Return the octal representation as a string
}
string DecimalToHexa(int n){
    string result = "";
    if(n == 0) return "0"; // Handle the case for 0
    while(n > 0){
        int bit = n % 16; // Get the last hexadecimal digit
        if(bit < 10) {
            result = char(bit + '0') + result; // Append digits 0-9
        } else {
            result = char(bit - 10 + 'A') + result; // Append letters A-F
        }
        n = n / 16; // Divide by 16 to process the next digit
    }
    return result; // Return the hexadecimal representation as a string
}
int main(){
    int n;
    cin >>n ;
    cout << DecimalTobinary(n) << endl;
}