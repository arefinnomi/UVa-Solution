#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

vector < pair<char, char> > mi;
int siz;


bool palindrome ( char *str, int low, int high)
{
    if( low > high) return true;
    else if ( str[low] != str[high] ) return false;
    else return palindrome(str, low+1, high-1);
}

bool mirror (char *str, int low , int high)
{
    char ch1, ch2;
    if( low > high) return true;
    else
    {
        ch1 = str[low];
        ch2 = str[high];

        for( int i = 0; i < siz; i++)
        {
            if( (mi[i].first == ch1 && mi[i].second == ch2) || (mi[i].first == ch2 && mi[i].second == ch1) )
            {
                return mirror( str, low+1, high-1);
            }
        }
    }
    return false;
}

int main()
{
    mi.push_back( make_pair('E', '3'));
    mi.push_back( make_pair('J', 'L'));
    mi.push_back( make_pair('S', '2'));
    mi.push_back( make_pair('Z', '5'));
    mi.push_back( make_pair('0', 'O'));
    mi.push_back( make_pair('0', '0'));
    mi.push_back( make_pair('A', 'A'));
    mi.push_back( make_pair('H', 'H'));
    mi.push_back( make_pair('I', 'I'));
    mi.push_back( make_pair('M', 'M'));
    mi.push_back( make_pair('O', 'O'));
    mi.push_back( make_pair('T', 'T'));
    mi.push_back( make_pair('U', 'U'));
    mi.push_back( make_pair('W', 'W'));
    mi.push_back( make_pair('V', 'V'));
    mi.push_back( make_pair('X', 'X'));
    mi.push_back( make_pair('Y', 'Y'));
    mi.push_back( make_pair('1', '1'));
    mi.push_back( make_pair('8', '8'));
    siz = mi.size();


    char str[1000000];

    while(gets(str))
    {

        printf("%s -- is ", str);
        int len = strlen( str);
        bool palid = palindrome(str, 0, len -1);
        bool mir = mirror(str, 0, len-1);

        if( mir && palid) puts("a mirrored palindrome.");
        else if( mir) puts("a mirrored string.");
        else if(palid) puts("a regular palindrome.");
        else puts("not a palindrome.");

        puts("");

    }

    return 0;
}
