// Bellman Ford Algorithm is used to find the shortest path from a source vertex to all other vertices in a weighted graph.
// It is a dynamic programming algo
// It can be optimized to O(EV) using adjacency list
// It can be optimized to O(ElogV) using min heap
// It can also be optimized to O(E+V) using adjacency list
// It works for negative weight edges
// Shortest path changes if we add certain weight to all edges as the paths may be having different number of edges
// Shortest path doesnot changes if we multiply certain weight to all edges as the paths may be having different number of edges

// Implementation of Bellman Ford Algorithm
// Step 1 : Initialize the distance array with INT_MAX
// Step 2 : Set the distance of source vertex to 0
// Step 3 : Relax all the edges V-1 times
// Step 4 : Check for negative weight cycle
// Step 5 : If there is no negative weight cycle then print the distance array else print negative weight cycle
// We have v-1 iterations because in the worst case the shortest path can have v-1 edges

#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int src,dest,weight;
};
struct Graph
{
    int V,E;
    struct Edge* edge;
};
struct Graph* createGraph(int V,int E)
{
    struct Graph* graph = new Graph;
    graph->V=V;
    graph->E=E;
    graph->edge = new Edge[E];
    return graph;
}

void printArr(int dist[],int n)
{
    cout<<"Vertex Distance from Source"<<endl;
    for(int i=0;i<n;i++)
        cout<<i<<" "<<dist[i]<<endl;
}
void BellmanFord(struct Graph* graph,int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];
    for(int i=0;i<V;i++)
        dist[i]=INT_MAX;
    dist[src]=0;
    for(int i=1;i<=V-1;i++)
    {
        for(int j=0;j<E;j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if(dist[u]!=INT_MAX&&dist[u]+weight<dist[v])
                dist[v]=dist[u]+weight;
        }
    }
    for(int i=0;i<E;i++)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if(dist[u]!=INT_MAX&&dist[u]+weight<dist[v])
        {
            cout<<"Negative weight cycle is present";
            return;
        }
    }
    printArr(dist,V);
}


int main() 
{ 
	int V = 4;
	int E = 5; 
	struct Graph* graph = createGraph(V, E); 

	// add edge 0-1 (or A-B) 
	graph->edge[0].src = 0; 
	graph->edge[0].dest = 1; 
	graph->edge[0].weight = 1; 

	// add edge 0-2 (or A-C) 
	graph->edge[1].src = 0; 
	graph->edge[1].dest = 2; 
	graph->edge[1].weight = 4; 

	// add edge 1-2 (or B-C) 
	graph->edge[2].src = 1; 
	graph->edge[2].dest = 2; 
	graph->edge[2].weight = -3; 

	// add edge 1-3 (or B-D) 
	graph->edge[3].src = 1; 
	graph->edge[3].dest = 3; 
	graph->edge[3].weight = 2; 

	// add edge 2-3 (or C-D) 
	graph->edge[4].src = 2; 
	graph->edge[4].dest = 3; 
	graph->edge[4].weight = 3; 

	BellmanFord(graph, 0); 

	return 0; 
} 
