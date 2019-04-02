#include <stdio.h>


int power(int var, int power)/*for generating the power of a number*/
{
    int loop, ans = 1;
    for(loop = 1; loop <= power; loop++) ans = ans * var;
    return ans;
}




int main()
{
    int n, test = 1;

    for (scanf("%d", &n); n >= 0 ; scanf("%d", &n), test++)
    {
        printf("Case %d: ", test);/*for shoeing test case number*/


        switch (n)
        {
        case 0 :
        case 1 :
            printf("%d", 0);
            break;

        case 2 :
            printf("%d", 1);
            break;

        default :

        {
            int i ;
            for ( i = 2 ;; i++)
            {
                if( n > ( 2 * power( 2 , i-1) ) && n <= ( 2 * power( 2 , i) ) )
                    break;
            }
            printf("%d", i + 1 );

        }
        break;
        }

        printf("\n");
    }

    return 0;
}
