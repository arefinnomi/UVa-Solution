#include <stdio.h>

int main()
{
    short test;

    scanf("%hd", &test);

    while(test--)
    {
        short hm, mm;/* hour & minute in mirror clock*/

        scanf("%hd:%hd", &hm, &mm);

        short hc;
        float mc;/* hour & minute in real clock*/

        if ( hm == 12) hm = 0;

        float time = 12 - ( hm + mm / 60.0); /* the mirror time converted into hour of real one*/


        hc = time;

        mc = (( time - hc ) * 60);/* if we dont take mc as a float the code will give wrong ans for input 12:59

                                    because if we take mc as a int the value of assignment statement is less then 1
                                    so the value of mc will be zero*/



        if(hc == 0) hc = 12;

        printf("%02hd:%02.0f\n", hc, mc);
    }


    return 0;
}
