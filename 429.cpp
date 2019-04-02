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

vector < int > grp[300];
map < string, int > indx;
string str[300];
int Size = 0;


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


bool check( string str1, string str2)
{
    if( str1.size() != str2.size()) return 0;

    int match = 0;

    for(int i = 0; i < str1.size() && i < str2.size(); i++) if( str1[i] == str2[i]) match++;

    if( match+1 == str1.size() ) return 1;
    else return 0;
}


void constract_grp(void)
{
    for( int i = 0; i <= Size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if( check( str[i], str[j] ))
            {
                grp[indx[str[i]]].push_back( indx[str[j]]);
                grp[indx[str[j]]].push_back( indx[str[i]]);
            }
        }
    }


}

int main()
{
//	freopen("o.txt", "w", stdout);
    string temp1, temp2;

    int n;
    int pos;

    cin >> n;

    while( n--)
    {
        Size = 0;

        while(1)
        {
            cin >> temp1;
            if( temp1 == "*") break;
            indx.insert( pair < string, int > ( temp1, Size));
            str[Size] = temp1;
            Size++;
        }

        constract_grp();
        cin.ignore();
        while(1)
        {
            getline(cin, temp1);

            if( temp1 == "") break;

            pos = temp1.find(" ");

            temp2 = temp1.substr(pos+1, temp1.size());
            temp1.erase( temp1.begin() + pos, temp1.end());

			cout<<temp1<<' '<<temp2<<' '<<bfs( indx[temp1], indx[temp2])<<endl;
        }

        if(n) nwl;
        indx.clear();

        for(int i = 0; i < 300; i++) grp[i].clear();

    }
    return 0;
}
