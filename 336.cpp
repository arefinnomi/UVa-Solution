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

#define nwl puts("")
#define MAX 100007

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;

vector < int > grp[MAX];
bool visited[MAX];
int cost[MAX];

int bfs( int par, int ttl)
{
	if( !grp[par].size()) return 0;
	int cont = 0;
	queue <int> temp;

	temp.push(par);
	cost[par] = 0;

	visited[par] = 1;
	int current, push_temp;
	while(temp.size())
	{
		cont++;
		current = temp.front();
		temp.pop();
		if(cost[current] == ttl) continue;

		for(int i = 0; i < grp[current].size(); i++)
		{
			push_temp = grp[current][i];
			if(visited[push_temp]) continue;
			temp.push(push_temp);
			visited[push_temp] = 1;
			cost[push_temp] = cost[current]+1;
		}
	}
	return cont;
}

int main()
{
//	freopen("i.txt", "r", stdin);
//	freopen("o.txt", "w", stdout);
	int e;
	int temp1, temp2;

	set <int > node;
	int SIZE;
	int test = 1;
	while(1)
	{
		cin>>e;

		if(!e) return 0;

		for(int i = 0; i < e; i++)
		{
			cin>> temp1>>temp2;
			grp[temp1].push_back(temp2);
			grp[temp2].push_back(temp1);

			node.insert(temp1);
			node.insert(temp2);
		}
		SIZE = node.size();

		while(1)
		{
			cin >> temp1>>temp2;
			if( temp1 == 0 && temp2 == 0) break;
			visited[temp1] = 1;
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", test++, SIZE - bfs(temp1, temp2), temp1, temp2);
			for(int i = 0; i < MAX; i++) visited[i] = 0;
		}
		for(int i = 0; i < MAX; i++)
		{
			grp[i].clear();
			visited[i] = 0;
		}
		node.clear();
	}

	return 0;
}
