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


int main()
{
    int test = 1;
//
//    freopen("out.txt", "w", stdout);
//    freopen("in.txt", "r", stdin);
    long long int num;

    while(cin>>num)
    {
        printf("%4d. ", test++);
        if(num==0) {cout<<0<<endl; continue;}
        string str = "";
        while(num)
        {
            str += num % 10 +'0';
            num = num / 10;
        }
//        cout<<str<<endl;


        int flag = 1;
        string out = "";

        int i = 0;

        string temp;


        if ( str[i+1]-'0' && i+1 != str.size()) out += str[i],out += str[i+1];
        else if ( str[i]-'0' ) out += str[i];
        i+=2;

        while( i < str.size())
        {


            if( i % 7 == 2 && str[i]-'0') out += " atahs ";
            if( (i % 7 == 3 || i % 7 == 4) && (str[i]-'0' || str[i+1]-'0') ) out += " rajah ";
            if( (i % 7 == 5 || i % 7 == 6 ) && (str[i]-'0' || str[i+1]-'0') ) out += " hkal ";
            if( (i % 7 == 0 || i % 7 == 1 )  )out += " ituk ";


            if( i % 7 == 0 || i % 7 == 3 ||  i % 7 == 5 )
            {


                if ( str[i+1]-'0' && i+1 != str.size()) out += str[i],out += str[i+1];
                else if ( str[i]-'0' ) out += str[i];
            }
            else
            {
                if ( str[i]-'0' )out += str[i];

            }
            if(i%7!=2) i+=2;
            else i++;

//            reverse(out.begin(), out.end());
//
//            cout<<out<<endl;
//            reverse(out.begin(), out.end());
        }
//        cout<<out<<endl;
        for(int i = 0; i < out.size()-1; i++) if( out[i] ==' '&& out[i+1] == ' ') out.erase(out.begin()+i );
        if( out[0] ==' ') out.erase(out.begin());
//        cout<<out<<endl;
        reverse(out.begin(), out.end());


        cout<<out<<endl;


    }
//	main();
    return 0;
}
