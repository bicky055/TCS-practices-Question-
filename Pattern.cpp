#include "bits/stdc++.h"
using namespace std;

int main() {
    int n ;
    cin >> n;
    // for Rigth Alinge Traingle
    /*
   for(int i=1; i<=n; i++){
       // print space 
       for(int j =1; j<=n-i; j++){
        cout << " ";
       }
       // print star(*)
       for(int k=1; k<=i; k++){
        cout <<"*";
       }
       cout <<endl;
   }
       */
      // Floyds Traingle
      /*
      1
      2 3
      4 5 6
      7 8 9 10
      */
     /*
      int count = 1;
      for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

            cout <<count<<" ";
            count += 1;
        }cout << endl;
      }
        */

        /*
        1
       1  1
      1  2  1
     1  3  3 1
    1  4  6  4 1    
        */

    // logic  val = val* (i+j)/(i-j)
    /*
    for (int i = 0; i < n; i++)
    {
        // Print space
        for(int spcae = 0; spcae<n-i-1; spcae++){
            cout <<" ";
        }
        // print val
        int val = 1;
        for(int j=0; j<=i; j++){
            cout << val <<" ";
            val = val * (i+j)/(j+1);
        }
      cout << endl;
    }
    */
   /*
   Dimand Pattern
        
       *
      ***
     *****
    *******
   *********
    *******
     *****
      ***
       *    
   */
    // logic row = 2*n -1
    // upper traingle and lower traingle
/*
    for(int i=1; i<=n; i++){
        //upper traingle including middal row
        for(int spac=1; spac<=n-i; spac++){
            //print space
            cout <<" ";
        }
        for(int j =1;j<=2*i-1; j++ ){
            cout<<"*";
        }
        cout << endl;
    }
    // lower traingle
    for(int i=n-1; i>=1; i--){
        for(int space = 1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j=1 ; j<= 2*i-1; j++){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;

*/

// preactics 
int row = 5;
int cols = 5;
for(int i=1; i<=row; i++){
    for(int j=1; j<=cols; j++){
        if(i==1 || i == row || j == 1|| j == cols){
            cout << "*";
        }
        else{
            cout << " ";
        }
        
    }
    cout << endl;
}

}
