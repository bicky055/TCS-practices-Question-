#include "bits/stdc++.h"
using namespace std;

// what is BFS?
/* BFS is a graph traversal algorithm that explores all the vertices 
of a graph in breadthward motion.*/
/*It starts from a source vertex and explores all its neighbors before 
moving to the next level of vertices.*/
/*BFS is typically implemented using a queue data structure to keep track of 
the vertices to be explored next.*/
// Function to perform BFS on a graph

void BFS(vector<vector<int>>& graph, int start){
    int n = graph.size();
    vector<bool> visited(n, false); // To keep track of visited vertices
    queue<int> q; // Queue for BFS
    visited[start] = true; // Mark the starting vertex as visited
    q.push(start); // Enqueue the starting vertex
    while(!q.empty()){
        int current = q.front(); // get the front vertex
        q.pop(); // Dequeue the front vertex
        cout << current << " " ; // Print the current vertex
        // Explore all the neighbors of the current vertex
        for(int neighbor : graph[current]){
            if(!visited[neighbor]){ // if the neighbor is not visited
                visited[neighbor] = true; // mark its as visited
                q.push(neighbor); // enqueue the neighbor
                
            }
        }
    } cout << endl; // Print a new line after BFS traversal
    
}

int main() {
    // Example graph represented as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},      // Neighbors of vertex 0
        {0, 3, 4},   // Neighbors of vertex 1
        {0, 5},      // Neighbors of vertex 2
        {1},         // Neighbors of vertex 3
        {1, 5},      // Neighbors of vertex 4
        {2, 4}       // Neighbors of vertex 5
    };

    int startVertex = 0; // Starting vertex for BFS
    cout << "BFS traversal starting from vertex " << startVertex << ": ";
    BFS(graph, startVertex); // Perform BFS

    return 0;
}