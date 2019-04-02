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
//	freopen("out.txt", "w", stdout);
	int g;

	while(1)
	{
		scanf("%d%*c", &g);

		if(g==0) return 0;

		char str[120];

		gets(str);

		int len = strlen(str);

		int inc = len / g;

		for(int i = 0; i < len; i += inc) reverse(str + i, str+i+inc);

		puts(str);
	}


//	main();
    return 0;
}
