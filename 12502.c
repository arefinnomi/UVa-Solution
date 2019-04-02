#include <stdio.h>


int main()
{
    int test, l_t;
    scanf("%d", &test);

    /*toop for test case */

    for(l_t=1; l_t <= test; l_t++)
    {
        int a_total, b_total, dollar;
        scanf("%d %d %d", &a_total, &b_total, &dollar);

        float avg = (a_total + b_total) / 3.0; /* average work hour for each family*/

        float a_for_c = a_total - avg; /*the amount of time that family a works for family c*/

        float dollar_a = (dollar * a_for_c) / avg;

        printf("%0.0f\n", dollar_a);
    }

    return 0;
}
