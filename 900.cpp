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

long long fib[51];
bool flag[51];

long long func(int nth)
{
    if(flag[nth]) return fib[nth];

    flag[nth] = 1;
    if(nth==0)
    {
        fib[nth] = 1;
    }
    else if( nth==1)
    {
        fib[nth] = 1;
    }
    else fib[nth] =(long long ) func(nth-1)+func(nth-2);

    return fib[nth];
}
int main()
{
	int i;

	while(1)
	{
		scanf("%d", &i);
		if(i==0) return 0;
		cout<<func(i)<<endl;
	}
//	main();
    return 0;
}
