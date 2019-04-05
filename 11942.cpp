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

#define nwl puts("");


using namespace std;


int main()
{
	int i;

	int ary[10];
	cin>>i;
	puts("Lumberjacks:");

	while(i--)
	{
		for(int a = 0; a < 10; a++)	cin>>ary[a];

		bool flag1 = true, flag2 = 1;

		if( ary[0] > ary[1] )
		{
			flag2 = 0;
			for(int j = 0; j < 9 && flag1; j++) if( ary[j] < ary[j+1] ) flag1 = false;
		}
		else
		{
			flag1 = 0;
			if( ary[0] < ary[1] )
				for(int j = 1; j < 10&&flag2; j++) if( ary[j] < ary[j-1] ) flag2 = false;
		}

		if(flag1 || flag2 ) puts("Ordered");
		else puts("Unordered");
	}

	return 0;
}
