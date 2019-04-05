#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;




struct big_int
{
	char num[200];

	big_int()
	{
		strcpy(num, "\0");
	}

	big_int( char *temp)
	{
		strcpy( num, temp);
	}

	void get( void)
	{
		gets(num);
	}

	void put(void)
	{
		puts(num);
	}

	big_int operator + (const big_int num2) const
	{
		big_int re;

		char temp_num1[200]= {0}, temp_num2[200] = {0}; /*fot first operand, for second operand*/

		strcpy(temp_num1, num);
		strcpy(temp_num2, num2.num);

		int len_num1 = strlen(temp_num1);
		int len_num2 = strlen(temp_num2);

		reverse(temp_num1, temp_num1+len_num1);
		reverse(temp_num2, temp_num2+len_num2);

		int carry = 0, sum, i;

		for( i = 0; i < len_num1 || i < len_num2; i++)
		{
			if(i >= len_num1)
			{
				sum = carry + temp_num2[i] - '0';
			}
			else if(i >= len_num2)
			{
				sum = carry + temp_num1[i] - '0';
			}

			else
			{
				sum = carry + temp_num1[i] - '0' + temp_num2[i] - '0';
			}

			re.num[i] = sum % 10 + '0';

			carry = sum / 10;
		}
		if( carry )
		{
			re.num[i++] = carry + '0';
		}
		re.num[i] = 0;


		reverse(re.num, re.num+i);

		return re;
	}
};




int main()
{

	big_int num;
	big_int sum;

	while(true)
	{
		num.get();

		if(strcmp(num.num, "0") == 0) break;
		else
		{
			sum = sum + num;
		}
	}


	sum.put();



	return 0;
}
