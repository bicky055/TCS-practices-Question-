#include "bits/stdc++.h"
using namespace std;    

bool isSafe(vector<string> &board, int row, int col, int n){
    // Check horizontal 
    for(int j = 0; j < n; j++){
        if(board[row][j] == 'Q') return false;
    }

    // Check vertical
    for(int i = 0; i < n; i++){
        if(board[i][col] == 'Q') return false;
    }
    // left diagonal
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    } 
    // right diagonal
    for(int i = row, j = col; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 'Q') return false;
    }   
    return true; // Safe to place queen

}

void nQueen(vector<string> &board, int row, int n, vector<vector<string>> &result){
    if(row == n){
        return result.push_back(board);

    }
    for(int col =0; col <n; col++){
        if(isSafe(board, row, col, n)){
            board[row][col] = 'Q'; // Place queen
            nQueen(board, row + 1, n, result); // Recur for next row
            board[row][col] = '.'; // Backtrack
        }
    }
}

int main(){
    // N-Queen Problem
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;   
    vector<string> board(n, string(n, '.')); // Initialize board with '.' representing empty cells
    vector<vector<string>> result; // To store all possible solutions   
    nQueen(board, 0, n, result); // Start solving from the first row
    cout << "All possible solutions for " << n << "-Queens problem:\n";
    for(const auto &sol : result){
        for(const auto &row : sol){
            cout << row << endl; // Print each row of the solution
        }
        cout << endl; // Separate different solutions
    }
    return 0;
    
}