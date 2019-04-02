#include <stdio.h>


int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {


        int am, frq;

        scanf("%d %d", &am, &frq);



        for( ; frq ; frq--)
        {

            int j, count;/* this count variable is for decreasing the value of j*/
            for( j = 1 , count = 1; j  ; count++)
            {

                int k;
                for(k = 1 ; k <= j; k++) printf("%d", j);


                printf("%c", '\n');

                if (count < am) j++;

                else j--;
            }
            if (frq != 1 || test != 0)printf("%c", '\n');
        }

            }
    return 0;
}
