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
	int ary[3][3];



	while( scanf("%d %d %d %d %d %d %d %d %d", &ary[0][0], &ary[0][1], &ary[0][2], &ary[1][0], &ary[1][1], &ary[1][2], &ary[2][0], &ary[2][1], &ary[2][2] ) != EOF)
	{

		long long maxim = 21474836474;
		long long sum = 0;
		char str[4] = {0}, max_str[4] = {0};

		for(int x = 0; x < 3; x++)
		{
			for(int y = 0; y < 3; y++)
			{
				if(x==y) continue;
				for(int z = 0; z < 3; z++)
				{
					if(x==z|| y==z) continue;

					sum = ary[(x+1)%3][0] + ary[(x+2)%3][0] +ary[(y+1)%3][1] + ary[(y+2)%3][1] +ary[(z+1)%3][2] + ary[(z+2)%3][2];


					if(x == 0) str[0] = 'B';
					if(x == 1) str[1] = 'B';
					if(x == 2) str[2] = 'B';

					if(y == 0) str[0] = 'G';
					if(y == 1) str[1] = 'G';
					if(y == 2) str[2] = 'G';

					if(z == 0) str[0] = 'C';
					if(z == 1) str[1] = 'C';
					if(z == 2) str[2] = 'C';

					if(maxim > sum )
					{
						maxim = sum;


						strcpy(max_str, str);

					}

					if( maxim == sum && strcmp(str, max_str) < 1)
					{
						strcpy(max_str, str);
					}
//		cout<<sum<<" "<<ary[(x+1)%3][0] + ary[(x+2)%3][0] <<" "<<ary[(y+1)%3][1] + ary[(y+2)%3][1] <<" "<<ary[(z+1)%3][2] + ary[(z+2)%3][2]<<str<<" "<<max_str<<endl;



				}
			}
		}

		cout<<max_str<<" "<<maxim<<endl;

	}
//	main();
	return 0;
}
