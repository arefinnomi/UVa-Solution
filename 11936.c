#include <stdio.h>


int main()
{
	short test;

	scanf("%hd", &test);


	while(test--)
	{
		int sides[3];

		scanf("%d %d %d", &sides[0],  &sides[1],  &sides[2]);


		char i, j;
		for( i = 0; i < 3 ; i++) /*sorting*/
		{
			for( j = i + 1 ; j < 3 ; j++)
			{

				if( sides[i] > sides[j] )
				{
					int temp = sides[i];
					sides[i] = sides[j];
					sides[j] = temp ;
				}
			}

		}

		if( sides[0] + sides[1] > sides[2]) printf("OK");
		else printf("Wrong!!");


		printf("\n");
	}






	return 0;
}
