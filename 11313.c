#include <stdio.h>
#include <stdlib.h>

int main()
{
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int can, per_s, show = 0;/*the total candidate & the number of chefs participating in a single TV show, the total number of show*/
		scanf("%d %d", &can, &per_s);

		while( can != 1)
		{
			show += can / per_s;
			can = can / per_s +  can % per_s;

			if( can < per_s && can != 1) break;
		}

		if( can < per_s && can != 1)
			printf("cannot do this\n");
		else
			printf("%d\n", show);
	}
	return 0;
}
