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

int x = 200;
char prime[(int)200 + 1];

void gen_prime(void)
{
    int i, j, limit;

    for( i = 2 ; i <= x ; i++) prime[i] = 1;/*let all array index be prime*/

    limit = sqrt(x);

    for( i = 2 ; i <= limit ; i++) /* finding for array index whether it is prime or not*/
    {
        if( prime[i] == 1 )

            for( j = i + i ; j <= x ; j += i) prime[j] = 0 ;
    }

}


int main()
{
	gen_prime();
	int n, cont, temp;

	vector <int > store;
	while(1)
	{
		cin>>n;

		if(!n) break;

		for(int i = 0; i <= n; i++)
		{
			if(prime[i])
			{
				temp = n;
				cont = 0;

                while(temp)
				{
					temp /= i;

					cont += temp;
				}

				store.push_back(cont);
			}
		}
		printf("%3d! =", n);

		for(int i = 0; i < store.size(); i++)
		{
			if(i== 15) printf("\n%6c",' ');

			printf("%3d", store[i]);
		}
		nwl;
		store.erase(store.begin(), store.end());
	}

    return 0;
}
