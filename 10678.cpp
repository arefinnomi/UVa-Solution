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

double pi = 2 * acos(0);

int main()
{
	int test;

	scanf("%d", &test);

	int m, n;
	while(test--)
	{
		scanf("%d %d", &m, &n);

		double area = pi * n * sqrt( (double)n * n - m * m) / 4;

		printf("%0.3lf\n", area);
	}

//	main();
    return 0;
}
