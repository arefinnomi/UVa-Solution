#include <stdio.h>

unsigned char count[100000 + 1];

signed char mobius[100000 + 1 ];


void mobius_f( void )
{
    int i, j, limit ;

    for( i = 1 ; i  <= 100000 ; i++) count[i] = 0 ;

    count[1] = 1;

    limit = sqrt(100000);

    for ( i = 2 ; i <= limit ; i++)
    {
        if(mobius[i] == 0 )
        {
            for ( j = i + i ; j <= 100000 ; j += i ) count[j] = count[j] + 1;

        }
    }
    int temp = 1;

    mobius[1] = 1 ;

    for ( i = 2 ; i <= 100000 ; i++)
    {

        if ( count[i] == 0 ) mobius[i] = -1;

        else
        {

            if( count[i] % 2 == 0 ) mobius[i] = 1 ;

            else mobius[i] = -1 ;

            limit = i / 2 ;
            for( j = 2 ; j <= limit ; j += 1 )
            {

                if ( count[j] == 0 )
                {
                    if ( i % j == 0 )
                    {
                        temp = i / j ;

                        if ( temp % j == 0)
                        {
                            mobius[i] = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
}



int main()
{
    mobius_f();
    int i;

    for( i= 1 ;  i<= 30 ; i++) printf("%d %d\n",i, mobius[i]);



    long renge;

    while(1)
    {

        scanf("%ld", &renge);


        if ( renge == 0 ) break;


        long i, merten = 0 ;

        for (i = 1 ; i <= renge ; i++)
        {
            merten = m_v[i] + merten;
            printf("%d ", m_v[i]);
        }

        printf("%ld\t%ld\t%ld\n", renge, m_v[renge], merten);



    return 0;
}
