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

	long long a, d;

	long long k;

	while(scanf("%lld %lld", &a, &d)!= EOF)
	{
		k = ( a - 1 ) * a + 2 * d;
		long long b = (-1 + sqrt(1+4 * k)) / 2;

		if( b * (b+1) / 2 - a*(a-1) / 2 == d)
			cout<<b<<endl;
		else cout<<b+1<<endl;
	}
//	main();
	return 0;
}
