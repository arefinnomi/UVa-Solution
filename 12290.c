#include <stdio.h>

int main()
{
	int seven[50000], i, j, k, l , m, temp, count = 0 ;

	for( i = 0; i < 6 ; i++)
		for( j = 0; j < 10 ; j++)
			for( k = 0; k < 10 ; k++)
				for( l = 0; l < 10 ; l++)
					for( m = 0; m < 10 ; m++)
					{
						temp = 1*m + 10*l + 100*k + 1000*j + 10000*i;;
						if( i == 7 || j == 7 || k == 7 || l == 7 || m == 7 || temp % 7 == 0)
						{
							seven[count] = temp;
							count++;
						}
					}

	/*printf("%d\n", count);

	for( i = 1; i < 50 ; i++) printf("%d\n", seven[i]);*/

	int total, nth, amu; /*n,m,k*/

	while(1)
	{

		scanf("%d %d %d", &total, &nth, &amu);

		if( total == 0 && nth == 0 && amu ==  0 ) break;


		/*unsigned char str[60000];*/

		int value = 1, flag = 0, c_amu = 0;

		for( i = 1, count=1; i < 53000; i++)
		{
			/*printf("%d %d %d\n", i, seven[count], value);*/
			if( i == seven[count] )
			{

				if( value == nth )
				{
					c_amu++;
					if( c_amu == amu) break;
					else count++;
				}
				else count++;
			}


			if( value == total ) flag = 1;
			else if( value == 1 ) flag = 0;

			if( flag == 1 ) value--;
			else value++;

		}

		printf("%d\n", i);
	}

	return 0;
}
