#ifndef __bfs_hdr_h__
#define __bfs_hdr_h__

#include <queue>
#include <algorithm>

using namespace std;

//graph class

class Graph{
	int a[100][100];
	public:
	
	void input(int n)
	{
		int i,j,k,n2;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j] = 0;
		cout<<"Enter the number of edges in the graph\n";
		cin>>n2;
		cout<<"Enter the edges of the graph\n";
		for(i=0;i<n2;i++)
		{
			cin>>j>>k;
			a[j][k] = 1;
		}
		return;
	}
	
	void bfs(int n)
	{
		queue<int> q;
		int temp;
		q.push(0);
		while(!(q.empty()))
		{
			temp = q.front();
			cout<<temp<<endl;
			for(int i=0;i<n;i++)
				if(a[temp][i] == 1)
				{
					q.push(i);
					for(int j=0;j<n;j++)
						a[j][i] = 0;
				}
			q.pop();
		}
		return;
	}
};

#endif
