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

vector < int > out[107];
int in[107];
bool visited[107];
int n;

vector < int > re;

void top_sort( void )
{
	bool flag = 1;

	while( flag )
	{
//		cout<<re.size()<<endl;
		flag = 0;

		for(int i = 1; i <= n ; i++)
		{
			if( !visited[i] && !in[i] )
			{
				re.push_back(i);
				visited[i] = 1;
				for( int j = 0; j < out[i].size(); j++) in[ out[i][j] ]--;
			}
		}
		for( int i = 1; i <= n; i++)
		{
			if( !visited[i] && !in[i] ) flag = 1;
//			cout<<i<<" "<<visited[i]<<" "<<in[i]<<endl;
		}
	}
}

void reset(void)
{
	for( int i = 0; i <= n; i++) {out[i].clear(); in[i] = 0; visited[i] = 0;}
	re.clear();
}
//5 4
//1 2
//2 3
//1 3
//1 5


int main()
{

	int m, x, y;

	while(1)
	{
		cin >> n>> m;

		if( n == m && m == 0) return 0;

		for(int i = 0; i < m; i++)
		{
			cin >>x>>y;
			out[x].push_back(y);
			in[y]++;
		}
//
//		for(int i = 0; i < n; i++) { for(int j = 0; j < out[i].size(); j++) cout<<out[i][j]<<" "; nwl;}
//
//		for(int i = 1; i <= n; i++) cout<<in[i]<<" "; nwl;

//		cout<<"here0"<<endl;
		top_sort();
//		cout<<"here1"<<endl;
		for(int i = 0; i < re.size() - 1; i++) cout<<re[i]<<" ";
		cout<<re[re.size() - 1]<<endl;

//		cout<<"here2"<<endl;


		reset();
	}




	return 0;
}
