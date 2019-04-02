#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

#define nwl puts("");


using namespace std;

double result[20];

double determinate( double *A, int n)
{
    if(n == 1 ) return A[0];
    double det = 0;
    double M[n-1][n-1];
    for(int i = 0; i < n; i++)
    {
        double *p ;
        p = (double *) M;
        for(int x = 1; x < n; x++) for(int y = 0; y < n; y++) if(y != i)
                {
                    *p = *( x*n + y + (double*) A);
                    p++;
                }

        double temp = A[i] *  determinate( M[0], n-1);

        if( i%2) temp = -temp;

        det += temp;
    }
    return det;
}

void solution ( double *A, double *B, int n)
{
    double det_A = determinate((double *)A , n);

    for(int i = 0; i < n; i++)
    {
        double temp[n][n];

        for(int j = 0; j < n; j++) temp[j][i] = B[j];

        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(k != i)
                {
                    temp[j][k] = *( j*n + k + (double*) A);
                }
            }
        }

//		for(int x=0; x < n; x++)
//		{
//			for(int y = 0; y < n; y++) printf("%lf ", temp[x][y]);
//
//			nwl;
//		}

        result[i] = (double) determinate((double *)temp, n) / det_A;

    }
}

int main()
{

    double in[6];

    while(scanf("%lf", &in[0] ) != EOF)
    {
        for(int i = 1; i < 6; i++)
        {
            scanf("%lf", &in[i]);
        }


        double A[3][3] =
        {
            2*in[0], 2*in[1], 1,
            2*in[2], 2*in[3], 1,
            2*in[4], 2*in[5], 1
        };

        double B[3] = { -(in[0]*in[0] + in[1]*in[1]), -(in[2]*in[2] + in[3]*in[3]), -(in[4]*in[4] + in[5]*in[5])};

        solution((double *)A, B, 3);

        double cir =2 * 3.141592653589793 * sqrt( result[0]*result[0] + result[1]*result[1] - result[2]);

        printf("%.2lf\n", cir);


    }



//    main();
    return 0;
}
