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


bool quirksome(int num)
{
	int left = num, right = 0;

	int cont = 1;

	while(1)
	{

//		cout<<left << " "<<right<<endl;

		if( (left + right) * (left + right) == num) return 1;

		if(left == 0 ) return 0;

		right += (left % 10) * cont;

		left /= 10;

		cont *= 10;
	}
}


int main()
{
	vector < int > store;

	for(int i = 0; i < 10000; i++)
	{
		if( quirksome(i*i)) store.push_back(i*i);
	}

//	for(int i = 0; i < store.size(); i++) cout<<store[i]<<endl;


	int n, left, right, e;

	while(scanf("%d", &n) != EOF)
	{

		for(int i = 0; i < store.size(); i++)
		{
			left = store[i];
			right = 0;
			e = 1;
			for(int j = 0; j < n/2; j++)
			{
				right += (left%10)*e;
				left /= 10;
				e *= 10;
			}

			if( (left+right)*(left+right) == store[i] )
			{
				if(n == 2 && store[i] != 100) printf("%.2d\n", store[i]);
				else if(n == 4&& store[i] != 10000) printf("%.4d\n", store[i]);
				else if(n == 6&& store[i] != 1000000) printf("%.6d\n", store[i]);
				else if(n == 8) printf("%.8d\n", store[i]);

			}
		}
	}

//	main();
	return 0;
}
