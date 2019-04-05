#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;


char skew[300];

void revers(int in, int ter)
{

	if( in > ter ) return;

	swap(skew[in], skew[ter]);

	revers(in+1, ter-1);


	return;
}

int main()
{
	while(1)
	{
		gets(skew);

		if ( strcmp( skew, "0") == 0) break;


		int len = strlen( skew);

		revers(0, len-1);


		int deci = 0, bit;

		for( int i = 0; i < len; i++)
		{
			bit  = skew[i] - '0';


			deci +=  bit * ( (int) pow( (double) 2, (double) i + 1) - 1 );
		}

		printf("%d\n", deci);
	}
	return 0;
}
