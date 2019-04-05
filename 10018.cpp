#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

char str[20];

unsigned revers( unsigned num)
{
	unsigned re = 0 ;

	while( num)
	{
		unsigned remind = (num % 10) ;
		re =( re * 10) + remind;
		num /= 10;
	}
	return re;
}

bool palindrome_recursion( int in , int ter )
{

	if( in > ter ) return true;
	else
	{
		if( str[in] == str[ter] ) palindrome_recursion( in+1, ter - 1);

		else return false;
	}
}


bool palindrome( unsigned num)
{
	int i = 0;
	while(1)
	{
		str[i++] = num % 10 + '0';
		num /= 10;

		if ( num == 0) break;
	}
	str[i] = 0;
	return palindrome_recursion(0, i - 1);
}

int main()
{

	int test;
	scanf("%d", &test);

	while(test--)
	{
		unsigned num ;

		scanf("%u", &num);

		int coun = 0;

		while( palindrome(num) !=  true)
		{
			coun++;
			num += revers(num);
		}
		printf("%d %u\n", coun, num);
	}
	return 0;
}
