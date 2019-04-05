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


using namespace std;

int X[8] = { 1, 2, 2, 1, -1, -2, -2, -1};
int Y[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

int bfs( pair < int, int > src, pair < int, int > des )
{
	if( src == des) return 0;
	queue < pair < int, int > > temp;

	bool visited[8][8];
	int cost[8][8];

	for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) visited[i][j] = 0;

	temp.push(src);
	visited[src.first][src.second] = 1;
	cost[src.first][src.second] = 0;

	pair <int, int> p;
	pair <int, int> q;

	while( temp.size() )
	{
		p = temp.front();

		for(int i = 0; i < 8; i++)
		{
			if(p.first+X[i] < 0 || p.first+X[i] > 7 || p.second+Y[i] < 0 ||p.second+Y[i] > 7) continue;

			q = make_pair(p.first+X[i] , p.second+Y[i]);
			if( !visited[q.first][q.second] )
			{
				temp.push(q);
				visited[q.first][q.second] = 1;
				cost[q.first][q.second] = cost[p.first][p.second]+1;
				if( q == des) return cost[q.first][q.second];
			}
		}
		temp.pop();
	}

	return -1;
}


int main()
{
	string str;

	while(1)
	{
		getline(cin, str);
		if( str == "") return 0;

		printf("To get from %c%c to %c%c takes %d knight moves.\n", str[0], str[1], str[3], str[4], bfs( make_pair(str[0] - 'a', str[1]-'1') ,make_pair( str[3] - 'a', str[4]-'1' )));
	}

	return 0;
}

