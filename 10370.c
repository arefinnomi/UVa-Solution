#include <stdio.h>


int main()
{
    short test;
    scanf("%hd", &test);

    while(test--)
    {
        short num;
        scanf("%hd", &num);

        char mark[num];
        short i;
        for ( i = 0 ; i < num ; i++) scanf("%d", &mark[i]);


        float avg = 0;

        /*finding average*/

        for ( i = 0 ; i < num ; i++)  avg = avg + mark[i];

        avg = avg / num;
        /*end of calculating average*/


        /* counting the mark that is above the average*/
        float count = 0;

        for ( i = 0 ; i < num ; i++)
        {
            if( mark[i] > avg ) count++;
        }
        /*end of counting*/



        count = count * 100 / num;/*the percentage of students whose grade is above average*/

        printf("%0.3f%c\n", count, '%');
    }
    return 0;
}
