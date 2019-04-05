#include <stdio.h>

int main()
{
	char t;/*for test case*/


	scanf("%d", &t);


	do
	{


		int num1, num2;
		scanf("%d %d", &num1, &num2);


		switch (num1 == num2)

		{
		case !0 :
			printf("%c",'=');
			break;

		default :
			if(num1 < num2) printf("%c", '<');
			else  printf("%c", '>');
			break;

		}

		printf("%c", '\n');

	}
	while(--t);


	return 0;
}
