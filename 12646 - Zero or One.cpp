#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, c;

    while( scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if( a == b && b == c ) puts("*");
        else if( a == b && b != c ) puts("C");
        else if( a != b && b == c ) puts("A");
        else if( a == c && b != c ) puts("B");
    }
    return 0;
}
