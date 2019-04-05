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


long long int fac(int i)
{
	if( i == 1) return 1;
	else return(long long) i * fac(i-1);
}

int main()
{
	int num;

	while(scanf("%d", &num) != EOF)
	{
		if(num < 0)
		{
			if( -num % 2) printf("Overflow!");
			else printf("Underflow!");
		}
		else if(num < 8) cout<<"Underflow!";
		else if( num > 13) cout<<"Overflow!";
		else cout<<fac(num);
		nwl;
	}
//	main();
	return 0;
}
