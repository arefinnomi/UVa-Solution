#include <stdio.h>


int main()
{
    char string[6];
    while(gets(string) != NULL)
    {
        printf("%s\n", string);
    }
    return 0;
}
