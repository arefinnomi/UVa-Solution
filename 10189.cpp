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
	int r, c, test = 1;

	while(true)
	{

		scanf("%d %d", &r, &c);

		if( r==0 && c==0) break;

		getchar();

		char ch;
		char str[r+5][c+5];
		for( int i = 0; i < r+5; i++)
		{
			for( int j = 0; j < c+5; j++) str[i][j] = '0';

		}

		for(int i = 0; i < r; i++)
		{
			int j;
			for( j = 0; j < c; j++)
			{
				scanf("%c", &ch);

				if( ch == '*')
				{
					if( i )
					{
						if(str[i-1][j] != '*')str[i-1][j]++;
						if(str[i-1][j+1] != '*')str[i-1][j+1]++;
					}
					if(j)
					{
						if(str[i][j-1] != '*')str[i][j-1]++;
						if(str[i+1][j-1] != '*')str[i+1][j-1]++;
					}
					if(i&&j)
					{
						if(str[i-1][j-1] != '*')str[i-1][j-1]++;
					}

					str[i][j] = ch;
					str[i][j+1]++;
					str[i+1][j]++;
					str[i+1][j+1]++;

				}
			}
			getchar();
		}

		for(int i = 0; i < r; i++) str[i][c] = 0;


		if(test!=1)puts("");
		printf("Field #%d:\n", test++);
		for(int i = 0; i < r; i++) puts(str[i]);


	}
	return 0;
}
