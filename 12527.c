#include <stdio.h>

int check( int i)
{
    int array[5], n=0;

    while(i)
    {
        array[n++] = i % 10;
        i /= 10;
    }

    if( n == 4 )
    {
        if( array[0] != array[1]  && array[0] != array[2] && array[0] != array[3] && array[1] != array[2] && array[1] != array[3] && array[2] != array[3]) return 0;
        else  return 1;
    }

    else if( n == 3 )
    {
        if( array[0] != array[1] && array[1] != array[2] && array[0] != array[2]) return 0;
        else  return 1;
    }

    else if( n == 2 )
    {
        if( array[0] != array[1] ) return 0;
        else  return 1;
    }
    else return 0;
}


int main()
{
    /*pre-calculation*/

    int i,j,k,l, index;

    int array[5999] = {0};

    for(i = 0; i <= 5; i++)
        for(j = 0; j <= 9; j++)
            for(k = 0; k <= 9; k++)
                for(l = 0; l <= 9; l++)
                {
                    index = i*1000 + j*100 + k*10 + l*1;

                    if( i==j && j==k && k==0) array[index] = 1;
                    if( i==j && j==0 && k!=l) array[index] = 1;
                    if( i==0 && j!=k && k!=l && j!=l ) array[index] = 1;
                    if( i!=j && i!=k && i!=l && j!=k && j!=l && k!=l ) array[index] = 1;
                }

    int count=0 ;

    for( i = 1; i < 5001; i++)
    {
        if( array[i] == 1 ) count++;
        array[i] = count;
    }
    /*end*/


    int num1, num2;


    while( scanf("%d %d", &num1, &num2) != EOF)
    {


        if( check(num1) == 1 )
            printf("%d\n", array[num2] - array[num1]);
        else
            printf("%d\n", array[num2] - array[num1] + 1);
    }



    return 0;
}
