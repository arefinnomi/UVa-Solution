#include <stdio.h>
#include <math.h>


int factor[10000];/*for saving the factor of the given divisor*/
int amount[10000];/*amount[i] the total amount of factor[i] in the given divisor*/
int count = 0; /*for counting the number of the factor of the given num*/

void gen_factor( int num)
{
    count = 0 ;
    int a;
    for( a = 0; a < 10000; a++)
    {
        factor[a] = 0;
        amount[a] = 0 ;
    }

    if( num % 2 == 0)
    {
        factor[count] = 2;
        while( num % 2 == 0)
        {
            num /= 2;
            amount[count]++;
        }
        count++;
    }
    int i, limit;
    limit = sqrt(num);
    for ( i = 3; i <= limit ; i += 2)
    {
        if( num % i == 0)
        {
            factor[count] = i;
            while( num % i == 0)
            {
                num /= i;
                amount[count]++;
            }
            count++;
        }

    }

    if( num != 1 )
    {
        factor[count] = num;
        amount[count]++;
        count++;
    }

    for( i = 0 ; i < count; i++) printf("%d %d\n", factor[i], amount[i]);
}

int main()
{

    int num, divid, i;



    while(scanf("%d %d", &num, &divid) != EOF)
    {

        gen_factor(divid);

        char flag = 1;/*flag = 1 means dividable & flag = 0 means not*/

        for ( i = 0 ; i < count; i++)
        {
            int temp = num;

            while ( temp > 1)
            {
                temp /= factor[i];

                amount[i] -= temp;
            }

            if( amount[i] > 0)
            {
                flag = 0 ;
                break;
            }
        }
        if( flag ) printf("%d divides %d!", divid, num);
        else printf("%d does not divide %d!", divid, num);
        printf("\n");
    }
    return 0;
}
