#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int i = 1;
	char str[20];

	while(true)
	{
		gets(str);

		if( strcmp( str, "*") == 0 ) break;
		else if( strcmp( str, "Hajj") == 0 ) printf("Case %d: Hajj-e-Akbar\n", i);

		else if( strcmp( str, "Umrah") == 0 ) printf("Case %d: Hajj-e-Asghar\n", i);
		i++;
	}

	return 0;
}
