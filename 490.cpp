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

using namespace std;

int main()
{
//	freopen("in.txt", "r",stdin);
//	freopen("out.txt","w",stdout);

	queue <char> qu[100];

	int i = 0;

	char ch;

	while( scanf("%c", &ch) != EOF)
	{
		if(ch == '\n' ) i++;
		else
		{
			qu[i].push(ch);
		}
	}
	bool flag = true;

	bool nl = false;

	while(flag)
	{
		if(nl)
		{
			puts("");
		}
		nl = true;
		flag = false;
		for( int j = i-1; j > -1; j--)
		{
			if(!qu[j].empty())
			{
				if(flag == false)
				{
//					printf(" %d r ", j);
					flag = true;
				}
//				printf("%d \n", j);
			}
			else
			{
				if(flag != true)
				{

					flag = false;
				}
			}
		}

		if (flag == false ) break;
		for( int j = i-1; j > -1; j--)
		{
			if(!qu[j].empty())
			{

				ch = qu[j].front();
				qu[j].pop();
				printf("%c", ch);

			}
			else
			{
				printf(" ");
			}
		}

	}

	return 0;
}
