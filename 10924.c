#include <stdio.h>
char prime(short n)
{
    short a;
    char re;
    short remainder;
    for(a=2; a<n; a++)
    {
        remainder=n%a;
        if(remainder==0)
        {
            break;
        }
    }
    if(remainder==0)
    {
        re = 'n';
    }
    else
    {
        re='p';
    }

    return re;
}

short char_num(char a)
{
    short num;
    if(a>='a'&&a<='z')
    {
        num= a-96;
    }
    else num = a-38;


    return num;
}



short main()
{
    char a[21];
    while(gets(a))
    {
        short n, total=0;
        for(n=0; n<20; n++)
        {
            if(a[n]=='\0') break;
            else
            {
                total=total + char_num(a[n]);
            }
        }

        char ch = prime(total);

        if( ch =='p') printf("It is a prime word.");
        else printf("It is not a prime word.");


        printf("\n");
    }
    return 0;
}
