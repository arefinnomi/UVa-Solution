#include <stdio.h>
#include <math.h>

int main()
{
	int v, tex;
	while(1)
	{
		scanf("%d %d", &v, &tex);
		if( v ==0 && tex == 0) break;

		double min;

		min = (double) 100 * ( v - 1 ) / ( 100 - tex);

		if(  ( min - (long long ) min) == 0) min--;
		else min = floor(min);


		if( min >= v && tex != 100)
			printf("%0.0lf\n", min);
		else
			printf("Not found\n");
	}
	return 0;
}
