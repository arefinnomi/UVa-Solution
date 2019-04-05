/*********************************
   *	Author: Shamsul Arefin
   *	University of Chittagong

 *********************************
   *
   *  Copyright 2014 by Arefin
   *
 **********************************/

#include <stdio.h>

int main()
{
	while (1)
	{
		char n;/*column & row of square*/

		scanf("%d", &n);

		if ( n == 0) break;


		char m_l;/*the numbers of smallest boxes that will make the square boxes in a particular  case*/

		int count = 0;


		for(m_l = n ; m_l ; m_l--)
		{
			char c = n; /*represent the column of a particular smallest square box*/

			for( ; c >= m_l ; c--)
			{
				char r = n;/*represent the row of that particular smallest square box*/

				for ( ; r >= m_l ; r--) count++;
			}

		}

		printf("%d\n", count);
	}

	return 0;
}
