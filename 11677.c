#include <stdio.h>


int main()
{


	while (1)
	{


		short h1, m1, h2, m2;
		scanf("%hd %hd %hd %hd", &h1, &m1, &h2, &m2);

		if( !h1 && !m1 && !h1 && !m2 ) break;/*for terminating the test case*/


		if ( ( h1 * 60 + m1) > ( h2 * 60 + m2) ) h2 += 24;

		short differ = ( h2 * 60 + m2) -  ( h1 * 60 + m1) ; /* the elapsed time*/

		printf("%hd", differ);



		printf("\n");
	}


	return 0;
}
