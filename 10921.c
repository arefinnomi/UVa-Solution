#include <stdio.h>


int main()
{
    char  string[30];

    while(gets(string) != NULL)
    {
        int i;
        for( i = 0; string[i] != '\0'; i++)
        {

            switch (string[i])
            {
            case 'A' :
            case 'B' :
            case 'C' :
                string[i] = '2';
                break;

            case 'D' :
            case 'E' :
            case 'F' :
                string[i] = '3';
                break;

            case 'G' :
            case 'H' :
            case 'I' :
                string[i] = '4';
                break;

            case 'J' :
            case 'K' :
            case 'L' :
                string[i] = '5';
                break;

            case 'M' :
            case 'N' :
            case 'O' :
                string[i] = '6';
                break;

            case 'P' :
            case 'Q' :
            case 'R' :
            case 'S' :
                string[i] = '7';
                break;


            case 'T' :
            case 'U' :
            case 'V' :
                string[i] = '8';
                break;

            case 'W' :
            case 'X' :
            case 'Y' :
            case 'Z' :
                string[i] = '9';
                break;
            }
        }

        printf("%s\n", string);
    }

    return 0;
}
