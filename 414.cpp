#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cassert>
#include <climits>

using namespace std;

#define endl       '\n'
#define spc        printf(" ")
#define nln        printf("\n")                     ///printnewline
#define fast_IO    ios_base::sync_with_stdio(false);
#define Max(a,b,c) max(a,max(b,c))                  ///3 ta theke max
#define Min(a,b,c) min(a,min(b,c))                  ///3 ta theke min
#define sqr(x)     (x)*(x)

#define z(x)       fabs(x)<EPS
#define iqu(x,y)   z(fabs(x-y))

#define rep(i,a,b)  for(i=a;i<=b;i++)
#define rep0(i,n)   for(i=0;i<n;i++)
#define rep1(i,n)   for(i=1;i<=n;i++)               ///looping
#define rev(i,a,b)  for(i=a;i>=b;i--)
#define rev0(i,n)   for(i=n-1;i>=0;i--)
#define rev1(i,n)   for(i=n;i>=1;i--)
#define forstl(i,v) for(i=0;i<v.size();i++)
#define forit(it,v) for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define all(p)      p.begin(),p.end()

#define SET(p)     memset(p,-1,sizeof(p))
#define CLR(p)     memset(p,0,sizeof(p))            ///memset
#define MEM(p,v)   memset(p,v,sizeof(p))

#define sz(c)      (int)c.size()
#define pb(x)      push_back(x)                     ///STL defines
#define mp(x,y)    make_pair(x,y)
#define xx         first
#define yy         second
#define _itr(v)    __typeof(v.begin())

typedef unsigned int UI;
typedef long long int i64;
typedef unsigned long long int Ui64;
typedef long double LLF;
typedef double LF;

typedef vector<int>     vi;
typedef vector<i64>     vll;
typedef vector<string>  vs;
typedef pair<int, int>  pii;
typedef pair<i64, i64>  pll;

#define check(n, pos)  (bool)(n & (1LL<<(pos)))      ///CHECK
#define biton(n, pos)  (n | (1LL<<(pos)))            ///ON     }-bit opr.
#define bitoff(n, pos) (n & ~(1LL<<(pos)))           ///OFF

// reading and writing case
#define readcase  int cas,kase=0;CI(cas);while((cas--)&&(++kase))
#define printcase printf("Case %d:",kase)

//debugging infinite variable
bool deb_mode = 0;
#define debug(a...) if(deb_mode){cout<<"Line= "<<__LINE__<<" -> ";Dbug,a,#a;Dbug.printall();cout<<endl;}
class debugger
{
    vector<string> vars;
public:
    template<typename T> debugger& operator , ( const T v )
    {
        stringstream ss;
        ss << v, vars.push_back( ss.str() );
        return *this;
    }
    void printall()
    {
        int j = 0, l = vars.size();
        for( int i = 0; i < ( l - 1 ); i++ ) {
            if( i )cout << ", ";
            for( j; j < vars[l - 1].size(); j++ ) {
                if( vars[l - 1][j] == ',' ) {
                    j++;
                    break;
                }
                cout << vars[l - 1][j];
            }
            cout << " = " << vars[i];
        }
        vars.clear();
    }
} Dbug;

///STL printing output stream overloading
template <typename T1, typename T2> inline ostream& operator << ( ostream& os, const pair<T1, T2>& p )
{
    return os << "(" << p.first << "," << p.second << ")";
}
template <typename T> inline ostream &operator << ( ostream & os, const vector<T>& v )
{
    bool first = true;
    os << "{";
    for( unsigned int i = 0; i < v.size(); i++ ) {
        if( !first ) os << ",";
        os << v[i];
        first = false;
    }
    return os << "}";
}
template <typename T> inline ostream &operator << (  ostream & os, const set<T>& v )
{
    bool first = true;
    os << "{";
    for ( typename set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii ) {
        if( !first ) os << ",";
        os << *ii;
        first = false;
    }
    return os << "}";
}
template <typename T1, typename T2> inline ostream &operator << ( ostream & os, const map<T1, T2>& v )
{
    bool first = true;
    os << "{";
    for ( typename map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii ) {
        if( !first ) os << ",";
        os << *ii ;
        first = false;
    }
    return os << "}";
}


template <typename T> T gcd( T a, T b )
{
    if( b == 0 ) return a;
    return gcd( b, a % b );
}
template <typename T> T BigMod ( T b, T p, T m )
{
    if ( p == 0 ) return 1;
    if ( p % 2 == 0 ) {
        T s = BigMod( b, p / 2, m );
        return ( ( s % m ) * ( s % m ) ) % m;
    }
    return ( ( b % m ) * ( BigMod( b, p - 1, m ) % m ) ) % m;
}
template <typename T> T ModInv ( T b, T m )
{
    return BigMod( b, m - 2, m );
}

template<class T> inline void read( T &x )
{
    bool Minus = 0;
    char c;
    for( c = getchar(); c <= 32; c = getchar() ) ;
    if( c == '-' ) Minus = 1, c = getchar();
    for( x = 0; c > 32; c = getchar() ) x = x * 10 + c - '0';
    if( Minus ) x = -x;
}
char getc()
{
    char c;    ///input char with buffering
    for( c = getchar(); c <= 32; c = getchar() );
    return c;
}
int CI( int &_x )
{
    return scanf( "%d", &_x );
}
int CI( int &_x, int &_y )
{
    return scanf( "%d %d", &_x, &_y );
}
int CI( int &_x, int &_y, int &_z )
{
    return scanf( "%d %d %d", &_x, &_y, &_z );
}
int CI( int &_a, int &_b, int &_c, int &_d )
{
    return scanf( "%d %d %d %d", &_a, &_b, &_c, &_d );
}

template <class T> string toString( T n )
{
    ostringstream oss;
    oss << n;
    return oss.str();
}
int toInt( string s )
{
    int r = 0;
    istringstream sin( s );
    sin >> r;
    return r;
}
i64 toLong( string s )
{
    i64 r = 0;
    istringstream sin( s );
    sin >> r;
    return r;
}


int dr8[8] = { +1, -1, +0, +0, +1, -1, -1, +1};   ///8 direction move
int dc8[8] = { +0, +0, -1, +1, +1, +1, -1, -1};
int dr4[4] = { +0, +0, +1, -1};                   ///4 direction move
int dc4[4] = { -1, +1, +0, +0};                   ///or adjacent dir.
int kn8r[8] = { +1, +2, +2, +1, -1, -2, -2, -1};  ///knight moves
int kn8c[8] = { +2, +1, -1, -2, -2, -1, +1, +2};

const double EPS = 1e-9;                         ///constants
const int INF = ( 1 << 30 ) - 1;
const i64 LINF = ( 1ll << 62 ) - 1;
const int mod = ( int )1e9 + 7;
const int MAX = ( int )1e5;
///____________________________Main Coding Starts From Here________________________///





int main()
{
#ifndef ONLINE_JUDGE
//    freopen("i.txt", "r", stdin);         /// file
//    freopen("o.txt", "w", stdout);

    deb_mode = 1;
#endif

    int n;

    int xbit[13];
    while(1) {
        cin>>n;
        cin.ignore();
        if(n==0) break;

        string str;

        for(int i = 0; i < n; i++) {
            getline(cin,str);
            xbit[i] = 0;
            for(int j = 0; j < str.size(); j++) if(str[j] == 'X') xbit[i]++;
        }

		int MAX = 0;
        for(int i = 0; i < n; i++) MAX = max(MAX, xbit[i]);
        int ans = 0;

        for(int i = 0; i < n; i++) ans += (MAX-xbit[i]);

        cout<<ans<<endl;
    }


    return 0;
}
