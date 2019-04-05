#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int test , t ;

	scanf("%d", &test);

	t = test;

	while(t--)
	{
		int total;
		scanf("%d", &total);
		int max = 0, speed;

		while(total--)
		{
			scanf("%d", &speed);
			if(speed > max) max  = speed;
		}

		printf("Case %d: %d\n", test-t, max);
	}
	return 0;
}
