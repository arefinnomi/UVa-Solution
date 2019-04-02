#include <stdio.h>


int main()
{
    short test;
    scanf("%hd", &test);

    while(test--)
    {
        long int sides[4];


        scanf("%ld %ld %ld %ld", &sides[0],  &sides[1],  &sides[2], &sides[3]);



        char i, j;
        for( i = 0; i < 4 ; i++) /*sorting*/
        {
            for( j = i + 1 ; j < 4 ; j++)
            {

                if( sides[i] > sides[j] )
                {
                    long int temp = sides[i];
                    sides[i] = sides[j];
                    sides[j] = temp ;
                }
            }

        }


        if( sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3] ) printf("square");

        else if (  sides[0] == sides[1] && sides[2] == sides[3] ) printf("rectangle");

        else
        {
            double three =  0.0 + sides[0] + sides[1] + sides[2] ; /*summation of smallest three sides*/


            if ( three >= sides[3]) printf("quadrangle");

            else printf("banana");
        }
        printf("\n");
    }

    return 0;
}
