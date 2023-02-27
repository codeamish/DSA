// Used to find strongly connected components in a directed graph
// It is a two pass algo
// In the first pass we find the topological sort of the graph
// In the second pass we reverse the graph and find the topological sort of the reversed graph
// The strongly connected components are the vertices which are present in the same topological sort of both the graphs
// The time complexity of this algo is O(V+E)
// The space complexity of this algo is O(V+E)
// Not the best algo to find strongly connected components
// Tarjan's algo is the best algo to find strongly connected components
// Tarjan's algo is a one pass algo . It find the strongly connected components in a single dfs pass.


// Step 1 : Order the vertices in the decreasing order of their finishing time
// Step 2 : Reverse all the edges of the graph
// Step 3 : Do a DFS on the reversed graph in the order of the vertices in the decreasing order of their finishing time

// Implementation of step 1
// We will use a stack to store the vertices in the decreasing order of their finishing time
// We will use a visited array to keep track of the vertices which are already visited
// 1. Create a stack and a visited array
// 2. For each vertex u in the graph do the following.
//    If u is not visited then call the function dfs(u)
//    The function dfs(u) does the following.
//   a. Mark u as visited  b. For each vertex v adjacent to u if v is not visited then call the function dfs(v) c. push u to stack
// 3. while stack is not empty pop the top element and add it to result


#include <iostream> 
#include <list> 
#include <stack> 
using namespace std; 

class Graph 
{ 
	int V; 
	list<int> *adj; 
	
	void fillOrder(int v, bool visited[], stack<int> &s); 
 
	void DFSUtil(int v, bool visited[]); 
public: 
	Graph(int V); 
	void addEdge(int v, int w); 
	 
	void printSCCs(); 

	Graph getTranspose(); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::DFSUtil(int v, bool visited[]) 
{ 
	visited[v] = true; 
	cout << v << " "; 

	list<int>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 

Graph Graph::getTranspose() 
{ 
	Graph g(V); 
	for (int v = 0; v < V; v++) 
	{ 
		list<int>::iterator i; 
		for(i = adj[v].begin(); i != adj[v].end(); ++i) 
		{ 
			g.adj[*i].push_back(v); 
		} 
	} 
	return g; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
} 

void Graph::fillOrder(int v, bool visited[], stack<int> &s) 
{ 
	visited[v] = true; 

	list<int>::iterator i; 
	for(i = adj[v].begin(); i != adj[v].end(); ++i) 
		if(!visited[*i]) 
			fillOrder(*i, visited, s); 
 
	s.push(v); 
} 

void Graph::printSCCs() 
{ 
	stack<int> s; 
 
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 
 
	for(int i = 0; i < V; i++) 
		if(visited[i] == false) 
			fillOrder(i, visited, s); 

	Graph gr = getTranspose(); 

	for(int i = 0; i < V; i++) 
		visited[i] = false; 

	while (s.empty() == false) 
	{ 
		int v = s.top(); 
		s.pop(); 
 
		if (visited[v] == false) 
		{ 
			gr.DFSUtil(v, visited); 
			cout << endl; 
		} 
	} 
} 

int main() 
{ 
	Graph g(5); 
	g.addEdge(1, 0); 
	g.addEdge(0, 2); 
	g.addEdge(2, 1); 
	g.addEdge(0, 3); 
	g.addEdge(3, 4); 

	cout << "Following are strongly connected components in given graph \n"; 
	g.printSCCs(); 

	return 0; 
} 
