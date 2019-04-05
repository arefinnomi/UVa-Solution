#include <stdio.h>


int main()
{
	while(1)
	{

		int num1, num2;
		short carry = 0, num_carry = 0;

		scanf("%d %d", &num1, &num2);

		if ( num1 == 0 & num2 == 0) break;


		while( num1 || num2)
		{
			char dig1 = num1 % 10 ;
			char dig2 = num2 % 10 ;

			if ( dig1 + dig2 + carry > 9 )
			{
				carry = 1;
				num_carry ++;
			}
			else carry = 0;

			num1 = num1 / 10;
			num2 = num2 / 10;

		}

	/*output*/
		switch (num_carry)
		{
		case 0 :
			printf("No carry operation.");
			break;
		case 1:
			printf("1 carry operation.");
			break;

		default :
			printf("%hd carry operations.", num_carry);
			break;
		} printf("%c", '\n');
	}

	return 0;
}
