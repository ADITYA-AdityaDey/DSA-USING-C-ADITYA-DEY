#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

struct Node {
    int data;
    struct Node* next;
};

struct Graph {
    int numVertices;
    struct Node* adjList[MAX_VERTICES];
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with given number of vertices
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    // Initialize adjacency list for all vertices
    for (int i = 0; i < numVertices; ++i) {
        graph->adjList[i] = NULL;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // Add edge from dest to src for undirected graph
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

// Depth-First Search recursive function
void DFSRecursive(struct Graph* graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    // Traverse all adjacent vertices of the current vertex
    struct Node* temp = graph->adjList[vertex];
    while (temp != NULL) {
        int adjVertex = temp->data;
        if (!visited[adjVertex]) {
            DFSRecursive(graph, adjVertex, visited);
        }
        temp = temp->next;
    }
}

// Depth-First Search function
void DFS(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};

    printf("Depth-First Search starting from vertex %d:\n", startVertex);
    DFSRecursive(graph, startVertex, visited);
    printf("\n");
}

int main() {
    // Create a graph with 6 vertices
    struct Graph* graph = createGraph(6);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);

    // Perform DFS starting from vertex 0
    DFS(graph, 0);

    // Free allocated memory
    free(graph);

    return 0;
}

