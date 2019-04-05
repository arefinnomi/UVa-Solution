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
	long long male[100000];
	long long fem[100000];

	male[0] = 0;
	fem[0] = 1;

	int i;
	for( i = 1; male[i-1] + fem[i-1] <= 4294967296; i++)
	{
		fem[i] = male[i-1] + 1;
		male[i] = male[i-1] + fem[i-1];

	}
	while(1)
	{
		scanf("%d", &i);

		if(i<0) break;

		printf("%lld %lld\n", male[i], male[i] + fem[i]);
	}
//	main();
	return 0;
}
