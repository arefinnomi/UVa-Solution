#include <stdio.h>

int main()
{
    unsigned char ch;

    while(1)
    {

        if( scanf("%c", &ch) == EOF) break;
        else if ( ch == 10 ) printf("%c", ch);
        else printf("%c", ch - 7);
    }

    return 0;
}
