#include <stdio.h>

void continued(int num1, int num2)
{

    int qu = num1 / num2 ;


    int re = num1 % num2;

    num1 = num2;
    num2 = re;

    if (re == 0)
    {
        printf("%d]", qu);
        return;
    }
    else
        printf("%d,", qu);

    continued(num1, num2);
    return;
}


int main()
{
    int num1, num2;

    while(scanf("%d %d", &num1, &num2) != EOF)
    {
        int qu = num1 / num2 ;
        printf("[%d;", qu);

        int re = num1 % num2;

        num1 = num2;
        num2 = re;

        continued(num1, num2);
        printf("\n");
    }

    return 0;
}
