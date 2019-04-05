#include <stdio.h>
#include <string.h>

char ans[100000];
char precal[1005][3000];

void reverse(void)
{
	int len = strlen(ans);

	int limit = len / 2;


	int i;

	for( i = 0; i < limit ; i++)
	{

		int temp = ans[i];
		ans[i] = ans[len - 1 - i];
		ans[len - 1 - i] = temp;
	}
	return ;
}



void function( int num )
{
	int i = 0;
	char fact[5] = {0};
	while(num)
	{
		fact[i++] = num % 10 +'0';
		num /= 10;
	}

	int len_fact = strlen(fact) , count = 0;
	int len_ans = strlen(ans) , len_single;

	char temp[100000] = {0};


	while(len_fact--)
	{
		char single[100000] = {0};
		int i = 0;
		while(i < count)
		{
			single[i++] = '0';
			/*puts(single);*/
		}

		int j, pro = 1;

		int carry = 0;

		for( j = 0; j < len_ans; j++)
		{
			pro = ( ans[j] - '0') * (fact[i] - '0') + carry;

			single[j + i] = pro % 10 + '0';

			carry = pro / 10;
			/*printf("%d %d %d %s\n", pro, carry, single[j+i], single);*/
		}
		/*puts(single);*/
		if( carry )
		{
			single[ j + i] = carry + '0';
			j++;
		}


		count++;


		int sum = 0;

		len_single = i+j ; /*printf("%d %d\n", len_single, j+i);*/

		for( i = 0; i < len_single; i++)
		{
			if( temp[i] == 0) temp[i] = '0';
			/*printf("%d %d %d", single[i] - '0'*/
			sum += (single[i] - '0') + (temp[i] - '0');
			temp[i] = sum % 10 + '0';
			sum /= 10;
		}

		if (sum) temp[i] = sum + '0';


	}

	int len_temp = strlen(temp);

	while(len_temp--)
	{
		if( temp[len_temp] == '0') temp[len_temp] = 0;
		else break;
	}

	strcpy( ans, temp);

}




int main()
{
	strcpy(ans, "1");

	strcpy(precal[0] , "1");

	int i;
	for(i= 1; i <= 1000; i++)
	{
		function(i);
		reverse();

		strcpy(precal[i] , ans);

		reverse();
	}

	puts(precal[100]);

//	int num;
//
//	while(scanf("%d", &num) != EOF)
//	{
//		printf("%d!\n", num);
//
//		puts(precal[num]);
//
//	}
	return 0;
}
