#include <stdio.h>


int main()
{
    int test = 0;
    while(1)
    {

        test++;

        short l;

        scanf("%hd", &l);

        if (l == 0) break;

        short num;

        short i;/* for taking input of array*/


        short count0, count1;

        count0 = 0; /*for counting 0 */
        count1 = 0; /*for counting non-0 */

        for ( i = 0 ; i < l ; i++)
        {
            scanf("%hd", &num);
            if( num == 0 ) count0++;
            else count1++;
        }


        short bal = count1 - count0;/*Emoogle Balance = number of times Emoogle is supposed to give a treat according to the book - number of times he has actually given the treat.*/

        printf("Case %d: %hd\n", test, bal);


    }
    return 0;
}
