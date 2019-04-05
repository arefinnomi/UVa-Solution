#include <stdio.h>


int main()
{

	char test;
	scanf("%hd", &test);


	int total = 0;/*the total amount of balance*/


	while(test--)
	{

		char prompt[7];
		scanf("%s", prompt);

		if( prompt[0] == 'd')
		{
			int donate;
			scanf("%d", &donate);


			total = total + donate;
		}

		else printf("%d\n", total);
	}
	return 0;
}
