#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define V 5
void printSolution(int path[]);
int isSafe(int v, int graph[V][V], int path[], int pos)
{
    int i;
    /* Check if this vertex is an adjacent vertex of the previously added vertex. */
    if (graph[path[pos - 1]][v] == 0)
    return 0;
    /* Check if the vertex has already been included.
    This step can be optimized by creating an array of size V */
    for (i = 0; i < pos; i++)
        if (path[i] == v)
            return 0;
    return 1;
}
/* A recursive utility function to solve hamiltonian cycle problem */
int hamCycleUtil(int graph[V][V], int path[], int pos)
{
    int v;
    /* base case: If all vertices are included in Hamiltonian Cycle */
    if (pos == V)
    {
        // And if there is an edge from the last included vertex to the
        // first vertex
        if (graph[path[pos - 1]][path[0]] == 1)
        return 1;
        else
        return 0;
    }
    // Try different vertices as a next candidate in Hamiltonian Cycle.
    // We don't try for 0 as we included 0 as starting point in in hamCycle()
    for (v = 1; v < V; v++)
    {
        /* Check if this vertex can be added to Hamiltonian Cycle */
        if (isSafe(v, graph, path, pos)) 
        {
            path[pos] = v;
            /* recur to construct rest of the path */
            if (hamCycleUtil(graph, path, pos + 1) == 1)
            return 1;
            /* If adding vertex v doesn't lead to a solution,
            then remove it */
            path[pos] = -1;
        }
    }
    /* If no vertex can be added to Hamiltonian Cycle constructed so far,
    then return 0 */
    return 0;
}
int hamCycle(int graph[V][V]) 
{
    int *path = (int*)malloc(V*sizeof(int));
    int i;
    for (i = 0; i < V; i++)
    path[i] = -1;
    /* Let us put vertex 0 as the first vertex in the path. If there is
    a Hamiltonian Cycle, then the path can be started from any point
    of the cycle as the graph is undirected */
    path[0] = 0;
    if (hamCycleUtil(graph, path, 1) == 0) 
    {
        printf("\nSolution does not exist");
        return 0;
    }
    printSolution(path);
    return 1;
}
/* A utility function to print solution */
void printSolution(int path[]) 
{
    int i;
    printf("Solution Exists:"
    " Following is one Hamiltonian Cycle \n");
    for (i = 0; i < V; i++)
        printf(" %d ", path[i]);
    // Let us print the first vertex again to show the complete cycle
    printf(" %d ", path[0]);
    printf("\n");
}
void main()
{
    int graph1[V][V] = { { 0, 1, 0, 1, 0 }, { 1, 0, 1, 1, 1 }, { 0, 1, 0, 0, 1 }, { 1, 1, 0, 0, 1 }, { 0, 1, 1, 1, 0 }, };
    int graph2[V][V] = { { 0, 1, 0, 1, 0 }, { 1, 0, 1, 1, 1 }, { 0, 1, 0, 0, 1 }, { 1, 1, 0, 0, 0 }, { 0, 1, 1, 0, 0 }, };
    //clrscr();
    hamCycle(graph1);
    hamCycle(graph2);
    getch();
}