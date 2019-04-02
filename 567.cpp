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

vector <  int> grp[22];


int bfs(int src, int des)
{
    queue < int > temp;

    int cost[22];
    bool visited[22];

    for(int i = 0; i < 22; i++) cost[i] = 0, visited[i] = 0;

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
                if( q == des ) return cost[p] + 1;

                cost[q] = cost[p] + 1;
                visited[q] = 1;
                temp.push(q);
            }
        }
        temp.pop();
    }
}



int main()
{

    int n, temp1, temp2, test = 1;

    while(1)
    {

        for(int i = 1; i < 20; i++)
        {
            if(scanf("%d", &n) == EOF) return 0;
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &temp1);

                grp[i].push_back(temp1);
                grp[temp1].push_back(i);
            }
        }
		cout<<"Test Set #"<<test++<<endl;
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d", &temp1, &temp2);
            printf("%2d to %2d:%2d\n", temp1, temp2,bfs(temp1, temp2));
        }

        nwl;

        for(int i = 0; i < 22; i++) grp[i].clear();


        }
        return 0;
    }
