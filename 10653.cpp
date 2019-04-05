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

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;

#define x first
#define y second

using namespace std;

int X[4] = {1, 0, -1, 0};
int Y[4] = {0, 1, 0, -1};

bool field[1000][1000];
int r, c;

int bfs( pair < int, int > src, pair <int, int> des)
{

	if( src == des ) return 0;
	queue < pair <int, int> > temp;
	int cost[r][c];

	temp.push(src);
	field[src.x][src.y] = 1;
	cost[src.x][src.y] = 0;

	pair <int, int > p,q;

	while( temp.size() )
	{

		p = temp.front();

		for(int i = 0; i < 4; i++)
		{
			q = make_pair(p.x-X[i], p.y-Y[i]);

			if( q.x < 0 || q.x >= r || q.y < 0 || q.y >= c)continue;

			if( !field[q.x][q.y] )
			{
				field[q.x][q.y] = 1;
				cost[q.x][q.y] = 1 + cost[p.x][p.y];
				temp.push(q);

				if( q == des) return cost[q.x][q.y];
			}
		}

		temp.pop();
	}

	return -1;
}

int main()
{
	int n, m, x, y;

	while(1)
	{
		for(int i = 0; i < r; i++) for( int j = 0; j < c; j++) field[i][j] = 0;
		cin>>r>>c;

		if( r == c && r == 0) return 0;

		cin >> n;

		for(int i = 0; i < n; i++)
		{
			cin >> x>>m;

			for(int j = 0; j < m; j++)
			{
				cin>>y;

				field[x][y] = 1;
			}
		}

		cin >> m>>n;
		cin >> x>>y;

		cout<<bfs( make_pair(m,n), make_pair(x, y))<<endl;
	}

	return 0;
}
