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

#define nwl puts("")

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;


using namespace std;


string str;

vector < string > arch;
string temp;
int flag[30];

vector < int > out[30];
int in[30] = {0};

void reset(void)
{
	for(int i = 0; i < 30; i++) { out[i].clear(), flag[i]=0; in[i]=0;}

	temp.clear();
	str.clear();
	arch.clear();
}


void backtrack( void )
{
    if( temp.size() == str.size() ) arch.push_back( temp );

    for(int i = 0; i < str.size(); i++)
    {
        if( !flag[i] )
        {
            if( in[str[i] - 'a'] == 0 )
            {
                for(int j = 0; j < out[str[i] - 'a'].size() ; j++) in[out[str[i] - 'a'][j]]--;
                flag[i] = 1;
                temp.push_back(str[i]);
                backtrack();
                temp.erase(temp.size()-1);
                flag[i] = 0;
                for(int j = 0; j < out[str[i] - 'a'].size() ; j++) in[out[str[i] - 'a'][j]]++;
            }
        }
    }
}

int main()
{
    char ch, ch1, ch2, ch3;
    bool line = 0;
    while(1)
    {

        while( 1 )
        {
            if(EOF == scanf("%c", &ch)) return 0;

            if( ch == 10 ) break;
            else if( ch != ' ') str += ch;
        }
        while(1)
        {
            scanf("%c%c%c%c", &ch, &ch1, &ch2, &ch3);

            out[ch-'a'].push_back(ch2-'a');
            in[ch2-'a']++;
            if(ch3 == 10) break;
        }

        backtrack();

        sort(arch.begin(), arch.end());

    	if( line) nwl;
    	line = 1;
        str = "";


        for(int i = 0; i < arch.size(); i++) cout<<arch[i]<<endl;

        reset();

    }



    return 0;
}
