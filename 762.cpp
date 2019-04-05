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

vector < int > grp[10000];
map < string, int > indx;
string str[10000];
int Size = 0;

int parent[10000];


int bfs(int src, int des)
{
	if( src == des) return 0;
	queue < int > temp;

	int cost[Size];
	bool visited[Size];

	for(int i = 0; i < Size; i++) cost[i] = 0, visited[i] = 0;

	cost[src] = 0;
	visited[src] = 1;
	temp.push(src);
	int p, q;

	while(temp.size() )
	{
		p = temp.front();

		for(int i = 0;  i < grp[p].size(); i++)
		{
			q = grp[p][i];

//			cout<<"pushed:"<<q<<endl;
			if( !visited[q])
			{
				parent[q] = p;
				if( q == des ) return cost[p] + 1;
				cost[q] = cost[p] + 1;
				visited[q] = 1;
				temp.push(q);
			}
		}
		temp.pop();
	}

	if( !temp.size()) return -1;
}


int main()
{
//	freopen("o.txt", "w", stdout);
	int n;

	string temp1, temp2;
	bool flag = 0;

	vector < string > ans;
	while( scanf("%d", &n) != EOF)
	{

		if( flag) nwl;
		flag = 1;
		for(int i = 0; i < n; i++)
		{
			cin>>temp1>>temp2;

			int j;

			for( j = 0; j < Size; j++) if( str[j] == temp1) break;
			if( j == Size )
			{
				str[j] = temp1;
				indx[temp1] = j;
				Size++;
			}

			for( j = 0; j < Size; j++) if( str[j] == temp2) break;
			if( j == Size )
			{
				str[j] = temp2;
				indx[temp2] = j;
				Size++;
			}
			grp[indx[temp1]].push_back( indx[temp2]);
			grp[indx[temp2]].push_back( indx[temp1]);
		}

		cin>>temp1>>temp2;

		if( indx.find(temp1) == indx.end() || indx.find(temp2) == indx.end()) cout<<"No route"<<endl;
		else if( bfs( indx[temp1], indx[temp2]) == -1) cout<<"No route"<<endl;
		else
		{

			ans.clear();
			ans.push_back(temp2);
			int i = indx[temp2];

			while( str[i] != temp1)
			{
				i = parent[i];
				ans.push_back(str[i]);
			}

			for(int i = ans.size()-1; i; i--) cout<<ans[i]<<" "<<ans[i-1]<<endl;
		}
		indx.clear();
		Size = 0;
		for(int i = 0; i < 10000; i++) grp[i].clear();

	}
	return 0;
}
