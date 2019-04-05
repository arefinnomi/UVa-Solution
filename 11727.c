#include <stdio.h>

int main()
{
	unsigned short test, l_t;/*for test case*/
	scanf("%hu", &test);/*for test case*/

	for(l_t=1; l_t <= test; l_t++)/*for test case*/
	{
		unsigned short sal[3];/* the salary of three employees */
		scanf("%hu %hu %hu", &sal[0], &sal[1], &sal[2]);

		/*the salaries are needed to be sorted*/
		/* sorting starts here*/

		unsigned short i;
		for(i = 0; i < 3; i++)
		{ unsigned short j;
			for ( j = i+1 ; j < 3; j++) if ( sal[i] > sal[j] )
				{
					unsigned short temp;
					temp = sal[j];
					sal[j] = sal[i];
					sal[i] = temp;
				}
		}
		/* sorting ends here*/
		printf("Case %hu: %hu\n", l_t, sal[1]);
	}

	return 0;
}
