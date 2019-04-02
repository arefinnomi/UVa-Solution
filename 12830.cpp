#include <iostream>
#include <stdio.h>
#include <math.h>
#include<algorithm>

using namespace std;

struct point/*for two dimensional*/
{
    int x;
    int y;

    point()
    {
        x=0;
        y= 0;
    }

    point(int xx, int yy)
    {
        x = xx;
        y = yy;
    }


    void show()
    {
        printf("%d %d\n", x, y);
        return;
    }
};

int diff( point a, point b)/*this function return the square of the distance*/
{
    int dis;

    dis = abs(  (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return dis;
}


double area_of_tra( point a, point b, point p)
{

    double re = abs(( a.x-b.x ) * (  b.y-p.y ) - (a.y-b.y) * ( b.x - p.x ));

    re = re / 2.0;

    return re;
}
int area( point a, point b, point c)
{

    int re = abs( (b.x-a.x)* (c.y-a.y));

    return re;
}


char inside( point a, point b, point c, point p)/*British flag theorem*/
{

    point d = point( b.x, c.y);
//    d.show();
    double re;

    re = area_of_tra(a,b,p) + area_of_tra(b,d,p) + area_of_tra(d,c,p) + area_of_tra(c,a,p) - area(a,b,c);
    //printf("%lf ",re);

    if (re == 0) return 'i';

    else return 'o';
}




int main()
{
    //printf("%c", inside(point(2,0), point(4,0), point(2,3), point(3,2)));


    int test, t;

    scanf("%d", &test);
    t = test;

    while(t--)
    {
        int x, y;

        scanf("%d %d", &x, &y);
        point bound;
        bound = point(x,y);
        int num;

        scanf("%d", &num);

        int n = num;

        point tree[num];

        while(n)
        {
            scanf("%d %d", &x, &y);
            tree[num-n] = point(x,y);
            n--;
        }


        int line_x[num+2] , line_y[num+2] ;/*the possible line by ease line: parallel x-axes, parallel to y-axes*/


        line_x[0] = 0 ;
        line_y[0] = 0;
        line_x[1] = bound.x;
        line_y[1] = bound.y;


        //printf("line\n\n");
        int cont_line = 1;/*for counting the possible line*/
        for( n = 0; n < num ; n++)
        {
            cont_line++;
            line_x[cont_line] = tree[n].x;
            line_y[cont_line] = tree[n].y;
            //printf("%d %d %d %d\n", line_x[cont_line],line_y[cont_line], tree[n].x, tree[n].y );

        }

        cont_line++;

        sort(line_x, line_x+cont_line);
        sort(line_y, line_y+cont_line);


        //for( n = 0; n < cont_line; n++) printf("%d %d\n", line_x[n],line_y[n]);

        point rect[cont_line * cont_line];

        int i , j, k, l, point_num = 0;

        for( i = 0; i < cont_line; i++)
        {

            for( j = 0; j < cont_line; j++)
            {
                rect[point_num++] = point(line_x[i],line_y[j]);


            }
        }



//        for( n = 0 ; n < point_num; n++)
//        {
//            rect[n].show();
//            printf("\n");
//        }

        int area_max = 0, temp;
        char flag;

        for( i = 0; i < point_num; i++)
        {

            for( j = 1; j < point_num; j++)
            {
                if(i == j) continue;
                if( rect[i].y != rect[j].y) continue;

                for( k = 1; k < point_num; k++)
                {
                    if (j == k || i == k) continue;
                    if( rect[i].x != rect[k].x) continue;

                    flag = 'o';
//
//                    rect[i].show();
//                    rect[j].show();
//                    rect[k].show();

                    for( l = 0; l < num; l++)
                    {

                        //tree[l].show();
                        if( tree[l].x == rect[i].x || tree[l].x == rect[j].x || tree[l].x == rect[k].x || tree[l].y == rect[i].y || tree[l].y == rect[j].y || tree[l].y == rect[k].y )
                        {
                            //printf("f");
                            flag = 'o';
                        }
                        else
                        {

                            flag = inside( rect[i], rect[j], rect[k], tree[l]);
                        }

                        // printf("\n%c\n\n", flag);
                        if( flag == 'i' )
                        {
                            // printf("i");
                            break;
                        }

                    }/*
                    else*/ if( flag == 'o')
                    {
                        temp = area( rect[i], rect[j], rect[k]);

                        if( temp > area_max)
                        {
                            area_max = temp;

                        }
                        //printf("%d\n", temp);
                    }

                    //if( flag == 'i') break;
                }
                //if(flag == 'i') break;

            }
            //if( flag == 'i') continue;


        }
        printf("Case %d: %d\n",test-t, area_max);
    }

    return 0;
}
