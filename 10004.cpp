#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

#define nwl puts("");

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;
vector <int> G[200];

bool bicolored(void)
{
	bool visited[200];
	for(int i = 0; i < 200; i++) visited[i] = 0;
	bool color[200];
	queue <int> q;

	q.push(0);
	color[0] = 0;
	visited[0] = 1;
	int p;

	while(q.size())
	{
		p = q.front();

		for(int i = 0; i < G[p].size(); i++)
		{
			if(!visited[G[p][i]])
			{
				visited[G[p][i]] = 1;
				q.push(G[p][i]);
				color[G[p][i]] = !color[p];
			}
			else
			{
				if( color[G[p][i]] == color[p]) return 0;
			}
		}

		q.pop();
	}
	return 1;
}


int main()
{
	int n, e;

	int temp1, temp2;

	while(1)
	{
		cin>>n;
		if(!n) return 0;
		cin>>e;

		for(int i = 0; i < e; i++)
		{
			cin>>temp1>>temp2;

			G[temp1].push_back(temp2);
			G[temp2].push_back(temp1);
		}
		if(bicolored()) cout<<"BICOLORABLE."<<endl;
		else cout<<"NOT BICOLORABLE."<<endl;
		for(int i = 0; i < 200; i++) G[i].clear();
		for(int i = 0; i < G[i].size(); i++) cout<<G[1][i];

	}

	return 0;
}
