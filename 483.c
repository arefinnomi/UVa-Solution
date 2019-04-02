#include <stdio.h>
char sen[3000];


void reverse(int start, int end)
{

    int i;
    int limit = ( start + end ) / 2;
    for( i = start; i <= limit ; i++)
    {

        int temp = sen[i];
        sen[i] = sen[end + start - i];
        sen[end + start - i] = temp;
    }
    return ;
}


int main()
{
    while( gets(sen) )
    {
        int len = strlen( sen);
        int i, j, start, end;

        for( i = 0; i < len; i++)
        {
            if( sen[i] != ' ')
        {
            for( j = i + 1; j <= len; j++)
                {
                    if( sen[j] == ' ' || sen[j] == '\0' )
                    {
                        j--;
                        break;
                    }
                }
                reverse( i, j);
                i = j;
            }
        }
        puts(sen);

    }
    return 0;
}
