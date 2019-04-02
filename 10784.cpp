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

	long long N;
	int test = 1;
	while(1)
	{
		cin>>N;

		if( N == 0) break;
		long long n = ceil( ( 3 + sqrt(9 + 8 * N)) / 2.0);

		cout<<"Case "<<test++<<": "<<n<<endl;
	}

//	main();
    return 0;
}
