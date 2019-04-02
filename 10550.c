#include <stdio.h>

short clock(short a, short b)/*while dial rotating clockwise*/
{
    short re;

    if( a > b) re = ( a - b ) ;
    else re = 40 - ( b - a ) ;
    return re;
}


short anti_clock(short a, short b)
{
    short re;

    if( a > b) re = 40 -  ( a - b ) ;
    else re =  ( b - a ) ;

    return re;
}



int main()
{
    while(1)
    {
        short dig[4];

        scanf("%hd %hd %hd %hd", &dig[0], &dig[1], &dig[2], &dig[3]);

        if ( dig[0] == 0  && dig[1] == 0  && dig[2] == 0  && dig[3] == 0) break;

        short turn1 = clock(dig[0], dig[1]); /* the first turn for dial is clockwise from dig[0] to dig[1]*/

        short turn2 = anti_clock( dig[1], dig[2] ) ;/*the second turn  for dial is anti-clockwise from dig[1] to dig[2]*/

        short turn3 = clock(dig[2], dig[3]);/* the last turn for dial is clockwise from dig[2] to dig[3]*/

        short turn = (turn1 + turn2 + turn3) * 9 + 360 * 3;


        printf("%hd\n", turn);
    }

    return 0;
}
