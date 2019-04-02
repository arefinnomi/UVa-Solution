#include <stdio.h>
int main()
{
    int n, k, p, ans, test_num;
    scanf("%d", &test_num);
    int Case = test_num;
    for(; test_num>0; test_num--)
    {

        scanf("%d %d %d", &n, &k,&p);
        if ((n>=2&&n<=23)&&(k>=1&&k<=n)&&(p>0&&p<=200))
        {
            int m, pn;
            for(m=1,pn=k; m<=p+1; pn++,m++)
            {
                ans=pn;
                if(pn==n)
                {
                    pn=0;
                }
            }
            printf("Case %d: %d",Case+1-test_num, ans);
        }
        else break;
        printf("\n");
    }
    return 0;
}
