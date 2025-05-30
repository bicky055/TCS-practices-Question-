#include "bits/stdc++.h"
using namespace std;    

// what is DFS? 
/* DFS is a graph traversal algorithm that explores as far 
as possible along each branch before backtracking.*/
/* It starts from a source vertex and explores as deep as possible */
/* before visiting the next vertex.*/
// Function to perform DFS on a graph

void DFS(vector<vector<int>>& adj , int node, vector<bool> & visited){

    visited[node] = true; // marks the current node as visited
    cout << node << " "; // prints the current node

    for(auto neighbor: adj[node]) // iterates through all the neighbors of the current node
    {
        if(!visited[neighbor] ) // if the neighbor is not visited
        {
            DFS(adj, neighbor, visited); // recursively call DFS on the neighbor
        }
    }



}

int main(){
    // Example graph represented as an adjacency list
    vector<vector<int>> adj = {
        {1, 2},      // Neighbors of vertex 0
        {0, 3, 4},   // Neighbors of vertex 1
        {0, 5},      // Neighbors of vertex 2
        {1},         // Neighbors of vertex 3
        {1, 5},      // Neighbors of vertex 4
        {2, 4}       // Neighbors of vertex 5
    };

    int startVertex = 0; // Starting vertex for DFS
    vector<bool> visited(adj.size(), false); // To keep track of visited vertices

    cout << "DFS traversal starting from vertex " << startVertex << ": ";
    DFS(adj, startVertex, visited); // Perform DFS

    return 0;
}

