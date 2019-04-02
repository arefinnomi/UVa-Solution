#include <stdio.h>
#include <math.h>

int main()
{
    int test;/*for counting test case */
    char num;

    for( test = 1 , scanf("%d", &num); num ; test++,  scanf("%d", &num))
    {

        double in1, in2, in3, out1, out2;
        scanf("%lf %lf %lf", &in1, &in2, &in3);

        if( num == 1)
        {
            /*here
              in1 represent u
              in2  represent v
              in3  represent t
              out1 represent s
              out2 represent a */

            out2 = ( in2 - in1 ) / in3;/*a = ( v - u ) / t*/

            out1 = in1 * in3 + out2 * in3 * in3 / 2; /* s = u*t + a * t * t / 2*/
        }


        else if( num == 2)
        {
            /*here
              in1 represent u
              in2  represent v
              in3  represent a
              out1 represent s
              out2 represent t */


            out2 = ( in2 - in1 ) / in3;/*t = ( v - u ) / a*/

            out1 = in1 * out2 + in3 * out2 * out2 / 2; /* s = u*t + a * t * t / 2*/
        }


        else if( num == 3)
        {
            /*here
              in1 represent u
              in2  represent a
              in3  represent s
              out1 represent v
              out2 represent t */

            out1 = sqrt(in1 *  in1 + 2 * in2 * in3);/* v * v = u * u + 2 * a * s  */
            out2 = ( out1 - in1 ) / in2;/*t = ( v - u ) / a*/
        }


        else
        {
            /*here
              in1 represent v
              in2  represent a
              in3  represent s
              out1 represent u
              out2 represent t */


            out1 = sqrt(in1 *  in1 - 2 * in2 * in3);/*  u * u = v * v - 2 * a * s  */
            out2 = ( in1 - out1 ) / in2;/*t = ( v - u ) / a*/
        }


        printf("Case %d: %0.3lf %0.3lf\n", test, out1, out2);
    }
    return 0;
}
