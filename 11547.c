#include <stdio.h>


int main()
{
	char test;
	scanf("%d", &test);

	while(test--)
	{
		short num;/*the given number*/
		scanf("%hd", &num);

		/* the given calculation can be written as like that after simplification*/
		int result = 315 * num + 36962 ;/*after manipulating the number */




		/*for calculating  the digit in tens column*/


		/*we need to get rid of the digit in ones column of result */
		result = result / 10 ;



		char tens = result % 10; /*the digit in the tens column of the manipulated number*/

		if (tens < 0) tens = -tens;


		printf("%d\n", tens);
	}


	return 0;
}
