#include <stdio.h>
#include <math.h>


int main()

{



	short test, l_c;
	scanf("%hd", &test);

	for(l_c = 1 ; l_c <= test ; l_c++)
	{
		double d, f, b;

		scanf("%lf %lf %lf", &d, &f, &b);

		if ( b > f && b != 0 && f != 0)
		{
			double differ;/*the difference between the time of the shortest time path & the time of the shortest length path*/


			differ = d * ( 1 / sqrt( b * b - f * f )  - 1 / b );

			printf("Case %hd: %0.3lf", l_c, differ);

		}
		else printf("Case %hd: can't determine", l_c);

		printf("\n");
	}




	return 0;
}
