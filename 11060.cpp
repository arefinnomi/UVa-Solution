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

string arch[107];
map < string, int > indx;
vector < int > out[107];
int in[107];
int n;
vector < int > re;
bool visited[107];

void top_sort( void )
{
	bool flag = 1;

	while( flag )
	{
//		cout<<re.size()<<endl;
		flag = 0;

		for(int i = 0; i < n ; i++)
		{
			if( !visited[i] && !in[i] )
			{
				re.push_back(i);
				visited[i] = 1;
				for( int j = 0; j < out[i].size(); j++) in[ out[i][j]]--;

				break;
			}
		}
		for( int i = 0; i < n; i++)
		{
			if( !visited[i] && !in[i] ) flag = 1;
//			cout<<i<<" "<<visited[i]<<" "<<in[i]<<endl;
		}
	}
}

void reset(void)
{
	for(int i = 0; i < n; i++) { visited[i] = 0; in[i] = 0; out[i].clear();}

	re.clear();
	indx.clear();
}


int main()
{

	int m, test = 1;
	string str1, str2;
	while( scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			cin>>str1;

			indx.insert(make_pair(str1, i));
			arch[i] = str1;
		}

		cin >>m;
		for(int i = 0; i < m; i++)
		{
			cin>>str1>>str2;

			out[indx[str1] ].push_back(indx[str2]);
			in[indx[str2]]++;
		}


		top_sort();
		printf("Case #%d: Dilbert should drink beverages in this order: ", test++);
		for(int i = 0; i < re.size() - 1; i++) cout<<arch[re[i]]<<" ";

		cout<< arch[re[re.size() - 1]]<<".\n"<<endl;


		reset();
	}

	return 0;
}
