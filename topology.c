#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Graph structure
struct Graph {
    int vertices;
    int adj[MAX_VERTICES][MAX_VERTICES];  // Adjacency matrix
};

// Function to initialize the graph
void initGraph(struct Graph *g, int vertices) {
    g->vertices = vertices;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            g->adj[i][j] = 0; // Initialize all edges as 0 (no edges)
        }
    }
}

// Function for DFS traversal
void dfs(int node, int visited[], int stack[], struct Graph *g, int *top) {
    visited[node] = 1;  // Mark the current node as visited
    
    // Recur for all the vertices adjacent to this vertex
    for (int i = 0; i < g->vertices; i++) {
        if (g->adj[node][i] == 1 && !visited[i]) {
            dfs(i, visited, stack, g, top);
        }
    }
    
    // Push the current node to stack after visiting all adjacent nodes
    stack[(*top)++] = node;
}

// Function to perform topological sorting
void topologicalSort(struct Graph *g) {
    int visited[MAX_VERTICES] = {0}; // Array to track visited vertices
    int stack[MAX_VERTICES];         // Stack to store topological order
    int top = 0;                     // Index to keep track of the stack
    
    // Perform DFS for all the vertices
    for (int i = 0; i < g->vertices; i++) {
        if (!visited[i]) {
            dfs(i, visited, stack, g, &top);
        }
    }

    // Print the topologically sorted order
    printf("Topological Sort: ");
    for (int i = top - 1; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    struct Graph g;
    initGraph(&g, 6);  // Example: Graph with 6 vertices
    
    // Create edges (represented as an adjacency matrix)
    g.adj[5][2] = 1;
    g.adj[5][0] = 1;
    g.adj[4][0] = 1;
    g.adj[4][1] = 1;
    g.adj[2][3] = 1;
    g.adj[3][1] = 1;

    // Perform topological sort
    topologicalSort(&g);

    return 0;
}

