#include <stdio.h>

int main()
{
    int r, c, temp_r,temp_c;

    while(1)
    {
        scanf("%d %d ", &r, &c);
        if( r==0 && c == 0) break;

        char str[r][c+5];
        char value[r+5][c+5] ;


        for( temp_r = 0; temp_r < r+5 ; temp_r++)
        {
            for( temp_c = 0; temp_c < c+5 ; temp_c++)
            {
                value[temp_r][temp_c] = 1;
            }
        }

        temp_r = r;

        while(temp_r)
        {
            gets(str[r-temp_r]);

            temp_r--;
        }


        for( temp_r = 0; temp_r < r ; temp_r++)
        {
            for( temp_c = 0; temp_c < c ; temp_c++)
            {
                if( str[temp_r][temp_c] == '.') value[temp_r+1][temp_c+1] = 0;/*here str[i][j] == value[i+1][j+1]*/

                else
                {

                    value[temp_r+1-1][temp_c+1-1] = 0;

                    value[temp_r+1-1][temp_c+1] = 0;

                    value[temp_r+1-1][temp_c+1+1] = 0;

                    value[temp_r+1][temp_c+1-1] = 0;

                    value[temp_r+1][temp_c+1+1] = 0;

                    value[temp_r+1+1][temp_c+1-1] = 0;

                    value[temp_r+1+1][temp_c+1] = 0;

                    value[temp_r+1+1][temp_c+1+1] = 0;


                }
            }
        }

        int count=0;
        for( temp_r = 1; temp_r <= r ; temp_r++)
        {
            for( temp_c = 1; temp_c <= c ; temp_c++)
            {
                if(value[temp_r][temp_c] == 1) count++;
            }

        }

        printf("%d\n", count);

    }
    return 0;
}
