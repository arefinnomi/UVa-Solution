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
	int test = 1;
	int b, s;

	while(1)
	{
		scanf("%d %d", &b, &s);

		if( b == 0 && s == 0) break;
		printf("Case %d: ", test++);


		if(b == 1) printf(":-\\\n");
		else if ( s < b ) printf(":-(\n");
		else if( s == b ) printf(":-|\n");
		else
		{

			printf(":-|\n");
		}
	}


//	main();
    return 0;
}
