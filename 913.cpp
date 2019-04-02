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
	long long i, re;

	while(scanf("%lld", &i) != EOF)
	{
		i = (i+1) / 2;

//		cout<<i<<endl;

		re = 2 * i * i - 2 + 1;

		re *= 3;

		re -= 6;

		re = i == 1 ? 1 : re;
		printf("%lld\n", re);
	}
//	main();
    return 0;
}
