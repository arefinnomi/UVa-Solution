#include <stdio.h>


int main()
{
    while (1)
    {
        long int side[3];
        scanf("%ld %ld %ld", &side[0], &side[1], &side[2]);

        if( side[0] == 0 && side[1] == 0 && side[2] == 0 ) break;

        long int temp, i, j;

        /*sorting the array */

        for(i = 0; i < 3; i++)
        {

            for( j = i + 1 ; j <= 3 ; j++)
            {

                if ( side[i] > side[j])
                {

                    temp = side[i];
                    side[i] = side[j];
                    side[j] = temp;
                }
            }
        }

        if( side[0] * side[0] +  side[1] * side[1] - side[2] * side[2] == 0 ) printf("%s", "right\n");
        else printf("%s", "wrong\n");
    }
    return 0;
}
