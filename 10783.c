#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);/* how many test case;*/

    int l_c = 1; /* for counting test case*/

    while ( l_c <= t)
    {
        int sum, num1, num2;
        sum = 0;
        scanf("%d", &num1);
        scanf("%d", &num2);


        int last_odd;

        if( num1 % 2 && num1 != 0)
        {
            last_odd = num1;
        }
        else
        {
            last_odd = num1 + 1;
        }



        while(last_odd <= num2)
        {
            sum = last_odd + sum;
            last_odd += 2;
        }
        printf("Case %d: %d\n", l_c, sum);
        l_c++;
    }
    return 0;
}
