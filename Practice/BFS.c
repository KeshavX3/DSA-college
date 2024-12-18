// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 100

// // Queue structure for BFS
// typedef struct {
//     int items[MAX];
//     int front;
//     int rear;
// } Queue;

// // Graph structure
// typedef struct {
//     int vertices;
//     int adj[MAX][MAX]; // Adjacency matrix
// } Graph;

// // Function to create a queue
// Queue* createQueue() {
//     Queue* q = (Queue*)malloc(sizeof(Queue));
//     q->front = -1;
//     q->rear = -1;
//     return q;
// }

// // Check if the queue is empty
// int isEmpty(Queue* q) {
//     return q->front == -1;
// }

// // Enqueue operation
// void enqueue(Queue* q, int value) {
//     if (q->rear == MAX - 1) {
//         printf("Queue is full\n");
//         return;
//     }
//     if (q->front == -1) {
//         q->front = 0;
//     }
//     q->rear++;
//     q->items[q->rear] = value;
// }

// // Dequeue operation
// int dequeue(Queue* q) {
//     if (isEmpty(q)) {
//         printf("Queue is empty\n");
//         return -1;
//     }
//     int item = q->items[q->front];
//     q->front++;
//     if (q->front > q->rear) {
//         q->front = q->rear = -1; // Reset the queue
//     }
//     return item;
// }

// // Function to create a graph
// Graph* createGraph(int vertices) {
//     Graph* graph = (Graph*)malloc(sizeof(Graph));
//     graph->vertices = vertices;

//     // Initialize adjacency matrix
//     for (int i = 0; i < vertices; i++) {
//         for (int j = 0; j < vertices; j++) {
//             graph->adj[i][j] = 0;
//         }
//     }
//     return graph;
// }

// // Function to add an edge to the graph
// void addEdge(Graph* graph, int src, int dest) {
//     graph->adj[src][dest] = 1;
//     graph->adj[dest][src] = 1; // For undirected graph
// }

// // BFS algorithm
// void BFS(Graph* graph, int startVertex) {
//     int visited[MAX] = {0}; // Array to track visited vertices
//     Queue* q = createQueue();

//     visited[startVertex] = 1; // Mark the starting vertex as visited
//     enqueue(q, startVertex); // Enqueue the starting vertex

//     while (!isEmpty(q)) {
//         int currentVertex = dequeue(q);
//         printf("Visited %d\n", currentVertex);

//         // Visit all the neighbors of the current vertex
//         for (int i = 0; i < graph->vertices; i++) {
//             if (graph->adj[currentVertex][i] == 1 && !visited[i]) {
//                 visited[i] = 1; // Mark as visited
//                 enqueue(q, i); // Enqueue the neighbor
//             }
//         }
//     }
// }

// int main() {
//     Graph* graph = createGraph(5);
//     addEdge(graph, 0, 1);
//     addEdge(graph, 0, 2);
//     addEdge(graph, 1, 3);
//     addEdge(graph, 1, 4);
//     addEdge(graph, 2, 4);

//     printf("BFS starting from vertex 0:\n");
//     BFS(graph, 0);

//     return 0;



// int main() {
//     int vertices = 6;  // Create a graph with 6 vertices
//     Graph* graph = createGraph(vertices);
    
//     // Adding edges to create a sample graph
//     addEdge(graph, 0, 1);
//     addEdge(graph, 0, 2);
//     addEdge(graph, 1, 3);
//     addEdge(graph, 2, 3);
//     addEdge(graph, 2, 4);
//     addEdge(graph, 3, 4);
//     addEdge(graph, 3, 5);
//     addEdge(graph, 4, 5);

//     printf("Breadth First Traversal starting from vertex 0:\n");
//     BFS(graph, 0);

//     free(graph);  // Free allocated memory
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// #define V 100

// int minKey(int key[], int mstSet[], int vertices) {
//     int min = INT_MAX, min_index;
//     for (int v = 0; v < vertices; v++)
//         if (mstSet[v] == 0 && key[v] < min)
//             min = key[v], min_index = v;
//     return min_index;
// }

// void printMST(int parent[], int graph[V][V], int vertices) {
//     printf("Edge \tWeight\n");
//     for (int i = 1; i < vertices; i++)
//         printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
// }

// void primMST(int graph[V][V], int vertices) {
//     int parent[V];
//     int key[V];
//     int mstSet[V];

//     for (int i = 0; i < vertices; i++) {
//         key[i] = INT_MAX;
//         mstSet[i] = 0;
//     }

//     key[0] = 0;
//     parent[0] = -1;

//     for (int count = 0; count < vertices - 1; count++) {
//         int u = minKey(key, mstSet, vertices);
//         mstSet[u] = 1;

//         for (int v = 0; v < vertices; v++)
//             if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
//                 parent[v] = u;
//                 key[v] = graph[u][v];
//             }
//     }

//     printMST(parent, graph, vertices);
// }

// int main() {
//     int vertices;
//     printf("Enter number of vertices: ");
//     scanf("%d", &vertices);

//     int graph[V][V];
//     printf("Enter the adjacency matrix:\n");
//     for(int i = 0; i < vertices; i++)
//         for(int j = 0; j < vertices; j++)
//             scanf("%d", &graph[i][j]);

//     primMST(graph, vertices);
//     return 0;
// }























#include <limits.h>
#include <stdbool.h>
#include <stdio.h>


#define V 5


int minKey(int key[], bool mstSet[])
{
   
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}


int printMST(int parent[], int graph[V][V])
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i,
               graph[i][parent[i]]);
}


void primMST(int graph[V][V])
{
    
    int parent[V];
    
    int key[V];
    
    bool mstSet[V]; yhb

    
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    
    key[0] = 0;
  
    
    parent[0] = -1;

    
    for (int count = 0; count < V - 1; count++) {
        
        
        int u = minKey(key, mstSet);

        
        mstSet[u] = true;

        
        for (int v = 0; v < V; v++)

            
            if (graph[u][v] && mstSet[v] == false
                && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    
    printMST(parent, graph);
}


int main()
{
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };

    
    primMST(graph);

    return 0;
}




