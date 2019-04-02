#include <stdio.h>


int main()
{

    int hh = 0, mm = 0, ss = 0, a;

    double dis = 0,  speed = 0;

    double last_time = hh + mm / 60.0 + ss / 3600.0;/*for saving the the last time in hour*/

    while(scanf("%d : %d : %d", &hh, &mm, &ss) != EOF)
    {





        dis = dis +  speed * (  hh + mm / 60.0 + ss / 3600.0 - last_time );

        a = getchar();

        if( a != '\n')
        {
            scanf("%lf", &speed);

        }
        else
        {

            printf("%02d:%02d:%02d %.2lf km\n", hh, mm, ss, dis);
        }
        last_time = hh + mm / 60.0 + ss / 3600.0;
    }
    return 0;
}
