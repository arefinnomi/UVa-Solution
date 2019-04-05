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
	int m, f;

	while(1)
	{
		cin >> m >> f;
		if(m==0&&f==0) break;
		int mal[m];
		int fe[f];

		for(int i = 0; i < m; i++)scanf("%d", &mal[i]);
		for(int i = 0; i < f; i++)scanf("%d", &fe[i]);


		sort(mal, mal+m, greater<int>());

		printf("Case %d: ", test++);

		if(m <= f) printf("0\n");
		else printf("%d %d\n", m-f, mal[m-1]);

	}
//	main();
	return 0;
}
