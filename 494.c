#include <stdio.h>

int countting(char l[])
{
	int a, b, cont=0;
	for (a=0; a<100000; a++)
	{
		if(l[a]=='\0') break;
		else if(!((l[a]>='a'&&l[a]<='z')||(l[a]>='A'&&l[a]<='Z')))
		{
			for(b=a+1; b<100000; b++)
			{
				if(((l[b]>='a'&&l[b]<='z')||(l[b]>='A'&&l[b]<='Z')))
				{
					a=b-1;
					break;
				}
				else if(l[b]=='\0') break;
				else continue;
			}
		}
		else
		{
			cont++;
			for(b=a+1; b<100000; b++)
			{
				if(!((l[b]>='a'&&l[b]<='z')||(l[b]>='A'&&l[b]<='Z')))
				{
					a=b;
					break;
				}
			}

		}
	}
	return cont;
}

int main()
{
	char l[100000];
	while(NULL!=gets(l))
	{
		int cont=countting(l);
		printf("%d", cont);
		printf("\n");
	}
	return 0;
}
