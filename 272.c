#include <stdio.h>
#include <string.h>


int main()
{
    char input[1000000], flag = 0;
    while(gets(input) )
    {
        int len_in = strlen(input);
        char output[len_in*2];

        int i,  j = 0;

        for( i = 0; i < len_in; i++)
        {
            if(input[i] != '"') output[j++] = input[i];

            else
            {
                if (flag == 0)
                {
                    output[j++] = '`';
                    output[j++] = '`';
                    flag = 1;
                }

                else
                {
                    output[j++] = '\'';
                    output[j++] = '\'';
                    flag = 0;
                }

            }
        }

        output[j] = '\0';

        puts(output);
    }
    return 0;
}
