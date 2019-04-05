#include <stdio.h>

int main()
{
	int test = 0;

	while(++test)
	{
		char hello[30];

		gets(hello);

		if ( strcmp( hello, "#") == 0 ) break;
		else printf("Case %d: ", test);

		if( strcmp(hello, "HELLO" ) == 0 ) printf("ENGLISH");
		else if( strcmp(hello, "HOLA") == 0 ) printf("SPANISH");
		else if( strcmp(hello, "HALLO") == 0 ) printf("GERMAN");
		else if( strcmp(hello, "BONJOUR") == 0 ) printf("FRENCH");
		else if( strcmp(hello, "CIAO") == 0 ) printf("ITALIAN");
		else if( strcmp(hello, "ZDRAVSTVUJTE") == 0 ) printf("RUSSIAN");
		else printf("UNKNOWN");

		printf("\n");
	}


	return 0;
}
