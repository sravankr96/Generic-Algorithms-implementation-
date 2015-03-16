#include <iostream>
#include "bfs_hdr.h"

using namespace std;

int main()
{
	int n;
	cout<<"Enter the no of vertices in the graph\n";
	cin>>n;
	Graph g;
	g.input(n);
	cout<<"The breadth first search order of the given graph is:\n";
	g.bfs(n);
	return 0;
}
