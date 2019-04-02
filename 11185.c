#include <stdio.h>


int main()
{
    while(1)
    {
        long long int deci; /* for long long int got WA*/
        scanf("%lld", &deci);

        if( deci < 0) break;



        else if( deci == 0) printf("0\n");/*got so many times WA*/

        else
        {
            char ternary[31];
            short i;
            for ( i = 0 ; deci ; i++)
            {

                ternary[i] =  deci % 3; /* the remainder that is the digit of the converted number system*/

                deci = deci / 3;

            }

            char strlen = i;/* size of string*/

            for( i = 0; i < strlen; i++) printf("%d", ternary[strlen - 1 - i]);
            printf("%c", '\n');
        }

    }
    return 0;
}


