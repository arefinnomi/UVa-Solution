#include <stdio.h>


int main()
{
	char test;
	scanf("%hd", & test);

	while(test--)
	{


		short int limit ;

		scanf("%hd", &limit);

		short i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0,c0 = 0;

		for( i = 1 ; i <= limit; i++)
		{
			short num = i, dig;

			do
			{
				dig = num % 10;
				num = num / 10;

				switch (dig)
				{

				case 0:
					c0++;
					break;
				case 1:
					c1++;
					break;
				case 2:
					c2++;
					break;
				case 3:
					c3++;
					break;
				case 4:
					c4++;
					break;
				case 5:
					c5++;
					break;
				case 6:
					c6++;
					break;
				case 7:
					c7++;
					break;
				case 8:
					c8++;
					break;
				case 9:
					c9++;
					break;
				}

			}
			while( num );



		}
		printf("%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd\n", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);
	}

	return 0;
}
