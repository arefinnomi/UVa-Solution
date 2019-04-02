#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{

    cout<<"PERFECTION OUTPUT"<<endl;
    int num;

    while(true)
    {
        scanf("%d", &num);
        if(num == 0) break;

        int sum = 0;
        int limit = sqrt(num);

        for( int j = 1; j <= limit; j++)
        {
            if( num % j == 0)
            {
                //cout << j << ' ' << num / j << endl;

                sum += j + num / j;

                if( j == num / j ) sum -= j;
                if( j == 1 ) sum -= num;
            }
        }

//        cout<<num <<"sum "<< sum <<"\n"<< endl;
        printf("%5d  ", num);

        if( sum == num ) cout<<"PERFECT"<<endl;
        if( sum  < num ) cout<<"DEFICIENT"<<endl;
        if( sum  > num ) cout<<"ABUNDANT"<<endl;
    }

    cout<<"END OF OUTPUT"<<endl;

    return 0;
}
