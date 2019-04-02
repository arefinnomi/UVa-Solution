#include <stdio.h>

int main()
{
    char str[1000000];
    char s;
    int i;

    while(scanf("%s", str) != EOF)
    {
        i = 0;
        while(1)
        {

            s = getchar();
            if( s == str[i]) i++;
            if( s == 10 ) break;
        }
        if( str[i] =='\0') printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
