#include <stdio.h>


int main()
{
    int test, l_c;
    scanf("%d", &test);

    getchar();

    for(l_c = 1; l_c <= test; l_c++)
    {
        char sms[107];
        gets(sms);

        int i;

        int press = 0;

        for( i = 0 ; sms[i] != '\0'; i++)
        {
            switch (sms[i])
            {

            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':
            case ' ':
                press = press + 1;
                break;

            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':
                press = press + 2;
                break;

            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                press = press + 3;
                break;

            case 's':
            case 'z':
                press = press + 4;
                break;
            }
        }

        printf("Case #%d: %d\n", l_c, press);
    }
    return 0;
}
