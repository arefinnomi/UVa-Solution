#include <stdio.h>

int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t)!=EOF)
    {
        if (v>=-100&&v<=100&&t>=0&&t<=200)
        {
            int s=2*v*t;
            printf("%d", s);
        }
        else break;
        printf("\n");
    }
    return 0;
}
