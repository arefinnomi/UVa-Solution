#include <stdio.h>




int main()
{
	int t, l_t;/* 't' for test case & 'l_t' for controlling the test case controlling loop*/ scanf("%d", &t);


	l_t = 0;
	while(l_t++ < t)/*test case controlling loop*/
	{

		float Term1, Term2, Final, Attendance, test[3];

		scanf("%f %f %f %f %f %f %f", &Term1, &Term2, &Final, &Attendance, &test[0], &test[1], &test[2]);

		/*for finding out the best two  value, class test results are needed to be sorted from high to low.

			sorting starts from here*/



		{
			int i;

			for (i=0; i < 3; i++)
			{
				int j;
				for (j = i + 1 ; j < 3; j++)
				{
					if (test[j] > test[i] )
					{
						int temp = test[i] ;
						test[i] = test[j];
						test[j] = temp;
					}
				}

			}
		} /*sorting ends here*/



		int best = ( test[0] + test[1] ) / 2; /* average of the best two*/


		printf("Case %d: ", l_t);


		int result = Term1 + Term2 + Final + Attendance + best; /*total marks*/

		/* for finding the letter grade*/
		if( result >= 90) printf("%c", 'A');

		else if( result >= 80) printf("%c", 'B');

		else if( result >= 70) printf("%c", 'C');

		else if( result >= 60) printf("%c", 'D');

		else printf("%c", 'F');


		printf("%c", '\n');
	}/*end of test case*/
	return 0;
}
