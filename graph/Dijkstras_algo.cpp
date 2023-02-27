#include<bits/stdc++.h>
#define V 4
using namespace std;

// dijkstras algo is used to find the shortest path from a source to all other vertices in a weighted graph
// It is a greedy algo
// It can be optimized to O(ElogV)+O(VlogV) using min heap
// It can also be optimized to O(E+VlogV) using fibonacci heap
// It can also be optimized to O(E+V) using adjacency list
// It does not work for negative weight edges
// Shortest path changes if we add certain weight to all edges as the paths may be having different number of edges
// Shortest path doesnot changes if we multiply certain weight to all edges as the paths may be having different number of edges

vector<int> djikstra(int graph[V][V],int src) 
{ 

	vector<int> dist(V,INT_MAX);
	dist[src]=0;
	vector<bool> fin(V,false); // It is the finalised array used to keep the track of the vertices which are already included in the shortest path.

	for (int count = 0; count < V-1 ; count++) 
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    if(!fin[i]&&(u==-1||dist[i]<dist[u]))
		        u=i;
		fin[u] = true; 
		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && fin[v] == false) 
				dist[v] = min(dist[v],dist[u]+graph[u][v]); 
	} 
    return dist;
} 

int main() 
{ 
	int graph[V][V] = { { 0, 50, 100, 0}, 
						{ 50, 0, 30, 200 }, 
						{ 100, 30, 0, 20 }, 
						{ 0, 200, 20, 0 },}; 

	for(int x: djikstra(graph,0)){
	    cout<<x<<" ";
	} 

	return 0; 
} 
// Here the time complexity is O(V^2) as we are using adjacency matrix